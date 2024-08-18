#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseFlag

#include "Basic.hpp"

#include "BP_BaseFlag_classes.hpp"
#include "BP_BaseFlag_parameters.hpp"


namespace SDK
{

// Function BP_BaseFlag.BP_BaseFlag_C.OnRep_Carrier
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseFlag_C::OnRep_Carrier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "OnRep_Carrier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseFlag.BP_BaseFlag_C.TryToAddPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseFlag_C::TryToAddPoint(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "TryToAddPoint");

	Params::BP_BaseFlag_C_TryToAddPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_BaseFlag.BP_BaseFlag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseFlag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseFlag.BP_BaseFlag_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseFlag_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_BaseFlag_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseFlag.BP_BaseFlag_C.ResetFlag
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseFlag_C::ResetFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "ResetFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseFlag.BP_BaseFlag_C.OnPlayerDeathEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseFlag_C::OnPlayerDeathEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "OnPlayerDeathEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseFlag.BP_BaseFlag_C.DropFlag
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseFlag_C::DropFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "DropFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseFlag.BP_BaseFlag_C.ExecuteUbergraph_BP_BaseFlag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseFlag_C::ExecuteUbergraph_BP_BaseFlag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseFlag_C", "ExecuteUbergraph_BP_BaseFlag");

	Params::BP_BaseFlag_C_ExecuteUbergraph_BP_BaseFlag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

