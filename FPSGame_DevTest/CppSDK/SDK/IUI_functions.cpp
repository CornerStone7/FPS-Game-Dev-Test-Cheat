#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IUI

#include "Basic.hpp"

#include "IUI_classes.hpp"
#include "IUI_parameters.hpp"


namespace SDK
{

// Function iUI.iUI_C.UpdateSkillIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       SkillIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateSkillIcon(class UTexture2D* SkillIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateSkillIcon");

	Params::IUI_C_UpdateSkillIcon Parms{};

	Parms.SkillIcon = SkillIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.ShowStandingIcon
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::ShowStandingIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowStandingIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowCrouchIcon
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::ShowCrouchIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowCrouchIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.UpdateTeamIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         TeamIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateTeamIcon(class UTexture* TeamIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateTeamIcon");

	Params::IUI_C_UpdateTeamIcon Parms{};

	Parms.TeamIcon = TeamIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateDeathmatchScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           WinnerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   WinnerKills                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   KillsToWin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateDeathmatchScores(const class FString& WinnerName, int32 WinnerKills, int32 KillsToWin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateDeathmatchScores");

	Params::IUI_C_UpdateDeathmatchScores Parms{};

	Parms.WinnerName = std::move(WinnerName);
	Parms.WinnerKills = WinnerKills;
	Parms.KillsToWin = KillsToWin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateRushScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Reinforcements                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalReinforcements                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateRushScores(int32 Reinforcements, int32 TotalReinforcements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateRushScores");

	Params::IUI_C_UpdateRushScores Parms{};

	Parms.Reinforcements = Reinforcements;
	Parms.TotalReinforcements = TotalReinforcements;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateExplosives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ExplosivesAmount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateExplosives(int32 ExplosivesAmount, class UTexture* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateExplosives");

	Params::IUI_C_UpdateExplosives Parms{};

	Parms.ExplosivesAmount = ExplosivesAmount;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "HideWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowWidget
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowAbilityCooldownTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeRemaining                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::ShowAbilityCooldownTime(float TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowAbilityCooldownTime");

	Params::IUI_C_ShowAbilityCooldownTime Parms{};

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.HideInteractInfo
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::HideInteractInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "HideInteractInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowInteractInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void IIUI_C::ShowInteractInfo(const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowInteractInfo");

	Params::IUI_C_ShowInteractInfo Parms{};

	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.ShowHealOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::ShowHealOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowHealOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.HideInteractProgressBar
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::HideInteractProgressBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "HideInteractProgressBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowInteractProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InteractTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::ShowInteractProgressBar(float InteractTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowInteractProgressBar");

	Params::IUI_C_ShowInteractProgressBar Parms{};

	Parms.InteractTime = InteractTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateObjectiveMarkers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_Objective_C*             ObjectiveToUpdate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayIconAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateObjectiveMarkers(class ABP_Base_Objective_C* ObjectiveToUpdate, bool PlayIconAnim, int32 Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateObjectiveMarkers");

	Params::IUI_C_UpdateObjectiveMarkers Parms{};

	Parms.ObjectiveToUpdate = ObjectiveToUpdate;
	Parms.PlayIconAnim = PlayIconAnim;
	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.HideWeaponInfo
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::HideWeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "HideWeaponInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void IIUI_C::ShowScore(float Score, const class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowScore");

	Params::IUI_C_ShowScore Parms{};

	Parms.Score = Score;
	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateKillFeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     Assist                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHeadshot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIUI_C::UpdateKillFeed(class APlayerState* Killer, class APlayerState* Victim, const class UDamageType* DamageType, class APlayerState* Assist, bool bHeadshot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateKillFeed");

	Params::IUI_C_UpdateKillFeed Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;
	Parms.DamageType = DamageType;
	Parms.Assist = Assist;
	Parms.bHeadshot = bHeadshot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateGameModeScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamAPoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamBPoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PointsToWin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateGameModeScores(int32 TeamAPoints, int32 TeamBPoints, int32 PointsToWin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateGameModeScores");

	Params::IUI_C_UpdateGameModeScores Parms{};

	Parms.TeamAPoints = TeamAPoints;
	Parms.TeamBPoints = TeamBPoints;
	Parms.PointsToWin = PointsToWin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateMatchTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeInSeconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateMatchTimer(float TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateMatchTimer");

	Params::IUI_C_UpdateMatchTimer Parms{};

	Parms.TimeInSeconds = TimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.ShowHitOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::ShowHitOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowHitOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.UpdateTotalBullets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TotalBullets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateTotalBullets(int32 TotalBullets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateTotalBullets");

	Params::IUI_C_UpdateTotalBullets Parms{};

	Parms.TotalBullets = TotalBullets;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateCurrentBullets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentBullets                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BulletsPerMag                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateCurrentBullets(int32 CurrentBullets, int32 BulletsPerMag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateCurrentBullets");

	Params::IUI_C_UpdateCurrentBullets Parms{};

	Parms.CurrentBullets = CurrentBullets;
	Parms.BulletsPerMag = BulletsPerMag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateHP(float NewHP, float MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateHP");

	Params::IUI_C_UpdateHP Parms{};

	Parms.NewHP = NewHP;
	Parms.MaxHP = MaxHP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.UpdateFiringMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFiringMode                             NewFiringMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIUI_C::UpdateFiringMode(EFiringMode NewFiringMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "UpdateFiringMode");

	Params::IUI_C_UpdateFiringMode Parms{};

	Parms.NewFiringMode = NewFiringMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.ShowKillMarker
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::ShowKillMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowKillMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function iUI.iUI_C.ShowHitMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVehicle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIUI_C::ShowHitMarker(bool bVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "ShowHitMarker");

	Params::IUI_C_ShowHitMarker Parms{};

	Parms.bVehicle = bVehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function iUI.iUI_C.OnOwnerDeath
// (Public, BlueprintCallable, BlueprintEvent)

void IIUI_C::OnOwnerDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("iUI_C", "OnOwnerDeath");

	UObject::ProcessEvent(Func, nullptr);
}

}

