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
	// UnityEngine.UI.Text PlayerController::finalText
	Text_t3286458198 * ___finalText_3;
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Int32 PlayerController::count
	int32_t ___count_5;
	// System.Int32 PlayerController::countMax
	int32_t ___countMax_6;
	// UnityEngine.UI.Text PlayerController::doneText
	Text_t3286458198 * ___doneText_7;
	// VirtualJoystick PlayerController::joystick
	VirtualJoystick_t2074970439 * ___joystick_8;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_9;
	// UnityEngine.UI.Text PlayerController::finalTime
	Text_t3286458198 * ___finalTime_10;
	// System.Boolean PlayerController::gameOver
	bool ___gameOver_11;
	// System.Single PlayerController::seconds
	float ___seconds_12;
	// System.Single PlayerController::minutes
	float ___minutes_13;
	// System.Single PlayerController::milliseconds
	float ___milliseconds_14;

public:
	inline static int32_t get_offset_of_countText_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countText_2)); }
	inline Text_t3286458198 * get_countText_2() const { return ___countText_2; }
	inline Text_t3286458198 ** get_address_of_countText_2() { return &___countText_2; }
	inline void set_countText_2(Text_t3286458198 * value)
	{
		___countText_2 = value;
		Il2CppCodeGenWriteBarrier(&___countText_2, value);
	}

	inline static int32_t get_offset_of_finalText_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___finalText_3)); }
	inline Text_t3286458198 * get_finalText_3() const { return ___finalText_3; }
	inline Text_t3286458198 ** get_address_of_finalText_3() { return &___finalText_3; }
	inline void set_finalText_3(Text_t3286458198 * value)
	{
		___finalText_3 = value;
		Il2CppCodeGenWriteBarrier(&___finalText_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_countMax_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countMax_6)); }
	inline int32_t get_countMax_6() const { return ___countMax_6; }
	inline int32_t* get_address_of_countMax_6() { return &___countMax_6; }
	inline void set_countMax_6(int32_t value)
	{
		___countMax_6 = value;
	}

	inline static int32_t get_offset_of_doneText_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___doneText_7)); }
	inline Text_t3286458198 * get_doneText_7() const { return ___doneText_7; }
	inline Text_t3286458198 ** get_address_of_doneText_7() { return &___doneText_7; }
	inline void set_doneText_7(Text_t3286458198 * value)
	{
		___doneText_7 = value;
		Il2CppCodeGenWriteBarrier(&___doneText_7, value);
	}

	inline static int32_t get_offset_of_joystick_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___joystick_8)); }
	inline VirtualJoystick_t2074970439 * get_joystick_8() const { return ___joystick_8; }
	inline VirtualJoystick_t2074970439 ** get_address_of_joystick_8() { return &___joystick_8; }
	inline void set_joystick_8(VirtualJoystick_t2074970439 * value)
	{
		___joystick_8 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_8, value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_9)); }
	inline Rigidbody_t1972007546 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody_t1972007546 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rb_9, value);
	}

	inline static int32_t get_offset_of_finalTime_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___finalTime_10)); }
	inline Text_t3286458198 * get_finalTime_10() const { return ___finalTime_10; }
	inline Text_t3286458198 ** get_address_of_finalTime_10() { return &___finalTime_10; }
	inline void set_finalTime_10(Text_t3286458198 * value)
	{
		___finalTime_10 = value;
		Il2CppCodeGenWriteBarrier(&___finalTime_10, value);
	}

	inline static int32_t get_offset_of_gameOver_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___gameOver_11)); }
	inline bool get_gameOver_11() const { return ___gameOver_11; }
	inline bool* get_address_of_gameOver_11() { return &___gameOver_11; }
	inline void set_gameOver_11(bool value)
	{
		___gameOver_11 = value;
	}

	inline static int32_t get_offset_of_seconds_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___seconds_12)); }
	inline float get_seconds_12() const { return ___seconds_12; }
	inline float* get_address_of_seconds_12() { return &___seconds_12; }
	inline void set_seconds_12(float value)
	{
		___seconds_12 = value;
	}

	inline static int32_t get_offset_of_minutes_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___minutes_13)); }
	inline float get_minutes_13() const { return ___minutes_13; }
	inline float* get_address_of_minutes_13() { return &___minutes_13; }
	inline void set_minutes_13(float value)
	{
		___minutes_13 = value;
	}

	inline static int32_t get_offset_of_milliseconds_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___milliseconds_14)); }
	inline float get_milliseconds_14() const { return ___milliseconds_14; }
	inline float* get_address_of_milliseconds_14() { return &___milliseconds_14; }
	inline void set_milliseconds_14(float value)
	{
		___milliseconds_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
