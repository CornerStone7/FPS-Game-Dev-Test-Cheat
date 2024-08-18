#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CaptureTheFlag

#include "Basic.hpp"

#include "WB_CaptureTheFlag_classes.hpp"
#include "WB_CaptureTheFlag_parameters.hpp"


namespace SDK
{

// Function WB_CaptureTheFlag.WB_CaptureTheFlag_C.UpdateScores
// (BlueprintCallable, BlueprintEvent)

void UWB_CaptureTheFlag_C::UpdateScores()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CaptureTheFlag_C", "UpdateScores");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CaptureTheFlag.WB_CaptureTheFlag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CaptureTheFlag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CaptureTheFlag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CaptureTheFlag.WB_CaptureTheFlag_C.ExecuteUbergraph_WB_CaptureTheFlag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CaptureTheFlag_C::ExecuteUbergraph_WB_CaptureTheFlag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CaptureTheFlag_C", "ExecuteUbergraph_WB_CaptureTheFlag");

	Params::WB_CaptureTheFlag_C_ExecuteUbergraph_WB_CaptureTheFlag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

