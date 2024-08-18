#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS_UpdateEnemy

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPS_UpdateEnemy.BPS_UpdateEnemy_C
// 0x0078 (0x0110 - 0x0098)
class UBPS_UpdateEnemy_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 EnemyKey;                                          // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 IsOnSightKey;                                      // 0x00C8(0x0028)(Edit, BlueprintVisible)
	bool                                          bEnemyFound;                                       // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Pawn;                                              // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                    Enemy;                                             // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          AI_Controller;                                     // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsEnemyAtMeleeRange();
	void IsEnemyOnSight(class AAIController* AIController, bool* bIsOnSight);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BPS_UpdateEnemy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS_UpdateEnemy_C">();
	}
	static class UBPS_UpdateEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS_UpdateEnemy_C>();
	}
};
static_assert(alignof(UBPS_UpdateEnemy_C) == 0x000008, "Wrong alignment on UBPS_UpdateEnemy_C");
static_assert(sizeof(UBPS_UpdateEnemy_C) == 0x000110, "Wrong size on UBPS_UpdateEnemy_C");
static_assert(offsetof(UBPS_UpdateEnemy_C, UberGraphFrame) == 0x000098, "Member 'UBPS_UpdateEnemy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS_UpdateEnemy_C, EnemyKey) == 0x0000A0, "Member 'UBPS_UpdateEnemy_C::EnemyKey' has a wrong offset!");
static_assert(offsetof(UBPS_UpdateEnemy_C, IsOnSightKey) == 0x0000C8, "Member 'UBPS_UpdateEnemy_C::IsOnSightKey' has a wrong offset!");
static_assert(offsetof(UBPS_UpdateEnemy_C, bEnemyFound) == 0x0000F0, "Member 'UBPS_UpdateEnemy_C::bEnemyFound' has a wrong offset!");
static_assert(offsetof(UBPS_UpdateEnemy_C, Pawn) == 0x0000F8, "Member 'UBPS_UpdateEnemy_C::Pawn' has a wrong offset!");
static_assert(offsetof(UBPS_UpdateEnemy_C, Enemy) == 0x000100, "Member 'UBPS_UpdateEnemy_C::Enemy' has a wrong offset!");
static_assert(offsetof(UBPS_UpdateEnemy_C, AI_Controller) == 0x000108, "Member 'UBPS_UpdateEnemy_C::AI_Controller' has a wrong offset!");

}

