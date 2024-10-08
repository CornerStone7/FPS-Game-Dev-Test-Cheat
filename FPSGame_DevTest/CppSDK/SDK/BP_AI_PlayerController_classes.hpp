#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AI_PlayerController

#include "Basic.hpp"

#include "E_AI_Difficulty_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AI_PlayerController.BP_AI_PlayerController_C
// 0x0048 (0x0370 - 0x0328)
class ABP_AI_PlayerController_C final : public AAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                    PercivedActor;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                    Enemy;                                             // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   IsOnSight_Key;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BlackboardKeyEnemy;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyLastPosition_Key;                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ResetAiTargetHandle;                               // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_AI_Difficulty                               AI_Difficulty;                                     // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetReactionTime(E_AI_Difficulty Difficulty);
	void UpdateEnemyLastLocation();
	void ClearEnemy();
	void TryToFindNewEnemy();
	void SetEnemyOnSight(bool bOnSight);
	void ActorOnSight(class AActor* Actor, bool* bIsOnSight);
	void HandlePossibleNewEnemy();
	void AddKill(class ABP_PlayerCharacter_C* DeadActor);
	void StopBot();
	void ReceiveUnPossess(class APawn* UnpossessedPawn);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors);
	void SetEnemy(class ABP_BaseCharacter_C* NewEnemy);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void ExecuteUbergraph_BP_AI_PlayerController(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AI_PlayerController_C">();
	}
	static class ABP_AI_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AI_PlayerController_C>();
	}
};
static_assert(alignof(ABP_AI_PlayerController_C) == 0x000008, "Wrong alignment on ABP_AI_PlayerController_C");
static_assert(sizeof(ABP_AI_PlayerController_C) == 0x000370, "Wrong size on ABP_AI_PlayerController_C");
static_assert(offsetof(ABP_AI_PlayerController_C, UberGraphFrame) == 0x000328, "Member 'ABP_AI_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, AIPerception) == 0x000330, "Member 'ABP_AI_PlayerController_C::AIPerception' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, PercivedActor) == 0x000338, "Member 'ABP_AI_PlayerController_C::PercivedActor' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, Enemy) == 0x000340, "Member 'ABP_AI_PlayerController_C::Enemy' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, IsOnSight_Key) == 0x000348, "Member 'ABP_AI_PlayerController_C::IsOnSight_Key' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, BlackboardKeyEnemy) == 0x000350, "Member 'ABP_AI_PlayerController_C::BlackboardKeyEnemy' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, EnemyLastPosition_Key) == 0x000358, "Member 'ABP_AI_PlayerController_C::EnemyLastPosition_Key' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, ResetAiTargetHandle) == 0x000360, "Member 'ABP_AI_PlayerController_C::ResetAiTargetHandle' has a wrong offset!");
static_assert(offsetof(ABP_AI_PlayerController_C, AI_Difficulty) == 0x000368, "Member 'ABP_AI_PlayerController_C::AI_Difficulty' has a wrong offset!");

}

