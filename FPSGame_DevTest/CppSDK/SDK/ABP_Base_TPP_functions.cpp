#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Base_TPP

#include "Basic.hpp"

#include "ABP_Base_TPP_classes.hpp"
#include "ABP_Base_TPP_parameters.hpp"


namespace SDK
{

// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Base_TPP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimGraph");

	Params::ABP_Base_TPP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.MakeNosieEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::MakeNosieEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "MakeNosieEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.PlayFootstepSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::PlayFootstepSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "PlayFootstepSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.SetPawnInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::SetPawnInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "SetPawnInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Base_TPP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "BlueprintUpdateAnimation");

	Params::ABP_Base_TPP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_ReloadCompleted
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_ReloadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_ReloadCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_MeleeAttackCompleted
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_MeleeAttackCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_MeleeAttackCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_Footstep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Base_TPP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_SpawnLethal
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_SpawnLethal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_SpawnLethal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_ShowLethal
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_ShowLethal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_ShowLethal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_EquipWeapon
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_EquipWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_EquipWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_HideLethal
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_HideLethal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_HideLethal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.AnimNotify_HideWeapon
// (BlueprintCallable, BlueprintEvent)

void UABP_Base_TPP_C::AnimNotify_HideWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "AnimNotify_HideWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Base_TPP.ABP_Base_TPP_C.ExecuteUbergraph_ABP_Base_TPP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Base_TPP_C::ExecuteUbergraph_ABP_Base_TPP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Base_TPP_C", "ExecuteUbergraph_ABP_Base_TPP");

	Params::ABP_Base_TPP_C_ExecuteUbergraph_ABP_Base_TPP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

