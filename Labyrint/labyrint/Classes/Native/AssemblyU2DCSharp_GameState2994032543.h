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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameState
struct  GameState_t2994032543  : public Il2CppObject
{
public:

public:
};

struct GameState_t2994032543_StaticFields
{
public:
	// System.Int32 GameState::CurrentLevel
	int32_t ___CurrentLevel_0;
	// System.String GameState::Time
	String_t* ___Time_1;
	// System.Single GameState::playTime
	float ___playTime_2;

public:
	inline static int32_t get_offset_of_CurrentLevel_0() { return static_cast<int32_t>(offsetof(GameState_t2994032543_StaticFields, ___CurrentLevel_0)); }
	inline int32_t get_CurrentLevel_0() const { return ___CurrentLevel_0; }
	inline int32_t* get_address_of_CurrentLevel_0() { return &___CurrentLevel_0; }
	inline void set_CurrentLevel_0(int32_t value)
	{
		___CurrentLevel_0 = value;
	}

	inline static int32_t get_offset_of_Time_1() { return static_cast<int32_t>(offsetof(GameState_t2994032543_StaticFields, ___Time_1)); }
	inline String_t* get_Time_1() const { return ___Time_1; }
	inline String_t** get_address_of_Time_1() { return &___Time_1; }
	inline void set_Time_1(String_t* value)
	{
		___Time_1 = value;
		Il2CppCodeGenWriteBarrier(&___Time_1, value);
	}

	inline static int32_t get_offset_of_playTime_2() { return static_cast<int32_t>(offsetof(GameState_t2994032543_StaticFields, ___playTime_2)); }
	inline float get_playTime_2() const { return ___playTime_2; }
	inline float* get_address_of_playTime_2() { return &___playTime_2; }
	inline void set_playTime_2(float value)
	{
		___playTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
