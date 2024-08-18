#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IPlayerState

#include "Basic.hpp"

#include "IPlayerState_classes.hpp"
#include "IPlayerState_parameters.hpp"


namespace SDK
{

// Function iPlayerState.iPlayerState_C.GetNewPing
// (Public, BlueprintCallable, BlueprintEvent)

void IIPlayerState_C::GetNewPing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "GetNewPing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iPlayerState.iPlayerState_C.AddAssist
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DamageDone                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerState_C::AddAssist(float DamageDone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "AddAssist");

	Params::IPlayerState_C_AddAssist Parms{};

	Parms.DamageDone = DamageDone;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iPlayerState.iPlayerState_C.GetKills
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Kills                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerState_C::GetKills(int32* Kills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "GetKills");

	Params::IPlayerState_C_GetKills Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Kills != nullptr)
		*Kills = Parms.Kills;
}


// Function iPlayerState.iPlayerState_C.SetIsPlayerReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReady                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPlayerState_C::SetIsPlayerReady(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "SetIsPlayerReady");

	Params::IPlayerState_C_SetIsPlayerReady Parms{};

	Parms.bReady = bReady;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iPlayerState.iPlayerState_C.IsPlayerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReady                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPlayerState_C::IsPlayerReady(bool* bReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "IsPlayerReady");

	Params::IPlayerState_C_IsPlayerReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReady != nullptr)
		*bReady = Parms.bReady;
}


// Function iPlayerState.iPlayerState_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (Parm, OutParm)

void IIPlayerState_C::GetName(class FText* PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "GetName");

	Params::IPlayerState_C_GetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerName != nullptr)
		*PlayerName = std::move(Parms.PlayerName);
}


// Function iPlayerState.iPlayerState_C.GetTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Team                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerState_C::GetTeam(int32* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "GetTeam");

	Params::IPlayerState_C_GetTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function iPlayerState.iPlayerState_C.SetTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewTeam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerState_C::SetTeam(int32 NewTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "SetTeam");

	Params::IPlayerState_C_SetTeam Parms{};

	Parms.NewTeam = NewTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iPlayerState.iPlayerState_C.AddScoreToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ScoreToAdd                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERewardReasons                          ScoreReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerState_C::AddScoreToPlayer(float ScoreToAdd, ERewardReasons ScoreReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "AddScoreToPlayer");

	Params::IPlayerState_C_AddScoreToPlayer Parms{};

	Parms.ScoreToAdd = ScoreToAdd;
	Parms.ScoreReason = ScoreReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iPlayerState.iPlayerState_C.OnSuicide
// (Public, BlueprintCallable, BlueprintEvent)

void IIPlayerState_C::OnSuicide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "OnSuicide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iPlayerState.iPlayerState_C.AddDeath
// (Public, BlueprintCallable, BlueprintEvent)

void IIPlayerState_C::AddDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "AddDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iPlayerState.iPlayerState_C.AddKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TeamKill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Headshot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPlayerState_C::AddKill(bool TeamKill, bool Headshot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iPlayerState_C", "AddKill");

	Params::IPlayerState_C_AddKill Parms{};

	Parms.TeamKill = TeamKill;
	Parms.Headshot = Headshot;

	UObject::ProcessEvent(Func, &Parms);
}

}

