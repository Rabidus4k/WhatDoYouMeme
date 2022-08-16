#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>
struct Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Lean.Common.LeanDelayedValue/Snapshot[]
struct SnapshotU5BU5D_tE050C1C9953A38CEF29A61A5457F3F47A1550CF4;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Lean.Common.LeanChase
struct LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3;
// Lean.Common.LeanChaseRigidbody
struct LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53;
// Lean.Common.LeanChaseRigidbody2D
struct LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8;
// Lean.Common.LeanConstrainLocalPosition
struct LeanConstrainLocalPosition_t2B78D40A49636D1BD171D807F39407A42250C37C;
// Lean.Common.LeanConstrainScale
struct LeanConstrainScale_tF2790BA844A84658DA47641D3CD2B40CC3DE7182;
// Lean.Common.LeanConstrainToAxis
struct LeanConstrainToAxis_tD44BCB0FBBE8F8C6E558A5E7B850CFBA0FD9DE3A;
// Lean.Common.LeanConstrainToBox
struct LeanConstrainToBox_tB4DE51D999A44A1B31327D0434D57552128837E1;
// Lean.Common.LeanConstrainToCollider
struct LeanConstrainToCollider_t97BEBA8E54A84BCD6EAD10CD9B55EB4228F7B3B9;
// Lean.Common.LeanConstrainToColliders
struct LeanConstrainToColliders_tD7CA746043D0AC7BA85CE26F100081BA6E579237;
// Lean.Common.LeanConstrainToDirection
struct LeanConstrainToDirection_t5D361E1C9ADE95E7323FD87C3E8FBBA81FBEE524;
// Lean.Common.LeanConstrainToOrthographic
struct LeanConstrainToOrthographic_t2334DAD0E8A7C602BF38C5EBCC99DA64B9D55786;
// Lean.Common.LeanDelayedValue
struct LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3;
// Lean.Common.LeanFollow
struct LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3;
// Lean.Common.LeanLoadScene
struct LeanLoadScene_t91774FA18039CCF3135AF3A2CFE21AB713955E89;
// Lean.Common.LeanMaintainDistance
struct LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014;
// Lean.Common.LeanManualRotate
struct LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A;
// Lean.Common.LeanManualTranslate
struct LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC;
// Lean.Common.LeanManualTranslateRigidbody
struct LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D;
// Lean.Common.LeanManualTranslateRigidbody2D
struct LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A;
// Lean.Common.LeanOrbit
struct LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C;
// Lean.Common.LeanPitchYaw
struct LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8;
// Lean.Common.LeanPitchYawAutoRotate
struct LeanPitchYawAutoRotate_tCC962979BE1CF7315413C0AC0DAF859531DB48B2;
// Lean.Common.LeanPlane
struct LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002;
// Lean.Common.LeanPongBall
struct LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125;
// Lean.Common.LeanRevertTransform
struct LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22;
// Lean.Common.LeanRotateToPosition
struct LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936;
// Lean.Common.LeanRotateToRigidbody2D
struct LeanRotateToRigidbody2D_tBA691FDE99918E5C3ED91FD0069416A13F0ACC21;
// Lean.Common.LeanSmoothedValue
struct LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7;
// Lean.Common.LeanSpawnBetween
struct LeanSpawnBetween_t998C2B8572FBA232159E1BA4E6CF78FD2A90DD55;
// Lean.Common.LeanSwap
struct LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165;
// Lean.Common.LeanThresholdDelta
struct LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3;
// Lean.Common.LeanThresholdPosition
struct LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Lean.Common.LeanDelayedValue/FloatEvent
struct FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25;
// Lean.Common.LeanDelayedValue/Vector2Event
struct Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2;
// Lean.Common.LeanDelayedValue/Vector3Event
struct Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209;
// Lean.Common.LeanSmoothedValue/FloatEvent
struct FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC;
// Lean.Common.LeanSmoothedValue/Vector2Event
struct Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7;
// Lean.Common.LeanSmoothedValue/Vector3Event
struct Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836;
// Lean.Common.LeanThresholdDelta/FloatEvent
struct FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3;
// Lean.Common.LeanThresholdDelta/Vector2Event
struct Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311;
// Lean.Common.LeanThresholdDelta/Vector3Event
struct Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2;
// Lean.Common.LeanThresholdPosition/FloatEvent
struct FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00;
// Lean.Common.LeanThresholdPosition/Vector2Event
struct Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4;
// Lean.Common.LeanThresholdPosition/Vector3Event
struct Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF03A3476EC232709C329E3B26E93B3D42E28FA35;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8_m25DA39A6B60E363CB43B174EBF516758A8FAEBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeanHelper_Destroy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m473AB3740CD3675357B30052D0605BE3A34AAE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var;

struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF68B8219D5A971B96FF7C4316799AB1AF8F448CD 
{
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>
struct Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	SnapshotU5BU5D_tE050C1C9953A38CEF29A61A5457F3F47A1550CF4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Lean.Common.LeanDelayedValue/FloatEvent
struct FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Lean.Common.LeanDelayedValue/Snapshot
struct Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 
{
	// System.Single Lean.Common.LeanDelayedValue/Snapshot::Timestamp
	float ___Timestamp_0;
	// UnityEngine.Vector3 Lean.Common.LeanDelayedValue/Snapshot::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_1;
};

// Lean.Common.LeanDelayedValue/Vector2Event
struct Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// Lean.Common.LeanDelayedValue/Vector3Event
struct Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// Lean.Common.LeanSmoothedValue/FloatEvent
struct FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Lean.Common.LeanSmoothedValue/Vector2Event
struct Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// Lean.Common.LeanSmoothedValue/Vector3Event
struct Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// Lean.Common.LeanThresholdDelta/FloatEvent
struct FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Lean.Common.LeanThresholdDelta/Vector2Event
struct Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// Lean.Common.LeanThresholdDelta/Vector3Event
struct Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// Lean.Common.LeanThresholdPosition/FloatEvent
struct FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Lean.Common.LeanThresholdPosition/Vector2Event
struct Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// Lean.Common.LeanThresholdPosition/Vector3Event
struct Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Lean.Common.LeanChase
struct LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Lean.Common.LeanChase::destination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination_4;
	// UnityEngine.Vector3 Lean.Common.LeanChase::DestinationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DestinationOffset_5;
	// UnityEngine.Vector3 Lean.Common.LeanChase::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_6;
	// UnityEngine.Vector3 Lean.Common.LeanChase::Offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Offset_7;
	// System.Single Lean.Common.LeanChase::Damping
	float ___Damping_8;
	// System.Single Lean.Common.LeanChase::Linear
	float ___Linear_9;
	// System.Boolean Lean.Common.LeanChase::IgnoreZ
	bool ___IgnoreZ_10;
	// System.Boolean Lean.Common.LeanChase::Continuous
	bool ___Continuous_11;
	// System.Boolean Lean.Common.LeanChase::SetPositionOnStart
	bool ___SetPositionOnStart_12;
	// System.Boolean Lean.Common.LeanChase::positionSet
	bool ___positionSet_13;
};

// Lean.Common.LeanConstrainLocalPosition
struct LeanConstrainLocalPosition_t2B78D40A49636D1BD171D807F39407A42250C37C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Lean.Common.LeanConstrainLocalPosition::X
	bool ___X_4;
	// System.Single Lean.Common.LeanConstrainLocalPosition::XMin
	float ___XMin_5;
	// System.Single Lean.Common.LeanConstrainLocalPosition::XMax
	float ___XMax_6;
	// System.Boolean Lean.Common.LeanConstrainLocalPosition::Y
	bool ___Y_7;
	// System.Single Lean.Common.LeanConstrainLocalPosition::YMin
	float ___YMin_8;
	// System.Single Lean.Common.LeanConstrainLocalPosition::YMax
	float ___YMax_9;
	// System.Boolean Lean.Common.LeanConstrainLocalPosition::Z
	bool ___Z_10;
	// System.Single Lean.Common.LeanConstrainLocalPosition::ZMin
	float ___ZMin_11;
	// System.Single Lean.Common.LeanConstrainLocalPosition::ZMax
	float ___ZMax_12;
};

// Lean.Common.LeanConstrainScale
struct LeanConstrainScale_tF2790BA844A84658DA47641D3CD2B40CC3DE7182  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Lean.Common.LeanConstrainScale::Minimum
	bool ___Minimum_4;
	// UnityEngine.Vector3 Lean.Common.LeanConstrainScale::MinimumScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MinimumScale_5;
	// System.Boolean Lean.Common.LeanConstrainScale::Maximum
	bool ___Maximum_6;
	// UnityEngine.Vector3 Lean.Common.LeanConstrainScale::MaximumScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MaximumScale_7;
};

// Lean.Common.LeanConstrainToAxis
struct LeanConstrainToAxis_tD44BCB0FBBE8F8C6E558A5E7B850CFBA0FD9DE3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Lean.Common.LeanConstrainToAxis::RelativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RelativeTo_4;
	// Lean.Common.LeanConstrainToAxis/AxisType Lean.Common.LeanConstrainToAxis::Axis
	int32_t ___Axis_5;
	// System.Single Lean.Common.LeanConstrainToAxis::Minimum
	float ___Minimum_6;
	// System.Single Lean.Common.LeanConstrainToAxis::Maximum
	float ___Maximum_7;
};

// Lean.Common.LeanConstrainToBox
struct LeanConstrainToBox_tB4DE51D999A44A1B31327D0434D57552128837E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Lean.Common.LeanConstrainToBox::RelativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RelativeTo_4;
	// UnityEngine.Vector3 Lean.Common.LeanConstrainToBox::Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Size_5;
	// UnityEngine.Vector3 Lean.Common.LeanConstrainToBox::Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Center_6;
};

// Lean.Common.LeanConstrainToCollider
struct LeanConstrainToCollider_t97BEBA8E54A84BCD6EAD10CD9B55EB4228F7B3B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider Lean.Common.LeanConstrainToCollider::Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___Collider_4;
};

// Lean.Common.LeanConstrainToColliders
struct LeanConstrainToColliders_tD7CA746043D0AC7BA85CE26F100081BA6E579237  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Collider> Lean.Common.LeanConstrainToColliders::Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___Colliders_4;
};

// Lean.Common.LeanConstrainToDirection
struct LeanConstrainToDirection_t5D361E1C9ADE95E7323FD87C3E8FBBA81FBEE524  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Lean.Common.LeanConstrainToDirection::Forward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Forward_4;
	// UnityEngine.Vector3 Lean.Common.LeanConstrainToDirection::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_5;
	// UnityEngine.Transform Lean.Common.LeanConstrainToDirection::RelativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RelativeTo_6;
	// System.Single Lean.Common.LeanConstrainToDirection::MinAngle
	float ___MinAngle_7;
	// System.Single Lean.Common.LeanConstrainToDirection::MaxAngle
	float ___MaxAngle_8;
};

// Lean.Common.LeanConstrainToOrthographic
struct LeanConstrainToOrthographic_t2334DAD0E8A7C602BF38C5EBCC99DA64B9D55786  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Lean.Common.LeanConstrainToOrthographic::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// Lean.Common.LeanPlane Lean.Common.LeanConstrainToOrthographic::Plane
	LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* ___Plane_5;
};

// Lean.Common.LeanDelayedValue
struct LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanDelayedValue::Delay
	float ___Delay_4;
	// System.Boolean Lean.Common.LeanDelayedValue::AutoClear
	bool ___AutoClear_5;
	// Lean.Common.LeanDelayedValue/FloatEvent Lean.Common.LeanDelayedValue::onValueX
	FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* ___onValueX_6;
	// Lean.Common.LeanDelayedValue/FloatEvent Lean.Common.LeanDelayedValue::onValueY
	FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* ___onValueY_7;
	// Lean.Common.LeanDelayedValue/FloatEvent Lean.Common.LeanDelayedValue::onValueZ
	FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* ___onValueZ_8;
	// Lean.Common.LeanDelayedValue/Vector2Event Lean.Common.LeanDelayedValue::onValueXY
	Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* ___onValueXY_9;
	// Lean.Common.LeanDelayedValue/Vector3Event Lean.Common.LeanDelayedValue::onValueXYZ
	Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* ___onValueXYZ_10;
	// System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot> Lean.Common.LeanDelayedValue::snapshots
	Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* ___snapshots_11;
	// UnityEngine.Vector3 Lean.Common.LeanDelayedValue::pendingValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pendingValue_12;
	// System.Boolean Lean.Common.LeanDelayedValue::pendingSet
	bool ___pendingSet_13;
};

// Lean.Common.LeanFollow
struct LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanFollow::Threshold
	float ___Threshold_4;
	// System.Single Lean.Common.LeanFollow::Speed
	float ___Speed_5;
	// UnityEngine.Events.UnityEvent Lean.Common.LeanFollow::onReachedDestination
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onReachedDestination_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Lean.Common.LeanFollow::positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___positions_7;
};

// Lean.Common.LeanLoadScene
struct LeanLoadScene_t91774FA18039CCF3135AF3A2CFE21AB713955E89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Lean.Common.LeanLoadScene::SceneName
	String_t* ___SceneName_4;
	// System.Boolean Lean.Common.LeanLoadScene::ASync
	bool ___ASync_5;
	// System.Boolean Lean.Common.LeanLoadScene::Additive
	bool ___Additive_6;
};

// Lean.Common.LeanMaintainDistance
struct LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Lean.Common.LeanMaintainDistance::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_4;
	// UnityEngine.Space Lean.Common.LeanMaintainDistance::DirectionSpace
	int32_t ___DirectionSpace_5;
	// System.Single Lean.Common.LeanMaintainDistance::Distance
	float ___Distance_6;
	// System.Single Lean.Common.LeanMaintainDistance::Damping
	float ___Damping_7;
	// System.Boolean Lean.Common.LeanMaintainDistance::Clamp
	bool ___Clamp_8;
	// System.Single Lean.Common.LeanMaintainDistance::ClampMin
	float ___ClampMin_9;
	// System.Single Lean.Common.LeanMaintainDistance::ClampMax
	float ___ClampMax_10;
	// UnityEngine.LayerMask Lean.Common.LeanMaintainDistance::CollisionLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___CollisionLayers_11;
	// System.Single Lean.Common.LeanMaintainDistance::CollisionRadius
	float ___CollisionRadius_12;
	// System.Single Lean.Common.LeanMaintainDistance::currentDistance
	float ___currentDistance_13;
};

// Lean.Common.LeanManualRotate
struct LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Lean.Common.LeanManualRotate::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// UnityEngine.Space Lean.Common.LeanManualRotate::space
	int32_t ___space_5;
	// UnityEngine.Vector3 Lean.Common.LeanManualRotate::axisA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axisA_6;
	// UnityEngine.Vector3 Lean.Common.LeanManualRotate::axisB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axisB_7;
	// System.Single Lean.Common.LeanManualRotate::multiplier
	float ___multiplier_8;
	// System.Single Lean.Common.LeanManualRotate::damping
	float ___damping_9;
	// System.Boolean Lean.Common.LeanManualRotate::scaleByTime
	bool ___scaleByTime_10;
	// UnityEngine.Vector3 Lean.Common.LeanManualRotate::defaultRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultRotation_11;
	// UnityEngine.Quaternion Lean.Common.LeanManualRotate::remainingDelta
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___remainingDelta_12;
};

// Lean.Common.LeanManualTranslate
struct LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Lean.Common.LeanManualTranslate::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// UnityEngine.Space Lean.Common.LeanManualTranslate::space
	int32_t ___space_5;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::directionA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionA_6;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::directionB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionB_7;
	// System.Single Lean.Common.LeanManualTranslate::multiplier
	float ___multiplier_8;
	// System.Single Lean.Common.LeanManualTranslate::damping
	float ___damping_9;
	// System.Boolean Lean.Common.LeanManualTranslate::scaleByTime
	bool ___scaleByTime_10;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::defaultPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultPosition_11;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::remainingDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___remainingDelta_12;
};

// Lean.Common.LeanManualTranslateRigidbody
struct LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Lean.Common.LeanManualTranslateRigidbody::Target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target_4;
	// UnityEngine.Space Lean.Common.LeanManualTranslateRigidbody::Space
	int32_t ___Space_5;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslateRigidbody::DirectionA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DirectionA_6;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslateRigidbody::DirectionB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DirectionB_7;
	// System.Single Lean.Common.LeanManualTranslateRigidbody::Multiplier
	float ___Multiplier_8;
	// System.Single Lean.Common.LeanManualTranslateRigidbody::Damping
	float ___Damping_9;
	// System.Single Lean.Common.LeanManualTranslateRigidbody::Inertia
	float ___Inertia_10;
	// System.Boolean Lean.Common.LeanManualTranslateRigidbody::ScaleByTime
	bool ___ScaleByTime_11;
	// System.Boolean Lean.Common.LeanManualTranslateRigidbody::ResetVelocityInUpdate
	bool ___ResetVelocityInUpdate_12;
	// UnityEngine.Vector3 Lean.Common.LeanManualTranslateRigidbody::remainingDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___remainingDelta_13;
	// System.Boolean Lean.Common.LeanManualTranslateRigidbody::controlling
	bool ___controlling_14;
};

// Lean.Common.LeanManualTranslateRigidbody2D
struct LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Lean.Common.LeanManualTranslateRigidbody2D::Target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target_4;
	// UnityEngine.Space Lean.Common.LeanManualTranslateRigidbody2D::Space
	int32_t ___Space_5;
	// UnityEngine.Vector2 Lean.Common.LeanManualTranslateRigidbody2D::DirectionA
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___DirectionA_6;
	// UnityEngine.Vector2 Lean.Common.LeanManualTranslateRigidbody2D::DirectionB
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___DirectionB_7;
	// System.Single Lean.Common.LeanManualTranslateRigidbody2D::Multiplier
	float ___Multiplier_8;
	// System.Single Lean.Common.LeanManualTranslateRigidbody2D::Damping
	float ___Damping_9;
	// System.Boolean Lean.Common.LeanManualTranslateRigidbody2D::ScaleByTime
	bool ___ScaleByTime_10;
	// System.Boolean Lean.Common.LeanManualTranslateRigidbody2D::ResetVelocityInUpdate
	bool ___ResetVelocityInUpdate_11;
	// UnityEngine.Vector2 Lean.Common.LeanManualTranslateRigidbody2D::remainingDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___remainingDelta_12;
};

// Lean.Common.LeanOrbit
struct LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Lean.Common.LeanOrbit::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// UnityEngine.Transform Lean.Common.LeanOrbit::Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Pivot_5;
	// System.Single Lean.Common.LeanOrbit::Damping
	float ___Damping_6;
	// System.Single Lean.Common.LeanOrbit::Pitch
	float ___Pitch_7;
	// System.Single Lean.Common.LeanOrbit::PitchSensitivity
	float ___PitchSensitivity_8;
	// System.Single Lean.Common.LeanOrbit::Yaw
	float ___Yaw_9;
	// System.Single Lean.Common.LeanOrbit::YawSensitivity
	float ___YawSensitivity_10;
	// System.Single Lean.Common.LeanOrbit::currentPitch
	float ___currentPitch_11;
	// System.Single Lean.Common.LeanOrbit::currentYaw
	float ___currentYaw_12;
};

// Lean.Common.LeanPitchYaw
struct LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Lean.Common.LeanPitchYaw::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// UnityEngine.Vector2 Lean.Common.LeanPitchYaw::DefaultRotation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___DefaultRotation_5;
	// System.Single Lean.Common.LeanPitchYaw::Damping
	float ___Damping_6;
	// System.Single Lean.Common.LeanPitchYaw::Pitch
	float ___Pitch_7;
	// System.Single Lean.Common.LeanPitchYaw::PitchSensitivity
	float ___PitchSensitivity_8;
	// System.Boolean Lean.Common.LeanPitchYaw::PitchClamp
	bool ___PitchClamp_9;
	// System.Single Lean.Common.LeanPitchYaw::PitchMin
	float ___PitchMin_10;
	// System.Single Lean.Common.LeanPitchYaw::PitchMax
	float ___PitchMax_11;
	// System.Single Lean.Common.LeanPitchYaw::Yaw
	float ___Yaw_12;
	// System.Single Lean.Common.LeanPitchYaw::YawSensitivity
	float ___YawSensitivity_13;
	// System.Boolean Lean.Common.LeanPitchYaw::YawClamp
	bool ___YawClamp_14;
	// System.Single Lean.Common.LeanPitchYaw::YawMin
	float ___YawMin_15;
	// System.Single Lean.Common.LeanPitchYaw::YawMax
	float ___YawMax_16;
	// System.Single Lean.Common.LeanPitchYaw::currentPitch
	float ___currentPitch_17;
	// System.Single Lean.Common.LeanPitchYaw::currentYaw
	float ___currentYaw_18;
};

// Lean.Common.LeanPitchYawAutoRotate
struct LeanPitchYawAutoRotate_tCC962979BE1CF7315413C0AC0DAF859531DB48B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanPitchYawAutoRotate::Delay
	float ___Delay_4;
	// System.Single Lean.Common.LeanPitchYawAutoRotate::Speed
	float ___Speed_5;
	// System.Single Lean.Common.LeanPitchYawAutoRotate::Acceleration
	float ___Acceleration_6;
	// System.Single Lean.Common.LeanPitchYawAutoRotate::idleTime
	float ___idleTime_7;
	// System.Single Lean.Common.LeanPitchYawAutoRotate::strength
	float ___strength_8;
	// System.Single Lean.Common.LeanPitchYawAutoRotate::expectedPitch
	float ___expectedPitch_9;
	// System.Single Lean.Common.LeanPitchYawAutoRotate::expectedYaw
	float ___expectedYaw_10;
	// Lean.Common.LeanPitchYaw Lean.Common.LeanPitchYawAutoRotate::cachedPitchYaw
	LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* ___cachedPitchYaw_11;
};

// Lean.Common.LeanPlane
struct LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Lean.Common.LeanPlane::ClampX
	bool ___ClampX_4;
	// System.Single Lean.Common.LeanPlane::MinX
	float ___MinX_5;
	// System.Single Lean.Common.LeanPlane::MaxX
	float ___MaxX_6;
	// System.Boolean Lean.Common.LeanPlane::ClampY
	bool ___ClampY_7;
	// System.Single Lean.Common.LeanPlane::MinY
	float ___MinY_8;
	// System.Single Lean.Common.LeanPlane::MaxY
	float ___MaxY_9;
	// System.Single Lean.Common.LeanPlane::SnapX
	float ___SnapX_10;
	// System.Single Lean.Common.LeanPlane::SnapY
	float ___SnapY_11;
};

// Lean.Common.LeanPongBall
struct LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanPongBall::StartSpeed
	float ___StartSpeed_4;
	// System.Single Lean.Common.LeanPongBall::Spread
	float ___Spread_5;
	// System.Single Lean.Common.LeanPongBall::Acceleration
	float ___Acceleration_6;
	// System.Single Lean.Common.LeanPongBall::Bounds
	float ___Bounds_7;
	// UnityEngine.Rigidbody Lean.Common.LeanPongBall::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_8;
	// System.Single Lean.Common.LeanPongBall::speed
	float ___speed_9;
};

// Lean.Common.LeanRevertTransform
struct LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanRevertTransform::Damping
	float ___Damping_4;
	// System.Boolean Lean.Common.LeanRevertTransform::RecordOnStart
	bool ___RecordOnStart_5;
	// System.Boolean Lean.Common.LeanRevertTransform::RevertPosition
	bool ___RevertPosition_6;
	// System.Boolean Lean.Common.LeanRevertTransform::RevertRotation
	bool ___RevertRotation_7;
	// System.Boolean Lean.Common.LeanRevertTransform::RevertScale
	bool ___RevertScale_8;
	// System.Single Lean.Common.LeanRevertTransform::ThresholdPosition
	float ___ThresholdPosition_9;
	// System.Single Lean.Common.LeanRevertTransform::ThresholdRotation
	float ___ThresholdRotation_10;
	// System.Single Lean.Common.LeanRevertTransform::ThresholdScale
	float ___ThresholdScale_11;
	// UnityEngine.Vector3 Lean.Common.LeanRevertTransform::TargetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetPosition_12;
	// UnityEngine.Quaternion Lean.Common.LeanRevertTransform::TargetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___TargetRotation_13;
	// UnityEngine.Vector3 Lean.Common.LeanRevertTransform::TargetScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetScale_14;
	// System.Boolean Lean.Common.LeanRevertTransform::reverting
	bool ___reverting_15;
};

// Lean.Common.LeanRotateToPosition
struct LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Lean.Common.LeanRotateToPosition::Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_4;
	// Lean.Common.LeanRotateToPosition/PositionType Lean.Common.LeanRotateToPosition::Position
	int32_t ___Position_5;
	// System.Single Lean.Common.LeanRotateToPosition::Threshold
	float ___Threshold_6;
	// System.Boolean Lean.Common.LeanRotateToPosition::Invert
	bool ___Invert_7;
	// Lean.Common.LeanRotateToPosition/RotateType Lean.Common.LeanRotateToPosition::RotateTo
	int32_t ___RotateTo_8;
	// System.Single Lean.Common.LeanRotateToPosition::Damping
	float ___Damping_9;
	// UnityEngine.Vector3 Lean.Common.LeanRotateToPosition::previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPosition_10;
	// UnityEngine.Vector3 Lean.Common.LeanRotateToPosition::previousDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousDelta_11;
};

// Lean.Common.LeanRotateToRigidbody2D
struct LeanRotateToRigidbody2D_tBA691FDE99918E5C3ED91FD0069416A13F0ACC21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanRotateToRigidbody2D::Damping
	float ___Damping_4;
	// UnityEngine.Vector3 Lean.Common.LeanRotateToRigidbody2D::previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPosition_5;
	// UnityEngine.Vector2 Lean.Common.LeanRotateToRigidbody2D::vector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector_6;
	// UnityEngine.Rigidbody2D Lean.Common.LeanRotateToRigidbody2D::cachedRigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___cachedRigidbody2D_7;
};

// Lean.Common.LeanSmoothedValue
struct LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lean.Common.LeanSmoothedValue::Damping
	float ___Damping_4;
	// System.Single Lean.Common.LeanSmoothedValue::Threshold
	float ___Threshold_5;
	// System.Boolean Lean.Common.LeanSmoothedValue::AutoStop
	bool ___AutoStop_6;
	// Lean.Common.LeanSmoothedValue/FloatEvent Lean.Common.LeanSmoothedValue::onValueX
	FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* ___onValueX_7;
	// Lean.Common.LeanSmoothedValue/FloatEvent Lean.Common.LeanSmoothedValue::onValueY
	FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* ___onValueY_8;
	// Lean.Common.LeanSmoothedValue/FloatEvent Lean.Common.LeanSmoothedValue::onValueZ
	FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* ___onValueZ_9;
	// Lean.Common.LeanSmoothedValue/Vector2Event Lean.Common.LeanSmoothedValue::onValueXY
	Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* ___onValueXY_10;
	// Lean.Common.LeanSmoothedValue/Vector3Event Lean.Common.LeanSmoothedValue::onValueXYZ
	Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* ___onValueXYZ_11;
	// UnityEngine.Vector3 Lean.Common.LeanSmoothedValue::currentValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentValue_12;
	// UnityEngine.Vector3 Lean.Common.LeanSmoothedValue::targetValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetValue_13;
	// System.Boolean Lean.Common.LeanSmoothedValue::targetSet
	bool ___targetSet_14;
};

// Lean.Common.LeanSpawnBetween
struct LeanSpawnBetween_t998C2B8572FBA232159E1BA4E6CF78FD2A90DD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Lean.Common.LeanSpawnBetween::Prefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Prefab_4;
	// System.Single Lean.Common.LeanSpawnBetween::VelocityMultiplier
	float ___VelocityMultiplier_5;
	// System.Single Lean.Common.LeanSpawnBetween::VelocityMin
	float ___VelocityMin_6;
	// System.Single Lean.Common.LeanSpawnBetween::VelocityMax
	float ___VelocityMax_7;
};

// Lean.Common.LeanSwap
struct LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Lean.Common.LeanSwap::Index
	int32_t ___Index_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Lean.Common.LeanSwap::Prefabs
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___Prefabs_5;
	// UnityEngine.Transform Lean.Common.LeanSwap::clone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___clone_6;
	// UnityEngine.Transform Lean.Common.LeanSwap::clonePrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___clonePrefab_7;
};

// Lean.Common.LeanThresholdDelta
struct LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Lean.Common.LeanThresholdDelta::Current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Current_4;
	// System.Single Lean.Common.LeanThresholdDelta::Threshold
	float ___Threshold_5;
	// System.Boolean Lean.Common.LeanThresholdDelta::Step
	bool ___Step_6;
	// Lean.Common.LeanThresholdDelta/FloatEvent Lean.Common.LeanThresholdDelta::onDeltaX
	FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* ___onDeltaX_7;
	// Lean.Common.LeanThresholdDelta/FloatEvent Lean.Common.LeanThresholdDelta::onDeltaY
	FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* ___onDeltaY_8;
	// Lean.Common.LeanThresholdDelta/FloatEvent Lean.Common.LeanThresholdDelta::onDeltaZ
	FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* ___onDeltaZ_9;
	// Lean.Common.LeanThresholdDelta/Vector2Event Lean.Common.LeanThresholdDelta::onDeltaXY
	Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* ___onDeltaXY_10;
	// Lean.Common.LeanThresholdDelta/Vector3Event Lean.Common.LeanThresholdDelta::onDeltaXYZ
	Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* ___onDeltaXYZ_11;
};

// Lean.Common.LeanThresholdPosition
struct LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Lean.Common.LeanThresholdPosition::Current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Current_4;
	// UnityEngine.Vector3 Lean.Common.LeanThresholdPosition::Previous
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Previous_5;
	// System.Single Lean.Common.LeanThresholdPosition::Threshold
	float ___Threshold_6;
	// System.Boolean Lean.Common.LeanThresholdPosition::Step
	bool ___Step_7;
	// Lean.Common.LeanThresholdPosition/FloatEvent Lean.Common.LeanThresholdPosition::onPositionX
	FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* ___onPositionX_8;
	// Lean.Common.LeanThresholdPosition/FloatEvent Lean.Common.LeanThresholdPosition::onPositionY
	FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* ___onPositionY_9;
	// Lean.Common.LeanThresholdPosition/FloatEvent Lean.Common.LeanThresholdPosition::onPositionZ
	FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* ___onPositionZ_10;
	// Lean.Common.LeanThresholdPosition/Vector2Event Lean.Common.LeanThresholdPosition::onPositionXY
	Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* ___onPositionXY_11;
	// Lean.Common.LeanThresholdPosition/Vector3Event Lean.Common.LeanThresholdPosition::onPositionXYZ
	Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* ___onPositionXYZ_12;
};

// Lean.Common.LeanChaseRigidbody
struct LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53  : public LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3
{
	// UnityEngine.Rigidbody Lean.Common.LeanChaseRigidbody::cachedRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___cachedRigidbody_14;
	// System.Boolean Lean.Common.LeanChaseRigidbody::fixedUpdateCalled
	bool ___fixedUpdateCalled_15;
};

// Lean.Common.LeanChaseRigidbody2D
struct LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8  : public LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3
{
	// Lean.Common.LeanChaseRigidbody2D/AxisType Lean.Common.LeanChaseRigidbody2D::axis
	int32_t ___axis_14;
	// UnityEngine.Rigidbody2D Lean.Common.LeanChaseRigidbody2D::cachedRigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___cachedRigidbody_15;
	// System.Boolean Lean.Common.LeanChaseRigidbody2D::fixedUpdateCalled
	bool ___fixedUpdateCalled_16;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
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
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93_gshared (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF_gshared (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0_gshared (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7_gshared (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_gshared_inline (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_gshared (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B_gshared (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_gshared (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T Lean.Common.LeanHelper::Destroy<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeanHelper_Destroy_TisRuntimeObject_mDA2C4B2FADB8EE325348BB093FB280D16BDECC00_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;

// System.Void Lean.Common.LeanLoadScene::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanLoadScene_Load_mBB3CC5AB743E77DECE1AE1BCABD1D5C6F2D72995 (LeanLoadScene_t91774FA18039CCF3135AF3A2CFE21AB713955E89* __this, String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Lean.Common.LeanPongBall::ResetPositionAndVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPongBall_ResetPositionAndVelocity_m8D374792A723F3217420BD76A4B0668D0810B30E (LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single Lean.Common.LeanHelper::GetDampenFactor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605 (float ___damping0, float ___elapsed1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanChase::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_SetPosition_m6CAEDBBD70C587A32D6AA6B2B9A116DA104C1FFF (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanChase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase__ctor_m8BEF4E0B8A4876F2074F6B7322FFEA07AB8B6EEE (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RectTransform::get_anchoredPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Boolean Lean.Common.LeanConstrainLocalPosition::DoClamp(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanConstrainLocalPosition_DoClamp_m6B782703AE3A669377C548647CC616F8C9C2F2D7 (LeanConstrainLocalPosition_t2B78D40A49636D1BD171D807F39407A42250C37C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Lean.Common.LeanHelper::GetCamera(UnityEngine.Camera,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* LeanHelper_GetCamera_mF105E4D4ACEC5FD99C4FE5033B9FBFFFACC64F45 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCamera0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean Lean.Common.LeanPlane::TryRaycast(UnityEngine.Ray,UnityEngine.Vector3&,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanPlane_TryRaycast_m3F4E9A0A4FE82B51F2C0B8DAA3396500C0B90732 (LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___hit1, float ___offset2, bool ___getClosest3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanDelayedValue/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m213A9CD051779B7137DA8B9C5A9349B32FFE7F53 (FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanDelayedValue/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m54FD86454B8E67F248D5D5796AB0C95B48EE503D (Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanDelayedValue/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_mB1EDB61F194C0F9B801853CCAD7880179405A807 (Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Clear()
inline void Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93 (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*, const RuntimeMethod*))Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Enqueue(T)
inline void Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*, Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3, const RuntimeMethod*))Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF_gshared)(__this, ___item0, method);
}
// System.Void Lean.Common.LeanDelayedValue::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_Clear_m1909B337818B659A068E0DE496078CC723CFCB40 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Peek()
inline Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0 (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method)
{
	return ((  Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 (*) (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*, const RuntimeMethod*))Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::Dequeue()
inline Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7 (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method)
{
	return ((  Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 (*) (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*, const RuntimeMethod*))Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7_gshared)(__this, method);
}
// System.Void Lean.Common.LeanDelayedValue::Submit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_Submit_m5D2D02022A050C664877F360144DF02D6DD25261 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::get_Count()
inline int32_t Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_inline (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*, const RuntimeMethod*))Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
inline void UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_gshared)(__this, ___arg00, method);
}
// System.Void System.Collections.Generic.Queue`1<Lean.Common.LeanDelayedValue/Snapshot>::.ctor()
inline void Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*, const RuntimeMethod*))Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, const RuntimeMethod*))UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
inline void UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176 (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE*, const RuntimeMethod*))UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void Lean.Common.LeanFollow::TrimPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow_TrimPositions_mB4BFB498E754AA0D98CB8EB93487924D1E2E6CF8 (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_m2A41FD7023EC5B89B69E0A8948325BEF46D9597C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualRotate::UpdateRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_UpdateRotation_m24F59CBB2606E36ED768D66A5F111063BAAAD2BE (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, float ___factor0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualRotate::RotateAB(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_RotateAB_m308DC194EFABDFAB6581EEE4AF5E7D34B506B5A8 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslate::UpdatePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_UpdatePosition_m91358111FAF976CA13E48BFD6B9782A275C2A402 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, float ___factor0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslate::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_Translate_mB598DDB352D241D8B982A4614BA8350BEED33DD5 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslate::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_TranslateWorld_m6B711592196FF84608851AF013853FA50B4FC11B (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslateRigidbody::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_Translate_m494DB6287D6C54CCEDA81F3755A1DD77B692B335 (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslateRigidbody::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_TranslateWorld_m3D228A1906F6827162E7005A4C1FC610B901E780 (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_Translate_mD36BB6846F2BF0AA3A64710DF7CE5643025CB6F9 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_TranslateWorld_m9459746F68A30C57A1089A27C3F8B23973722753 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single Lean.Common.LeanOrbit::GetSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanOrbit_GetSensitivity_m3188A15B806E20D45B9D285B99F37707B84A7CF2 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanOrbit::RotatePitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_RotatePitch_m74B156EEB58D48AE8624E9733E1973C7D8FC2E45 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, float ___delta0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanOrbit::RotateYaw(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_RotateYaw_m94710F22704B5B8BD3BC0FBF28EEAE2DFC4E0BE6 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, float ___delta0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanPitchYaw::RotateToDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_RotateToDirection_m417E449F4AFF1FAB8B0595DBC45BBA623D13A063 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xyz0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Single Lean.Common.LeanPitchYaw::GetSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanPitchYaw_GetSensitivity_m6102AC840B16D4CDCFA30460387331B9F62877B5 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Lean.Common.LeanPitchYaw>()
inline LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* Component_GetComponent_TisLeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8_m25DA39A6B60E363CB43B174EBF516758A8FAEBDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanRevertTransform::RecordTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform_RecordTransform_mC5E7F83A33E5BE464C799407A708CD9A6959F71F (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) ;
// System.Boolean Lean.Common.LeanRevertTransform::ReachedTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanRevertTransform_ReachedTarget_m153DF36F5C7937537F199A6955091FA09AE07416 (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform Lean.Common.LeanRotateToPosition::get_FinalTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LeanRotateToPosition_get_FinalTransform_mED30D982EFB08F2643091C1B603F2AB94506E9C2 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanRotateToPosition::SetDelta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_SetDelta_mB2D6DFC2935470790265A1D18EE1A4767DECDB10 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanRotateToPosition::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_ResetPosition_mEBD8E97F2B881428904C041F1643BBF7C77AFD71 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanRotateToPosition::UpdateRotation(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_UpdateRotation_mF3464E0117807F9BE6F158153351E7794033D3B7 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___finalTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanSmoothedValue/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m74DFE9DDA247BC7953E8F39AAC7E054D9D614789 (FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanSmoothedValue/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_mA553FD114502BF075D773C03032EF0E11A5703DF (Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanSmoothedValue/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_m9D954E15F7D9800E9E88BC70AE36889440955497 (Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanSmoothedValue::Submit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_Submit_m45023578D7BDEEB53B953CCD9E8CB833CC3072B1 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanSmoothedValue::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_Stop_mB90E1B6FB03C4DA2C6D84B1FB9910F41A8C1FD0F (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___original0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform Lean.Common.LeanSwap::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LeanSwap_GetPrefab_m249936552EFEEB85BC5B2717498BAFF891553A21 (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T Lean.Common.LeanHelper::Destroy<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LeanHelper_Destroy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m473AB3740CD3675357B30052D0605BE3A34AAE29 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___o0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))LeanHelper_Destroy_TisRuntimeObject_mDA2C4B2FADB8EE325348BB093FB280D16BDECC00_gshared)(___o0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanSwap::UpdateSwap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSwap_UpdateSwap_m549A5FDDA97FA83DC2B0DAF83DB56118C1933164 (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Lean.Common.LeanThresholdDelta/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m71979A6A2707B695460360E98FA333DE750EF6A3 (FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanThresholdDelta/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m452E28395584522CA1CF401053BBE2A1A284C761 (Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanThresholdDelta/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_mE989FDADD7FBFCA4AF3C72F92395E672B48161A4 (Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanThresholdPosition/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m749B3A8B81422E7509BE0FDA2B8CC2E9FF3AB0CE (FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanThresholdPosition/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m878306409C42ADC12176F84BD6861BE8F74B105A (Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* __this, const RuntimeMethod* method) ;
// System.Void Lean.Common.LeanThresholdPosition/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_m9932636D27B4809512F9C8FB93D8ED8349DB63B5 (Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddWithResize(T)
inline void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared)(__this, ___item0, method);
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
// System.Void Lean.Common.LeanLoadScene::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanLoadScene_Load_m2783FC71CBF4944C8FF43A44A29264D57A17F664 (LeanLoadScene_t91774FA18039CCF3135AF3A2CFE21AB713955E89* __this, const RuntimeMethod* method) 
{
	{
		// Load(SceneName);
		String_t* L_0 = __this->___SceneName_4;
		LeanLoadScene_Load_mBB3CC5AB743E77DECE1AE1BCABD1D5C6F2D72995(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanLoadScene::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanLoadScene_Load_mBB3CC5AB743E77DECE1AE1BCABD1D5C6F2D72995 (LeanLoadScene_t91774FA18039CCF3135AF3A2CFE21AB713955E89* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	String_t* G_B8_1 = NULL;
	{
		// if (ASync == true)
		bool L_0 = __this->___ASync_5;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// SceneManager.LoadSceneAsync(sceneName, Additive == true ? LoadSceneMode.Additive : LoadSceneMode.Single);
		String_t* L_1 = ___sceneName0;
		bool L_2 = __this->___Additive_6;
		G_B2_0 = L_1;
		if (L_2)
		{
			G_B3_0 = L_1;
			goto IL_0014;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3;
		L_3 = SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC(G_B4_1, G_B4_0, NULL);
		return;
	}

IL_001c:
	{
		// SceneManager.LoadScene(sceneName, Additive == true ? LoadSceneMode.Additive : LoadSceneMode.Single);
		String_t* L_4 = ___sceneName0;
		bool L_5 = __this->___Additive_6;
		G_B6_0 = L_4;
		if (L_5)
		{
			G_B7_0 = L_4;
			goto IL_0028;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(G_B8_1, G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanLoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanLoadScene__ctor_mD2F2D5AD3F20E5E96458897C586BBC01316ADE8C (LeanLoadScene_t91774FA18039CCF3135AF3A2CFE21AB713955E89* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanPongBall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPongBall_Awake_mC329D5002F086D7A86CE6831C2B30D615197BA49 (LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___body_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_8), (void*)L_0);
		// ResetPositionAndVelocity();
		LeanPongBall_ResetPositionAndVelocity_m8D374792A723F3217420BD76A4B0668D0810B30E(__this, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPongBall::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPongBall_FixedUpdate_m7920751091E7EBC10E12289960C4C121C3D9CA83 (LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transform.localPosition.magnitude > Bounds)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_3 = __this->___Bounds_7;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		// ResetPositionAndVelocity();
		LeanPongBall_ResetPositionAndVelocity_m8D374792A723F3217420BD76A4B0668D0810B30E(__this, NULL);
	}

IL_0021:
	{
		// speed += Acceleration * Time.deltaTime;
		float L_4 = __this->___speed_9;
		float L_5 = __this->___Acceleration_6;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___speed_9 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
		// body.velocity = body.velocity.normalized * speed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___body_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___body_8;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_8, NULL);
		V_0 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_11 = __this->___speed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_12, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPongBall::ResetPositionAndVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPongBall_ResetPositionAndVelocity_m8D374792A723F3217420BD76A4B0668D0810B30E (LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// speed = StartSpeed;
		float L_2 = __this->___StartSpeed_4;
		__this->___speed_9 = L_2;
		// if (body.velocity.x > 0.0f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___body_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		float L_5 = L_4.___x_2;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		// body.velocity = new Vector3(-speed, Random.Range(-Spread, Spread), 0.0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___body_8;
		float L_7 = __this->___speed_9;
		float L_8 = __this->___Spread_5;
		float L_9 = __this->___Spread_5;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_8)), L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((-L_7)), L_10, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_11, NULL);
		return;
	}

IL_0062:
	{
		// body.velocity = new Vector3(speed, Random.Range(-Spread, Spread), 0.0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___body_8;
		float L_13 = __this->___speed_9;
		float L_14 = __this->___Spread_5;
		float L_15 = __this->___Spread_5;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_14)), L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_13, L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_17, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPongBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPongBall__ctor_mB15C198788BBD434BF64A2C91791B643ABD6B64A (LeanPongBall_tD1411B567926E57BCA1BFDBE0DAC290F6974B125* __this, const RuntimeMethod* method) 
{
	{
		// public float StartSpeed = 1.0f;
		__this->___StartSpeed_4 = (1.0f);
		// public float Spread = 1.0f;
		__this->___Spread_5 = (1.0f);
		// public float Acceleration = 0.1f;
		__this->___Acceleration_6 = (0.100000001f);
		// public float Bounds = 10.0f;
		__this->___Bounds_7 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanChase::set_Destination(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_set_Destination_m428D75564CC8031FE87DB58A2501571FB030CD1F (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform Destination { set { destination = value; } get { return destination; } } [FSA("Destination")] public Transform destination;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___destination_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destination_4), (void*)L_0);
		// public Transform Destination { set { destination = value; } get { return destination; } } [FSA("Destination")] public Transform destination;
		return;
	}
}
// UnityEngine.Transform Lean.Common.LeanChase::get_Destination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LeanChase_get_Destination_m281449EB1174A39B9251E1DD8545275F2082D340 (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Destination { set { destination = value; } get { return destination; } } [FSA("Destination")] public Transform destination;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___destination_4;
		return L_0;
	}
}
// System.Void Lean.Common.LeanChase::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_SetPosition_m6CAEDBBD70C587A32D6AA6B2B9A116DA104C1FFF (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// destination = null;
		__this->___destination_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destination_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// Position    = newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___newPosition0;
		__this->___Position_6 = L_0;
		// positionSet = true;
		__this->___positionSet_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChase::SnapToPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_SnapToPosition_m89B3C22AAE66CE864025CA0B99BE2D34FF14427B (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePosition(-1.0f, 0.0f);
		VirtualActionInvoker2< float, float >::Invoke(7 /* System.Void Lean.Common.LeanChase::UpdatePosition(System.Single,System.Single) */, __this, (-1.0f), (0.0f));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_Start_mAA243B1F41DD611A2DE7D7B026C81A60593B8F77 (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, const RuntimeMethod* method) 
{
	{
		// if (SetPositionOnStart == true)
		bool L_0 = __this->___SetPositionOnStart_12;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___Position_6 = L_2;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_Update_mED028C0D15C2B070331512C1BD53772C43EA7085 (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePosition(Damping, Linear);
		float L_0 = __this->___Damping_8;
		float L_1 = __this->___Linear_9;
		VirtualActionInvoker2< float, float >::Invoke(7 /* System.Void Lean.Common.LeanChase::UpdatePosition(System.Single,System.Single) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChase::UpdatePosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase_UpdatePosition_m3414D4A69B2DFF811F905F2744FF9850BAEDA170 (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, float ___damping0, float ___linear1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// if (positionSet == true || Continuous == true)
		bool L_0 = __this->___positionSet_13;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->___Continuous_11;
		if (!L_1)
		{
			goto IL_00a2;
		}
	}

IL_0013:
	{
		// if (destination != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___destination_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Position = destination.TransformPoint(DestinationOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___destination_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___DestinationOffset_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		__this->___Position_6 = L_6;
	}

IL_0038:
	{
		// var currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_0 = L_8;
		// var targetPosition  = Position + Offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___Position_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___Offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		V_1 = L_11;
		// if (IgnoreZ == true)
		bool L_12 = __this->___IgnoreZ_10;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// targetPosition.z = currentPosition.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___z_4;
		(&V_1)->___z_4 = L_14;
	}

IL_006b:
	{
		// var factor = LeanHelper.GetDampenFactor(damping, Time.deltaTime);
		float L_15 = ___damping0;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_17;
		L_17 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_15, L_16, NULL);
		V_2 = L_17;
		// currentPosition = Vector3.Lerp(currentPosition, targetPosition, factor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_18, L_19, L_20, NULL);
		V_0 = L_21;
		// currentPosition = Vector3.MoveTowards(currentPosition, targetPosition, linear * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24 = ___linear1;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_22, L_23, ((float)il2cpp_codegen_multiply(L_24, L_25)), NULL);
		V_0 = L_26;
		// transform.position = currentPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_28, NULL);
		// positionSet = false;
		__this->___positionSet_13 = (bool)0;
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChase__ctor_m8BEF4E0B8A4876F2074F6B7322FFEA07AB8B6EEE (LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3* __this, const RuntimeMethod* method) 
{
	{
		// [FSA("Dampening")] public float Damping = -1.0f;
		__this->___Damping_8 = (-1.0f);
		// public bool SetPositionOnStart = true;
		__this->___SetPositionOnStart_12 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanChaseRigidbody::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody_SetPosition_mCFB6FB421C64E127B162EE70AFEE2BE1538CE92C (LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// base.SetPosition(newPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___newPosition0;
		LeanChase_SetPosition_m6CAEDBBD70C587A32D6AA6B2B9A116DA104C1FFF(__this, L_0, NULL);
		// fixedUpdateCalled = false;
		__this->___fixedUpdateCalled_15 = (bool)0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody_OnEnable_m8A52CDD09C7A3030656B324884793D430F5A16FB (LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedRigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___cachedRigidbody_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedRigidbody_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody::UpdatePosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody_UpdatePosition_mD04BD3F09414CC42BA7541E761655C06B01E3B57 (LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53* __this, float ___damping0, float ___linear1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (positionSet == true || Continuous == true)
		bool L_0 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___positionSet_13;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Continuous_11;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}

IL_0013:
	{
		// if (destination != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___destination_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Position = destination.TransformPoint(DestinationOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___destination_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___DestinationOffset_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Position_6 = L_6;
	}

IL_0038:
	{
		// var currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_0 = L_8;
		// var targetPosition  = Position + Offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Position_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		V_1 = L_11;
		// if (IgnoreZ == true)
		bool L_12 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___IgnoreZ_10;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// targetPosition.z = currentPosition.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___z_4;
		(&V_1)->___z_4 = L_14;
	}

IL_006b:
	{
		// var direction = targetPosition - currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		// var velocity  = direction / Time.fixedDeltaTime;
		float L_18;
		L_18 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_17, L_18, NULL);
		V_2 = L_19;
		// velocity *= LeanHelper.GetDampenFactor(damping, Time.fixedDeltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = ___damping0;
		float L_22;
		L_22 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_23;
		L_23 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_23, NULL);
		V_2 = L_24;
		// velocity  = Vector3.MoveTowards(velocity, Vector3.zero, linear * Time.fixedDeltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_27 = ___linear1;
		float L_28;
		L_28 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_25, L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), NULL);
		V_2 = L_29;
		// cachedRigidbody.velocity = velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___cachedRigidbody_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
		NullCheck(L_30);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_30, L_31, NULL);
		// Debug.Log(velocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32;
		RuntimeObject* L_34 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_33);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_34, NULL);
		// fixedUpdateCalled = true;
		__this->___fixedUpdateCalled_15 = (bool)1;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody_LateUpdate_m363BFA4B8867BDC49E8642555156C0B33AC1B80E (LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53* __this, const RuntimeMethod* method) 
{
	{
		// if (fixedUpdateCalled == true)
		bool L_0 = __this->___fixedUpdateCalled_15;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// positionSet       = false;
		((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___positionSet_13 = (bool)0;
		// fixedUpdateCalled = false;
		__this->___fixedUpdateCalled_15 = (bool)0;
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody__ctor_m4389947C9781B170C346F5C0CC0FFDCB7661274F (LeanChaseRigidbody_tF2AE151EA1BC8EB8E3035BBCCE2247DF48B9DD53* __this, const RuntimeMethod* method) 
{
	{
		LeanChase__ctor_m8BEF4E0B8A4876F2074F6B7322FFEA07AB8B6EEE(__this, NULL);
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
// System.Void Lean.Common.LeanChaseRigidbody2D::set_Axis(Lean.Common.LeanChaseRigidbody2D/AxisType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody2D_set_Axis_m6A8F6C96298AF5C61418F5543754B46A72E58E3E (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisType Axis { set { axis = value; } get { return axis; } } public AxisType axis;
		int32_t L_0 = ___value0;
		__this->___axis_14 = L_0;
		// public AxisType Axis { set { axis = value; } get { return axis; } } public AxisType axis;
		return;
	}
}
// Lean.Common.LeanChaseRigidbody2D/AxisType Lean.Common.LeanChaseRigidbody2D::get_Axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeanChaseRigidbody2D_get_Axis_m9E5624AFAC274E172F8DFEE0788B57ADFE3A980A (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, const RuntimeMethod* method) 
{
	{
		// public AxisType Axis { set { axis = value; } get { return axis; } } public AxisType axis;
		int32_t L_0 = __this->___axis_14;
		return L_0;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody2D::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody2D_SetPosition_m6DCB17807056D1331161F6935CC2408204941E3F (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// base.SetPosition(newPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___newPosition0;
		LeanChase_SetPosition_m6CAEDBBD70C587A32D6AA6B2B9A116DA104C1FFF(__this, L_0, NULL);
		// fixedUpdateCalled = false;
		__this->___fixedUpdateCalled_16 = (bool)0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody2D_OnEnable_m4C924FC4705BC2E4ED6A50231F70340DEE7BC915 (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___cachedRigidbody_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedRigidbody_15), (void*)L_0);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody2D::UpdatePosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody2D_UpdatePosition_m09239F03137A37ABD7534E81CDDBC047B5AFFCCF (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, float ___damping0, float ___linear1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (positionSet == true || Continuous == true)
		bool L_0 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___positionSet_13;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Continuous_11;
		if (!L_1)
		{
			goto IL_00f4;
		}
	}

IL_0013:
	{
		// if (destination != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___destination_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Position = destination.TransformPoint(DestinationOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___destination_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___DestinationOffset_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Position_6 = L_6;
	}

IL_0038:
	{
		// var currentPosition = (Vector2)(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		V_0 = L_9;
		// var targetPosition  = (Vector2)(Position + Offset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Position_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___Offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		// var direction = targetPosition - currentPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		// var velocity  = direction / Time.fixedDeltaTime;
		float L_16;
		L_16 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_15, L_16, NULL);
		V_1 = L_17;
		// velocity *= LeanHelper.GetDampenFactor(damping, Time.fixedDeltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		float L_19 = ___damping0;
		float L_20;
		L_20 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_21;
		L_21 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_19, L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, L_21, NULL);
		V_1 = L_22;
		// velocity  = Vector3.MoveTowards(velocity, Vector3.zero, linear * Time.fixedDeltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_26 = ___linear1;
		float L_27;
		L_27 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_24, L_25, ((float)il2cpp_codegen_multiply(L_26, L_27)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_28, NULL);
		V_1 = L_29;
		// if (axis == AxisType.Horizontal)
		int32_t L_30 = __this->___axis_14;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00c1;
		}
	}
	{
		// velocity.y = cachedRigidbody.velocity.y;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31 = __this->___cachedRigidbody_15;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_31, NULL);
		float L_33 = L_32.___y_1;
		(&V_1)->___y_1 = L_33;
		goto IL_00e1;
	}

IL_00c1:
	{
		// else if (axis == AxisType.Vertical)
		int32_t L_34 = __this->___axis_14;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e1;
		}
	}
	{
		// velocity.x = cachedRigidbody.velocity.x;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_35 = __this->___cachedRigidbody_15;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_35, NULL);
		float L_37 = L_36.___x_0;
		(&V_1)->___x_0 = L_37;
	}

IL_00e1:
	{
		// cachedRigidbody.velocity = velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_38 = __this->___cachedRigidbody_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_1;
		NullCheck(L_38);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_38, L_39, NULL);
		// fixedUpdateCalled = true;
		__this->___fixedUpdateCalled_16 = (bool)1;
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody2D_LateUpdate_m46C6ADE38B0CC470421C6AE9EF276D16FDD4E96B (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, const RuntimeMethod* method) 
{
	{
		// if (fixedUpdateCalled == true)
		bool L_0 = __this->___fixedUpdateCalled_16;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// positionSet       = false;
		((LeanChase_tDC0A4774DAF5A2870B4A08891832F86D2B8D7FF3*)__this)->___positionSet_13 = (bool)0;
		// fixedUpdateCalled = false;
		__this->___fixedUpdateCalled_16 = (bool)0;
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanChaseRigidbody2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanChaseRigidbody2D__ctor_m31490BBAB87A458EADD62B2CD6632C245BC6BFA4 (LeanChaseRigidbody2D_tAA87D90AE960E40D83A32CC41C9147A2FFA320F8* __this, const RuntimeMethod* method) 
{
	{
		LeanChase__ctor_m8BEF4E0B8A4876F2074F6B7322FFEA07AB8B6EEE(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainLocalPosition::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainLocalPosition_LateUpdate_mA268764C83C8ACC0F2239B4356AC7C3544FB76C7 (LeanConstrainLocalPosition_t2B78D40A49636D1BD171D807F39407A42250C37C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var rectTransform = transform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (rectTransform != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// var position = rectTransform.anchoredPosition3D;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA(L_3, NULL);
		V_1 = L_4;
		// if (DoClamp(ref position) == true)
		bool L_5;
		L_5 = LeanConstrainLocalPosition_DoClamp_m6B782703AE3A669377C548647CC616F8C9C2F2D7(__this, (&V_1), NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// rectTransform.anchoredPosition3D = position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		NullCheck(L_6);
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(L_6, L_7, NULL);
		return;
	}

IL_002e:
	{
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_2 = L_9;
		// if (DoClamp(ref position) == true)
		bool L_10;
		L_10 = LeanConstrainLocalPosition_DoClamp_m6B782703AE3A669377C548647CC616F8C9C2F2D7(__this, (&V_2), NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_12, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Boolean Lean.Common.LeanConstrainLocalPosition::DoClamp(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanConstrainLocalPosition_DoClamp_m6B782703AE3A669377C548647CC616F8C9C2F2D7 (LeanConstrainLocalPosition_t2B78D40A49636D1BD171D807F39407A42250C37C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// var modified = false;
		V_0 = (bool)0;
		// if (X == true)
		bool L_0 = __this->___X_4;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// if (value.x < XMin)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___value0;
		float L_2 = L_1->___x_2;
		float L_3 = __this->___XMin_5;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		// value.x = XMin; modified = true;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___value0;
		float L_5 = __this->___XMin_5;
		L_4->___x_2 = L_5;
		// value.x = XMin; modified = true;
		V_0 = (bool)1;
		goto IL_0044;
	}

IL_0028:
	{
		// else if (value.x > XMax)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___value0;
		float L_7 = L_6->___x_2;
		float L_8 = __this->___XMax_6;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0044;
		}
	}
	{
		// value.x = XMax; modified = true;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___value0;
		float L_10 = __this->___XMax_6;
		L_9->___x_2 = L_10;
		// value.x = XMax; modified = true;
		V_0 = (bool)1;
	}

IL_0044:
	{
		// if (Y == true)
		bool L_11 = __this->___Y_7;
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		// if (value.y < YMin)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___value0;
		float L_13 = L_12->___y_3;
		float L_14 = __this->___YMin_8;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_006a;
		}
	}
	{
		// value.y = YMin; modified = true;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___value0;
		float L_16 = __this->___YMin_8;
		L_15->___y_3 = L_16;
		// value.y = YMin; modified = true;
		V_0 = (bool)1;
		goto IL_0086;
	}

IL_006a:
	{
		// else if (value.y > YMax)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___value0;
		float L_18 = L_17->___y_3;
		float L_19 = __this->___YMax_9;
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0086;
		}
	}
	{
		// value.y = YMax; modified = true;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___value0;
		float L_21 = __this->___YMax_9;
		L_20->___y_3 = L_21;
		// value.y = YMax; modified = true;
		V_0 = (bool)1;
	}

IL_0086:
	{
		// if (Z == true)
		bool L_22 = __this->___Z_10;
		if (!L_22)
		{
			goto IL_00c8;
		}
	}
	{
		// if (value.z < ZMin)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___value0;
		float L_24 = L_23->___z_4;
		float L_25 = __this->___ZMin_11;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00ac;
		}
	}
	{
		// value.z = ZMin; modified = true;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___value0;
		float L_27 = __this->___ZMin_11;
		L_26->___z_4 = L_27;
		// value.z = ZMin; modified = true;
		V_0 = (bool)1;
		goto IL_00c8;
	}

IL_00ac:
	{
		// else if (value.z > ZMax)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___value0;
		float L_29 = L_28->___z_4;
		float L_30 = __this->___ZMax_12;
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_00c8;
		}
	}
	{
		// value.z = ZMax; modified = true;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = ___value0;
		float L_32 = __this->___ZMax_12;
		L_31->___z_4 = L_32;
		// value.z = ZMax; modified = true;
		V_0 = (bool)1;
	}

IL_00c8:
	{
		// return modified;
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Void Lean.Common.LeanConstrainLocalPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainLocalPosition__ctor_m9C937A6301E83B73E7C8CEC179DDA8E064A7D4BE (LeanConstrainLocalPosition_t2B78D40A49636D1BD171D807F39407A42250C37C* __this, const RuntimeMethod* method) 
{
	{
		// public float XMin = -1.0f;
		__this->___XMin_5 = (-1.0f);
		// public float XMax =  1.0f;
		__this->___XMax_6 = (1.0f);
		// public float YMin = -1.0f;
		__this->___YMin_8 = (-1.0f);
		// public float YMax =  1.0f;
		__this->___YMax_9 = (1.0f);
		// public float ZMin = -1.0f;
		__this->___ZMin_11 = (-1.0f);
		// public float ZMax =  1.0f;
		__this->___ZMax_12 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainScale::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainScale_LateUpdate_m72E0B1FA9A6C2EB240CCB218490A6999FCD82320 (LeanConstrainScale_tF2790BA844A84658DA47641D3CD2B40CC3DE7182* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var oldScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		V_0 = L_1;
		// var newScale = oldScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		V_1 = L_2;
		// if (Minimum == true)
		bool L_3 = __this->___Minimum_4;
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		// newScale.x = Mathf.Max(newScale.x, MinimumScale.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___MinimumScale_5);
		float L_7 = L_6->___x_2;
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_5, L_7, NULL);
		(&V_1)->___x_2 = L_8;
		// newScale.y = Mathf.Max(newScale.y, MinimumScale.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___MinimumScale_5);
		float L_12 = L_11->___y_3;
		float L_13;
		L_13 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_10, L_12, NULL);
		(&V_1)->___y_3 = L_13;
		// newScale.z = Mathf.Max(newScale.z, MinimumScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___MinimumScale_5);
		float L_17 = L_16->___z_4;
		float L_18;
		L_18 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_15, L_17, NULL);
		(&V_1)->___z_4 = L_18;
	}

IL_006d:
	{
		// if (Maximum == true)
		bool L_19 = __this->___Maximum_6;
		if (!L_19)
		{
			goto IL_00cc;
		}
	}
	{
		// newScale.x = Mathf.Min(newScale.x, MaximumScale.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		float L_21 = L_20.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___MaximumScale_7);
		float L_23 = L_22->___x_2;
		float L_24;
		L_24 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_21, L_23, NULL);
		(&V_1)->___x_2 = L_24;
		// newScale.y = Mathf.Min(newScale.y, MaximumScale.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		float L_26 = L_25.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___MaximumScale_7);
		float L_28 = L_27->___y_3;
		float L_29;
		L_29 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_26, L_28, NULL);
		(&V_1)->___y_3 = L_29;
		// newScale.z = Mathf.Min(newScale.z, MaximumScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		float L_31 = L_30.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___MaximumScale_7);
		float L_33 = L_32->___z_4;
		float L_34;
		L_34 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_31, L_33, NULL);
		(&V_1)->___z_4 = L_34;
	}

IL_00cc:
	{
		// if (Mathf.Approximately(oldScale.x, newScale.x) == false ||
		//     Mathf.Approximately(oldScale.y, newScale.y) == false ||
		//     Mathf.Approximately(oldScale.z, newScale.z) == false)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		float L_36 = L_35.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		float L_38 = L_37.___x_2;
		bool L_39;
		L_39 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_0105;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		float L_41 = L_40.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		float L_43 = L_42.___y_3;
		bool L_44;
		L_44 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0105;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_0;
		float L_46 = L_45.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		float L_48 = L_47.___z_4;
		bool L_49;
		L_49 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_46, L_48, NULL);
		if (L_49)
		{
			goto IL_0111;
		}
	}

IL_0105:
	{
		// transform.localScale = newScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_1;
		NullCheck(L_50);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_50, L_51, NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainScale__ctor_m3B8ACDA21B3766AEB98ACF049B6BC10CBA5DA528 (LeanConstrainScale_tF2790BA844A84658DA47641D3CD2B40CC3DE7182* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 MinimumScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___MinimumScale_5 = L_0;
		// public Vector3 MaximumScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___MaximumScale_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainToAxis::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToAxis_LateUpdate_mDC7595FC37C043E3EE0509BDC70BAF8872050286 (LeanConstrainToAxis_tD44BCB0FBBE8F8C6E558A5E7B850CFBA0FD9DE3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var matrix      = RelativeTo != null ? RelativeTo.localToWorldMatrix : Matrix4x4.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___RelativeTo_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___RelativeTo_4;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		// var oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_1 = L_6;
		// var local       = matrix.MultiplyPoint(oldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_7, NULL);
		V_2 = L_8;
		// var set         = false;
		V_3 = (bool)0;
		// if ((Axis == AxisType.X || Axis == AxisType.MinX) && local.x < Minimum) { local.x = Minimum; set = true; }
		int32_t L_9 = __this->___Axis_5;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = __this->___Axis_5;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0066;
		}
	}

IL_0049:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___x_2;
		float L_13 = __this->___Minimum_6;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0066;
		}
	}
	{
		// if ((Axis == AxisType.X || Axis == AxisType.MinX) && local.x < Minimum) { local.x = Minimum; set = true; }
		float L_14 = __this->___Minimum_6;
		(&V_2)->___x_2 = L_14;
		// if ((Axis == AxisType.X || Axis == AxisType.MinX) && local.x < Minimum) { local.x = Minimum; set = true; }
		V_3 = (bool)1;
	}

IL_0066:
	{
		// if ((Axis == AxisType.X || Axis == AxisType.MaxX) && local.x > Maximum) { local.x = Maximum; set = true; }
		int32_t L_15 = __this->___Axis_5;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_16 = __this->___Axis_5;
		if ((!(((uint32_t)L_16) == ((uint32_t)4))))
		{
			goto IL_0094;
		}
	}

IL_0077:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___x_2;
		float L_19 = __this->___Maximum_7;
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0094;
		}
	}
	{
		// if ((Axis == AxisType.X || Axis == AxisType.MaxX) && local.x > Maximum) { local.x = Maximum; set = true; }
		float L_20 = __this->___Maximum_7;
		(&V_2)->___x_2 = L_20;
		// if ((Axis == AxisType.X || Axis == AxisType.MaxX) && local.x > Maximum) { local.x = Maximum; set = true; }
		V_3 = (bool)1;
	}

IL_0094:
	{
		// if ((Axis == AxisType.Y || Axis == AxisType.MinY) && local.y < Minimum) { local.y = Minimum; set = true; }
		int32_t L_21 = __this->___Axis_5;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_22 = __this->___Axis_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)5))))
		{
			goto IL_00c3;
		}
	}

IL_00a6:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___y_3;
		float L_25 = __this->___Minimum_6;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		// if ((Axis == AxisType.Y || Axis == AxisType.MinY) && local.y < Minimum) { local.y = Minimum; set = true; }
		float L_26 = __this->___Minimum_6;
		(&V_2)->___y_3 = L_26;
		// if ((Axis == AxisType.Y || Axis == AxisType.MinY) && local.y < Minimum) { local.y = Minimum; set = true; }
		V_3 = (bool)1;
	}

IL_00c3:
	{
		// if ((Axis == AxisType.Y || Axis == AxisType.MaxY) && local.y > Maximum) { local.y = Maximum; set = true; }
		int32_t L_27 = __this->___Axis_5;
		if ((((int32_t)L_27) == ((int32_t)1)))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_28 = __this->___Axis_5;
		if ((!(((uint32_t)L_28) == ((uint32_t)6))))
		{
			goto IL_00f2;
		}
	}

IL_00d5:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		float L_30 = L_29.___y_3;
		float L_31 = __this->___Maximum_7;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_00f2;
		}
	}
	{
		// if ((Axis == AxisType.Y || Axis == AxisType.MaxY) && local.y > Maximum) { local.y = Maximum; set = true; }
		float L_32 = __this->___Maximum_7;
		(&V_2)->___y_3 = L_32;
		// if ((Axis == AxisType.Y || Axis == AxisType.MaxY) && local.y > Maximum) { local.y = Maximum; set = true; }
		V_3 = (bool)1;
	}

IL_00f2:
	{
		// if ((Axis == AxisType.Z || Axis == AxisType.MinZ) && local.z < Minimum) { local.z = Minimum; set = true; }
		int32_t L_33 = __this->___Axis_5;
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_34 = __this->___Axis_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)7))))
		{
			goto IL_0121;
		}
	}

IL_0104:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		float L_36 = L_35.___z_4;
		float L_37 = __this->___Minimum_6;
		if ((!(((float)L_36) < ((float)L_37))))
		{
			goto IL_0121;
		}
	}
	{
		// if ((Axis == AxisType.Z || Axis == AxisType.MinZ) && local.z < Minimum) { local.z = Minimum; set = true; }
		float L_38 = __this->___Minimum_6;
		(&V_2)->___z_4 = L_38;
		// if ((Axis == AxisType.Z || Axis == AxisType.MinZ) && local.z < Minimum) { local.z = Minimum; set = true; }
		V_3 = (bool)1;
	}

IL_0121:
	{
		// if ((Axis == AxisType.Z || Axis == AxisType.MaxZ) && local.z > Maximum) { local.z = Maximum; set = true; }
		int32_t L_39 = __this->___Axis_5;
		if ((((int32_t)L_39) == ((int32_t)2)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_40 = __this->___Axis_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)8))))
		{
			goto IL_0150;
		}
	}

IL_0133:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_2;
		float L_42 = L_41.___z_4;
		float L_43 = __this->___Maximum_7;
		if ((!(((float)L_42) > ((float)L_43))))
		{
			goto IL_0150;
		}
	}
	{
		// if ((Axis == AxisType.Z || Axis == AxisType.MaxZ) && local.z > Maximum) { local.z = Maximum; set = true; }
		float L_44 = __this->___Maximum_7;
		(&V_2)->___z_4 = L_44;
		// if ((Axis == AxisType.Z || Axis == AxisType.MaxZ) && local.z > Maximum) { local.z = Maximum; set = true; }
		V_3 = (bool)1;
	}

IL_0150:
	{
		// if (set == true)
		bool L_45 = V_3;
		if (!L_45)
		{
			goto IL_01af;
		}
	}
	{
		// var newPosition = matrix.inverse.MultiplyPoint(local);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46;
		L_46 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_0), NULL);
		V_5 = L_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_5), L_47, NULL);
		V_4 = L_48;
		// if (Mathf.Approximately(oldPosition.x, newPosition.x) == false ||
		//     Mathf.Approximately(oldPosition.y, newPosition.y) == false ||
		//     Mathf.Approximately(oldPosition.z, newPosition.z) == false)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_1;
		float L_50 = L_49.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_4;
		float L_52 = L_51.___x_2;
		bool L_53;
		L_53 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_01a2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
		float L_55 = L_54.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		float L_57 = L_56.___y_3;
		bool L_58;
		L_58 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_55, L_57, NULL);
		if (!L_58)
		{
			goto IL_01a2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_1;
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_4;
		float L_62 = L_61.___z_4;
		bool L_63;
		L_63 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_60, L_62, NULL);
		if (L_63)
		{
			goto IL_01af;
		}
	}

IL_01a2:
	{
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_4;
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_65, NULL);
	}

IL_01af:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToAxis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToAxis__ctor_m9534F203C936A0C4F292459799D8894162DE2CAC (LeanConstrainToAxis_tD44BCB0FBBE8F8C6E558A5E7B850CFBA0FD9DE3A* __this, const RuntimeMethod* method) 
{
	{
		// public float Minimum = -1.0f;
		__this->___Minimum_6 = (-1.0f);
		// public float Maximum = 1.0f;
		__this->___Maximum_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainToBox::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToBox_LateUpdate_mD68D3ECA21872F63F991FB4E2C5000AF2D37E756 (LeanConstrainToBox_tB4DE51D999A44A1B31327D0434D57552128837E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var matrix      = RelativeTo != null ? RelativeTo.localToWorldMatrix : Matrix4x4.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___RelativeTo_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___RelativeTo_4;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		// var oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_1 = L_6;
		// var local       = matrix.MultiplyPoint(oldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_7, NULL);
		V_2 = L_8;
		// var min         = Center - Size * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___Center_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___Size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_3 = L_12;
		// var max         = Center + Size * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___Center_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___Size_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_15, NULL);
		V_4 = L_16;
		// var set         = false;
		V_5 = (bool)0;
		// if (local.x < min.x) { local.x = min.x; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20 = L_19.___x_2;
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_0090;
		}
	}
	{
		// if (local.x < min.x) { local.x = min.x; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		float L_22 = L_21.___x_2;
		(&V_2)->___x_2 = L_22;
		// if (local.x < min.x) { local.x = min.x; set = true; }
		V_5 = (bool)1;
	}

IL_0090:
	{
		// if (local.y < min.y) { local.y = min.y; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = L_25.___y_3;
		if ((!(((float)L_24) < ((float)L_26))))
		{
			goto IL_00ae;
		}
	}
	{
		// if (local.y < min.y) { local.y = min.y; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		float L_28 = L_27.___y_3;
		(&V_2)->___y_3 = L_28;
		// if (local.y < min.y) { local.y = min.y; set = true; }
		V_5 = (bool)1;
	}

IL_00ae:
	{
		// if (local.z < min.z) { local.z = min.z; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		float L_30 = L_29.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
		float L_32 = L_31.___z_4;
		if ((!(((float)L_30) < ((float)L_32))))
		{
			goto IL_00cc;
		}
	}
	{
		// if (local.z < min.z) { local.z = min.z; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		float L_34 = L_33.___z_4;
		(&V_2)->___z_4 = L_34;
		// if (local.z < min.z) { local.z = min.z; set = true; }
		V_5 = (bool)1;
	}

IL_00cc:
	{
		// if (local.x > max.x) { local.x = max.x; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		float L_36 = L_35.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		float L_38 = L_37.___x_2;
		if ((!(((float)L_36) > ((float)L_38))))
		{
			goto IL_00ec;
		}
	}
	{
		// if (local.x > max.x) { local.x = max.x; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		float L_40 = L_39.___x_2;
		(&V_2)->___x_2 = L_40;
		// if (local.x > max.x) { local.x = max.x; set = true; }
		V_5 = (bool)1;
	}

IL_00ec:
	{
		// if (local.y > max.y) { local.y = max.y; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_2;
		float L_42 = L_41.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_4;
		float L_44 = L_43.___y_3;
		if ((!(((float)L_42) > ((float)L_44))))
		{
			goto IL_010c;
		}
	}
	{
		// if (local.y > max.y) { local.y = max.y; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		float L_46 = L_45.___y_3;
		(&V_2)->___y_3 = L_46;
		// if (local.y > max.y) { local.y = max.y; set = true; }
		V_5 = (bool)1;
	}

IL_010c:
	{
		// if (local.z > max.z) { local.z = max.z; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_2;
		float L_48 = L_47.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_4;
		float L_50 = L_49.___z_4;
		if ((!(((float)L_48) > ((float)L_50))))
		{
			goto IL_012c;
		}
	}
	{
		// if (local.z > max.z) { local.z = max.z; set = true; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_4;
		float L_52 = L_51.___z_4;
		(&V_2)->___z_4 = L_52;
		// if (local.z > max.z) { local.z = max.z; set = true; }
		V_5 = (bool)1;
	}

IL_012c:
	{
		// if (set == true)
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_018c;
		}
	}
	{
		// var newPosition = matrix.inverse.MultiplyPoint(local);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54;
		L_54 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_0), NULL);
		V_7 = L_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_7), L_55, NULL);
		V_6 = L_56;
		// if (Mathf.Approximately(oldPosition.x, newPosition.x) == false ||
		//     Mathf.Approximately(oldPosition.y, newPosition.y) == false ||
		//     Mathf.Approximately(oldPosition.z, newPosition.z) == false)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		float L_58 = L_57.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_6;
		float L_60 = L_59.___x_2;
		bool L_61;
		L_61 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_58, L_60, NULL);
		if (!L_61)
		{
			goto IL_017f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_1;
		float L_63 = L_62.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_6;
		float L_65 = L_64.___y_3;
		bool L_66;
		L_66 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_63, L_65, NULL);
		if (!L_66)
		{
			goto IL_017f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_1;
		float L_68 = L_67.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_6;
		float L_70 = L_69.___z_4;
		bool L_71;
		L_71 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_68, L_70, NULL);
		if (L_71)
		{
			goto IL_018c;
		}
	}

IL_017f:
	{
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_6;
		NullCheck(L_72);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_72, L_73, NULL);
	}

IL_018c:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToBox::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToBox_OnDrawGizmosSelected_mAA04155D4C7C8D42A089FFF1FB582920B992AA0F (LeanConstrainToBox_tB4DE51D999A44A1B31327D0434D57552128837E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Gizmos.matrix = RelativeTo != null ? RelativeTo.localToWorldMatrix : Matrix4x4.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___RelativeTo_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___RelativeTo_4;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(G_B3_0, NULL);
		// Gizmos.DrawWireCube(Center, Size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___Center_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___Size_5;
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToBox__ctor_m1F939B5C918A5A57C652982A5896D0B941ADFAA8 (LeanConstrainToBox_tB4DE51D999A44A1B31327D0434D57552128837E1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Size = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___Size_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainToCollider::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToCollider_LateUpdate_m6B9DC1DF224BF5B30EA4028F62E6F6842F47C5EF (LeanConstrainToCollider_t97BEBA8E54A84BCD6EAD10CD9B55EB4228F7B3B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Collider != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___Collider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// var oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// var newPosition = Collider.ClosestPoint(oldPosition);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_4, L_5, NULL);
		V_1 = L_6;
		// if (Mathf.Approximately(oldPosition.x, newPosition.x) == false ||
		//     Mathf.Approximately(oldPosition.y, newPosition.y) == false ||
		//     Mathf.Approximately(oldPosition.z, newPosition.z) == false)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		float L_10 = L_9.___x_2;
		bool L_11;
		L_11 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		float L_15 = L_14.___y_3;
		bool L_16;
		L_16 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = L_19.___z_4;
		bool L_21;
		L_21 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_18, L_20, NULL);
		if (L_21)
		{
			goto IL_006c;
		}
	}

IL_0060:
	{
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToCollider__ctor_m13F9F54EF353E369E2520977248C69B1F7E37F47 (LeanConstrainToCollider_t97BEBA8E54A84BCD6EAD10CD9B55EB4228F7B3B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainToColliders::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToColliders_LateUpdate_m0D34CC4A3A6F2F14FC60F94652E00FB75A6F96F9 (LeanConstrainToColliders_tD7CA746043D0AC7BA85CE26F100081BA6E579237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	{
		// if (Colliders != null)
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = __this->___Colliders_4;
		if (!L_0)
		{
			goto IL_00e5;
		}
	}
	{
		// var oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// var newPosition = default(Vector3);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// var distance    = float.PositiveInfinity;
		V_2 = (std::numeric_limits<float>::infinity());
		// var count       = 0;
		V_3 = 0;
		// var moved       = 0;
		V_4 = 0;
		// for (var i = Colliders.Count - 1; i >= 0; i--)
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_3 = __this->___Colliders_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_3, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0092;
	}

IL_003b:
	{
		// var collider = Colliders[i];
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = __this->___Colliders_4;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_5, L_6, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		V_6 = L_7;
		// if (collider != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		// var testPosition = collider.ClosestPoint(oldPosition);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_10, L_11, NULL);
		V_7 = L_12;
		// if (testPosition != oldPosition)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		bool L_15;
		L_15 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		// moved++;
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// var testDistance = Vector3.SqrMagnitude(testPosition - oldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_18, NULL);
		float L_20;
		L_20 = Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline(L_19, NULL);
		V_8 = L_20;
		// if (testDistance < distance)
		float L_21 = V_8;
		float L_22 = V_2;
		if ((!(((float)L_21) < ((float)L_22))))
		{
			goto IL_0088;
		}
	}
	{
		// distance = testDistance;
		float L_23 = V_8;
		V_2 = L_23;
		// newPosition  = testPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_7;
		V_1 = L_24;
	}

IL_0088:
	{
		// count++;
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_008c:
	{
		// for (var i = Colliders.Count - 1; i >= 0; i--)
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_0092:
	{
		// for (var i = Colliders.Count - 1; i >= 0; i--)
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// if (count > 0 && count == moved)
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_00e5;
		}
	}
	{
		// if (Mathf.Approximately(oldPosition.x, newPosition.x) == false ||
		//     Mathf.Approximately(oldPosition.y, newPosition.y) == false ||
		//     Mathf.Approximately(oldPosition.z, newPosition.z) == false)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = L_31.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		float L_34 = L_33.___x_2;
		bool L_35;
		L_35 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_32, L_34, NULL);
		if (!L_35)
		{
			goto IL_00d9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		float L_37 = L_36.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_1;
		float L_39 = L_38.___y_3;
		bool L_40;
		L_40 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_00d9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_0;
		float L_42 = L_41.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		float L_44 = L_43.___z_4;
		bool L_45;
		L_45 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_42, L_44, NULL);
		if (L_45)
		{
			goto IL_00e5;
		}
	}

IL_00d9:
	{
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		NullCheck(L_46);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_46, L_47, NULL);
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToColliders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToColliders__ctor_m932EA45AD093CE86030D12AF73BA786E805FBA07 (LeanConstrainToColliders_tD7CA746043D0AC7BA85CE26F100081BA6E579237* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainToDirection::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToDirection_LateUpdate_mB2E047081D8D23B33260FDACB2DA6B9EA852C0EB (LeanConstrainToDirection_t5D361E1C9ADE95E7323FD87C3E8FBBA81FBEE524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (Forward != Vector3.zero && Direction != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Forward_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_015b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___Direction_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_5;
		L_5 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_015b;
		}
	}
	{
		// var dir = Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___Direction_5;
		V_0 = L_6;
		// if (RelativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___RelativeTo_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// dir = RelativeTo.TransformDirection(dir);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___RelativeTo_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_004c:
	{
		// var fwd         = transform.TransformDirection(Forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___Forward_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_12, L_13, NULL);
		V_1 = L_14;
		// var angle       = Vector3.Angle(dir, fwd);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17;
		L_17 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// var oldRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		V_3 = L_19;
		// var newRotation = oldRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_3;
		V_4 = L_20;
		// if (angle < MinAngle)
		float L_21 = V_2;
		float L_22 = __this->___MinAngle_7;
		if ((!(((float)L_21) < ((float)L_22))))
		{
			goto IL_00bd;
		}
	}
	{
		// var fixedFwd = Vector3.RotateTowards(fwd.normalized, -dir.normalized, (MinAngle - angle) * Mathf.Deg2Rad, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_24, NULL);
		float L_26 = __this->___MinAngle_7;
		float L_27 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_23, L_25, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_27)), (0.0174532924f))), (1.0f), NULL);
		V_5 = L_28;
		// newRotation = Quaternion.FromToRotation(fwd, fixedFwd) * oldRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_29, L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_31, L_32, NULL);
		V_4 = L_33;
		goto IL_00fe;
	}

IL_00bd:
	{
		// else if (angle > MaxAngle)
		float L_34 = V_2;
		float L_35 = __this->___MaxAngle_8;
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_00fe;
		}
	}
	{
		// var fixedFwd = Vector3.RotateTowards(fwd.normalized, dir.normalized, (angle - MaxAngle) * Mathf.Deg2Rad, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_38 = V_2;
		float L_39 = __this->___MaxAngle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_36, L_37, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, L_39)), (0.0174532924f))), (1.0f), NULL);
		V_6 = L_40;
		// newRotation = Quaternion.FromToRotation(fwd, fixedFwd) * oldRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_41, L_42, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_43, L_44, NULL);
		V_4 = L_45;
	}

IL_00fe:
	{
		// if (Mathf.Approximately(oldRotation.x, newRotation.x) == false ||
		//     Mathf.Approximately(oldRotation.y, newRotation.y) == false ||
		//     Mathf.Approximately(oldRotation.z, newRotation.z) == false ||
		//     Mathf.Approximately(oldRotation.w, newRotation.w) == false)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = V_3;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = V_4;
		float L_49 = L_48.___x_0;
		bool L_50;
		L_50 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_014e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = V_3;
		float L_52 = L_51.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = V_4;
		float L_54 = L_53.___y_1;
		bool L_55;
		L_55 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_52, L_54, NULL);
		if (!L_55)
		{
			goto IL_014e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = V_3;
		float L_57 = L_56.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = V_4;
		float L_59 = L_58.___z_2;
		bool L_60;
		L_60 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_014e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61 = V_3;
		float L_62 = L_61.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = V_4;
		float L_64 = L_63.___w_3;
		bool L_65;
		L_65 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_62, L_64, NULL);
		if (L_65)
		{
			goto IL_015b;
		}
	}

IL_014e:
	{
		// transform.rotation = newRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67 = V_4;
		NullCheck(L_66);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_66, L_67, NULL);
	}

IL_015b:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToDirection__ctor_m0006A827C60C400983C18EFC4042FB71E811E36B (LeanConstrainToDirection_t5D361E1C9ADE95E7323FD87C3E8FBBA81FBEE524* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Forward = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___Forward_4 = L_0;
		// public Vector3 Direction = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___Direction_5 = L_1;
		// public float MaxAngle = 90.0f;
		__this->___MaxAngle_8 = (90.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanConstrainToOrthographic::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToOrthographic_LateUpdate_mDC9DC881408C136FBFFCBD34612EB98532209D00 (LeanConstrainToOrthographic_t2334DAD0E8A7C602BF38C5EBCC99DA64B9D55786* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03A3476EC232709C329E3B26E93B3D42E28FA35);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// var camera = LeanHelper.GetCamera(Camera, gameObject);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = LeanHelper_GetCamera_mF105E4D4ACEC5FD99C4FE5033B9FBFFFACC64F45(L_0, L_1, NULL);
		// if (camera != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_01fe;
		}
	}
	{
		// if (Plane != null)
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_4 = __this->___Plane_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0209;
		}
	}
	{
		// var ray = Camera.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0.0f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___Camera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4(L_6, L_7, NULL);
		V_0 = L_8;
		// var hit = default(Vector3);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (Plane.TryRaycast(ray, ref hit, 0.0f, false) == true)
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_9 = __this->___Plane_5;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10 = V_0;
		NullCheck(L_9);
		bool L_11;
		L_11 = LeanPlane_TryRaycast_m3F4E9A0A4FE82B51F2C0B8DAA3396500C0B90732(L_9, L_10, (&V_1), (0.0f), (bool)0, NULL);
		if (!L_11)
		{
			goto IL_0209;
		}
	}
	{
		// var oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_2 = L_13;
		// var local       = Plane.transform.InverseTransformPoint(hit);
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_14 = __this->___Plane_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_15, L_16, NULL);
		V_3 = L_17;
		// var snapped     = local;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		V_4 = L_18;
		// var size        = new Vector2(Camera.orthographicSize * Camera.aspect, Camera.orthographicSize);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___Camera_4;
		NullCheck(L_19);
		float L_20;
		L_20 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_19, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___Camera_4;
		NullCheck(L_21);
		float L_22;
		L_22 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_21, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___Camera_4;
		NullCheck(L_23);
		float L_24;
		L_24 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_23, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), ((float)il2cpp_codegen_multiply(L_20, L_22)), L_24, NULL);
		// if (Plane.ClampX == true)
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_25 = __this->___Plane_5;
		NullCheck(L_25);
		bool L_26 = L_25->___ClampX_4;
		if (!L_26)
		{
			goto IL_011f;
		}
	}
	{
		// var min = Plane.MinX + size.x;
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_27 = __this->___Plane_5;
		NullCheck(L_27);
		float L_28 = L_27->___MinX_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_5;
		float L_30 = L_29.___x_0;
		V_6 = ((float)il2cpp_codegen_add(L_28, L_30));
		// var max = Plane.MaxX - size.x;
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_31 = __this->___Plane_5;
		NullCheck(L_31);
		float L_32 = L_31->___MaxX_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_5;
		float L_34 = L_33.___x_0;
		V_7 = ((float)il2cpp_codegen_subtract(L_32, L_34));
		// if (min > max)
		float L_35 = V_6;
		float L_36 = V_7;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_0109;
		}
	}
	{
		// snapped.x = (min + max) * 0.5f;
		float L_37 = V_6;
		float L_38 = V_7;
		(&V_4)->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_37, L_38)), (0.5f)));
		goto IL_011f;
	}

IL_0109:
	{
		// snapped.x = Mathf.Clamp(local.x, min, max);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		float L_40 = L_39.___x_2;
		float L_41 = V_6;
		float L_42 = V_7;
		float L_43;
		L_43 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_40, L_41, L_42, NULL);
		(&V_4)->___x_2 = L_43;
	}

IL_011f:
	{
		// if (Plane.ClampY == true)
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_44 = __this->___Plane_5;
		NullCheck(L_44);
		bool L_45 = L_44->___ClampY_7;
		if (!L_45)
		{
			goto IL_0186;
		}
	}
	{
		// var min = Plane.MinY + size.y;
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_46 = __this->___Plane_5;
		NullCheck(L_46);
		float L_47 = L_46->___MinY_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_5;
		float L_49 = L_48.___y_1;
		V_8 = ((float)il2cpp_codegen_add(L_47, L_49));
		// var max = Plane.MaxY - size.y;
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_50 = __this->___Plane_5;
		NullCheck(L_50);
		float L_51 = L_50->___MaxY_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_5;
		float L_53 = L_52.___y_1;
		V_9 = ((float)il2cpp_codegen_subtract(L_51, L_53));
		// if (min > max)
		float L_54 = V_8;
		float L_55 = V_9;
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_0170;
		}
	}
	{
		// snapped.y = (min + max) * 0.5f;
		float L_56 = V_8;
		float L_57 = V_9;
		(&V_4)->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_56, L_57)), (0.5f)));
		goto IL_0186;
	}

IL_0170:
	{
		// snapped.y = Mathf.Clamp(local.y, min, max);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_3;
		float L_59 = L_58.___y_3;
		float L_60 = V_8;
		float L_61 = V_9;
		float L_62;
		L_62 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_59, L_60, L_61, NULL);
		(&V_4)->___y_3 = L_62;
	}

IL_0186:
	{
		// if (local != snapped)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_4;
		bool L_65;
		L_65 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_63, L_64, NULL);
		if (!L_65)
		{
			goto IL_0209;
		}
	}
	{
		// var delta       = oldPosition - hit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_66, L_67, NULL);
		V_10 = L_68;
		// var newPosition = Plane.transform.TransformPoint(snapped) + delta;
		LeanPlane_t084310645BC892EAA602A19E4BF1ABC187D64002* L_69 = __this->___Plane_5;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_4;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_70, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_73, NULL);
		V_11 = L_74;
		// if (Mathf.Approximately(oldPosition.x, newPosition.x) == false ||
		//     Mathf.Approximately(oldPosition.y, newPosition.y) == false ||
		//     Mathf.Approximately(oldPosition.z, newPosition.z) == false)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_2;
		float L_76 = L_75.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_11;
		float L_78 = L_77.___x_2;
		bool L_79;
		L_79 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_76, L_78, NULL);
		if (!L_79)
		{
			goto IL_01f0;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_2;
		float L_81 = L_80.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_11;
		float L_83 = L_82.___y_3;
		bool L_84;
		L_84 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_81, L_83, NULL);
		if (!L_84)
		{
			goto IL_01f0;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_2;
		float L_86 = L_85.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_11;
		float L_88 = L_87.___z_4;
		bool L_89;
		L_89 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_0209;
		}
	}

IL_01f0:
	{
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_11;
		NullCheck(L_90);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_90, L_91, NULL);
		return;
	}

IL_01fe:
	{
		// Debug.LogError("Failed to find camera. Either tag your cameras MainCamera, or set one in this component.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralF03A3476EC232709C329E3B26E93B3D42E28FA35, __this, NULL);
	}

IL_0209:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanConstrainToOrthographic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanConstrainToOrthographic__ctor_m575AF979BF9065F60BA8220941F84AC3AECBCC0A (LeanConstrainToOrthographic_t2334DAD0E8A7C602BF38C5EBCC99DA64B9D55786* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Lean.Common.LeanDelayedValue/FloatEvent Lean.Common.LeanDelayedValue::get_OnValueX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* LeanDelayedValue_get_OnValueX_m7F03DCC7328E78618197B53E1CE8B609770FFE3A (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnValueX { get { if (onValueX == null) onValueX = new FloatEvent(); return onValueX; } } [SerializeField] private FloatEvent onValueX;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_0 = __this->___onValueX_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnValueX { get { if (onValueX == null) onValueX = new FloatEvent(); return onValueX; } } [SerializeField] private FloatEvent onValueX;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_1 = (FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25*)il2cpp_codegen_object_new(FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m213A9CD051779B7137DA8B9C5A9349B32FFE7F53(L_1, NULL);
		__this->___onValueX_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueX_6), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnValueX { get { if (onValueX == null) onValueX = new FloatEvent(); return onValueX; } } [SerializeField] private FloatEvent onValueX;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_2 = __this->___onValueX_6;
		return L_2;
	}
}
// Lean.Common.LeanDelayedValue/FloatEvent Lean.Common.LeanDelayedValue::get_OnValueY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* LeanDelayedValue_get_OnValueY_m0121EF3761A9B9B3E6EE81CE64B0C5AE6B60D2A2 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnValueY { get { if (onValueY == null) onValueY = new FloatEvent(); return onValueY; } } [SerializeField] private FloatEvent onValueY;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_0 = __this->___onValueY_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnValueY { get { if (onValueY == null) onValueY = new FloatEvent(); return onValueY; } } [SerializeField] private FloatEvent onValueY;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_1 = (FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25*)il2cpp_codegen_object_new(FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m213A9CD051779B7137DA8B9C5A9349B32FFE7F53(L_1, NULL);
		__this->___onValueY_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueY_7), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnValueY { get { if (onValueY == null) onValueY = new FloatEvent(); return onValueY; } } [SerializeField] private FloatEvent onValueY;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_2 = __this->___onValueY_7;
		return L_2;
	}
}
// Lean.Common.LeanDelayedValue/FloatEvent Lean.Common.LeanDelayedValue::get_OnValueZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* LeanDelayedValue_get_OnValueZ_mF14011263AE2AC4D9DE010BCA9571A3E0F7A78A0 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnValueZ { get { if (onValueZ == null) onValueZ = new FloatEvent(); return onValueZ; } } [SerializeField] private FloatEvent onValueZ;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_0 = __this->___onValueZ_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnValueZ { get { if (onValueZ == null) onValueZ = new FloatEvent(); return onValueZ; } } [SerializeField] private FloatEvent onValueZ;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_1 = (FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25*)il2cpp_codegen_object_new(FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m213A9CD051779B7137DA8B9C5A9349B32FFE7F53(L_1, NULL);
		__this->___onValueZ_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueZ_8), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnValueZ { get { if (onValueZ == null) onValueZ = new FloatEvent(); return onValueZ; } } [SerializeField] private FloatEvent onValueZ;
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_2 = __this->___onValueZ_8;
		return L_2;
	}
}
// Lean.Common.LeanDelayedValue/Vector2Event Lean.Common.LeanDelayedValue::get_OnValueXY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* LeanDelayedValue_get_OnValueXY_m665555504D7AF286723E68535F029BAB55C499F8 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Event OnValueXY { get { if (onValueXY == null) onValueXY = new Vector2Event(); return onValueXY; } } [SerializeField] private Vector2Event onValueXY;
		Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* L_0 = __this->___onValueXY_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector2Event OnValueXY { get { if (onValueXY == null) onValueXY = new Vector2Event(); return onValueXY; } } [SerializeField] private Vector2Event onValueXY;
		Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* L_1 = (Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2*)il2cpp_codegen_object_new(Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector2Event__ctor_m54FD86454B8E67F248D5D5796AB0C95B48EE503D(L_1, NULL);
		__this->___onValueXY_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueXY_9), (void*)L_1);
	}

IL_0013:
	{
		// public Vector2Event OnValueXY { get { if (onValueXY == null) onValueXY = new Vector2Event(); return onValueXY; } } [SerializeField] private Vector2Event onValueXY;
		Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* L_2 = __this->___onValueXY_9;
		return L_2;
	}
}
// Lean.Common.LeanDelayedValue/Vector3Event Lean.Common.LeanDelayedValue::get_OnValueXYZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* LeanDelayedValue_get_OnValueXYZ_mDA3A1438E8F8C9F45316703BAA113114C12042C1 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3Event OnValueXYZ { get { if (onValueXYZ == null) onValueXYZ = new Vector3Event(); return onValueXYZ; } } [SerializeField] private Vector3Event onValueXYZ;
		Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* L_0 = __this->___onValueXYZ_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector3Event OnValueXYZ { get { if (onValueXYZ == null) onValueXYZ = new Vector3Event(); return onValueXYZ; } } [SerializeField] private Vector3Event onValueXYZ;
		Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* L_1 = (Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209*)il2cpp_codegen_object_new(Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3Event__ctor_mB1EDB61F194C0F9B801853CCAD7880179405A807(L_1, NULL);
		__this->___onValueXYZ_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueXYZ_10), (void*)L_1);
	}

IL_0013:
	{
		// public Vector3Event OnValueXYZ { get { if (onValueXYZ == null) onValueXYZ = new Vector3Event(); return onValueXYZ; } } [SerializeField] private Vector3Event onValueXYZ;
		Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* L_2 = __this->___onValueXYZ_10;
		return L_2;
	}
}
// System.Void Lean.Common.LeanDelayedValue::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_SetX_m85D6007318C8F5C393BB81AC9805729A40B714F9 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// pendingValue.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___pendingValue_12);
		float L_1 = ___value0;
		L_0->___x_2 = L_1;
		// pendingSet     = true;
		__this->___pendingSet_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_SetY_mE08AD33354622EC21DA64D817F6741598247BE0E (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// pendingValue.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___pendingValue_12);
		float L_1 = ___value0;
		L_0->___y_3 = L_1;
		// pendingSet     = true;
		__this->___pendingSet_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_SetZ_m9149069566524DC21084C19296C02FBE779D1C10 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// pendingValue.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___pendingValue_12);
		float L_1 = ___value0;
		L_0->___z_4 = L_1;
		// pendingSet     = true;
		__this->___pendingSet_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::SetXY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_SetXY_m3B0AB3F0322F4D1CD13704691B8519A59C9951A1 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// pendingValue.x = value.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___pendingValue_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		float L_2 = L_1.___x_0;
		L_0->___x_2 = L_2;
		// pendingValue.y = value.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___pendingValue_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___value0;
		float L_5 = L_4.___y_1;
		L_3->___y_3 = L_5;
		// pendingSet     = true;
		__this->___pendingSet_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::SetXYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_SetXYZ_m85B7CA88569583E43E5F2B074D9B9F28ECD65341 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// pendingValue = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___pendingValue_12 = L_0;
		// pendingSet   = true;
		__this->___pendingSet_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_Clear_m1909B337818B659A068E0DE496078CC723CFCB40 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pendingValue = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___pendingValue_12 = L_0;
		// pendingSet   = false;
		__this->___pendingSet_13 = (bool)0;
		// snapshots.Clear();
		Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* L_1 = __this->___snapshots_11;
		NullCheck(L_1);
		Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93(L_1, Queue_1_Clear_m6A5096768BB7B70FF55063723A718608E88CAD93_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_Update_mE41421D41088E0AD3672CB1D6D96B826AB0B3B4B (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (pendingSet == true)
		bool L_0 = __this->___pendingSet_13;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// var snapshot = default(Snapshot);
		il2cpp_codegen_initobj((&V_0), sizeof(Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3));
		// snapshot.Timestamp = Time.unscaledTime;
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		(&V_0)->___Timestamp_0 = L_1;
		// snapshot.Position  = pendingValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___pendingValue_12;
		(&V_0)->___Position_1 = L_2;
		// snapshots.Enqueue(snapshot);
		Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* L_3 = __this->___snapshots_11;
		Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 L_4 = V_0;
		NullCheck(L_3);
		Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF(L_3, L_4, Queue_1_Enqueue_mB7CD282ECCB046F6AE78E5BBA372825F92A66CAF_RuntimeMethod_var);
		// pendingValue = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___pendingValue_12 = L_5;
		// pendingSet   = false;
		__this->___pendingSet_13 = (bool)0;
		goto IL_008f;
	}

IL_0049:
	{
		// else if (AutoClear == true)
		bool L_6 = __this->___AutoClear_5;
		if (!L_6)
		{
			goto IL_008f;
		}
	}
	{
		// Clear();
		LeanDelayedValue_Clear_m1909B337818B659A068E0DE496078CC723CFCB40(__this, NULL);
		goto IL_008f;
	}

IL_0059:
	{
		// var age = Time.unscaledTime - snapshots.Peek().Timestamp;
		float L_7;
		L_7 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* L_8 = __this->___snapshots_11;
		NullCheck(L_8);
		Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 L_9;
		L_9 = Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0(L_8, Queue_1_Peek_m27521313D89F998D126A9BA18602E315977324D0_RuntimeMethod_var);
		float L_10 = L_9.___Timestamp_0;
		// if (age >= Delay)
		float L_11 = __this->___Delay_4;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_7, L_10))) >= ((float)L_11))))
		{
			goto IL_009d;
		}
	}
	{
		// var snapshot = snapshots.Dequeue();
		Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* L_12 = __this->___snapshots_11;
		NullCheck(L_12);
		Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 L_13;
		L_13 = Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7(L_12, Queue_1_Dequeue_m8F24959A5980A02EB4A383109D1BE8773A0D91A7_RuntimeMethod_var);
		V_1 = L_13;
		// Submit(snapshot.Position);
		Snapshot_tF6D7A1970F0249CDA46DF83E4AF78099CE277BF3 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___Position_1;
		LeanDelayedValue_Submit_m5D2D02022A050C664877F360144DF02D6DD25261(__this, L_15, NULL);
	}

IL_008f:
	{
		// while (snapshots.Count > 0)
		Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* L_16 = __this->___snapshots_11;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_inline(L_16, Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_RuntimeMethod_var);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::Submit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue_Submit_m5D2D02022A050C664877F360144DF02D6DD25261 (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onValueX != null)
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_0 = __this->___onValueX_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// onValueX.Invoke(value.x);
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_1 = __this->___onValueX_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___x_2;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0019:
	{
		// if (onValueY != null)
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_4 = __this->___onValueY_7;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// onValueY.Invoke(value.y);
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_5 = __this->___onValueY_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___value0;
		float L_7 = L_6.___y_3;
		NullCheck(L_5);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_5, L_7, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0032:
	{
		// if (onValueZ != null)
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_8 = __this->___onValueZ_8;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// onValueZ.Invoke(value.z);
		FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* L_9 = __this->___onValueZ_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___value0;
		float L_11 = L_10.___z_4;
		NullCheck(L_9);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_9, L_11, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_004b:
	{
		// if (onValueXY != null)
		Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* L_12 = __this->___onValueXY_9;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		// onValueXY.Invoke(value);
		Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* L_13 = __this->___onValueXY_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		NullCheck(L_13);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_13, L_15, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
	}

IL_0064:
	{
		// if (onValueXYZ != null)
		Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* L_16 = __this->___onValueXYZ_10;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// onValueXYZ.Invoke(value);
		Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* L_17 = __this->___onValueXYZ_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___value0;
		NullCheck(L_17);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_17, L_18, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanDelayedValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDelayedValue__ctor_m7595FC3B142025677ECE5D2DE79DAA8C697E165E (LeanDelayedValue_t13B661D8B8D2FFF7B53278901EC3F8C9C42954A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Delay = 0.1f;
		__this->___Delay_4 = (0.100000001f);
		// public bool AutoClear = true;
		__this->___AutoClear_5 = (bool)1;
		// private Queue<Snapshot> snapshots = new Queue<Snapshot>();
		Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* L_0 = (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58*)il2cpp_codegen_object_new(Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B(L_0, Queue_1__ctor_m2A6E610F012D32877C6F91CD1237AD579D0F865B_RuntimeMethod_var);
		__this->___snapshots_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___snapshots_11), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanDelayedValue/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m213A9CD051779B7137DA8B9C5A9349B32FFE7F53 (FloatEvent_tB9022CFCE91CC4CD45D22BC4CEFE1043339D7A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanDelayedValue/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m54FD86454B8E67F248D5D5796AB0C95B48EE503D (Vector2Event_t179098A20AB52AF213B79DB9785B886568EF6BA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanDelayedValue/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_mB1EDB61F194C0F9B801853CCAD7880179405A807 (Vector3Event_t6AC8EA8A8BE9B2379C5518421083EBB605BAE209* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176(__this, UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Events.UnityEvent Lean.Common.LeanFollow::get_OnReachedDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* LeanFollow_get_OnReachedDestination_mF7120DFBDCDA88E097A691B1FD7285443981333D (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnReachedDestination { get { if (onReachedDestination == null) onReachedDestination = new UnityEvent(); return onReachedDestination; } } [SerializeField] private UnityEvent onReachedDestination;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onReachedDestination_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public UnityEvent OnReachedDestination { get { if (onReachedDestination == null) onReachedDestination = new UnityEvent(); return onReachedDestination; } } [SerializeField] private UnityEvent onReachedDestination;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onReachedDestination_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onReachedDestination_6), (void*)L_1);
	}

IL_0013:
	{
		// public UnityEvent OnReachedDestination { get { if (onReachedDestination == null) onReachedDestination = new UnityEvent(); return onReachedDestination; } } [SerializeField] private UnityEvent onReachedDestination;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___onReachedDestination_6;
		return L_2;
	}
}
// System.Void Lean.Common.LeanFollow::ClearPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow_ClearPositions_m8A2C42BC4835FE876C13CC3592F598DE05ADFDA9 (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (positions != null)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positions_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// positions.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = __this->___positions_7;
		NullCheck(L_1);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_1, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanFollow::SnapToNextPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow_SnapToNextPosition_m6E0473C4EBD9A99B02B35488E601C4B9DB5F8EAF (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (positions != null && positions.Count > 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positions_7;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = __this->___positions_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// transform.position = positions[0];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = __this->___positions_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_4, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanFollow::AddPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow_AddPosition_m65F1A6FD8D8DCB13C83646172E1F50B4E8C9D8F1 (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (positions == null)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positions_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// positions = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___positions_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_7), (void*)L_1);
	}

IL_0013:
	{
		// if (positions.Count == 0 || Vector3.Distance(positions[positions.Count - 1], newPosition) > Threshold)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___positions_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_2, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = __this->___positions_7;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = __this->___positions_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_5, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___newPosition0;
		float L_9;
		L_9 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_8, NULL);
		float L_10 = __this->___Threshold_4;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0052;
		}
	}

IL_0046:
	{
		// positions.Add(newPosition);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___positions_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___newPosition0;
		NullCheck(L_11);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_12, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow_Update_m823712652EF97BA4A31B54035D4326B5766B7C04 (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (positions != null)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positions_7;
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		// var previousCount = positions.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = __this->___positions_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_0 = L_2;
		// TrimPositions();
		LeanFollow_TrimPositions_mB4BFB498E754AA0D98CB8EB93487924D1E2E6CF8(__this, NULL);
		// if (positions.Count > 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___positions_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_3, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		// var currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_1 = L_6;
		// var targetPosition  = positions[0];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = __this->___positions_7;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_7, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_2 = L_8;
		// currentPosition = Vector3.MoveTowards(currentPosition, targetPosition, Speed * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		float L_11 = __this->___Speed_5;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		V_1 = L_13;
		// transform.position = currentPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		return;
	}

IL_0062:
	{
		// else if (previousCount > 0)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		// if (onReachedDestination != null) onReachedDestination.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = __this->___onReachedDestination_6;
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// if (onReachedDestination != null) onReachedDestination.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = __this->___onReachedDestination_6;
		NullCheck(L_18);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_18, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanFollow::TrimPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow_TrimPositions_mB4BFB498E754AA0D98CB8EB93487924D1E2E6CF8 (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		goto IL_0034;
	}

IL_000e:
	{
		// var distance = Vector3.Distance(currentPosition, positions[0]);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___positions_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_3, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		// if (distance > Threshold)
		float L_6 = __this->___Threshold_4;
		if ((((float)L_5) > ((float)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		// positions.RemoveAt(0);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = __this->___positions_7;
		NullCheck(L_7);
		List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679(L_7, 0, List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_RuntimeMethod_var);
	}

IL_0034:
	{
		// while (positions.Count > 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = __this->___positions_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_8, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFollow__ctor_m9F45012BEC6BDBB761F8CB9D7A24529ADB8EAC79 (LeanFollow_t951B88CB1DE823398AF105344ED5965F55DAD3A3* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold = 0.001f;
		__this->___Threshold_4 = (0.00100000005f);
		// public float Speed = 1.0f;
		__this->___Speed_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanMaintainDistance::AddDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanMaintainDistance_AddDistance_mF6B26080AFAD0427E7C5B8DF05E0CB3EC71501AA (LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Distance += value;
		float L_0 = __this->___Distance_6;
		float L_1 = ___value0;
		__this->___Distance_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanMaintainDistance::MultiplyDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanMaintainDistance_MultiplyDistance_m8A74FD923003314321BDC2FFA62F526806F2FE3B (LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Distance *= value;
		float L_0 = __this->___Distance_6;
		float L_1 = ___value0;
		__this->___Distance_6 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanMaintainDistance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanMaintainDistance_Start_m98D77A2495BBFF7A5F7DCDFE65AC0BFF77E9AEDB (LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014* __this, const RuntimeMethod* method) 
{
	{
		// currentDistance = Distance;
		float L_0 = __this->___Distance_6;
		__this->___currentDistance_13 = L_0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanMaintainDistance::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanMaintainDistance_LateUpdate_mC12D771A72C790B119F35F1FC92A973869CC84F4 (LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var worldOrigin    = transform.parent != null ? transform.parent.position : Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		V_0 = G_B3_0;
		// var worldDirection = Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___Direction_4;
		V_1 = L_7;
		// if (worldDirection.sqrMagnitude == 0.0f)
		float L_8;
		L_8 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// worldDirection = transform.position - worldOrigin;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_11, NULL);
		V_1 = L_12;
		// if (worldDirection.sqrMagnitude == 0.0f)
		float L_13;
		L_13 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		// worldDirection = Random.onUnitSphere;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92(NULL);
		V_1 = L_14;
		goto IL_007e;
	}

IL_0068:
	{
		// else if (DirectionSpace == Space.Self)
		int32_t L_15 = __this->___DirectionSpace_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		// worldDirection = transform.TransformDirection(worldDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_16, L_17, NULL);
		V_1 = L_18;
	}

IL_007e:
	{
		// worldDirection = worldDirection.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_1 = L_19;
		// if (Clamp == true)
		bool L_20 = __this->___Clamp_8;
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		// Distance = Mathf.Clamp(Distance, ClampMin, ClampMax);
		float L_21 = __this->___Distance_6;
		float L_22 = __this->___ClampMin_9;
		float L_23 = __this->___ClampMax_10;
		float L_24;
		L_24 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_21, L_22, L_23, NULL);
		__this->___Distance_6 = L_24;
	}

IL_00ab:
	{
		// if (CollisionLayers != 0)
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = __this->___CollisionLayers_11;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		if (!L_26)
		{
			goto IL_0130;
		}
	}
	{
		// var hit    = default(RaycastHit);
		il2cpp_codegen_initobj((&V_3), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// var pointA = worldOrigin + worldDirection * ClampMin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29 = __this->___ClampMin_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_30, NULL);
		V_4 = L_31;
		// var pointB = worldOrigin + worldDirection * ClampMax;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		float L_34 = __this->___ClampMax_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_35, NULL);
		V_5 = L_36;
		// if (Physics.SphereCast(pointA, CollisionRadius, worldDirection, out hit, Vector3.Distance(pointA, pointB), CollisionLayers) == true)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		float L_38 = __this->___CollisionRadius_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_5;
		float L_42;
		L_42 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_40, L_41, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_43 = __this->___CollisionLayers_11;
		int32_t L_44;
		L_44 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_43, NULL);
		bool L_45;
		L_45 = Physics_SphereCast_m2A41FD7023EC5B89B69E0A8948325BEF46D9597C(L_37, L_38, L_39, (&V_3), L_42, L_44, NULL);
		if (!L_45)
		{
			goto IL_0130;
		}
	}
	{
		// var newDistance = hit.distance + ClampMin;
		float L_46;
		L_46 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
		float L_47 = __this->___ClampMin_9;
		V_6 = ((float)il2cpp_codegen_add(L_46, L_47));
		// if (newDistance < Distance)
		float L_48 = V_6;
		float L_49 = __this->___Distance_6;
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0130;
		}
	}
	{
		// Distance = newDistance;
		float L_50 = V_6;
		__this->___Distance_6 = L_50;
	}

IL_0130:
	{
		// var factor = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_51 = __this->___Damping_7;
		float L_52;
		L_52 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_53;
		L_53 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_51, L_52, NULL);
		V_2 = L_53;
		// currentDistance = Mathf.Lerp(currentDistance, Distance, factor);
		float L_54 = __this->___currentDistance_13;
		float L_55 = __this->___Distance_6;
		float L_56 = V_2;
		float L_57;
		L_57 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_54, L_55, L_56, NULL);
		__this->___currentDistance_13 = L_57;
		// transform.position = worldOrigin + worldDirection * currentDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_1;
		float L_61 = __this->___currentDistance_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_59, L_62, NULL);
		NullCheck(L_58);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_58, L_63, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanMaintainDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanMaintainDistance__ctor_mAE73BD4D925BDCFE82C6D30C9272D262EA919A1E (LeanMaintainDistance_t350BEB4EEB685000E4FDD006BF5BA15F705CF014* __this, const RuntimeMethod* method) 
{
	{
		// public Space DirectionSpace = Space.Self;
		__this->___DirectionSpace_5 = 1;
		// public float Distance = 10.0f;
		__this->___Distance_6 = (10.0f);
		// [FSA("Dampening")] public float Damping = 3.0f;
		__this->___Damping_7 = (3.0f);
		// public float ClampMin = 1.0f;
		__this->___ClampMin_9 = (1.0f);
		// public float ClampMax = 100.0f;
		__this->___ClampMax_10 = (100.0f);
		// public float CollisionRadius = 0.1f;
		__this->___CollisionRadius_12 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanManualRotate::set_Target(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_Target_m3E60E1B7DBDAE4E01253F1B45C7B965FF77267CE (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { set { target = value; } get { return target; } } [FSA("Target")] [SerializeField] private GameObject target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// public GameObject Target { set { target = value; } get { return target; } } [FSA("Target")] [SerializeField] private GameObject target;
		return;
	}
}
// UnityEngine.GameObject Lean.Common.LeanManualRotate::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LeanManualRotate_get_Target_m6A3DC98185910A219150A529732290012BD0E8C5 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { set { target = value; } get { return target; } } [FSA("Target")] [SerializeField] private GameObject target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_Space(UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_Space_mEBF29CF524E2AEDF6146D9303748EABB4046CEB1 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [FSA("Space")] [SerializeField] private Space space;
		int32_t L_0 = ___value0;
		__this->___space_5 = L_0;
		// public Space Space { set { space = value; } get { return space; } } [FSA("Space")] [SerializeField] private Space space;
		return;
	}
}
// UnityEngine.Space Lean.Common.LeanManualRotate::get_Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeanManualRotate_get_Space_m6D5A603C1FC8F1A3BAF8A1A80BC171ACDC898E71 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [FSA("Space")] [SerializeField] private Space space;
		int32_t L_0 = __this->___space_5;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_AxisA(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_AxisA_m7940EBBF17096CDE383D59D3F13A9B8DEE3FE6F8 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 AxisA { set { axisA = value; } get { return axisA; } } [FSA("AxisA")] [SerializeField] private Vector3 axisA = Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___axisA_6 = L_0;
		// public Vector3 AxisA { set { axisA = value; } get { return axisA; } } [FSA("AxisA")] [SerializeField] private Vector3 axisA = Vector3.down;
		return;
	}
}
// UnityEngine.Vector3 Lean.Common.LeanManualRotate::get_AxisA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LeanManualRotate_get_AxisA_mB4CA4816038FD9712BBAA9ACFADBA1B054A7FF96 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 AxisA { set { axisA = value; } get { return axisA; } } [FSA("AxisA")] [SerializeField] private Vector3 axisA = Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___axisA_6;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_AxisB(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_AxisB_m03ECBC40CDFF36062805A885264759FCCD144A8C (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 AxisB { set { axisB = value; } get { return axisB; } } [FSA("AxisB")] [SerializeField] private Vector3 axisB = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___axisB_7 = L_0;
		// public Vector3 AxisB { set { axisB = value; } get { return axisB; } } [FSA("AxisB")] [SerializeField] private Vector3 axisB = Vector3.right;
		return;
	}
}
// UnityEngine.Vector3 Lean.Common.LeanManualRotate::get_AxisB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LeanManualRotate_get_AxisB_mC8F4F9D1CB03A6C2218235DA2E73C5D9DE77CE8B (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 AxisB { set { axisB = value; } get { return axisB; } } [FSA("AxisB")] [SerializeField] private Vector3 axisB = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___axisB_7;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_Multiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_Multiplier_m32EDF1EE4AE22AE0B9844657F10D4D29287AEA16 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		float L_0 = ___value0;
		__this->___multiplier_8 = L_0;
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		return;
	}
}
// System.Single Lean.Common.LeanManualRotate::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanManualRotate_get_Multiplier_m23A7E5ED4E17201FAF23BA0FF24060E005BFBDC5 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		float L_0 = __this->___multiplier_8;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_Damping_mEA19A2EDD76FE48FCE28E37D01D25D9E3A4F2245 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = ___value0;
		__this->___damping_9 = L_0;
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		return;
	}
}
// System.Single Lean.Common.LeanManualRotate::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanManualRotate_get_Damping_m8A2F6DDD408B42C4C707BF9A8B08BFA908BDFC5D (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = __this->___damping_9;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_ScaleByTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_ScaleByTime_m78E1B51549B259D08FA76FC76E6C9907BF00AAD5 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ScaleByTime { set { scaleByTime = value; } get { return scaleByTime; } } [FSA("ScaleByTime")] [SerializeField] private bool scaleByTime;
		bool L_0 = ___value0;
		__this->___scaleByTime_10 = L_0;
		// public bool ScaleByTime { set { scaleByTime = value; } get { return scaleByTime; } } [FSA("ScaleByTime")] [SerializeField] private bool scaleByTime;
		return;
	}
}
// System.Boolean Lean.Common.LeanManualRotate::get_ScaleByTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanManualRotate_get_ScaleByTime_m0BDE38053C9905761233864770B2270AFB4E4362 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public bool ScaleByTime { set { scaleByTime = value; } get { return scaleByTime; } } [FSA("ScaleByTime")] [SerializeField] private bool scaleByTime;
		bool L_0 = __this->___scaleByTime_10;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::set_DefaultRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_set_DefaultRotation_m96B4197BD2CA34F03B0545D9FFCAD5A93274C98C (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 DefaultRotation { set { defaultRotation = value; } get { return defaultRotation; } } [FSA("DefaultRotation")] [SerializeField] private Vector3 defaultRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___defaultRotation_11 = L_0;
		// public Vector3 DefaultRotation { set { defaultRotation = value; } get { return defaultRotation; } } [FSA("DefaultRotation")] [SerializeField] private Vector3 defaultRotation;
		return;
	}
}
// UnityEngine.Vector3 Lean.Common.LeanManualRotate::get_DefaultRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LeanManualRotate_get_DefaultRotation_mC7FE52E0AE3C5D250F6C2E04C8CEEFAE88E29297 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 DefaultRotation { set { defaultRotation = value; } get { return defaultRotation; } } [FSA("DefaultRotation")] [SerializeField] private Vector3 defaultRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___defaultRotation_11;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualRotate::ResetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_ResetRotation_m8471604CEBA04EC196CB02078B3A38996CB1F10A (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform = target != null ? target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		// var oldRotation    = finalTransform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		V_1 = L_6;
		// if (space == Space.Self)
		int32_t L_7 = __this->___space_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		// finalTransform.localRotation = Quaternion.Euler(defaultRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___defaultRotation_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_9, NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_10, NULL);
		goto IL_0056;
	}

IL_0045:
	{
		// finalTransform.rotation = Quaternion.Euler(defaultRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___defaultRotation_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_12, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_13, NULL);
	}

IL_0056:
	{
		// remainingDelta *= Quaternion.Inverse(oldRotation) * finalTransform.localRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___remainingDelta_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_16, L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_14, L_19, NULL);
		__this->___remainingDelta_12 = L_20;
		// finalTransform.localRotation = oldRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_1;
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::SnapToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_SnapToTarget_m6ADC7F13CC8719D84C119AA7EDDD3078A345788E (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// UpdateRotation(1.0f);
		LeanManualRotate_UpdateRotation_m24F59CBB2606E36ED768D66A5F111063BAAAD2BE(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::StopRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_StopRotation_m614D326118DFA2049B1C3CF3B097762CB9F1B341 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// remainingDelta = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___remainingDelta_12 = L_0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::RotateA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_RotateA_m105CF5132B7FBFBC2E16A5BEADA5976A35E1927B (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// RotateAB(new Vector2(delta, 0.0f));
		float L_0 = ___delta0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), L_0, (0.0f), /*hidden argument*/NULL);
		LeanManualRotate_RotateAB_m308DC194EFABDFAB6581EEE4AF5E7D34B506B5A8(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::RotateB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_RotateB_m05D0C119B05F786DD06A3B886C569FA59934F667 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// RotateAB(new Vector2(0.0f, delta));
		float L_0 = ___delta0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.0f), L_0, /*hidden argument*/NULL);
		LeanManualRotate_RotateAB_m308DC194EFABDFAB6581EEE4AF5E7D34B506B5A8(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::RotateAB(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_RotateAB_m308DC194EFABDFAB6581EEE4AF5E7D34B506B5A8 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform = target != null ? target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		// var oldRotation    = finalTransform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		V_1 = L_6;
		// if (scaleByTime == true)
		bool L_7 = __this->___scaleByTime_10;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// delta *= Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___delta0;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_8, L_9, NULL);
		___delta0 = L_10;
	}

IL_003e:
	{
		// finalTransform.Rotate(axisA, delta.x * multiplier, space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___axisA_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___delta0;
		float L_14 = L_13.___x_0;
		float L_15 = __this->___multiplier_8;
		int32_t L_16 = __this->___space_5;
		NullCheck(L_11);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_11, L_12, ((float)il2cpp_codegen_multiply(L_14, L_15)), L_16, NULL);
		// finalTransform.Rotate(axisB, delta.y * multiplier, space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___axisB_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___delta0;
		float L_20 = L_19.___y_1;
		float L_21 = __this->___multiplier_8;
		int32_t L_22 = __this->___space_5;
		NullCheck(L_17);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_17, L_18, ((float)il2cpp_codegen_multiply(L_20, L_21)), L_22, NULL);
		// remainingDelta *= Quaternion.Inverse(oldRotation) * finalTransform.localRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___remainingDelta_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_0;
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_23, L_28, NULL);
		__this->___remainingDelta_12 = L_29;
		// finalTransform.localRotation = oldRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_1;
		NullCheck(L_30);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_Update_mBFEAA45FC22186F077B740C4C539A6C6DEB0B543 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var factor = LeanHelper.GetDampenFactor(damping, Time.deltaTime);
		float L_0 = __this->___damping_9;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2;
		L_2 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_0, L_1, NULL);
		V_0 = L_2;
		// UpdateRotation(factor);
		float L_3 = V_0;
		LeanManualRotate_UpdateRotation_m24F59CBB2606E36ED768D66A5F111063BAAAD2BE(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::UpdateRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate_UpdateRotation_m24F59CBB2606E36ED768D66A5F111063BAAAD2BE (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, float ___factor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform = target != null ? target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		// var newDelta       = Quaternion.Slerp(remainingDelta, Quaternion.identity, factor);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___remainingDelta_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		float L_7 = ___factor0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_5, L_6, L_7, NULL);
		V_0 = L_8;
		// finalTransform.localRotation = finalTransform.localRotation * Quaternion.Inverse(newDelta) * remainingDelta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = G_B3_0;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___remainingDelta_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_13, L_14, NULL);
		NullCheck(L_9);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_15, NULL);
		// remainingDelta = newDelta;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_0;
		__this->___remainingDelta_12 = L_16;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualRotate__ctor_m0C45A315DA8F5F6D920915711DAD9C2E99B85710 (LeanManualRotate_t520AA8887591005FAF29B1820986409AA9A9982A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 AxisA { set { axisA = value; } get { return axisA; } } [FSA("AxisA")] [SerializeField] private Vector3 axisA = Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		__this->___axisA_6 = L_0;
		// public Vector3 AxisB { set { axisB = value; } get { return axisB; } } [FSA("AxisB")] [SerializeField] private Vector3 axisB = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___axisB_7 = L_1;
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		__this->___multiplier_8 = (1.0f);
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		__this->___damping_9 = (10.0f);
		// private Quaternion remainingDelta = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___remainingDelta_12 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanManualTranslate::set_Target(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_Target_mB9BF1555FD4E497C4FC7376635148BDE20191695 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { set { target = value; } get { return target; } } [FSA("Target")] [SerializeField] private GameObject target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// public GameObject Target { set { target = value; } get { return target; } } [FSA("Target")] [SerializeField] private GameObject target;
		return;
	}
}
// UnityEngine.GameObject Lean.Common.LeanManualTranslate::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LeanManualTranslate_get_Target_m58723E6086DEC3E993042648B0D88A48191E5583 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { set { target = value; } get { return target; } } [FSA("Target")] [SerializeField] private GameObject target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_Space(UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_Space_m632E49226CF29ABA667C85C97E2B33584CA65CA6 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [FSA("Space")] [SerializeField] private Space space;
		int32_t L_0 = ___value0;
		__this->___space_5 = L_0;
		// public Space Space { set { space = value; } get { return space; } } [FSA("Space")] [SerializeField] private Space space;
		return;
	}
}
// UnityEngine.Space Lean.Common.LeanManualTranslate::get_Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeanManualTranslate_get_Space_m7CC675E4CC4C3FBB94563013BE44E7C8B6FDDA2C (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public Space Space { set { space = value; } get { return space; } } [FSA("Space")] [SerializeField] private Space space;
		int32_t L_0 = __this->___space_5;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_DirectionA(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_DirectionA_mF564EE6DEA85924902727EB2F19EFD4203BDF46A (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 DirectionA { set { directionA = value; } get { return directionA; } } [FSA("DirectionA")] [SerializeField] private Vector3 directionA = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___directionA_6 = L_0;
		// public Vector3 DirectionA { set { directionA = value; } get { return directionA; } } [FSA("DirectionA")] [SerializeField] private Vector3 directionA = Vector3.right;
		return;
	}
}
// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::get_DirectionA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LeanManualTranslate_get_DirectionA_mB0B3A5521F8570A82A9AE4918373195367F208AF (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 DirectionA { set { directionA = value; } get { return directionA; } } [FSA("DirectionA")] [SerializeField] private Vector3 directionA = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___directionA_6;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_DirectionB(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_DirectionB_m4F806286AAF464C16A15CB85CBEC8588707E91C9 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 DirectionB { set { directionB = value; } get { return directionB; } } [FSA("DirectionB")] [SerializeField] private Vector3 directionB = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___directionB_7 = L_0;
		// public Vector3 DirectionB { set { directionB = value; } get { return directionB; } } [FSA("DirectionB")] [SerializeField] private Vector3 directionB = Vector3.up;
		return;
	}
}
// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::get_DirectionB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LeanManualTranslate_get_DirectionB_mABDCDFAA093C8B449B043F766FF133E42972F6AF (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 DirectionB { set { directionB = value; } get { return directionB; } } [FSA("DirectionB")] [SerializeField] private Vector3 directionB = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___directionB_7;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_Multiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_Multiplier_mD101B948EEDCFBC096230F1828F636AF40A993DF (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		float L_0 = ___value0;
		__this->___multiplier_8 = L_0;
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		return;
	}
}
// System.Single Lean.Common.LeanManualTranslate::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanManualTranslate_get_Multiplier_mC8EE45DE461626AE4D0824B4AE73CBF914449C71 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		float L_0 = __this->___multiplier_8;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_Damping_m7A8BB213A6C21A32F35F76BB882D1476883E4C18 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = ___value0;
		__this->___damping_9 = L_0;
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		return;
	}
}
// System.Single Lean.Common.LeanManualTranslate::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanManualTranslate_get_Damping_m61B0F778141FAC4308EBA0F959B5437E70DDAEF2 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		float L_0 = __this->___damping_9;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_ScaleByTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_ScaleByTime_m8F390DFE88EA15F95615A1FE5518C2352F29764E (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ScaleByTime { set { scaleByTime = value; } get { return scaleByTime; } } [FSA("ScaleByTime")] [SerializeField] private bool scaleByTime;
		bool L_0 = ___value0;
		__this->___scaleByTime_10 = L_0;
		// public bool ScaleByTime { set { scaleByTime = value; } get { return scaleByTime; } } [FSA("ScaleByTime")] [SerializeField] private bool scaleByTime;
		return;
	}
}
// System.Boolean Lean.Common.LeanManualTranslate::get_ScaleByTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanManualTranslate_get_ScaleByTime_mECDB23A6A87E5559E22B37F9FACF7995F025C335 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public bool ScaleByTime { set { scaleByTime = value; } get { return scaleByTime; } } [FSA("ScaleByTime")] [SerializeField] private bool scaleByTime;
		bool L_0 = __this->___scaleByTime_10;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::set_DefaultPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_set_DefaultPosition_mE6365ABD944EA8864DB733770043CD742E2E2D89 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 DefaultPosition { set { defaultPosition = value; } get { return defaultPosition; } } [FSA("DefaultPosition")] [SerializeField] private Vector3 defaultPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___defaultPosition_11 = L_0;
		// public Vector3 DefaultPosition { set { defaultPosition = value; } get { return defaultPosition; } } [FSA("DefaultPosition")] [SerializeField] private Vector3 defaultPosition;
		return;
	}
}
// UnityEngine.Vector3 Lean.Common.LeanManualTranslate::get_DefaultPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LeanManualTranslate_get_DefaultPosition_m9F9B939AC0980C4700B9E0807F42536A6C5C02EF (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 DefaultPosition { set { defaultPosition = value; } get { return defaultPosition; } } [FSA("DefaultPosition")] [SerializeField] private Vector3 defaultPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___defaultPosition_11;
		return L_0;
	}
}
// System.Void Lean.Common.LeanManualTranslate::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_ResetPosition_m734FE11BE2E89F7CFA2C7627B7DB3B153067AB18 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform = target != null ? target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		// var oldPosition    = finalTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		V_1 = L_6;
		// if (space == Space.Self)
		int32_t L_7 = __this->___space_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		// finalTransform.localPosition = defaultPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___defaultPosition_11;
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		goto IL_004c;
	}

IL_0040:
	{
		// finalTransform.position = defaultPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___defaultPosition_11;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
	}

IL_004c:
	{
		// remainingDelta = finalTransform.localPosition - oldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		__this->___remainingDelta_12 = L_15;
		// finalTransform.localPosition = oldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::SnapToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_SnapToTarget_m858894529AEFB5FE310C054B84B172C1B34B377C (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePosition(1.0f);
		LeanManualTranslate_UpdatePosition_m91358111FAF976CA13E48BFD6B9782A275C2A402(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::TranslateA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_TranslateA_m17A36BDE03C880FAFFB3514E74B6C9985BDDE8BC (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(directionA * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___directionA_6;
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		LeanManualTranslate_Translate_mB598DDB352D241D8B982A4614BA8350BEED33DD5(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::TranslateB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_TranslateB_m2E642716D653EB070D0F8C1D542A5118FFDD5304 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(directionB * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___directionB_7;
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		LeanManualTranslate_Translate_mB598DDB352D241D8B982A4614BA8350BEED33DD5(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::TranslateAB(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_TranslateAB_m0030D918C31CCA662D39E430BC90F91988938003 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(directionA * magnitude.x + directionB * magnitude.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___directionA_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___magnitude0;
		float L_2 = L_1.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___directionB_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___magnitude0;
		float L_6 = L_5.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		LeanManualTranslate_Translate_mB598DDB352D241D8B982A4614BA8350BEED33DD5(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_Translate_mB598DDB352D241D8B982A4614BA8350BEED33DD5 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	{
		// if (space == Space.Self)
		int32_t L_0 = __this->___space_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		// var finalTransform = target != null ? target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B4_0 = L_3;
		goto IL_002a;
	}

IL_001f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		G_B4_0 = L_5;
	}

IL_002a:
	{
		// vector = finalTransform.TransformVector(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		NullCheck(G_B4_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(G_B4_0, L_6, NULL);
		___vector0 = L_7;
	}

IL_0032:
	{
		// TranslateWorld(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		LeanManualTranslate_TranslateWorld_m6B711592196FF84608851AF013853FA50B4FC11B(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_TranslateWorld_m6B711592196FF84608851AF013853FA50B4FC11B (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	{
		// if (scaleByTime == true)
		bool L_0 = __this->___scaleByTime_10;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// vector *= Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		___vector0 = L_3;
	}

IL_0015:
	{
		// remainingDelta += vector * multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___remainingDelta_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vector0;
		float L_6 = __this->___multiplier_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_7, NULL);
		__this->___remainingDelta_12 = L_8;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_Update_m1BC140E7663593081026DA7C1B0926CF286521A6 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var factor = LeanHelper.GetDampenFactor(damping, Time.deltaTime);
		float L_0 = __this->___damping_9;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2;
		L_2 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_0, L_1, NULL);
		V_0 = L_2;
		// UpdatePosition(factor);
		float L_3 = V_0;
		LeanManualTranslate_UpdatePosition_m91358111FAF976CA13E48BFD6B9782A275C2A402(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::UpdatePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate_UpdatePosition_m91358111FAF976CA13E48BFD6B9782A275C2A402 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, float ___factor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform = target != null ? target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		// var newDelta       = Vector3.Lerp(remainingDelta, Vector3.zero, factor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___remainingDelta_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_7 = ___factor0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_5, L_6, L_7, NULL);
		V_0 = L_8;
		// finalTransform.position += remainingDelta - newDelta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = G_B3_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___remainingDelta_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_13, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_14, NULL);
		// remainingDelta = newDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		__this->___remainingDelta_12 = L_15;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslate__ctor_m185F0BC9D37428F24D21CB980E24DE530542CA28 (LeanManualTranslate_tDE7AB425F0EF64A147708332871CB911551CE4FC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 DirectionA { set { directionA = value; } get { return directionA; } } [FSA("DirectionA")] [SerializeField] private Vector3 directionA = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___directionA_6 = L_0;
		// public Vector3 DirectionB { set { directionB = value; } get { return directionB; } } [FSA("DirectionB")] [SerializeField] private Vector3 directionB = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___directionB_7 = L_1;
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [FSA("Multiplier")] [SerializeField] private float multiplier = 1.0f;
		__this->___multiplier_8 = (1.0f);
		// public float Damping { set { damping = value; } get { return damping; } } [FSA("Dampening")] [SerializeField] private float damping = 10.0f;
		__this->___damping_9 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanManualTranslateRigidbody::TranslateA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_TranslateA_m6EF7620B34217FEAD7235501BCFC0C790C9BC676 (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(DirectionA * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___DirectionA_6;
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		LeanManualTranslateRigidbody_Translate_m494DB6287D6C54CCEDA81F3755A1DD77B692B335(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody::TranslateB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_TranslateB_mED27909903A342DC232C24EF0E238F4AF36D4AB9 (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(DirectionB * magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___DirectionB_7;
		float L_1 = ___magnitude0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		LeanManualTranslateRigidbody_Translate_m494DB6287D6C54CCEDA81F3755A1DD77B692B335(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody::TranslateAB(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_TranslateAB_m2ADBBAD138CC943301A8248DA3B94BB52A3541DE (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(DirectionA * magnitude.x + DirectionB * magnitude.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___DirectionA_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___magnitude0;
		float L_2 = L_1.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___DirectionB_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___magnitude0;
		float L_6 = L_5.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		LeanManualTranslateRigidbody_Translate_m494DB6287D6C54CCEDA81F3755A1DD77B692B335(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_Translate_m494DB6287D6C54CCEDA81F3755A1DD77B692B335 (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	{
		// if (Space == Space.Self)
		int32_t L_0 = __this->___Space_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		// var finalTransform = Target != null ? Target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B4_0 = L_3;
		goto IL_002a;
	}

IL_001f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		G_B4_0 = L_5;
	}

IL_002a:
	{
		// vector = finalTransform.TransformVector(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		NullCheck(G_B4_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(G_B4_0, L_6, NULL);
		___vector0 = L_7;
	}

IL_0032:
	{
		// TranslateWorld(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		LeanManualTranslateRigidbody_TranslateWorld_m3D228A1906F6827162E7005A4C1FC610B901E780(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_TranslateWorld_m3D228A1906F6827162E7005A4C1FC610B901E780 (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	{
		// if (ScaleByTime == true)
		bool L_0 = __this->___ScaleByTime_11;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// vector *= Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		___vector0 = L_3;
	}

IL_0015:
	{
		// remainingDelta += vector * Multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___remainingDelta_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vector0;
		float L_6 = __this->___Multiplier_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_7, NULL);
		__this->___remainingDelta_13 = L_8;
		// controlling = true;
		__this->___controlling_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody_Update_m48D424C79230FE36D4EBB4C888E4F93B55C0F95D (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform    = Target != null ? Target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		// var factor            = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_5 = __this->___Damping_9;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_7;
		L_7 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_5, L_6, NULL);
		V_0 = L_7;
		// var newRemainingDelta = Vector3.Lerp(remainingDelta, Vector3.zero, factor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___remainingDelta_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// var rigidbody         = finalTransform.GetComponent<Rigidbody>();
		NullCheck(G_B3_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
		L_12 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(G_B3_0, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_2 = L_12;
		// if (rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// if (ResetVelocityInUpdate == true)
		bool L_15 = __this->___ResetVelocityInUpdate_12;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		// rigidbody.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_16);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_17, NULL);
	}

IL_0066:
	{
		// rigidbody.velocity += (remainingDelta - newRemainingDelta) / Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___remainingDelta_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_22, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_25, NULL);
		NullCheck(L_19);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_19, L_26, NULL);
	}

IL_008d:
	{
		// if (controlling == false && Inertia > 0.0f && Damping > 0.0f)
		bool L_27 = __this->___controlling_14;
		if (L_27)
		{
			goto IL_00c2;
		}
	}
	{
		float L_28 = __this->___Inertia_10;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		float L_29 = __this->___Damping_9;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00c2;
		}
	}
	{
		// newRemainingDelta = Vector3.Lerp(newRemainingDelta, remainingDelta, Inertia);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___remainingDelta_13;
		float L_32 = __this->___Inertia_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_30, L_31, L_32, NULL);
		V_1 = L_33;
	}

IL_00c2:
	{
		// remainingDelta = newRemainingDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_1;
		__this->___remainingDelta_13 = L_34;
		// controlling    = false;
		__this->___controlling_14 = (bool)0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody__ctor_m39EADA22451A6DD43A53E9EE2C0386483AC2E4EB (LeanManualTranslateRigidbody_t4F75AF5EDE022D935E8D4A1F9789318E0409307D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 DirectionA = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___DirectionA_6 = L_0;
		// public Vector3 DirectionB = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___DirectionB_7 = L_1;
		// public float Multiplier = 1.0f;
		__this->___Multiplier_8 = (1.0f);
		// [FSA("Dampening")] public float Damping = 10.0f;
		__this->___Damping_9 = (10.0f);
		// public bool ResetVelocityInUpdate = true;
		__this->___ResetVelocityInUpdate_12 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::TranslateA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_TranslateA_m489AC7A06D2E28BE4726D93E604982AEB9FF7FE9 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(DirectionA * magnitude);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___DirectionA_6;
		float L_1 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		LeanManualTranslateRigidbody2D_Translate_mD36BB6846F2BF0AA3A64710DF7CE5643025CB6F9(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::TranslateB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_TranslateB_mD30B07DF1A9E5D194B3B80EBEA9672114CEC8722 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, float ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(DirectionB * magnitude);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___DirectionB_7;
		float L_1 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		LeanManualTranslateRigidbody2D_Translate_mD36BB6846F2BF0AA3A64710DF7CE5643025CB6F9(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::TranslateAB(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_TranslateAB_m2C9061D9F4A2516D2DFBAEF55311A8062721223B (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___magnitude0, const RuntimeMethod* method) 
{
	{
		// Translate(DirectionA * magnitude.x + DirectionB * magnitude.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___DirectionA_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___magnitude0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_0, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___DirectionB_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___magnitude0;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_4, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		LeanManualTranslateRigidbody2D_Translate_mD36BB6846F2BF0AA3A64710DF7CE5643025CB6F9(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_Translate_mD36BB6846F2BF0AA3A64710DF7CE5643025CB6F9 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	{
		// if (Space == Space.Self)
		int32_t L_0 = __this->___Space_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		// var finalTransform = Target != null ? Target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B4_0 = L_3;
		goto IL_002a;
	}

IL_001f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		G_B4_0 = L_5;
	}

IL_002a:
	{
		// vector = finalTransform.TransformVector(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		NullCheck(G_B4_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(G_B4_0, L_6, NULL);
		___vector0 = L_7;
	}

IL_0032:
	{
		// TranslateWorld(vector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		LeanManualTranslateRigidbody2D_TranslateWorld_m9459746F68A30C57A1089A27C3F8B23973722753(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::TranslateWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_TranslateWorld_m9459746F68A30C57A1089A27C3F8B23973722753 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	{
		// if (ScaleByTime == true)
		bool L_0 = __this->___ScaleByTime_10;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// vector *= Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		___vector0 = L_3;
	}

IL_0015:
	{
		// remainingDelta += (Vector2)vector * Multiplier;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___remainingDelta_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vector0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		float L_7 = __this->___Multiplier_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_8, NULL);
		__this->___remainingDelta_12 = L_9;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_FixedUpdate_m61E3CCDA89734AA9D54D72FFB5E742025B39AEEC (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// var finalTransform = Target != null ? Target.transform : transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Target_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		// var factor         = LeanHelper.GetDampenFactor(Damping, Time.fixedDeltaTime);
		float L_5 = __this->___Damping_9;
		float L_6;
		L_6 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_7;
		L_7 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_5, L_6, NULL);
		V_0 = L_7;
		// var newDelta       = Vector2.Lerp(remainingDelta, Vector2.zero, factor);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___remainingDelta_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// var rigidbody      = finalTransform.GetComponent<Rigidbody2D>();
		NullCheck(G_B3_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12;
		L_12 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(G_B3_0, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		V_2 = L_12;
		// if (rigidbody != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		// rigidbody.velocity += (remainingDelta - newDelta)  / Time.fixedDeltaTime;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = V_2;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_16 = L_15;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___remainingDelta_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_18, L_19, NULL);
		float L_21;
		L_21 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_20, L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_22, NULL);
		NullCheck(L_16);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_16, L_23, NULL);
	}

IL_007a:
	{
		// remainingDelta = newDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		__this->___remainingDelta_12 = L_24;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D_Update_mE9C394593F97568869CA740E8D44A9681396705E (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	{
		// if (ResetVelocityInUpdate == true)
		bool L_0 = __this->___ResetVelocityInUpdate_11;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// var finalGameObject = Target != null ? Target : gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		G_B4_0 = L_3;
		goto IL_0024;
	}

IL_001e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Target_4;
		G_B4_0 = L_4;
	}

IL_0024:
	{
		// var rigidbody       = finalGameObject.GetComponent<Rigidbody2D>();
		NullCheck(G_B4_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(G_B4_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		V_0 = L_5;
		// if (rigidbody != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// rigidbody.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_8);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_8, L_9, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanManualTranslateRigidbody2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanManualTranslateRigidbody2D__ctor_m952EC058E3449B3E869583D03CDAFBB1DDACE925 (LeanManualTranslateRigidbody2D_t46258EAE345C09587304EDD26451007EB05BFC2A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 DirectionA = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		__this->___DirectionA_6 = L_0;
		// public Vector2 DirectionB = Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		__this->___DirectionB_7 = L_1;
		// public float Multiplier = 1.0f;
		__this->___Multiplier_8 = (1.0f);
		// [FSA("Dampening")] public float Damping = 10.0f;
		__this->___Damping_9 = (10.0f);
		// public bool ResetVelocityInUpdate = true;
		__this->___ResetVelocityInUpdate_11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanOrbit::Rotate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_Rotate_m18D3B04F1E9E39236129FF4EF1A4CAB13FEE1AE9 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var sensitivity = GetSensitivity();
		float L_0;
		L_0 = LeanOrbit_GetSensitivity_m3188A15B806E20D45B9D285B99F37707B84A7CF2(__this, NULL);
		V_0 = L_0;
		// delta.x *= PitchSensitivity * sensitivity;
		float* L_1 = (&(&___delta0)->___x_0);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___PitchSensitivity_8;
		float L_5 = V_0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// delta.y *=   YawSensitivity * sensitivity;
		float* L_6 = (&(&___delta0)->___y_1);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = __this->___YawSensitivity_10;
		float L_10 = V_0;
		*((float*)L_7) = (float)((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		// RotatePitch(-delta.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___delta0;
		float L_12 = L_11.___y_1;
		LeanOrbit_RotatePitch_m74B156EEB58D48AE8624E9733E1973C7D8FC2E45(__this, ((-L_12)), NULL);
		// RotateYaw  ( delta.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___delta0;
		float L_14 = L_13.___x_0;
		LeanOrbit_RotateYaw_m94710F22704B5B8BD3BC0FBF28EEAE2DFC4E0BE6(__this, L_14, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanOrbit::RotatePitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_RotatePitch_m74B156EEB58D48AE8624E9733E1973C7D8FC2E45 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, float ___delta0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axis = Quaternion.Euler(0.0f, Yaw, 0.0f) * Vector3.right;
		float L_0 = __this->___Yaw_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_0, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		V_0 = L_3;
		// delta *= PitchSensitivity * GetSensitivity();
		float L_4 = ___delta0;
		float L_5 = __this->___PitchSensitivity_8;
		float L_6;
		L_6 = LeanOrbit_GetSensitivity_m3188A15B806E20D45B9D285B99F37707B84A7CF2(__this, NULL);
		___delta0 = ((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
		// transform.RotateAround(Pivot.position, axis, delta);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___Pivot_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = ___delta0;
		NullCheck(L_7);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_7, L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanOrbit::RotateYaw(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_RotateYaw_m94710F22704B5B8BD3BC0FBF28EEAE2DFC4E0BE6 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, float ___delta0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_0 = L_0;
		// delta *= YawSensitivity * GetSensitivity();
		float L_1 = ___delta0;
		float L_2 = __this->___YawSensitivity_10;
		float L_3;
		L_3 = LeanOrbit_GetSensitivity_m3188A15B806E20D45B9D285B99F37707B84A7CF2(__this, NULL);
		___delta0 = ((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// transform.RotateAround(Pivot.position, axis, delta);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___Pivot_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = ___delta0;
		NullCheck(L_4);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_4, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_Start_m9F895EFC0B93F81F0ECA1CF8F1C858EA48BC2259 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, const RuntimeMethod* method) 
{
	{
		// currentPitch = Pitch;
		float L_0 = __this->___Pitch_7;
		__this->___currentPitch_11 = L_0;
		// currentYaw   = Yaw;
		float L_1 = __this->___Yaw_9;
		__this->___currentYaw_12 = L_1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit_LateUpdate_m19003CACC5745BF14E1699F4E6271DD87AC603E4 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Pivot != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Pivot_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// var angles = Quaternion.LookRotation(Pivot.position - transform.position, Vector3.up).eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Pivot_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_6, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_1 = L_9;
		// Pitch = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___x_2;
		__this->___Pitch_7 = L_11;
		// Yaw   = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___y_3;
		__this->___Yaw_9 = L_13;
	}

IL_0054:
	{
		// var factor = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_14 = __this->___Damping_6;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_16;
		L_16 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_14, L_15, NULL);
		V_0 = L_16;
		// currentPitch = Mathf.Lerp(currentPitch, Pitch, factor);
		float L_17 = __this->___currentPitch_11;
		float L_18 = __this->___Pitch_7;
		float L_19 = V_0;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_17, L_18, L_19, NULL);
		__this->___currentPitch_11 = L_20;
		// currentYaw   = Mathf.Lerp(currentYaw  , Yaw  , factor);
		float L_21 = __this->___currentYaw_12;
		float L_22 = __this->___Yaw_9;
		float L_23 = V_0;
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_21, L_22, L_23, NULL);
		__this->___currentYaw_12 = L_24;
		// transform.localRotation = Quaternion.Euler(currentPitch, currentYaw, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_26 = __this->___currentPitch_11;
		float L_27 = __this->___currentYaw_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_26, L_27, (0.0f), NULL);
		NullCheck(L_25);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_25, L_28, NULL);
		// }
		return;
	}
}
// System.Single Lean.Common.LeanOrbit::GetSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanOrbit_GetSensitivity_m3188A15B806E20D45B9D285B99F37707B84A7CF2 (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Camera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (Camera.orthographic == false)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___Camera_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_2, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// return Camera.fieldOfView / 90.0f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___Camera_4;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_4, NULL);
		return ((float)(L_5/(90.0f)));
	}

IL_002d:
	{
		// return 1.0f;
		return (1.0f);
	}
}
// System.Void Lean.Common.LeanOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanOrbit__ctor_mD38D71BA5F283D21CDB361425837E35E149056EC (LeanOrbit_t7349BB399CEDCEB64AA4A94C31DBAE153474D37C* __this, const RuntimeMethod* method) 
{
	{
		// public float Damping = -1.0f;
		__this->___Damping_6 = (-1.0f);
		// public float PitchSensitivity = 0.25f;
		__this->___PitchSensitivity_8 = (0.25f);
		// public float YawSensitivity = 0.25f;
		__this->___YawSensitivity_10 = (0.25f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanPitchYaw::ResetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_ResetRotation_mB019B506CC3D07A71471B0C12C1C7C19C3338488 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, const RuntimeMethod* method) 
{
	{
		// Pitch = DefaultRotation.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___DefaultRotation_5);
		float L_1 = L_0->___x_0;
		__this->___Pitch_7 = L_1;
		// Yaw   = DefaultRotation.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___DefaultRotation_5);
		float L_3 = L_2->___y_1;
		__this->___Yaw_12 = L_3;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::RotateToPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_RotateToPosition_m68A278D591DEC61E9ED138EB1F1801E88F615AE6 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) 
{
	{
		// RotateToDirection(point - transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___point0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		LeanPitchYaw_RotateToDirection_m417E449F4AFF1FAB8B0595DBC45BBA623D13A063(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::RotateToDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_RotateToDirection_m417E449F4AFF1FAB8B0595DBC45BBA623D13A063 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xyz0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var longitude = Mathf.Atan2(xyz.x, xyz.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___xyz0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___xyz0;
		float L_3 = L_2.___z_4;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		// var latitude  = Mathf.Asin(xyz.y / xyz.magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___xyz0;
		float L_6 = L_5.___y_3;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___xyz0), NULL);
		float L_8;
		L_8 = asinf(((float)(L_6/L_7)));
		// var newPitch  = latitude  * -Mathf.Rad2Deg;
		V_0 = ((float)il2cpp_codegen_multiply(L_8, (-57.2957802f)));
		// var newYaw    = longitude *  Mathf.Rad2Deg;
		V_1 = ((float)il2cpp_codegen_multiply(L_4, (57.2957802f)));
		// var delta     = Mathf.DeltaAngle(Yaw, newYaw);
		float L_9 = __this->___Yaw_12;
		float L_10 = V_1;
		float L_11;
		L_11 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_9, L_10, NULL);
		V_2 = L_11;
		// Pitch = newPitch;
		float L_12 = V_0;
		__this->___Pitch_7 = L_12;
		// Yaw  += delta;
		float L_13 = __this->___Yaw_12;
		float L_14 = V_2;
		__this->___Yaw_12 = ((float)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::SetPitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_SetPitch_m61CE1EBD85F0D0A49995FA9CB252E037E473A72C (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, float ___newPitch0, const RuntimeMethod* method) 
{
	{
		// Pitch = newPitch;
		float L_0 = ___newPitch0;
		__this->___Pitch_7 = L_0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::SetYaw(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_SetYaw_m3FD0B3A8A8F8E56DE26AF02856246FDFDD81C73A (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, float ___newYaw0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var delta = Mathf.DeltaAngle(Yaw, newYaw);
		float L_0 = __this->___Yaw_12;
		float L_1 = ___newYaw0;
		float L_2;
		L_2 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Yaw  += delta;
		float L_3 = __this->___Yaw_12;
		float L_4 = V_0;
		__this->___Yaw_12 = ((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::RotateToScreenPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_RotateToScreenPosition_m4D5A9A42D26CB6783213A3358FCEA1F0E3130676 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var camera = LeanHelper.GetCamera(Camera, gameObject);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = LeanHelper_GetCamera_mF105E4D4ACEC5FD99C4FE5033B9FBFFFACC64F45(L_0, L_1, NULL);
		V_0 = L_2;
		// if (camera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// var xyz = camera.ScreenPointToRay(screenPosition).direction;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___screenPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_2), NULL);
		V_1 = L_9;
		// RotateToDirection(xyz);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		LeanPitchYaw_RotateToDirection_m417E449F4AFF1FAB8B0595DBC45BBA623D13A063(__this, L_10, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::Rotate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_Rotate_m20203FA4BB2B2A8B6C309A0F159928157462AF09 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var sensitivity = GetSensitivity();
		float L_0;
		L_0 = LeanPitchYaw_GetSensitivity_m6102AC840B16D4CDCFA30460387331B9F62877B5(__this, NULL);
		V_0 = L_0;
		// Yaw   += delta.x *   YawSensitivity * sensitivity;
		float L_1 = __this->___Yaw_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___delta0;
		float L_3 = L_2.___x_0;
		float L_4 = __this->___YawSensitivity_13;
		float L_5 = V_0;
		__this->___Yaw_12 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5))));
		// Pitch -= delta.y * PitchSensitivity * sensitivity;
		float L_6 = __this->___Pitch_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___delta0;
		float L_8 = L_7.___y_1;
		float L_9 = __this->___PitchSensitivity_8;
		float L_10 = V_0;
		__this->___Pitch_7 = ((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10))));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::RotatePitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_RotatePitch_m655C99582EFBE651E5949A4015E63DC8B63412A8 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Pitch -= delta * PitchSensitivity * GetSensitivity();
		float L_0 = __this->___Pitch_7;
		float L_1 = ___delta0;
		float L_2 = __this->___PitchSensitivity_8;
		float L_3;
		L_3 = LeanPitchYaw_GetSensitivity_m6102AC840B16D4CDCFA30460387331B9F62877B5(__this, NULL);
		__this->___Pitch_7 = ((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3))));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::RotateYaw(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_RotateYaw_mA43F6EEC8C0645175568E1E0F4A1BC9AD43D10D6 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Yaw += delta * YawSensitivity * GetSensitivity();
		float L_0 = __this->___Yaw_12;
		float L_1 = ___delta0;
		float L_2 = __this->___YawSensitivity_13;
		float L_3;
		L_3 = LeanPitchYaw_GetSensitivity_m6102AC840B16D4CDCFA30460387331B9F62877B5(__this, NULL);
		__this->___Yaw_12 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3))));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_Start_m9B85DB5CFBB5F0309431807ACD1B89E759D84B9D (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, const RuntimeMethod* method) 
{
	{
		// currentPitch = Pitch;
		float L_0 = __this->___Pitch_7;
		__this->___currentPitch_17 = L_0;
		// currentYaw   = Yaw;
		float L_1 = __this->___Yaw_12;
		__this->___currentYaw_18 = L_1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYaw::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw_LateUpdate_mEA13E71F4FD57D395DBC719D00EDD7787AD304C6 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (PitchClamp == true)
		bool L_0 = __this->___PitchClamp_9;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// Pitch = Mathf.Clamp(Pitch, PitchMin, PitchMax);
		float L_1 = __this->___Pitch_7;
		float L_2 = __this->___PitchMin_10;
		float L_3 = __this->___PitchMax_11;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, L_2, L_3, NULL);
		__this->___Pitch_7 = L_4;
	}

IL_0025:
	{
		// if (YawClamp == true)
		bool L_5 = __this->___YawClamp_14;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// Yaw = Mathf.Clamp(Yaw, YawMin, YawMax);
		float L_6 = __this->___Yaw_12;
		float L_7 = __this->___YawMin_15;
		float L_8 = __this->___YawMax_16;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_7, L_8, NULL);
		__this->___Yaw_12 = L_9;
	}

IL_004a:
	{
		// var factor = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_10 = __this->___Damping_6;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12;
		L_12 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_10, L_11, NULL);
		V_0 = L_12;
		// currentPitch = Mathf.Lerp(currentPitch, Pitch, factor);
		float L_13 = __this->___currentPitch_17;
		float L_14 = __this->___Pitch_7;
		float L_15 = V_0;
		float L_16;
		L_16 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_13, L_14, L_15, NULL);
		__this->___currentPitch_17 = L_16;
		// currentYaw   = Mathf.Lerp(currentYaw  , Yaw  , factor);
		float L_17 = __this->___currentYaw_18;
		float L_18 = __this->___Yaw_12;
		float L_19 = V_0;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_17, L_18, L_19, NULL);
		__this->___currentYaw_18 = L_20;
		// transform.localRotation = Quaternion.Euler(currentPitch, currentYaw, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_22 = __this->___currentPitch_17;
		float L_23 = __this->___currentYaw_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_22, L_23, (0.0f), NULL);
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_24, NULL);
		// }
		return;
	}
}
// System.Single Lean.Common.LeanPitchYaw::GetSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanPitchYaw_GetSensitivity_m6102AC840B16D4CDCFA30460387331B9F62877B5 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Camera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (Camera.orthographic == false)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___Camera_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_2, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// return Camera.fieldOfView / 90.0f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___Camera_4;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_4, NULL);
		return ((float)(L_5/(90.0f)));
	}

IL_002d:
	{
		// return 1.0f;
		return (1.0f);
	}
}
// System.Void Lean.Common.LeanPitchYaw::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYaw__ctor_mA0CE0AE1044C5B92486440CBBAB6511BC2BDD2E6 (LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* __this, const RuntimeMethod* method) 
{
	{
		// [FSA("Dampening")] public float Damping = -1.0f;
		__this->___Damping_6 = (-1.0f);
		// public float PitchSensitivity = 0.25f;
		__this->___PitchSensitivity_8 = (0.25f);
		// public bool PitchClamp = true;
		__this->___PitchClamp_9 = (bool)1;
		// public float PitchMin = -90.0f;
		__this->___PitchMin_10 = (-90.0f);
		// public float PitchMax = 90.0f;
		__this->___PitchMax_11 = (90.0f);
		// public float YawSensitivity = 0.25f;
		__this->___YawSensitivity_13 = (0.25f);
		// public float YawMin = -45.0f;
		__this->___YawMin_15 = (-45.0f);
		// public float YawMax = 45.0f;
		__this->___YawMax_16 = (45.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanPitchYawAutoRotate::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYawAutoRotate_OnEnable_m3770AB75F790E66258B66C1F5B03B2A9378FBB83 (LeanPitchYawAutoRotate_tCC962979BE1CF7315413C0AC0DAF859531DB48B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8_m25DA39A6B60E363CB43B174EBF516758A8FAEBDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedPitchYaw = GetComponent<LeanPitchYaw>();
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_0;
		L_0 = Component_GetComponent_TisLeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8_m25DA39A6B60E363CB43B174EBF516758A8FAEBDC(__this, Component_GetComponent_TisLeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8_m25DA39A6B60E363CB43B174EBF516758A8FAEBDC_RuntimeMethod_var);
		__this->___cachedPitchYaw_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedPitchYaw_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYawAutoRotate::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYawAutoRotate_LateUpdate_m3D2F958B8C5E61891380C6E4AA28673438E1F6FA (LeanPitchYawAutoRotate_tCC962979BE1CF7315413C0AC0DAF859531DB48B2* __this, const RuntimeMethod* method) 
{
	{
		// if (cachedPitchYaw.Pitch == expectedPitch && cachedPitchYaw.Yaw == expectedYaw)
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_0 = __this->___cachedPitchYaw_11;
		NullCheck(L_0);
		float L_1 = L_0->___Pitch_7;
		float L_2 = __this->___expectedPitch_9;
		if ((!(((float)L_1) == ((float)L_2))))
		{
			goto IL_008b;
		}
	}
	{
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_3 = __this->___cachedPitchYaw_11;
		NullCheck(L_3);
		float L_4 = L_3->___Yaw_12;
		float L_5 = __this->___expectedYaw_10;
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_008b;
		}
	}
	{
		// idleTime += Time.deltaTime;
		float L_6 = __this->___idleTime_7;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___idleTime_7 = ((float)il2cpp_codegen_add(L_6, L_7));
		// if (idleTime >= Delay)
		float L_8 = __this->___idleTime_7;
		float L_9 = __this->___Delay_4;
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_00a1;
		}
	}
	{
		// strength += Acceleration * Time.deltaTime;
		float L_10 = __this->___strength_8;
		float L_11 = __this->___Acceleration_6;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___strength_8 = ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_11, L_12))));
		// cachedPitchYaw.Yaw += Mathf.Clamp01(strength) * Speed * Time.deltaTime;
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_13 = __this->___cachedPitchYaw_11;
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_14 = L_13;
		NullCheck(L_14);
		float L_15 = L_14->___Yaw_12;
		float L_16 = __this->___strength_8;
		float L_17;
		L_17 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_16, NULL);
		float L_18 = __this->___Speed_5;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_14);
		L_14->___Yaw_12 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, L_18)), L_19))));
		goto IL_00a1;
	}

IL_008b:
	{
		// idleTime = 0.0f;
		__this->___idleTime_7 = (0.0f);
		// strength = 0.0f;
		__this->___strength_8 = (0.0f);
	}

IL_00a1:
	{
		// expectedPitch = cachedPitchYaw.Pitch;
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_20 = __this->___cachedPitchYaw_11;
		NullCheck(L_20);
		float L_21 = L_20->___Pitch_7;
		__this->___expectedPitch_9 = L_21;
		// expectedYaw   = cachedPitchYaw.Yaw;
		LeanPitchYaw_t1F78BAAECFDA52E241B71B36413E4C0819DD91F8* L_22 = __this->___cachedPitchYaw_11;
		NullCheck(L_22);
		float L_23 = L_22->___Yaw_12;
		__this->___expectedYaw_10 = L_23;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanPitchYawAutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPitchYawAutoRotate__ctor_mDFD599BA78A24CC5F1DF0CA47C2433836E6591B4 (LeanPitchYawAutoRotate_tCC962979BE1CF7315413C0AC0DAF859531DB48B2* __this, const RuntimeMethod* method) 
{
	{
		// public float Delay = 5.0f;
		__this->___Delay_4 = (5.0f);
		// public float Speed = 5.0f;
		__this->___Speed_5 = (5.0f);
		// public float Acceleration = 1.0f;
		__this->___Acceleration_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanRevertTransform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform_Start_mCA53609E4C2D28FEAD86260556B68AD127536516 (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	{
		// if (RecordOnStart == true)
		bool L_0 = __this->___RecordOnStart_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RecordTransform();
		LeanRevertTransform_RecordTransform_mC5E7F83A33E5BE464C799407A708CD9A6959F71F(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRevertTransform::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform_Revert_mB8A2F6F9FB8DBE7D5AC68029D4451EB9E2F79AE1 (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	{
		// reverting = true;
		__this->___reverting_15 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRevertTransform::StopRevert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform_StopRevert_m43370E278E055AFA35568B18DA6825218BB216ED (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	{
		// reverting = false;
		__this->___reverting_15 = (bool)0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRevertTransform::RecordTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform_RecordTransform_mC5E7F83A33E5BE464C799407A708CD9A6959F71F (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	{
		// TargetPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___TargetPosition_12 = L_1;
		// TargetRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___TargetRotation_13 = L_3;
		// TargetScale    = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		__this->___TargetScale_14 = L_5;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRevertTransform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform_Update_mFDB3EF9C2FED7BCC3FD66B388B67EA00D9B701EE (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (reverting == true)
		bool L_0 = __this->___reverting_15;
		if (!L_0)
		{
			goto IL_00aa;
		}
	}
	{
		// if (ReachedTarget() == true)
		bool L_1;
		L_1 = LeanRevertTransform_ReachedTarget_m153DF36F5C7937537F199A6955091FA09AE07416(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// reverting = false;
		__this->___reverting_15 = (bool)0;
		// return;
		return;
	}

IL_001b:
	{
		// var factor = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_2 = __this->___Damping_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_4;
		L_4 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_2, L_3, NULL);
		V_0 = L_4;
		// if (RevertPosition == true)
		bool L_5 = __this->___RevertPosition_6;
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// transform.localPosition = Vector3.Lerp(transform.localPosition, TargetPosition, factor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___TargetPosition_12;
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_9, L_10, NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_11, NULL);
	}

IL_0056:
	{
		// if (RevertRotation == true)
		bool L_12 = __this->___RevertRotation_7;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// transform.localRotation = Quaternion.Slerp(transform.localRotation, TargetRotation, factor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = __this->___TargetRotation_13;
		float L_17 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_15, L_16, L_17, NULL);
		NullCheck(L_13);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_13, L_18, NULL);
	}

IL_0080:
	{
		// if (RevertScale == true)
		bool L_19 = __this->___RevertScale_8;
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// transform.localScale = Vector3. Lerp(transform.localScale, TargetScale, factor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___TargetScale_14;
		float L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_22, L_23, L_24, NULL);
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_25, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Boolean Lean.Common.LeanRevertTransform::ReachedTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanRevertTransform_ReachedTarget_m153DF36F5C7937537F199A6955091FA09AE07416 (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	{
		// if (RevertPosition == true && Vector3.Distance(transform.localPosition, TargetPosition) > ThresholdPosition)
		bool L_0 = __this->___RevertPosition_6;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___TargetPosition_12;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		float L_5 = __this->___ThresholdPosition_9;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0028;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// if (RevertRotation == true && Quaternion.Angle(transform.localRotation, TargetRotation) > ThresholdRotation)
		bool L_6 = __this->___RevertRotation_7;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___TargetRotation_13;
		float L_10;
		L_10 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_8, L_9, NULL);
		float L_11 = __this->___ThresholdRotation_10;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0050;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// if (RevertScale == true && Vector3.Distance(transform.localScale, TargetScale) > ThresholdScale)
		bool L_12 = __this->___RevertScale_8;
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___TargetScale_14;
		float L_16;
		L_16 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_14, L_15, NULL);
		float L_17 = __this->___ThresholdScale_11;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0078;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0078:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Lean.Common.LeanRevertTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRevertTransform__ctor_mC27374A2DE787113F1E4F2F2AD3181C77EBB085B (LeanRevertTransform_t131F4AD6BBE1EB621C4220B3FFB1F0193FC92C22* __this, const RuntimeMethod* method) 
{
	{
		// [FSA("Dampening")] public float Damping = -1.0f;
		__this->___Damping_4 = (-1.0f);
		// public bool RecordOnStart = true;
		__this->___RecordOnStart_5 = (bool)1;
		// public bool RevertPosition = true;
		__this->___RevertPosition_6 = (bool)1;
		// public bool RevertRotation = true;
		__this->___RevertRotation_7 = (bool)1;
		// public bool RevertScale    = true;
		__this->___RevertScale_8 = (bool)1;
		// public float ThresholdPosition = 0.01f;
		__this->___ThresholdPosition_9 = (0.00999999978f);
		// public float ThresholdRotation = 0.01f;
		__this->___ThresholdRotation_10 = (0.00999999978f);
		// public float ThresholdScale    = 0.01f;
		__this->___ThresholdScale_11 = (0.00999999978f);
		// public Quaternion TargetRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___TargetRotation_13 = L_0;
		// public Vector3    TargetScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___TargetScale_14 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Transform Lean.Common.LeanRotateToPosition::get_FinalTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LeanRotateToPosition_get_FinalTransform_mED30D982EFB08F2643091C1B603F2AB94506E9C2 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Target != null ? Target : transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_2;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___Target_4;
		return L_3;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_SetPosition_m66221BE6677F1A2F08A2FA26597BA4E107E3DEBB (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var currentPosition = FinalTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = LeanRotateToPosition_get_FinalTransform_mED30D982EFB08F2643091C1B603F2AB94506E9C2(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// if (Vector3.Distance(currentPosition, position) > Threshold)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		float L_5 = __this->___Threshold_6;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0028;
		}
	}
	{
		// SetDelta(position - currentPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		LeanRotateToPosition_SetDelta_mB2D6DFC2935470790265A1D18EE1A4767DECDB10(__this, L_8, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::SetDelta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_SetDelta_mB2D6DFC2935470790265A1D18EE1A4767DECDB10 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta0, const RuntimeMethod* method) 
{
	{
		// if (delta.sqrMagnitude > 0.0f)
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___delta0), NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		// previousDelta = delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___delta0;
		__this->___previousDelta_11 = L_1;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_ResetPosition_mEBD8E97F2B881428904C041F1643BBF7C77AFD71 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) 
{
	{
		// previousPosition = FinalTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = LeanRotateToPosition_get_FinalTransform_mED30D982EFB08F2643091C1B603F2AB94506E9C2(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___previousPosition_10 = L_1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_Start_m0F3D82433329524B416F7C1D15F5BDA8CAC7A680 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) 
{
	{
		// ResetPosition();
		LeanRotateToPosition_ResetPosition_mEBD8E97F2B881428904C041F1643BBF7C77AFD71(__this, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_OnEnable_mE225C4819F7C1A798898B7EFEECF9BC31CD40E47 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) 
{
	{
		// ResetPosition();
		LeanRotateToPosition_ResetPosition_mEBD8E97F2B881428904C041F1643BBF7C77AFD71(__this, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_LateUpdate_mFA0527854B816EDD4CD8ACD3B210602907BD625F (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// var finalTransform = FinalTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = LeanRotateToPosition_get_FinalTransform_mED30D982EFB08F2643091C1B603F2AB94506E9C2(__this, NULL);
		V_0 = L_0;
		// var currentPosition = finalTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_1 = L_2;
		// if (Position == PositionType.PreviousPosition && Vector3.Distance(previousPosition, currentPosition) > Threshold)
		int32_t L_3 = __this->___Position_5;
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___previousPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_5, NULL);
		float L_7 = __this->___Threshold_6;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		// SetDelta(currentPosition - previousPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___previousPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		LeanRotateToPosition_SetDelta_mB2D6DFC2935470790265A1D18EE1A4767DECDB10(__this, L_10, NULL);
		// previousPosition = currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		__this->___previousPosition_10 = L_11;
	}

IL_0043:
	{
		// var currentRotation = finalTransform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_12, NULL);
		V_2 = L_13;
		// var factor          = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_14 = __this->___Damping_9;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_16;
		L_16 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_14, L_15, NULL);
		V_3 = L_16;
		// if (previousDelta.sqrMagnitude > 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___previousDelta_11);
		float L_18;
		L_18 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_17, NULL);
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// UpdateRotation(finalTransform, previousDelta);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___previousDelta_11;
		LeanRotateToPosition_UpdateRotation_mF3464E0117807F9BE6F158153351E7794033D3B7(__this, L_19, L_20, NULL);
	}

IL_007a:
	{
		// finalTransform.localRotation = Quaternion.Slerp(currentRotation, finalTransform.localRotation, factor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_0;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_23, NULL);
		float L_25 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_22, L_24, L_25, NULL);
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_26, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::UpdateRotation(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition_UpdateRotation_mF3464E0117807F9BE6F158153351E7794033D3B7 (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___finalTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (Invert == true)
		bool L_0 = __this->___Invert_7;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// vector = -vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_1, NULL);
		___vector1 = L_2;
	}

IL_0010:
	{
		// switch (RotateTo)
		int32_t L_3 = __this->___RotateTo_8;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0063;
			}
		}
	}
	{
		return;
	}

IL_002c:
	{
		// finalTransform.forward = vector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___finalTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector1;
		NullCheck(L_5);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_5, L_6, NULL);
		// break;
		return;
	}

IL_0034:
	{
		// var yaw = Mathf.Atan2(vector.x, vector.z) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector1;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___vector1;
		float L_10 = L_9.___z_4;
		float L_11;
		L_11 = atan2f(L_8, L_10);
		V_1 = ((float)il2cpp_codegen_multiply(L_11, (57.2957802f)));
		// finalTransform.rotation = Quaternion.Euler(0.0f, yaw, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___finalTransform0;
		float L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_13, (0.0f), NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// break;
		return;
	}

IL_0063:
	{
		// var roll = Mathf.Atan2(vector.x, vector.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___vector1;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___vector1;
		float L_18 = L_17.___y_3;
		float L_19;
		L_19 = atan2f(L_16, L_18);
		V_2 = ((float)il2cpp_codegen_multiply(L_19, (57.2957802f)));
		// finalTransform.rotation = Quaternion.Euler(0.0f, 0.0f, -roll);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ___finalTransform0;
		float L_21 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((-L_21)), NULL);
		NullCheck(L_20);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_22, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToPosition__ctor_m83B333EB18C85B811429C42C01A3E0A14B10094E (LeanRotateToPosition_t4D79D2194C973C1E01DB3762E8E39E5746C89936* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold = 0.1f;
		__this->___Threshold_6 = (0.100000001f);
		// [FSA("Dampening")] public float Damping = 10.0f;
		__this->___Damping_9 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanRotateToRigidbody2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToRigidbody2D_OnEnable_m829672E6B157928C7E2447FA98A457BA0A988AAF (LeanRotateToRigidbody2D_tBA691FDE99918E5C3ED91FD0069416A13F0ACC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedRigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___cachedRigidbody2D_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedRigidbody2D_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToRigidbody2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToRigidbody2D_Start_mAB846FC20BA97A959ED9A97714806554BCCA523A (LeanRotateToRigidbody2D_tBA691FDE99918E5C3ED91FD0069416A13F0ACC21* __this, const RuntimeMethod* method) 
{
	{
		// previousPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___previousPosition_5 = L_1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToRigidbody2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToRigidbody2D_LateUpdate_mECF53DAF3E3160C38EA68A1D8AFA28A8090D7BB0 (LeanRotateToRigidbody2D_tBA691FDE99918E5C3ED91FD0069416A13F0ACC21* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// var currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// var newVector       = (Vector2)(currentPosition - previousPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___previousPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		V_1 = L_5;
		// if (newVector.sqrMagnitude > 0.0f)
		float L_6;
		L_6 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_1), NULL);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// vector = newVector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		__this->___vector_6 = L_7;
	}

IL_0033:
	{
		// var currentRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		V_2 = L_9;
		// var factor          = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_10 = __this->___Damping_4;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12;
		L_12 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_10, L_11, NULL);
		V_3 = L_12;
		// if (vector.sqrMagnitude > 0.0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___vector_6);
		float L_14;
		L_14 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_13, NULL);
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		// var angle           = Mathf.Atan2(vector.x, vector.y) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___vector_6);
		float L_16 = L_15->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___vector_6);
		float L_18 = L_17->___y_1;
		float L_19;
		L_19 = atan2f(L_16, L_18);
		// var directionB      = (Vector2)transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_21, NULL);
		V_4 = L_22;
		// var angleB          = Mathf.Atan2(directionB.x, directionB.y) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_4;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_4;
		float L_26 = L_25.___y_1;
		float L_27;
		L_27 = atan2f(L_24, L_26);
		V_5 = ((float)il2cpp_codegen_multiply(L_27, (57.2957802f)));
		// var delta           = Mathf.DeltaAngle(angle, angleB);
		float L_28 = V_5;
		float L_29;
		L_29 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(((float)il2cpp_codegen_multiply(L_19, (57.2957802f))), L_28, NULL);
		// var angularVelocity = delta / Time.fixedDeltaTime;
		float L_30;
		L_30 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		V_6 = ((float)(L_29/L_30));
		// angularVelocity *= LeanHelper.GetDampenFactor(Damping, Time.fixedDeltaTime);
		float L_31 = V_6;
		float L_32 = __this->___Damping_4;
		float L_33;
		L_33 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_34;
		L_34 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_32, L_33, NULL);
		V_6 = ((float)il2cpp_codegen_multiply(L_31, L_34));
		// cachedRigidbody2D.angularVelocity = angularVelocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_35 = __this->___cachedRigidbody2D_7;
		float L_36 = V_6;
		NullCheck(L_35);
		Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390(L_35, L_36, NULL);
	}

IL_00e1:
	{
		// transform.localRotation = Quaternion.Slerp(currentRotation, transform.localRotation, factor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_39, NULL);
		float L_41 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_38, L_40, L_41, NULL);
		NullCheck(L_37);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_37, L_42, NULL);
		// previousPosition = currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		__this->___previousPosition_5 = L_43;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanRotateToRigidbody2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanRotateToRigidbody2D__ctor_mEFFFB2BB9A5F0DF73E309B04F2D0348A432CE86B (LeanRotateToRigidbody2D_tBA691FDE99918E5C3ED91FD0069416A13F0ACC21* __this, const RuntimeMethod* method) 
{
	{
		// [FSA("Dampening")] public float Damping = 10.0f;
		__this->___Damping_4 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Lean.Common.LeanSmoothedValue/FloatEvent Lean.Common.LeanSmoothedValue::get_OnValueX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* LeanSmoothedValue_get_OnValueX_mD216619202426B79CC92ED28B561C884C1909196 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnValueX { get { if (onValueX == null) onValueX = new FloatEvent(); return onValueX; } } [SerializeField] private FloatEvent onValueX;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_0 = __this->___onValueX_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnValueX { get { if (onValueX == null) onValueX = new FloatEvent(); return onValueX; } } [SerializeField] private FloatEvent onValueX;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_1 = (FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC*)il2cpp_codegen_object_new(FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m74DFE9DDA247BC7953E8F39AAC7E054D9D614789(L_1, NULL);
		__this->___onValueX_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueX_7), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnValueX { get { if (onValueX == null) onValueX = new FloatEvent(); return onValueX; } } [SerializeField] private FloatEvent onValueX;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_2 = __this->___onValueX_7;
		return L_2;
	}
}
// Lean.Common.LeanSmoothedValue/FloatEvent Lean.Common.LeanSmoothedValue::get_OnValueY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* LeanSmoothedValue_get_OnValueY_m277BF3A8AD33AF648EA6540BB3476FECC470CC06 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnValueY { get { if (onValueY == null) onValueY = new FloatEvent(); return onValueY; } } [SerializeField] private FloatEvent onValueY;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_0 = __this->___onValueY_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnValueY { get { if (onValueY == null) onValueY = new FloatEvent(); return onValueY; } } [SerializeField] private FloatEvent onValueY;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_1 = (FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC*)il2cpp_codegen_object_new(FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m74DFE9DDA247BC7953E8F39AAC7E054D9D614789(L_1, NULL);
		__this->___onValueY_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueY_8), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnValueY { get { if (onValueY == null) onValueY = new FloatEvent(); return onValueY; } } [SerializeField] private FloatEvent onValueY;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_2 = __this->___onValueY_8;
		return L_2;
	}
}
// Lean.Common.LeanSmoothedValue/FloatEvent Lean.Common.LeanSmoothedValue::get_OnValueZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* LeanSmoothedValue_get_OnValueZ_m1C13D29FACD431E88A353560CCB853CF4813FA07 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnValueZ { get { if (onValueZ == null) onValueZ = new FloatEvent(); return onValueZ; } } [SerializeField] private FloatEvent onValueZ;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_0 = __this->___onValueZ_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnValueZ { get { if (onValueZ == null) onValueZ = new FloatEvent(); return onValueZ; } } [SerializeField] private FloatEvent onValueZ;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_1 = (FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC*)il2cpp_codegen_object_new(FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m74DFE9DDA247BC7953E8F39AAC7E054D9D614789(L_1, NULL);
		__this->___onValueZ_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueZ_9), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnValueZ { get { if (onValueZ == null) onValueZ = new FloatEvent(); return onValueZ; } } [SerializeField] private FloatEvent onValueZ;
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_2 = __this->___onValueZ_9;
		return L_2;
	}
}
// Lean.Common.LeanSmoothedValue/Vector2Event Lean.Common.LeanSmoothedValue::get_OnValueXY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* LeanSmoothedValue_get_OnValueXY_mBF7C76120EA6CC1F68FE908C529CBACC14C02E19 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Event OnValueXY { get { if (onValueXY == null) onValueXY = new Vector2Event(); return onValueXY; } } [SerializeField] private Vector2Event onValueXY;
		Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* L_0 = __this->___onValueXY_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector2Event OnValueXY { get { if (onValueXY == null) onValueXY = new Vector2Event(); return onValueXY; } } [SerializeField] private Vector2Event onValueXY;
		Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* L_1 = (Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7*)il2cpp_codegen_object_new(Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector2Event__ctor_mA553FD114502BF075D773C03032EF0E11A5703DF(L_1, NULL);
		__this->___onValueXY_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueXY_10), (void*)L_1);
	}

IL_0013:
	{
		// public Vector2Event OnValueXY { get { if (onValueXY == null) onValueXY = new Vector2Event(); return onValueXY; } } [SerializeField] private Vector2Event onValueXY;
		Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* L_2 = __this->___onValueXY_10;
		return L_2;
	}
}
// Lean.Common.LeanSmoothedValue/Vector3Event Lean.Common.LeanSmoothedValue::get_OnValueXYZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* LeanSmoothedValue_get_OnValueXYZ_mD4C82792D9EBDCBA2D0CEF8054F9E349AE50B6DB (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3Event OnValueXYZ { get { if (onValueXYZ == null) onValueXYZ = new Vector3Event(); return onValueXYZ; } } [SerializeField] private Vector3Event onValueXYZ;
		Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* L_0 = __this->___onValueXYZ_11;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector3Event OnValueXYZ { get { if (onValueXYZ == null) onValueXYZ = new Vector3Event(); return onValueXYZ; } } [SerializeField] private Vector3Event onValueXYZ;
		Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* L_1 = (Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836*)il2cpp_codegen_object_new(Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3Event__ctor_m9D954E15F7D9800E9E88BC70AE36889440955497(L_1, NULL);
		__this->___onValueXYZ_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueXYZ_11), (void*)L_1);
	}

IL_0013:
	{
		// public Vector3Event OnValueXYZ { get { if (onValueXYZ == null) onValueXYZ = new Vector3Event(); return onValueXYZ; } } [SerializeField] private Vector3Event onValueXYZ;
		Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* L_2 = __this->___onValueXYZ_11;
		return L_2;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_SetX_m1EC06CB29B987DEB08252E8F53F18CE219297918 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// targetValue.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___targetValue_13);
		float L_1 = ___value0;
		L_0->___x_2 = L_1;
		// targetSet     = true;
		__this->___targetSet_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_SetY_mDA62C9154FD07727BD37E133A241BDA5DADA538E (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// targetValue.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___targetValue_13);
		float L_1 = ___value0;
		L_0->___y_3 = L_1;
		// targetSet     = true;
		__this->___targetSet_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_SetZ_mBD71B2A87B584342D62B05E2E890207FCC8D3A37 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// targetValue.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___targetValue_13);
		float L_1 = ___value0;
		L_0->___z_4 = L_1;
		// targetSet     = true;
		__this->___targetSet_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::SetXY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_SetXY_m3A8CF905BDE09CEADF90F9C72FFB6842D43BB3CD (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// targetValue.x = value.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___targetValue_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		float L_2 = L_1.___x_0;
		L_0->___x_2 = L_2;
		// targetValue.y = value.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___targetValue_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___value0;
		float L_5 = L_4.___y_1;
		L_3->___y_3 = L_5;
		// targetSet     = true;
		__this->___targetSet_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::SetXYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_SetXYZ_mCDF17315E465F746DFC467DE23F3ACD61FD4F181 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// targetValue = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___targetValue_13 = L_0;
		// targetSet   = true;
		__this->___targetSet_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::SnapToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_SnapToTarget_m3DAD498BC44DEA863E1028958005AA9713C5437E (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	{
		// currentValue = targetValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___targetValue_13;
		__this->___currentValue_12 = L_0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_Stop_mB90E1B6FB03C4DA2C6D84B1FB9910F41A8C1FD0F (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	{
		// targetValue = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___targetValue_13 = L_0;
		// targetSet   = false;
		__this->___targetSet_14 = (bool)0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_Update_mF5B7C92C90F8881FE89D8F2AF213D0A11762BF40 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (targetSet == true)
		bool L_0 = __this->___targetSet_14;
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		// var factor = LeanHelper.GetDampenFactor(Damping, Time.deltaTime);
		float L_1 = __this->___Damping_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3;
		L_3 = LeanHelper_GetDampenFactor_m4EF2B04148FB44EC70A796780C2E94642FADD605(L_1, L_2, NULL);
		V_0 = L_3;
		// currentValue = Vector3.Lerp(currentValue, targetValue, factor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___currentValue_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___targetValue_13;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_5, L_6, NULL);
		__this->___currentValue_12 = L_7;
		// currentValue = Vector3.MoveTowards(currentValue, targetValue, Threshold * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___currentValue_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___targetValue_13;
		float L_10 = __this->___Threshold_5;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		__this->___currentValue_12 = L_12;
		// Submit(currentValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___currentValue_12;
		LeanSmoothedValue_Submit_m45023578D7BDEEB53B953CCD9E8CB833CC3072B1(__this, L_13, NULL);
		// if (AutoStop == true && Vector3.SqrMagnitude(currentValue - targetValue) == 0.0f)
		bool L_14 = __this->___AutoStop_6;
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___currentValue_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___targetValue_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		float L_18;
		L_18 = Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline(L_17, NULL);
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// Stop();
		LeanSmoothedValue_Stop_mB90E1B6FB03C4DA2C6D84B1FB9910F41A8C1FD0F(__this, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::Submit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue_Submit_m45023578D7BDEEB53B953CCD9E8CB833CC3072B1 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onValueX != null)
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_0 = __this->___onValueX_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// onValueX.Invoke(value.x);
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_1 = __this->___onValueX_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___x_2;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0019:
	{
		// if (onValueY != null)
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_4 = __this->___onValueY_8;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// onValueY.Invoke(value.y);
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_5 = __this->___onValueY_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___value0;
		float L_7 = L_6.___y_3;
		NullCheck(L_5);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_5, L_7, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0032:
	{
		// if (onValueZ != null)
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_8 = __this->___onValueZ_9;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// onValueZ.Invoke(value.z);
		FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* L_9 = __this->___onValueZ_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___value0;
		float L_11 = L_10.___z_4;
		NullCheck(L_9);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_9, L_11, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_004b:
	{
		// if (onValueXY != null)
		Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* L_12 = __this->___onValueXY_10;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		// onValueXY.Invoke(value);
		Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* L_13 = __this->___onValueXY_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		NullCheck(L_13);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_13, L_15, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
	}

IL_0064:
	{
		// if (onValueXYZ != null)
		Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* L_16 = __this->___onValueXYZ_11;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// onValueXYZ.Invoke(value);
		Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* L_17 = __this->___onValueXYZ_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___value0;
		NullCheck(L_17);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_17, L_18, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSmoothedValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSmoothedValue__ctor_m3544BEB8753729DF63D1882950792FBD758658D8 (LeanSmoothedValue_t917E1A593F7BA42C068D7715827EC90857C81AF7* __this, const RuntimeMethod* method) 
{
	{
		// public float Damping = 10.0f;
		__this->___Damping_4 = (10.0f);
		// public float Threshold = 0.1f;
		__this->___Threshold_5 = (0.100000001f);
		// public bool AutoStop = true;
		__this->___AutoStop_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanSmoothedValue/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m74DFE9DDA247BC7953E8F39AAC7E054D9D614789 (FloatEvent_tECEF1345C1357FA03CFFB5364D2C6402BF2673CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanSmoothedValue/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_mA553FD114502BF075D773C03032EF0E11A5703DF (Vector2Event_tF04C921CEA533206A81278F6814990D0A5AB0DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanSmoothedValue/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_m9D954E15F7D9800E9E88BC70AE36889440955497 (Vector3Event_t0D3AB038B83E35D498DD9328DDC823A641A83836* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176(__this, UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanSpawnBetween::Spawn(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSpawnBetween_Spawn_m9069B46CCA0409BEADA32E8BDBF20825F2F0CAC1 (LeanSpawnBetween_t998C2B8572FBA232159E1BA4E6CF78FD2A90DD55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_3 = NULL;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	{
		// if (Prefab != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Prefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00ef;
		}
	}
	{
		// var direction = Vector3.Normalize(end - start);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___end1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_4, NULL);
		V_0 = L_5;
		// var angle = Mathf.Atan2(direction.x, direction.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = atan2f(L_7, L_9);
		V_1 = ((float)il2cpp_codegen_multiply(L_10, (57.2957802f)));
		// var instance = Instantiate(Prefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___Prefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_11, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		// instance.position = start;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___start0;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// instance.rotation = Quaternion.Euler(0.0f, 0.0f, -angle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_13;
		float L_16 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((-L_16)), NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_17, NULL);
		// instance.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_15;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// var force = Vector3.Distance(start, end) * VelocityMultiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___end1;
		float L_22;
		L_22 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_20, L_21, NULL);
		float L_23 = __this->___VelocityMultiplier_5;
		V_2 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		// if (VelocityMin >= 0.0f)
		float L_24 = __this->___VelocityMin_6;
		G_B2_0 = L_18;
		if ((!(((float)L_24) >= ((float)(0.0f)))))
		{
			G_B3_0 = L_18;
			goto IL_0094;
		}
	}
	{
		// force = Mathf.Max(force, VelocityMin);
		float L_25 = V_2;
		float L_26 = __this->___VelocityMin_6;
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_25, L_26, NULL);
		V_2 = L_27;
		G_B3_0 = G_B2_0;
	}

IL_0094:
	{
		// if (VelocityMax >= 0.0f)
		float L_28 = __this->___VelocityMax_7;
		G_B4_0 = G_B3_0;
		if ((!(((float)L_28) >= ((float)(0.0f)))))
		{
			G_B5_0 = G_B3_0;
			goto IL_00ae;
		}
	}
	{
		// force = Mathf.Min(force, VelocityMax);
		float L_29 = V_2;
		float L_30 = __this->___VelocityMax_7;
		float L_31;
		L_31 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_29, L_30, NULL);
		V_2 = L_31;
		G_B5_0 = G_B4_0;
	}

IL_00ae:
	{
		// var rigidbody3D = instance.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = G_B5_0;
		NullCheck(L_32);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33;
		L_33 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_32, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_3 = L_33;
		// if (rigidbody3D != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = L_32;
		if (!L_35)
		{
			G_B7_0 = L_32;
			goto IL_00cb;
		}
	}
	{
		// rigidbody3D.velocity = direction * force;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_0;
		float L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, L_38, NULL);
		NullCheck(L_36);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_36, L_39, NULL);
		G_B7_0 = G_B6_0;
	}

IL_00cb:
	{
		// var rigidbody2D = instance.GetComponent<Rigidbody2D>();
		NullCheck(G_B7_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_40;
		L_40 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(G_B7_0, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		V_4 = L_40;
		// if (rigidbody2D != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_41 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_00ef;
		}
	}
	{
		// rigidbody2D.velocity = direction * force;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_43 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		float L_45 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_45, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_46, NULL);
		NullCheck(L_43);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_43, L_47, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSpawnBetween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSpawnBetween__ctor_mCDD6947C8ADCC8A82B7D7A9BBE0CD1FC0AC8D907 (LeanSpawnBetween_t998C2B8572FBA232159E1BA4E6CF78FD2A90DD55* __this, const RuntimeMethod* method) 
{
	{
		// public float VelocityMultiplier = 1.0f;
		__this->___VelocityMultiplier_5 = (1.0f);
		// public float VelocityMin = -1.0f;
		__this->___VelocityMin_6 = (-1.0f);
		// public float VelocityMax = -1.0f;
		__this->___VelocityMax_7 = (-1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanSwap::UpdateSwap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSwap_UpdateSwap_m549A5FDDA97FA83DC2B0DAF83DB56118C1933164 (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanHelper_Destroy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m473AB3740CD3675357B30052D0605BE3A34AAE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var prefab = GetPrefab();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = LeanSwap_GetPrefab_m249936552EFEEB85BC5B2717498BAFF891553A21(__this, NULL);
		V_0 = L_0;
		// if (clone != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___clone_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// if (clonePrefab == prefab)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___clonePrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// LeanHelper.Destroy(clone.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___clone_6;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = LeanHelper_Destroy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m473AB3740CD3675357B30052D0605BE3A34AAE29(L_7, LeanHelper_Destroy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m473AB3740CD3675357B30052D0605BE3A34AAE29_RuntimeMethod_var);
		// clone       = null;
		__this->___clone_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clone_6), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// clonePrefab = null;
		__this->___clonePrefab_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clonePrefab_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_0043:
	{
		// if (Prefabs != null && Prefabs.Count > 0)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9 = __this->___Prefabs_5;
		if (!L_9)
		{
			goto IL_0083;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___Prefabs_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_10, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		// clone = Instantiate(prefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_12, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		__this->___clone_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clone_6), (void*)L_13);
		// clone.transform.SetParent(transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___clone_6;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_15, L_16, (bool)0, NULL);
		// clonePrefab = prefab;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		__this->___clonePrefab_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clonePrefab_7), (void*)L_17);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSwap::SwapTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSwap_SwapTo_m0A1F401A15759CAD81AE1467587C90E90DDABFAE (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, int32_t ___newIndex0, const RuntimeMethod* method) 
{
	{
		// Index = newIndex;
		int32_t L_0 = ___newIndex0;
		__this->___Index_4 = L_0;
		// UpdateSwap();
		LeanSwap_UpdateSwap_m549A5FDDA97FA83DC2B0DAF83DB56118C1933164(__this, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSwap::SwapToPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSwap_SwapToPrevious_m29856C58AF05FF85941A68F413071B25D984D343 (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) 
{
	{
		// Index -= 1;
		int32_t L_0 = __this->___Index_4;
		__this->___Index_4 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// UpdateSwap();
		LeanSwap_UpdateSwap_m549A5FDDA97FA83DC2B0DAF83DB56118C1933164(__this, NULL);
		// }
		return;
	}
}
// System.Void Lean.Common.LeanSwap::SwapToNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSwap_SwapToNext_m569656C17409B34884FF9224388450B6FBA894FA (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) 
{
	{
		// Index += 1;
		int32_t L_0 = __this->___Index_4;
		__this->___Index_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// UpdateSwap();
		LeanSwap_UpdateSwap_m549A5FDDA97FA83DC2B0DAF83DB56118C1933164(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Transform Lean.Common.LeanSwap::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LeanSwap_GetPrefab_m249936552EFEEB85BC5B2717498BAFF891553A21 (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Prefabs != null && Prefabs.Count > 0)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___Prefabs_5;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___Prefabs_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_1, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// Index %= Prefabs.Count;
		int32_t L_3 = __this->___Index_4;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___Prefabs_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_4, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		__this->___Index_4 = ((int32_t)(L_3%L_5));
		// if (Index < 0)
		int32_t L_6 = __this->___Index_4;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// Index += Prefabs.Count;
		int32_t L_7 = __this->___Index_4;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_8 = __this->___Prefabs_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_8, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		__this->___Index_4 = ((int32_t)il2cpp_codegen_add(L_7, L_9));
	}

IL_004f:
	{
		// return Prefabs[Index];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___Prefabs_5;
		int32_t L_11 = __this->___Index_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_10, L_11, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		return L_12;
	}

IL_0061:
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// System.Void Lean.Common.LeanSwap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanSwap__ctor_m0B6BC90FCC6618614153B7D38AAB1CF10EC434B8 (LeanSwap_tB0628A252DF36BCAF81782AFFBACB1993EC90165* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Lean.Common.LeanThresholdDelta/FloatEvent Lean.Common.LeanThresholdDelta::get_OnDeltaX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* LeanThresholdDelta_get_OnDeltaX_m41B0A74D5CF02391D3B40FABEC92942DA84F2CED (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnDeltaX { get { if (onDeltaX == null) onDeltaX = new FloatEvent(); return onDeltaX; } } [SerializeField] private FloatEvent onDeltaX;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_0 = __this->___onDeltaX_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnDeltaX { get { if (onDeltaX == null) onDeltaX = new FloatEvent(); return onDeltaX; } } [SerializeField] private FloatEvent onDeltaX;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_1 = (FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3*)il2cpp_codegen_object_new(FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m71979A6A2707B695460360E98FA333DE750EF6A3(L_1, NULL);
		__this->___onDeltaX_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDeltaX_7), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnDeltaX { get { if (onDeltaX == null) onDeltaX = new FloatEvent(); return onDeltaX; } } [SerializeField] private FloatEvent onDeltaX;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_2 = __this->___onDeltaX_7;
		return L_2;
	}
}
// Lean.Common.LeanThresholdDelta/FloatEvent Lean.Common.LeanThresholdDelta::get_OnDeltaY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* LeanThresholdDelta_get_OnDeltaY_m885229A0ED4469A551DEB43455A2B61B5EE31606 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnDeltaY { get { if (onDeltaY == null) onDeltaY = new FloatEvent(); return onDeltaY; } } [SerializeField] private FloatEvent onDeltaY;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_0 = __this->___onDeltaY_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnDeltaY { get { if (onDeltaY == null) onDeltaY = new FloatEvent(); return onDeltaY; } } [SerializeField] private FloatEvent onDeltaY;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_1 = (FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3*)il2cpp_codegen_object_new(FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m71979A6A2707B695460360E98FA333DE750EF6A3(L_1, NULL);
		__this->___onDeltaY_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDeltaY_8), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnDeltaY { get { if (onDeltaY == null) onDeltaY = new FloatEvent(); return onDeltaY; } } [SerializeField] private FloatEvent onDeltaY;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_2 = __this->___onDeltaY_8;
		return L_2;
	}
}
// Lean.Common.LeanThresholdDelta/FloatEvent Lean.Common.LeanThresholdDelta::get_OnDeltaZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* LeanThresholdDelta_get_OnDeltaZ_m1E29E3BB81722A5EA69863BC1BAF2018EE356D75 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnDeltaZ { get { if (onDeltaZ == null) onDeltaZ = new FloatEvent(); return onDeltaZ; } } [SerializeField] private FloatEvent onDeltaZ;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_0 = __this->___onDeltaZ_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnDeltaZ { get { if (onDeltaZ == null) onDeltaZ = new FloatEvent(); return onDeltaZ; } } [SerializeField] private FloatEvent onDeltaZ;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_1 = (FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3*)il2cpp_codegen_object_new(FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m71979A6A2707B695460360E98FA333DE750EF6A3(L_1, NULL);
		__this->___onDeltaZ_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDeltaZ_9), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnDeltaZ { get { if (onDeltaZ == null) onDeltaZ = new FloatEvent(); return onDeltaZ; } } [SerializeField] private FloatEvent onDeltaZ;
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_2 = __this->___onDeltaZ_9;
		return L_2;
	}
}
// Lean.Common.LeanThresholdDelta/Vector2Event Lean.Common.LeanThresholdDelta::get_OnDeltaXY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* LeanThresholdDelta_get_OnDeltaXY_mA5DFA9A4E2695945FF739FAA23605FAEF7BE6E15 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Event OnDeltaXY { get { if (onDeltaXY == null) onDeltaXY = new Vector2Event(); return onDeltaXY; } } [SerializeField] private Vector2Event onDeltaXY;
		Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* L_0 = __this->___onDeltaXY_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector2Event OnDeltaXY { get { if (onDeltaXY == null) onDeltaXY = new Vector2Event(); return onDeltaXY; } } [SerializeField] private Vector2Event onDeltaXY;
		Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* L_1 = (Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311*)il2cpp_codegen_object_new(Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector2Event__ctor_m452E28395584522CA1CF401053BBE2A1A284C761(L_1, NULL);
		__this->___onDeltaXY_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDeltaXY_10), (void*)L_1);
	}

IL_0013:
	{
		// public Vector2Event OnDeltaXY { get { if (onDeltaXY == null) onDeltaXY = new Vector2Event(); return onDeltaXY; } } [SerializeField] private Vector2Event onDeltaXY;
		Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* L_2 = __this->___onDeltaXY_10;
		return L_2;
	}
}
// Lean.Common.LeanThresholdDelta/Vector3Event Lean.Common.LeanThresholdDelta::get_OnDeltaXYZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* LeanThresholdDelta_get_OnDeltaXYZ_mF882B8A52059143CB3827772AA8DF62F48D0313B (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3Event OnDeltaXYZ { get { if (onDeltaXYZ == null) onDeltaXYZ = new Vector3Event(); return onDeltaXYZ; } } [SerializeField] private Vector3Event onDeltaXYZ;
		Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* L_0 = __this->___onDeltaXYZ_11;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector3Event OnDeltaXYZ { get { if (onDeltaXYZ == null) onDeltaXYZ = new Vector3Event(); return onDeltaXYZ; } } [SerializeField] private Vector3Event onDeltaXYZ;
		Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* L_1 = (Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2*)il2cpp_codegen_object_new(Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3Event__ctor_mE989FDADD7FBFCA4AF3C72F92395E672B48161A4(L_1, NULL);
		__this->___onDeltaXYZ_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDeltaXYZ_11), (void*)L_1);
	}

IL_0013:
	{
		// public Vector3Event OnDeltaXYZ { get { if (onDeltaXYZ == null) onDeltaXYZ = new Vector3Event(); return onDeltaXYZ; } } [SerializeField] private Vector3Event onDeltaXYZ;
		Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* L_2 = __this->___onDeltaXYZ_11;
		return L_2;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::AddXY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta_AddXY_mB43AC5C3A3B0FEAE483410EB05B845EF06D55770 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.x += delta.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___delta0;
		float L_5 = L_4.___x_0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_5));
		// Current.y += delta.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___Current_4);
		float* L_7 = (&L_6->___y_3);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___delta0;
		float L_11 = L_10.___y_1;
		*((float*)L_8) = (float)((float)il2cpp_codegen_add(L_9, L_11));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::AddXYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta_AddXYZ_m9AABA7BB1B04A550027B3E68E896DFE9F149FF52 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta0, const RuntimeMethod* method) 
{
	{
		// Current += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Current_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___delta0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		__this->___Current_4 = L_2;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::AddX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta_AddX_m13A6A62C812119ECF419CABA5276CCE23381BA0E (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.x += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = ___delta0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::AddY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta_AddY_m94814BD6A4145E157906CDFAEDAD535E7C62BA85 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.y += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___y_3);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = ___delta0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::AddZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta_AddZ_m4B77000749E09C3911710F2F31794D417CE6E34E (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.z += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___z_4);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = ___delta0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta_Update_m6FDFFC1C20667EB238F153D7D68B3062838A44A2 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var delta = Current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Current_4;
		V_0 = L_0;
		// if (Threshold > 0.0f)
		float L_1 = __this->___Threshold_5;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		// var stepX = (int)(delta.x / Threshold);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		float L_4 = __this->___Threshold_5;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_3/L_4)));
		// var stepY = (int)(delta.y / Threshold);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		float L_7 = __this->___Threshold_5;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_6/L_7)));
		// var stepZ = (int)(delta.z / Threshold);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___z_4;
		float L_10 = __this->___Threshold_5;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_9/L_10)));
		// if (stepX == 0 && stepY == 0 && stepZ == 0)
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_12 = V_2;
		if (L_12)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_004e;
		}
	}
	{
		// return;
		return;
	}

IL_004e:
	{
		// if (Step == true)
		bool L_14 = __this->___Step_6;
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		// delta.x = stepX * Threshold;
		int32_t L_15 = V_1;
		float L_16 = __this->___Threshold_5;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)L_15), L_16));
		// delta.y = stepY * Threshold;
		int32_t L_17 = V_2;
		float L_18 = __this->___Threshold_5;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(((float)L_17), L_18));
		// delta.z = stepZ * Threshold;
		int32_t L_19 = V_3;
		float L_20 = __this->___Threshold_5;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_multiply(((float)L_19), L_20));
		// Current -= delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___Current_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_22, NULL);
		__this->___Current_4 = L_23;
		goto IL_00da;
	}

IL_009a:
	{
		// Current = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___Current_4 = L_24;
		goto IL_00da;
	}

IL_00a7:
	{
		// if (delta.x == 0.0f && delta.y == 0.0f && delta.z == 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		float L_26 = L_25.___x_2;
		if ((!(((float)L_26) == ((float)(0.0f)))))
		{
			goto IL_00cf;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		float L_28 = L_27.___y_3;
		if ((!(((float)L_28) == ((float)(0.0f)))))
		{
			goto IL_00cf;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = L_29.___z_4;
		if ((!(((float)L_30) == ((float)(0.0f)))))
		{
			goto IL_00cf;
		}
	}
	{
		// return;
		return;
	}

IL_00cf:
	{
		// Current = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___Current_4 = L_31;
	}

IL_00da:
	{
		// if (onDeltaX != null)
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_32 = __this->___onDeltaX_7;
		if (!L_32)
		{
			goto IL_00f3;
		}
	}
	{
		// onDeltaX.Invoke(delta.x);
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_33 = __this->___onDeltaX_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		float L_35 = L_34.___x_2;
		NullCheck(L_33);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_33, L_35, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_00f3:
	{
		// if (onDeltaY != null)
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_36 = __this->___onDeltaY_8;
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		// onDeltaY.Invoke(delta.y);
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_37 = __this->___onDeltaY_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		float L_39 = L_38.___y_3;
		NullCheck(L_37);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_37, L_39, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_010c:
	{
		// if (onDeltaZ != null)
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_40 = __this->___onDeltaZ_9;
		if (!L_40)
		{
			goto IL_0125;
		}
	}
	{
		// onDeltaZ.Invoke(delta.z);
		FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* L_41 = __this->___onDeltaZ_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		float L_43 = L_42.___z_4;
		NullCheck(L_41);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_41, L_43, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0125:
	{
		// if (onDeltaXY != null)
		Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* L_44 = __this->___onDeltaXY_10;
		if (!L_44)
		{
			goto IL_013e;
		}
	}
	{
		// onDeltaXY.Invoke(delta);
		Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* L_45 = __this->___onDeltaXY_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_46, NULL);
		NullCheck(L_45);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_45, L_47, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
	}

IL_013e:
	{
		// if (onDeltaXYZ != null)
		Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* L_48 = __this->___onDeltaXYZ_11;
		if (!L_48)
		{
			goto IL_0152;
		}
	}
	{
		// onDeltaXYZ.Invoke(delta);
		Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* L_49 = __this->___onDeltaXYZ_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_0;
		NullCheck(L_49);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_49, L_50, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
	}

IL_0152:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdDelta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdDelta__ctor_m743D7AF8924738155211B1723C45A399FE381CF6 (LeanThresholdDelta_t09ECCD362E87D514203168C930153B42217C95A3* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold = 1.0f;
		__this->___Threshold_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanThresholdDelta/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m71979A6A2707B695460360E98FA333DE750EF6A3 (FloatEvent_t3FB91D0E286CD05A1A40C531EEB8EF71943E67D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanThresholdDelta/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m452E28395584522CA1CF401053BBE2A1A284C761 (Vector2Event_tDDF542C5407A60410753D7D460FDC4F102C38311* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanThresholdDelta/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_mE989FDADD7FBFCA4AF3C72F92395E672B48161A4 (Vector3Event_tF07448EBC85BF476AA2C81C2AA98E7E51CA689B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176(__this, UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
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
// Lean.Common.LeanThresholdPosition/FloatEvent Lean.Common.LeanThresholdPosition::get_OnPositionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* LeanThresholdPosition_get_OnPositionX_m829329FCCA5B6CBDC527EDB1D920DA93F2AE67C0 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnPositionX { get { if (onPositionX == null) onPositionX = new FloatEvent(); return onPositionX; } } [SerializeField] private FloatEvent onPositionX;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_0 = __this->___onPositionX_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnPositionX { get { if (onPositionX == null) onPositionX = new FloatEvent(); return onPositionX; } } [SerializeField] private FloatEvent onPositionX;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_1 = (FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00*)il2cpp_codegen_object_new(FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m749B3A8B81422E7509BE0FDA2B8CC2E9FF3AB0CE(L_1, NULL);
		__this->___onPositionX_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPositionX_8), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnPositionX { get { if (onPositionX == null) onPositionX = new FloatEvent(); return onPositionX; } } [SerializeField] private FloatEvent onPositionX;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_2 = __this->___onPositionX_8;
		return L_2;
	}
}
// Lean.Common.LeanThresholdPosition/FloatEvent Lean.Common.LeanThresholdPosition::get_OnPositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* LeanThresholdPosition_get_OnPositionY_mD20F38ECE758BBED006550A36AE3E5D1DE3BB77D (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnPositionY { get { if (onPositionY == null) onPositionY = new FloatEvent(); return onPositionY; } } [SerializeField] private FloatEvent onPositionY;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_0 = __this->___onPositionY_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnPositionY { get { if (onPositionY == null) onPositionY = new FloatEvent(); return onPositionY; } } [SerializeField] private FloatEvent onPositionY;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_1 = (FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00*)il2cpp_codegen_object_new(FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m749B3A8B81422E7509BE0FDA2B8CC2E9FF3AB0CE(L_1, NULL);
		__this->___onPositionY_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPositionY_9), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnPositionY { get { if (onPositionY == null) onPositionY = new FloatEvent(); return onPositionY; } } [SerializeField] private FloatEvent onPositionY;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_2 = __this->___onPositionY_9;
		return L_2;
	}
}
// Lean.Common.LeanThresholdPosition/FloatEvent Lean.Common.LeanThresholdPosition::get_OnPositionZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* LeanThresholdPosition_get_OnPositionZ_mC7DADA05CAD6C48092250D2A22A1DFD5985AE26D (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatEvent OnPositionZ { get { if (onPositionZ == null) onPositionZ = new FloatEvent(); return onPositionZ; } } [SerializeField] private FloatEvent onPositionZ;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_0 = __this->___onPositionZ_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public FloatEvent OnPositionZ { get { if (onPositionZ == null) onPositionZ = new FloatEvent(); return onPositionZ; } } [SerializeField] private FloatEvent onPositionZ;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_1 = (FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00*)il2cpp_codegen_object_new(FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatEvent__ctor_m749B3A8B81422E7509BE0FDA2B8CC2E9FF3AB0CE(L_1, NULL);
		__this->___onPositionZ_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPositionZ_10), (void*)L_1);
	}

IL_0013:
	{
		// public FloatEvent OnPositionZ { get { if (onPositionZ == null) onPositionZ = new FloatEvent(); return onPositionZ; } } [SerializeField] private FloatEvent onPositionZ;
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_2 = __this->___onPositionZ_10;
		return L_2;
	}
}
// Lean.Common.LeanThresholdPosition/Vector2Event Lean.Common.LeanThresholdPosition::get_OnPositionXY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* LeanThresholdPosition_get_OnPositionXY_m7346CA535EE1052A135BDDBF0F2B177D48B35786 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Event OnPositionXY { get { if (onPositionXY == null) onPositionXY = new Vector2Event(); return onPositionXY; } } [SerializeField] private Vector2Event onPositionXY;
		Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* L_0 = __this->___onPositionXY_11;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector2Event OnPositionXY { get { if (onPositionXY == null) onPositionXY = new Vector2Event(); return onPositionXY; } } [SerializeField] private Vector2Event onPositionXY;
		Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* L_1 = (Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4*)il2cpp_codegen_object_new(Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector2Event__ctor_m878306409C42ADC12176F84BD6861BE8F74B105A(L_1, NULL);
		__this->___onPositionXY_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPositionXY_11), (void*)L_1);
	}

IL_0013:
	{
		// public Vector2Event OnPositionXY { get { if (onPositionXY == null) onPositionXY = new Vector2Event(); return onPositionXY; } } [SerializeField] private Vector2Event onPositionXY;
		Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* L_2 = __this->___onPositionXY_11;
		return L_2;
	}
}
// Lean.Common.LeanThresholdPosition/Vector3Event Lean.Common.LeanThresholdPosition::get_OnPositionXYZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* LeanThresholdPosition_get_OnPositionXYZ_mD50D5C59B14DFEB4FD3720848DEF001EE7E61164 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3Event OnPositionXYZ { get { if (onPositionXYZ == null) onPositionXYZ = new Vector3Event(); return onPositionXYZ; } } [SerializeField] private Vector3Event onPositionXYZ;
		Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* L_0 = __this->___onPositionXYZ_12;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public Vector3Event OnPositionXYZ { get { if (onPositionXYZ == null) onPositionXYZ = new Vector3Event(); return onPositionXYZ; } } [SerializeField] private Vector3Event onPositionXYZ;
		Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* L_1 = (Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A*)il2cpp_codegen_object_new(Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3Event__ctor_m9932636D27B4809512F9C8FB93D8ED8349DB63B5(L_1, NULL);
		__this->___onPositionXYZ_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPositionXYZ_12), (void*)L_1);
	}

IL_0013:
	{
		// public Vector3Event OnPositionXYZ { get { if (onPositionXYZ == null) onPositionXYZ = new Vector3Event(); return onPositionXYZ; } } [SerializeField] private Vector3Event onPositionXYZ;
		Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* L_2 = __this->___onPositionXYZ_12;
		return L_2;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::AddXY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_AddXY_mF717F9517C6E3A0E22A310B5CF3EBD3A42541BA8 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.x += delta.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___delta0;
		float L_5 = L_4.___x_0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_5));
		// Current.y += delta.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___Current_4);
		float* L_7 = (&L_6->___y_3);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___delta0;
		float L_11 = L_10.___y_1;
		*((float*)L_8) = (float)((float)il2cpp_codegen_add(L_9, L_11));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::AddXYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_AddXYZ_m7DE5288BCC6C458090526F533C5F76C4343D489A (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta0, const RuntimeMethod* method) 
{
	{
		// Current += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Current_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___delta0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		__this->___Current_4 = L_2;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::AddX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_AddX_m4D67A51CCA8D692129E30B7467409EEBE05C8838 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.x += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = ___delta0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::AddY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_AddY_mE68649F1D8B43F8A560C2756D5C54F6220892F4D (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.y += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___y_3);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = ___delta0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::AddZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_AddZ_m171A150CFD1F4E23E32AC9AD3BB84F1C35B17EF6 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, float ___delta0, const RuntimeMethod* method) 
{
	{
		// Current.z += delta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		float* L_1 = (&L_0->___z_4);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = ___delta0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::SetXY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_SetXY_mEEE83B7CDA50887C015ED7ACBD2828B135478E2F (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// Current.x = position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___Current_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		L_0->___x_2 = L_2;
		// Current.y = position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___Current_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___position0;
		float L_5 = L_4.___y_1;
		L_3->___y_3 = L_5;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::SetXYZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_SetXYZ_mA3EA095DBA98ABE3B97727B1D4A5ED6753BD8701 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// Current = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->___Current_4 = L_0;
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition_Update_mD2421514192C504085A02570CF036F3DBD746C32 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var delta = Current - Previous;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___Current_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___Previous_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (Threshold > 0.0f)
		float L_3 = __this->___Threshold_6;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_00b9;
		}
	}
	{
		// var stepX = (int)(delta.x / Threshold);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		float L_6 = __this->___Threshold_6;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_5/L_6)));
		// var stepY = (int)(delta.y / Threshold);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___y_3;
		float L_9 = __this->___Threshold_6;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_8/L_9)));
		// var stepZ = (int)(delta.z / Threshold);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		float L_12 = __this->___Threshold_6;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_11/L_12)));
		// if (stepX == 0 && stepY == 0 && stepZ == 0)
		int32_t L_13 = V_1;
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_14 = V_2;
		if (L_14)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15)
		{
			goto IL_0059;
		}
	}
	{
		// return;
		return;
	}

IL_0059:
	{
		// if (Step == true)
		bool L_16 = __this->___Step_7;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		// Previous.x -= stepX * Threshold;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___Previous_5);
		float* L_18 = (&L_17->___x_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		int32_t L_21 = V_1;
		float L_22 = __this->___Threshold_6;
		*((float*)L_19) = (float)((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_multiply(((float)L_21), L_22))));
		// Previous.y -= stepY * Threshold;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___Previous_5);
		float* L_24 = (&L_23->___y_3);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		int32_t L_27 = V_2;
		float L_28 = __this->___Threshold_6;
		*((float*)L_25) = (float)((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(((float)L_27), L_28))));
		// Previous.z -= stepZ * Threshold;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___Previous_5);
		float* L_30 = (&L_29->___z_4);
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		int32_t L_33 = V_3;
		float L_34 = __this->___Threshold_6;
		*((float*)L_31) = (float)((float)il2cpp_codegen_subtract(L_32, ((float)il2cpp_codegen_multiply(((float)L_33), L_34))));
		goto IL_00ed;
	}

IL_00ab:
	{
		// Previous = Current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___Current_4;
		__this->___Previous_5 = L_35;
		goto IL_00ed;
	}

IL_00b9:
	{
		// if (delta.x == 0.0f && delta.y == 0.0f && delta.z == 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		float L_37 = L_36.___x_2;
		if ((!(((float)L_37) == ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		float L_39 = L_38.___y_3;
		if ((!(((float)L_39) == ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		float L_41 = L_40.___z_4;
		if ((!(((float)L_41) == ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		// return;
		return;
	}

IL_00e1:
	{
		// Previous = Current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = __this->___Current_4;
		__this->___Previous_5 = L_42;
	}

IL_00ed:
	{
		// if (onPositionX != null)
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_43 = __this->___onPositionX_8;
		if (!L_43)
		{
			goto IL_010b;
		}
	}
	{
		// onPositionX.Invoke(Previous.x);
		FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* L_44 = __this->___onPositionX_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___Previous_5);
		float L_46 = L_45->___x_2;
		NullCheck(L_44);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_44, L_46, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_010b:
	{
		// if (onPositionXY != null)
		Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* L_47 = __this->___onPositionXY_11;
		if (!L_47)
		{
			goto IL_0129;
		}
	}
	{
		// onPositionXY.Invoke(Previous);
		Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* L_48 = __this->___onPositionXY_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___Previous_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_49, NULL);
		NullCheck(L_48);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_48, L_50, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
	}

IL_0129:
	{
		// if (onPositionXYZ != null)
		Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* L_51 = __this->___onPositionXYZ_12;
		if (!L_51)
		{
			goto IL_0142;
		}
	}
	{
		// onPositionXYZ.Invoke(Previous);
		Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* L_52 = __this->___onPositionXYZ_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = __this->___Previous_5;
		NullCheck(L_52);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_52, L_53, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
	}

IL_0142:
	{
		// }
		return;
	}
}
// System.Void Lean.Common.LeanThresholdPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanThresholdPosition__ctor_mFFF98231DADFA0F2AEF142CA2C22BC7C9D67B0E3 (LeanThresholdPosition_t1BF998778FF283C123225771637C7A1A75DA8C2E* __this, const RuntimeMethod* method) 
{
	{
		// public float Threshold = 1.0f;
		__this->___Threshold_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lean.Common.LeanThresholdPosition/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m749B3A8B81422E7509BE0FDA2B8CC2E9FF3AB0CE (FloatEvent_tF73AB725C5121CE6DF6BD8F47A717C484A5B6C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanThresholdPosition/Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m878306409C42ADC12176F84BD6861BE8F74B105A (Vector2Event_tEA7D19320E27DF390BE0C1ECE2066015829276B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void Lean.Common.LeanThresholdPosition/Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_m9932636D27B4809512F9C8FB93D8ED8349DB63B5 (Vector3Event_tCA8CAC1BCC89C20751668BAB94793DBE5673A76A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176(__this, UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDFB2AABA41F346F8801FC8F5910BE9D87044FFCB_gshared_inline (Queue_1_tDD90522C8F9E565EF07CE06B27C10759FF11FA58* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
