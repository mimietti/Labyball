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

// UnitySocialTools.Json/Parser
struct Parser_t2383423551;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocialTools_Json_80003545.h"

// System.Void UnitySocialTools.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m1087019492 (Parser_t2383423551 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnitySocialTools.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m1439596478 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnitySocialTools.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m4278847318 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnitySocialTools.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m1940699951 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnitySocialTools.Json/Parser/TOKEN UnitySocialTools.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m2528369711 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnitySocialTools.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m3721126120 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m3507939995 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnitySocialTools.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2474804324 * Parser_ParseObject_m3003473418 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> UnitySocialTools.Json/Parser::ParseArray()
extern "C"  List_1_t1634065389 * Parser_ParseArray_m336232595 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnitySocialTools.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m3615238745 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnitySocialTools.Json/Parser::ParseByToken(UnitySocialTools.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m3950328591 (Parser_t2383423551 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnitySocialTools.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m1470056285 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnitySocialTools.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m4221995715 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySocialTools.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m4260919985 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
