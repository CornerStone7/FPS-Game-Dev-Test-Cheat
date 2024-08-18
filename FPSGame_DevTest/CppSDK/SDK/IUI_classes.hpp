#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IUI

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EFiringMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass iUI.iUI_C
// 0x0000 (0x0028 - 0x0028)
class IIUI_C final : public IInterface
{
public:
	void UpdateSkillIcon(class UTexture2D* SkillIcon);
	void ShowStandingIcon();
	void ShowCrouchIcon();
	void UpdateTeamIcon(class UTexture* TeamIcon);
	void UpdateDeathmatchScores(const class FString& WinnerName, int32 WinnerKills, int32 KillsToWin);
	void UpdateRushScores(int32 Reinforcements, int32 TotalReinforcements);
	void UpdateExplosives(int32 ExplosivesAmount, class UTexture* Icon);
	void HideWidget();
	void ShowWidget();
	void ShowAbilityCooldownTime(float TimeRemaining);
	void HideInteractInfo();
	void ShowInteractInfo(const class FText& Description);
	void ShowHealOverlay();
	void HideInteractProgressBar();
	void ShowInteractProgressBar(float InteractTime);
	void UpdateObjectiveMarkers(class ABP_Base_Objective_C* ObjectiveToUpdate, bool PlayIconAnim, int32 Team);
	void HideWeaponInfo();
	void ShowScore(float Score, const class FText& Reason);
	void UpdateKillFeed(class APlayerState* Killer, class APlayerState* Victim, const class UDamageType* DamageType, class APlayerState* Assist, bool bHeadshot);
	void UpdateGameModeScores(int32 TeamAPoints, int32 TeamBPoints, int32 PointsToWin);
	void UpdateMatchTimer(float TimeInSeconds);
	void ShowHitOverlay();
	void UpdateTotalBullets(int32 TotalBullets);
	void UpdateCurrentBullets(int32 CurrentBullets, int32 BulletsPerMag);
	void UpdateHP(float NewHP, float MaxHP);
	void UpdateFiringMode(EFiringMode NewFiringMode);
	void ShowKillMarker();
	void ShowHitMarker(bool bVehicle);
	void OnOwnerDeath();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"iUI_C">();
	}
	static class IIUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIUI_C>();
	}
};
static_assert(alignof(IIUI_C) == 0x000008, "Wrong alignment on IIUI_C");
static_assert(sizeof(IIUI_C) == 0x000028, "Wrong size on IIUI_C");

}

