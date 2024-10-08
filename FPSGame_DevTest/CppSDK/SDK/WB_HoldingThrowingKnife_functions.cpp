#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HoldingThrowingKnife

#include "Basic.hpp"

#include "WB_HoldingThrowingKnife_classes.hpp"
#include "WB_HoldingThrowingKnife_parameters.hpp"


namespace SDK
{

// Function WB_HoldingThrowingKnife.WB_HoldingThrowingKnife_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_HoldingThrowingKnife_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HoldingThrowingKnife_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HoldingThrowingKnife.WB_HoldingThrowingKnife_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)

void UWB_HoldingThrowingKnife_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HoldingThrowingKnife_C", "RemoveWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HoldingThrowingKnife.WB_HoldingThrowingKnife_C.ExecuteUbergraph_WB_HoldingThrowingKnife
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_HoldingThrowingKnife_C::ExecuteUbergraph_WB_HoldingThrowingKnife(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HoldingThrowingKnife_C", "ExecuteUbergraph_WB_HoldingThrowingKnife");

	Params::WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

