#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IPlayerState

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "ERewardReasons_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass iPlayerState.iPlayerState_C
// 0x0000 (0x0028 - 0x0028)
class IIPlayerState_C final : public IInterface
{
public:
	void GetNewPing();
	void AddAssist(float DamageDone);
	void GetKills(int32* Kills);
	void SetIsPlayerReady(bool bReady);
	void IsPlayerReady(bool* bReady);
	void GetName(class FText* PlayerName);
	void GetTeam(int32* Team);
	void SetTeam(int32 NewTeam);
	void AddScoreToPlayer(float ScoreToAdd, ERewardReasons ScoreReason);
	void OnSuicide();
	void AddDeath();
	void AddKill(bool TeamKill, bool Headshot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"iPlayerState_C">();
	}
	static class IIPlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIPlayerState_C>();
	}
};
static_assert(alignof(IIPlayerState_C) == 0x000008, "Wrong alignment on IIPlayerState_C");
static_assert(sizeof(IIPlayerState_C) == 0x000028, "Wrong size on IIPlayerState_C");

}

