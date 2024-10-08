#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Conquest_GS

#include "Basic.hpp"

#include "BP_Conquest_GS_classes.hpp"
#include "BP_Conquest_GS_parameters.hpp"


namespace SDK
{

// Function BP_Conquest_GS.BP_Conquest_GS_C.OnStartMatch
// (BlueprintCallable, BlueprintEvent)

void ABP_Conquest_GS_C::OnStartMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Conquest_GS_C", "OnStartMatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Conquest_GS.BP_Conquest_GS_C.SetCapturePointsProgess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECapturePoints                          FlagID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCapturePointInfo                NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Conquest_GS_C::SetCapturePointsProgess(ECapturePoints FlagID, const struct FCapturePointInfo& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Conquest_GS_C", "SetCapturePointsProgess");

	Params::BP_Conquest_GS_C_SetCapturePointsProgess Parms{};

	Parms.FlagID = FlagID;
	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Conquest_GS.BP_Conquest_GS_C.SetCapturePointHolder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HolderTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECapturePoints                          NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Conquest_GS_C::SetCapturePointHolder(bool HolderTeam, ECapturePoints NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Conquest_GS_C", "SetCapturePointHolder");

	Params::BP_Conquest_GS_C_SetCapturePointHolder Parms{};

	Parms.HolderTeam = HolderTeam;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Conquest_GS.BP_Conquest_GS_C.ExecuteUbergraph_BP_Conquest_GS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Conquest_GS_C::ExecuteUbergraph_BP_Conquest_GS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Conquest_GS_C", "ExecuteUbergraph_BP_Conquest_GS");

	Params::BP_Conquest_GS_C_ExecuteUbergraph_BP_Conquest_GS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

