#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DT_UM45

#include "Basic.hpp"

#include "DT_BaseDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DT_UM45.DT_UM45_C
// 0x0000 (0x0170 - 0x0170)
class UDT_UM45_C final : public UDT_BaseDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DT_UM45_C">();
	}
	static class UDT_UM45_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDT_UM45_C>();
	}
};
static_assert(alignof(UDT_UM45_C) == 0x000008, "Wrong alignment on UDT_UM45_C");
static_assert(sizeof(UDT_UM45_C) == 0x000170, "Wrong size on UDT_UM45_C");

}

