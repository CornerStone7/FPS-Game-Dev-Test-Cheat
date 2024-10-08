#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AI_PlayerController

#include "Basic.hpp"

#include "BP_AI_PlayerController_classes.hpp"
#include "BP_AI_PlayerController_parameters.hpp"


namespace SDK
{

// Function BP_AI_PlayerController.BP_AI_PlayerController_C.SetReactionTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_AI_Difficulty                         Difficulty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_PlayerController_C::SetReactionTime(E_AI_Difficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "SetReactionTime");

	Params::BP_AI_PlayerController_C_SetReactionTime Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.UpdateEnemyLastLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AI_PlayerController_C::UpdateEnemyLastLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "UpdateEnemyLastLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.ClearEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AI_PlayerController_C::ClearEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "ClearEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.TryToFindNewEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AI_PlayerController_C::TryToFindNewEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "TryToFindNewEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.SetEnemyOnSight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOnSight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AI_PlayerController_C::SetEnemyOnSight(bool bOnSight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "SetEnemyOnSight");

	Params::BP_AI_PlayerController_C_SetEnemyOnSight Parms{};

	Parms.bOnSight = bOnSight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.ActorOnSight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOnSight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AI_PlayerController_C::ActorOnSight(class AActor* Actor, bool* bIsOnSight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "ActorOnSight");

	Params::BP_AI_PlayerController_C_ActorOnSight Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOnSight != nullptr)
		*bIsOnSight = Parms.bIsOnSight;
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.HandlePossibleNewEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AI_PlayerController_C::HandlePossibleNewEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "HandlePossibleNewEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.AddKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*            DeadActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_PlayerController_C::AddKill(class ABP_PlayerCharacter_C* DeadActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "AddKill");

	Params::BP_AI_PlayerController_C_AddKill Parms{};

	Parms.DeadActor = DeadActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.StopBot
// (BlueprintCallable, BlueprintEvent)

void ABP_AI_PlayerController_C::StopBot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "StopBot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            UnpossessedPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_PlayerController_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "ReceiveUnPossess");

	Params::BP_AI_PlayerController_C_ReceiveUnPossess Parms{};

	Parms.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   UpdatedActors                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_AI_PlayerController_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature");

	Params::BP_AI_PlayerController_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature Parms{};

	Parms.UpdatedActors = std::move(UpdatedActors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.SetEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*              NewEnemy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_PlayerController_C::SetEnemy(class ABP_BaseCharacter_C* NewEnemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "SetEnemy");

	Params::BP_AI_PlayerController_C_SetEnemy Parms{};

	Parms.NewEnemy = NewEnemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*             BlackboardComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardData*                  BlackboardAsset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_PlayerController_C::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "OnUsingBlackBoard");

	Params::BP_AI_PlayerController_C_OnUsingBlackBoard Parms{};

	Parms.BlackboardComp = BlackboardComp;
	Parms.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_PlayerController.BP_AI_PlayerController_C.ExecuteUbergraph_BP_AI_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_PlayerController_C::ExecuteUbergraph_BP_AI_PlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_PlayerController_C", "ExecuteUbergraph_BP_AI_PlayerController");

	Params::BP_AI_PlayerController_C_ExecuteUbergraph_BP_AI_PlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

