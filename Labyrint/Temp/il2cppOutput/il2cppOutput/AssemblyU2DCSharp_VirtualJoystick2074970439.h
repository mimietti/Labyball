#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualJoystick
struct  VirtualJoystick_t2074970439  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image VirtualJoystick::bgImg
	Image_t3354615620 * ___bgImg_2;
	// UnityEngine.UI.Image VirtualJoystick::joystickImg
	Image_t3354615620 * ___joystickImg_3;
	// UnityEngine.Vector3 VirtualJoystick::inputVector
	Vector3_t3525329789  ___inputVector_4;

public:
	inline static int32_t get_offset_of_bgImg_2() { return static_cast<int32_t>(offsetof(VirtualJoystick_t2074970439, ___bgImg_2)); }
	inline Image_t3354615620 * get_bgImg_2() const { return ___bgImg_2; }
	inline Image_t3354615620 ** get_address_of_bgImg_2() { return &___bgImg_2; }
	inline void set_bgImg_2(Image_t3354615620 * value)
	{
		___bgImg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgImg_2, value);
	}

	inline static int32_t get_offset_of_joystickImg_3() { return static_cast<int32_t>(offsetof(VirtualJoystick_t2074970439, ___joystickImg_3)); }
	inline Image_t3354615620 * get_joystickImg_3() const { return ___joystickImg_3; }
	inline Image_t3354615620 ** get_address_of_joystickImg_3() { return &___joystickImg_3; }
	inline void set_joystickImg_3(Image_t3354615620 * value)
	{
		___joystickImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystickImg_3, value);
	}

	inline static int32_t get_offset_of_inputVector_4() { return static_cast<int32_t>(offsetof(VirtualJoystick_t2074970439, ___inputVector_4)); }
	inline Vector3_t3525329789  get_inputVector_4() const { return ___inputVector_4; }
	inline Vector3_t3525329789 * get_address_of_inputVector_4() { return &___inputVector_4; }
	inline void set_inputVector_4(Vector3_t3525329789  value)
	{
		___inputVector_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
