#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DT_Grenade

#include "Basic.hpp"

#include "DT_BaseDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DT_Grenade.DT_Grenade_C
// 0x0000 (0x0170 - 0x0170)
class UDT_Grenade_C final : public UDT_BaseDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DT_Grenade_C">();
	}
	static class UDT_Grenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDT_Grenade_C>();
	}
};
static_assert(alignof(UDT_Grenade_C) == 0x000008, "Wrong alignment on UDT_Grenade_C");
static_assert(sizeof(UDT_Grenade_C) == 0x000170, "Wrong size on UDT_Grenade_C");

}

