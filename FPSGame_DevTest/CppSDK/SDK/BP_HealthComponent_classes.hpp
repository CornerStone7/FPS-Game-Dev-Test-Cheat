#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HealthComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HealthComponent.BP_HealthComponent_C
// 0x0008 (0x00B8 - 0x00B0)
class UBP_HealthComponent_C final : public UActorComponent
{
public:
	float                                         HP;                                                // 0x00B0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHP;                                             // 0x00B4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HealthComponent_C">();
	}
	static class UBP_HealthComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HealthComponent_C>();
	}
};
static_assert(alignof(UBP_HealthComponent_C) == 0x000008, "Wrong alignment on UBP_HealthComponent_C");
static_assert(sizeof(UBP_HealthComponent_C) == 0x0000B8, "Wrong size on UBP_HealthComponent_C");
static_assert(offsetof(UBP_HealthComponent_C, HP) == 0x0000B0, "Member 'UBP_HealthComponent_C::HP' has a wrong offset!");
static_assert(offsetof(UBP_HealthComponent_C, MaxHP) == 0x0000B4, "Member 'UBP_HealthComponent_C::MaxHP' has a wrong offset!");

}

