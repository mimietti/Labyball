#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnitySocialTools.Json/Serializer
struct Serializer_t1395478962;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnitySocialTools.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m3908557003 (Serializer_t1395478962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnitySocialTools.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m438881486 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m1016162954 (Serializer_t1395478962 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m1583002337 (Serializer_t1395478962 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m1087408163 (Serializer_t1395478962 * __this, Il2CppObject * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m1839994504 (Serializer_t1395478962 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m2186062603 (Serializer_t1395478962 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
