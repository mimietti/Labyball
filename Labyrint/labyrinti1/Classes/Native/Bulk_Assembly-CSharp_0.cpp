#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraController
struct CameraController_t3473169601;
// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.Object
struct Il2CppObject;
// UnityEngine.Collider
struct Collider_t955670625;
// Rotator
struct Rotator_t3048826765;
// VirtualJoystick
struct VirtualJoystick_t2074970439;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "AssemblyU2DCSharp_VirtualJoystick2074970439MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "AssemblyU2DCSharp_VirtualJoystick2074970439.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "AssemblyU2DCSharp_Rotator3048826765.h"
#include "AssemblyU2DCSharp_Rotator3048826765MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Image3354615620.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic933884113MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectTransformUtility2895919825MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1588791936MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, method) ((  Rigidbody_t1972007546 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t3354615620_m3706520426(__this, method) ((  Image_t3354615620 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_2 = __this->get_player_2();
		NullCheck(L_2);
		Transform_t284553113 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3525329789  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t3525329789  L_5 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_3(L_5);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_1 = __this->get_player_2();
		NullCheck(L_1);
		Transform_t284553113 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = __this->get_offset_3();
		Vector3_t3525329789  L_5 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3111394108(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_count_4(0);
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		Text_t3286458198 * L_0 = __this->get_doneText_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Rigidbody_t1972007546 * L_2 = Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var);
		__this->set_rb_7(L_2);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3525329789  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		VirtualJoystick_t2074970439 * L_0 = __this->get_joystick_6();
		NullCheck(L_0);
		float L_1 = VirtualJoystick_Horizontal_m310824280(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		VirtualJoystick_t2074970439 * L_2 = __this->get_joystick_6();
		NullCheck(L_2);
		float L_3 = VirtualJoystick_Vertical_m1057344746(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3__ctor_m2926210380((&V_2), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_6 = __this->get_rb_7();
		Vector3_t3525329789  L_7 = V_2;
		NullCheck(L_6);
		Rigidbody_AddForce_m3682301239(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern const uint32_t PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter_m3392021114 (PlayerController_t2866526589 * __this, Collider_t955670625 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t955670625 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral1086561018, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t955670625 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t4012695102 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_count_4();
		__this->set_count_4(((int32_t)((int32_t)L_5+(int32_t)1)));
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::SetCountText()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3588653336;
extern Il2CppCodeGenString* _stringLiteral1456073729;
extern const uint32_t PlayerController_SetCountText_m1021738208_MetadataUsageId;
extern "C"  void PlayerController_SetCountText_m1021738208 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetCountText_m1021738208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t3286458198 * L_0 = __this->get_countText_2();
		int32_t* L_1 = __this->get_address_of_count_4();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3588653336, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = __this->get_count_4();
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_003c;
		}
	}
	{
		Text_t3286458198 * L_5 = __this->get_doneText_5();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral1456073729);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m1971779198 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
extern "C"  void Rotator_Update_m2722475087 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::.ctor()
extern "C"  void VirtualJoystick__ctor_m922926596 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::Start()
extern const MethodInfo* Component_GetComponent_TisImage_t3354615620_m3706520426_MethodInfo_var;
extern const uint32_t VirtualJoystick_Start_m4165031684_MetadataUsageId;
extern "C"  void VirtualJoystick_Start_m4165031684 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_Start_m4165031684_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t3354615620 * L_0 = Component_GetComponent_TisImage_t3354615620_m3706520426(__this, /*hidden argument*/Component_GetComponent_TisImage_t3354615620_m3706520426_MethodInfo_var);
		__this->set_bgImg_2(L_0);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t284553113 * L_2 = Transform_GetChild_m4040462992(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_t3354615620 * L_3 = Component_GetComponent_TisImage_t3354615620_m3706520426(L_2, /*hidden argument*/Component_GetComponent_TisImage_t3354615620_m3706520426_MethodInfo_var);
		__this->set_joystickImg_3(L_3);
		return;
	}
}
// System.Void VirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern Il2CppClass* RectTransformUtility_t2895919825_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3_t3525329789_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1588791936_il2cpp_TypeInfo_var;
extern const uint32_t VirtualJoystick_OnDrag_m362885355_MetadataUsageId;
extern "C"  void VirtualJoystick_OnDrag_m362885355 (VirtualJoystick_t2074970439 * __this, PointerEventData_t3205101634 * ___ped0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_OnDrag_m362885355_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t3525329788  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t3525329788  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t3525329788  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t3525329788  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t3525329788  V_4;
	memset(&V_4, 0, sizeof(V_4));
	VirtualJoystick_t2074970439 * G_B3_0 = NULL;
	VirtualJoystick_t2074970439 * G_B2_0 = NULL;
	Vector3_t3525329789  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	VirtualJoystick_t2074970439 * G_B4_1 = NULL;
	{
		Image_t3354615620 * L_0 = __this->get_bgImg_2();
		NullCheck(L_0);
		RectTransform_t3317474837 * L_1 = Graphic_get_rectTransform_m4017371950(L_0, /*hidden argument*/NULL);
		PointerEventData_t3205101634 * L_2 = ___ped0;
		NullCheck(L_2);
		Vector2_t3525329788  L_3 = PointerEventData_get_position_m2263123361(L_2, /*hidden argument*/NULL);
		PointerEventData_t3205101634 * L_4 = ___ped0;
		NullCheck(L_4);
		Camera_t3533968274 * L_5 = PointerEventData_get_pressEventCamera_m2764092724(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t2895919825_il2cpp_TypeInfo_var);
		bool L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m666650172(NULL /*static, unused*/, L_1, L_3, L_5, (&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0157;
		}
	}
	{
		float L_7 = (&V_0)->get_x_1();
		Image_t3354615620 * L_8 = __this->get_bgImg_2();
		NullCheck(L_8);
		RectTransform_t3317474837 * L_9 = Graphic_get_rectTransform_m4017371950(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector2_t3525329788  L_10 = RectTransform_get_sizeDelta_m4279424984(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		(&V_0)->set_x_1(((float)((float)L_7/(float)L_11)));
		float L_12 = (&V_0)->get_y_2();
		Image_t3354615620 * L_13 = __this->get_bgImg_2();
		NullCheck(L_13);
		RectTransform_t3317474837 * L_14 = Graphic_get_rectTransform_m4017371950(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector2_t3525329788  L_15 = RectTransform_get_sizeDelta_m4279424984(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_y_2();
		(&V_0)->set_y_2(((float)((float)L_12/(float)L_16)));
		float L_17 = (&V_0)->get_x_1();
		float L_18 = (&V_0)->get_y_2();
		Vector3_t3525329789  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m2926210380(&L_19, ((float)((float)((float)((float)L_17*(float)(2.0f)))+(float)(1.0f))), (0.0f), ((float)((float)((float)((float)L_18*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		__this->set_inputVector_4(L_19);
		Vector3_t3525329789 * L_20 = __this->get_address_of_inputVector_4();
		float L_21 = Vector3_get_magnitude_m989985786(L_20, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((!(((float)L_21) > ((float)(1.0f)))))
		{
			G_B3_0 = __this;
			goto IL_00cd;
		}
	}
	{
		Vector3_t3525329789 * L_22 = __this->get_address_of_inputVector_4();
		Vector3_t3525329789  L_23 = Vector3_get_normalized_m2650940353(L_22, /*hidden argument*/NULL);
		G_B4_0 = L_23;
		G_B4_1 = G_B2_0;
		goto IL_00d3;
	}

IL_00cd:
	{
		Vector3_t3525329789  L_24 = __this->get_inputVector_4();
		G_B4_0 = L_24;
		G_B4_1 = G_B3_0;
	}

IL_00d3:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_inputVector_4(G_B4_0);
		Vector3_t3525329789  L_25 = __this->get_inputVector_4();
		Vector3_t3525329789  L_26 = L_25;
		Il2CppObject * L_27 = Box(Vector3_t3525329789_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Image_t3354615620 * L_28 = __this->get_joystickImg_3();
		NullCheck(L_28);
		RectTransform_t3317474837 * L_29 = Graphic_get_rectTransform_m4017371950(L_28, /*hidden argument*/NULL);
		Vector3_t3525329789 * L_30 = __this->get_address_of_inputVector_4();
		float L_31 = L_30->get_x_1();
		Image_t3354615620 * L_32 = __this->get_bgImg_2();
		NullCheck(L_32);
		RectTransform_t3317474837 * L_33 = Graphic_get_rectTransform_m4017371950(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector2_t3525329788  L_34 = RectTransform_get_sizeDelta_m4279424984(L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		float L_35 = (&V_3)->get_x_1();
		Vector3_t3525329789 * L_36 = __this->get_address_of_inputVector_4();
		float L_37 = L_36->get_z_3();
		Image_t3354615620 * L_38 = __this->get_bgImg_2();
		NullCheck(L_38);
		RectTransform_t3317474837 * L_39 = Graphic_get_rectTransform_m4017371950(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector2_t3525329788  L_40 = RectTransform_get_sizeDelta_m4279424984(L_39, /*hidden argument*/NULL);
		V_4 = L_40;
		float L_41 = (&V_4)->get_y_2();
		Vector3_t3525329789  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector3__ctor_m1846874791(&L_42, ((float)((float)L_31*(float)((float)((float)L_35/(float)(4.0f))))), ((float)((float)L_37*(float)((float)((float)L_41/(float)(4.0f))))), /*hidden argument*/NULL);
		Vector2_t3525329788  L_43 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		NullCheck(L_29);
		RectTransform_set_anchoredPosition_m1498949997(L_29, L_43, /*hidden argument*/NULL);
	}

IL_0157:
	{
		return;
	}
}
// System.Void VirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnPointerDown_m1830765692 (VirtualJoystick_t2074970439 * __this, PointerEventData_t3205101634 * ___ped0, const MethodInfo* method)
{
	{
		PointerEventData_t3205101634 * L_0 = ___ped0;
		VirtActionInvoker1< PointerEventData_t3205101634 * >::Invoke(7 /* System.Void VirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_0);
		return;
	}
}
// System.Void VirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnPointerUp_m1624864035 (VirtualJoystick_t2074970439 * __this, PointerEventData_t3205101634 * ___ped0, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_inputVector_4(L_0);
		Image_t3354615620 * L_1 = __this->get_joystickImg_3();
		NullCheck(L_1);
		RectTransform_t3317474837 * L_2 = Graphic_get_rectTransform_m4017371950(L_1, /*hidden argument*/NULL);
		Vector3_t3525329789  L_3 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t3525329788  L_4 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m1498949997(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Single VirtualJoystick::Horizontal()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t VirtualJoystick_Horizontal_m310824280_MetadataUsageId;
extern "C"  float VirtualJoystick_Horizontal_m310824280 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_Horizontal_m310824280_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t3525329789 * L_0 = __this->get_address_of_inputVector_4();
		float L_1 = L_0->get_x_1();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0021;
		}
	}
	{
		Vector3_t3525329789 * L_2 = __this->get_address_of_inputVector_4();
		float L_3 = L_2->get_x_1();
		return L_3;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single VirtualJoystick::Vertical()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t VirtualJoystick_Vertical_m1057344746_MetadataUsageId;
extern "C"  float VirtualJoystick_Vertical_m1057344746 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_Vertical_m1057344746_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t3525329789 * L_0 = __this->get_address_of_inputVector_4();
		float L_1 = L_0->get_z_3();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0021;
		}
	}
	{
		Vector3_t3525329789 * L_2 = __this->get_address_of_inputVector_4();
		float L_3 = L_2->get_z_3();
		return L_3;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
