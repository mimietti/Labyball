#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocialSettings
struct  UnitySocialSettings_t2885924197  : public ScriptableObject_t184905905
{
public:
	// System.String UnitySocialSettings::clientId
	String_t* ___clientId_2;
	// System.Boolean UnitySocialSettings::iosSupportEnabled
	bool ___iosSupportEnabled_3;

public:
	inline static int32_t get_offset_of_clientId_2() { return static_cast<int32_t>(offsetof(UnitySocialSettings_t2885924197, ___clientId_2)); }
	inline String_t* get_clientId_2() const { return ___clientId_2; }
	inline String_t** get_address_of_clientId_2() { return &___clientId_2; }
	inline void set_clientId_2(String_t* value)
	{
		___clientId_2 = value;
		Il2CppCodeGenWriteBarrier(&___clientId_2, value);
	}

	inline static int32_t get_offset_of_iosSupportEnabled_3() { return static_cast<int32_t>(offsetof(UnitySocialSettings_t2885924197, ___iosSupportEnabled_3)); }
	inline bool get_iosSupportEnabled_3() const { return ___iosSupportEnabled_3; }
	inline bool* get_address_of_iosSupportEnabled_3() { return &___iosSupportEnabled_3; }
	inline void set_iosSupportEnabled_3(bool value)
	{
		___iosSupportEnabled_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
