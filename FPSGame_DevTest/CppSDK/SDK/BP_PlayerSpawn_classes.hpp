#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerSpawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerSpawn.BP_PlayerSpawn_C
// 0x0010 (0x0260 - 0x0250)
class ABP_PlayerSpawn_C final : public APlayerStart
{
public:
	int32                                         Team;                                              // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanBeUsed;                                        // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNearEnemy;                                        // 0x0255(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bActive;                                           // 0x0256(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_257[0x1];                                      // 0x0257(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         State;                                             // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanBotsUse_;                                      // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          FFA;                                               // 0x025D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerSpawn_C">();
	}
	static class ABP_PlayerSpawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerSpawn_C>();
	}
};
static_assert(alignof(ABP_PlayerSpawn_C) == 0x000008, "Wrong alignment on ABP_PlayerSpawn_C");
static_assert(sizeof(ABP_PlayerSpawn_C) == 0x000260, "Wrong size on ABP_PlayerSpawn_C");
static_assert(offsetof(ABP_PlayerSpawn_C, Team) == 0x000250, "Member 'ABP_PlayerSpawn_C::Team' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSpawn_C, bCanBeUsed) == 0x000254, "Member 'ABP_PlayerSpawn_C::bCanBeUsed' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSpawn_C, bNearEnemy) == 0x000255, "Member 'ABP_PlayerSpawn_C::bNearEnemy' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSpawn_C, bActive) == 0x000256, "Member 'ABP_PlayerSpawn_C::bActive' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSpawn_C, State) == 0x000258, "Member 'ABP_PlayerSpawn_C::State' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSpawn_C, bCanBotsUse_) == 0x00025C, "Member 'ABP_PlayerSpawn_C::bCanBotsUse_' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSpawn_C, FFA) == 0x00025D, "Member 'ABP_PlayerSpawn_C::FFA' has a wrong offset!");

}

