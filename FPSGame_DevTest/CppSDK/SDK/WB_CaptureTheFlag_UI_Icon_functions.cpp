#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CaptureTheFlag_UI_Icon

#include "Basic.hpp"

#include "WB_CaptureTheFlag_UI_Icon_classes.hpp"
#include "WB_CaptureTheFlag_UI_Icon_parameters.hpp"


namespace SDK
{

// Function WB_CaptureTheFlag_UI_Icon.WB_CaptureTheFlag_UI_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CaptureTheFlag_UI_Icon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CaptureTheFlag_UI_Icon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CaptureTheFlag_UI_Icon.WB_CaptureTheFlag_UI_Icon_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)

void UWB_CaptureTheFlag_UI_Icon_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CaptureTheFlag_UI_Icon_C", "RemoveWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CaptureTheFlag_UI_Icon.WB_CaptureTheFlag_UI_Icon_C.ExecuteUbergraph_WB_CaptureTheFlag_UI_Icon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CaptureTheFlag_UI_Icon_C::ExecuteUbergraph_WB_CaptureTheFlag_UI_Icon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CaptureTheFlag_UI_Icon_C", "ExecuteUbergraph_WB_CaptureTheFlag_UI_Icon");

	Params::WB_CaptureTheFlag_UI_Icon_C_ExecuteUbergraph_WB_CaptureTheFlag_UI_Icon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

