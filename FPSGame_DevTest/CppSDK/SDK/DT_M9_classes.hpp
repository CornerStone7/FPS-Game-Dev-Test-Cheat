#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DT_M9

#include "Basic.hpp"

#include "DT_BaseDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DT_M9.DT_M9_C
// 0x0000 (0x0170 - 0x0170)
class UDT_M9_C final : public UDT_BaseDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DT_M9_C">();
	}
	static class UDT_M9_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDT_M9_C>();
	}
};
static_assert(alignof(UDT_M9_C) == 0x000008, "Wrong alignment on UDT_M9_C");
static_assert(sizeof(UDT_M9_C) == 0x000170, "Wrong size on UDT_M9_C");

}

