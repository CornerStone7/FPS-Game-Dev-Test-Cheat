#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IInteractive

#include "Basic.hpp"

#include "IInteractive_classes.hpp"
#include "IInteractive_parameters.hpp"


namespace SDK
{

// Function iInteractive.iInteractive_C.GetInteractTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InteractTime                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInteractive_C::GetInteractTime(float* InteractTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "GetInteractTime");

	Params::IInteractive_C_GetInteractTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InteractTime != nullptr)
		*InteractTime = Parms.InteractTime;
}


// Function iInteractive.iInteractive_C.GetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Icon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInteractive_C::GetIcon(class UTexture** Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "GetIcon");

	Params::IInteractive_C_GetIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function iInteractive.iInteractive_C.GetDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (Parm, OutParm)

void IIInteractive_C::GetDescription(class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "GetDescription");

	Params::IInteractive_C_GetDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = std::move(Parms.Description);
}


// Function iInteractive.iInteractive_C.TryToInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFailure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIInteractive_C::TryToInteract(bool* bFailure)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "TryToInteract");

	Params::IInteractive_C_TryToInteract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bFailure != nullptr)
		*bFailure = Parms.bFailure;
}


// Function iInteractive.iInteractive_C.EndInteract
// (Public, BlueprintCallable, BlueprintEvent)

void IIInteractive_C::EndInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "EndInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iInteractive.iInteractive_C.BeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInteractive_C::BeginInteract(class ACharacter* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "BeginInteract");

	Params::IInteractive_C_BeginInteract Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iInteractive.iInteractive_C.EndHover
// (Public, BlueprintCallable, BlueprintEvent)

void IIInteractive_C::EndHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "EndHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iInteractive.iInteractive_C.BeginHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInteractive_C::BeginHover(class ACharacter* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "BeginHover");

	Params::IInteractive_C_BeginHover Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iInteractive.iInteractive_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInteractive_C::Interact(class ACharacter* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iInteractive_C", "Interact");

	Params::IInteractive_C_Interact Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);
}

}

