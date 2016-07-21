#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// VirtualJoystick
struct VirtualJoystick_t2074970439;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text PlayerController::countText
	Text_t3286458198 * ___countText_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// System.Int32 PlayerController::count
	int32_t ___count_4;
	// UnityEngine.UI.Text PlayerController::doneText
	Text_t3286458198 * ___doneText_5;
	// VirtualJoystick PlayerController::joystick
	VirtualJoystick_t2074970439 * ___joystick_6;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_7;

public:
	inline static int32_t get_offset_of_countText_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countText_2)); }
	inline Text_t3286458198 * get_countText_2() const { return ___countText_2; }
	inline Text_t3286458198 ** get_address_of_countText_2() { return &___countText_2; }
	inline void set_countText_2(Text_t3286458198 * value)
	{
		___countText_2 = value;
		Il2CppCodeGenWriteBarrier(&___countText_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_doneText_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___doneText_5)); }
	inline Text_t3286458198 * get_doneText_5() const { return ___doneText_5; }
	inline Text_t3286458198 ** get_address_of_doneText_5() { return &___doneText_5; }
	inline void set_doneText_5(Text_t3286458198 * value)
	{
		___doneText_5 = value;
		Il2CppCodeGenWriteBarrier(&___doneText_5, value);
	}

	inline static int32_t get_offset_of_joystick_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___joystick_6)); }
	inline VirtualJoystick_t2074970439 * get_joystick_6() const { return ___joystick_6; }
	inline VirtualJoystick_t2074970439 ** get_address_of_joystick_6() { return &___joystick_6; }
	inline void set_joystick_6(VirtualJoystick_t2074970439 * value)
	{
		___joystick_6 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_6, value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_7)); }
	inline Rigidbody_t1972007546 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t1972007546 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
