#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CheatManager

#include "Basic.hpp"

#include "BP_CheatManager_classes.hpp"
#include "BP_CheatManager_parameters.hpp"


namespace SDK
{

// Function BP_CheatManager.BP_CheatManager_C.NoCoolDown
// (BlueprintCallable, BlueprintEvent)

void UBP_CheatManager_C::NoCoolDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CheatManager_C", "NoCoolDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CheatManager.BP_CheatManager_C.ReceiveInitCheatManager
// (Event, Public, BlueprintEvent)

void UBP_CheatManager_C::ReceiveInitCheatManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CheatManager_C", "ReceiveInitCheatManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CheatManager.BP_CheatManager_C.InfiniteExplosives
// (BlueprintCallable, BlueprintEvent)

void UBP_CheatManager_C::InfiniteExplosives()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CheatManager_C", "InfiniteExplosives");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CheatManager.BP_CheatManager_C.InfiniteClip
// (BlueprintCallable, BlueprintEvent)

void UBP_CheatManager_C::InfiniteClip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CheatManager_C", "InfiniteClip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CheatManager.BP_CheatManager_C.RestartLevel
// (BlueprintCallable, BlueprintEvent)

void UBP_CheatManager_C::RestartLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CheatManager_C", "RestartLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CheatManager.BP_CheatManager_C.ExecuteUbergraph_BP_CheatManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CheatManager_C::ExecuteUbergraph_BP_CheatManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CheatManager_C", "ExecuteUbergraph_BP_CheatManager");

	Params::BP_CheatManager_C_ExecuteUbergraph_BP_CheatManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

