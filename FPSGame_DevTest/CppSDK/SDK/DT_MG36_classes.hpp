#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DT_MG36

#include "Basic.hpp"

#include "DT_BaseDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DT_MG36.DT_MG36_C
// 0x0000 (0x0170 - 0x0170)
class UDT_MG36_C final : public UDT_BaseDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DT_MG36_C">();
	}
	static class UDT_MG36_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDT_MG36_C>();
	}
};
static_assert(alignof(UDT_MG36_C) == 0x000008, "Wrong alignment on UDT_MG36_C");
static_assert(sizeof(UDT_MG36_C) == 0x000170, "Wrong size on UDT_MG36_C");

}

