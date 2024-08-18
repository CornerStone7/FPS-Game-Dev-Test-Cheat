#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Medkit

#include "Basic.hpp"

#include "BP_Medkit_classes.hpp"
#include "BP_Medkit_parameters.hpp"


namespace SDK
{

// Function BP_Medkit.BP_Medkit_C.AddInitialImpulse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Medkit_C::AddInitialImpulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "AddInitialImpulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Medkit.BP_Medkit_C.FindOverlappingActorOnActivation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Medkit_C::FindOverlappingActorOnActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "FindOverlappingActorOnActivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Medkit.BP_Medkit_C.Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Medkit_C::Use(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "Use");

	Params::BP_Medkit_C_Use Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Medkit.BP_Medkit_C.BndEvt__InfluenceSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Medkit_C::BndEvt__InfluenceSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "BndEvt__InfluenceSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Medkit_C_BndEvt__InfluenceSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Medkit.BP_Medkit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Medkit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Medkit.BP_Medkit_C.Init_Medkit
// (BlueprintCallable, BlueprintEvent)

void ABP_Medkit_C::Init_Medkit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "Init_Medkit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Medkit.BP_Medkit_C.StopSimulatingPhysics
// (BlueprintCallable, BlueprintEvent)

void ABP_Medkit_C::StopSimulatingPhysics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "StopSimulatingPhysics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Medkit.BP_Medkit_C.ExecuteUbergraph_BP_Medkit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Medkit_C::ExecuteUbergraph_BP_Medkit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Medkit_C", "ExecuteUbergraph_BP_Medkit");

	Params::BP_Medkit_C_ExecuteUbergraph_BP_Medkit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

