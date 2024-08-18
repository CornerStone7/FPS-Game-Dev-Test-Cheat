#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS_UpdateEnemy

#include "Basic.hpp"

#include "BPS_UpdateEnemy_classes.hpp"
#include "BPS_UpdateEnemy_parameters.hpp"


namespace SDK
{

// Function BPS_UpdateEnemy.BPS_UpdateEnemy_C.IsEnemyAtMeleeRange
// (Public, BlueprintCallable, BlueprintEvent)

void UBPS_UpdateEnemy_C::IsEnemyAtMeleeRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS_UpdateEnemy_C", "IsEnemyAtMeleeRange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS_UpdateEnemy.BPS_UpdateEnemy_C.IsEnemyOnSight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    AIController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOnSight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPS_UpdateEnemy_C::IsEnemyOnSight(class AAIController* AIController, bool* bIsOnSight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS_UpdateEnemy_C", "IsEnemyOnSight");

	Params::BPS_UpdateEnemy_C_IsEnemyOnSight Parms{};

	Parms.AIController = AIController;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOnSight != nullptr)
		*bIsOnSight = Parms.bIsOnSight;
}


// Function BPS_UpdateEnemy.BPS_UpdateEnemy_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS_UpdateEnemy_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS_UpdateEnemy_C", "ReceiveTickAI");

	Params::BPS_UpdateEnemy_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS_UpdateEnemy.BPS_UpdateEnemy_C.ExecuteUbergraph_BPS_UpdateEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS_UpdateEnemy_C::ExecuteUbergraph_BPS_UpdateEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS_UpdateEnemy_C", "ExecuteUbergraph_BPS_UpdateEnemy");

	Params::BPS_UpdateEnemy_C_ExecuteUbergraph_BPS_UpdateEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

