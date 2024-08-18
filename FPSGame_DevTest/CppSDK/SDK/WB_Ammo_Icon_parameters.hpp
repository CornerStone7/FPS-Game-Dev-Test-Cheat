#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Ammo_Icon

#include "Basic.hpp"

#include "EFiringMode_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.ShowHitMarker
// 0x0001 (0x0001 - 0x0000)
struct WB_Ammo_Icon_C_ShowHitMarker final
{
public:
	bool                                          bVehicle;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Ammo_Icon_C_ShowHitMarker) == 0x000001, "Wrong alignment on WB_Ammo_Icon_C_ShowHitMarker");
static_assert(sizeof(WB_Ammo_Icon_C_ShowHitMarker) == 0x000001, "Wrong size on WB_Ammo_Icon_C_ShowHitMarker");
static_assert(offsetof(WB_Ammo_Icon_C_ShowHitMarker, bVehicle) == 0x000000, "Member 'WB_Ammo_Icon_C_ShowHitMarker::bVehicle' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateFiringMode
// 0x0001 (0x0001 - 0x0000)
struct WB_Ammo_Icon_C_UpdateFiringMode final
{
public:
	EFiringMode                                   NewFiringMode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateFiringMode) == 0x000001, "Wrong alignment on WB_Ammo_Icon_C_UpdateFiringMode");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateFiringMode) == 0x000001, "Wrong size on WB_Ammo_Icon_C_UpdateFiringMode");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateFiringMode, NewFiringMode) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateFiringMode::NewFiringMode' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateHP
// 0x0008 (0x0008 - 0x0000)
struct WB_Ammo_Icon_C_UpdateHP final
{
public:
	float                                         NewHP;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHP;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateHP) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_UpdateHP");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateHP) == 0x000008, "Wrong size on WB_Ammo_Icon_C_UpdateHP");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateHP, NewHP) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateHP::NewHP' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateHP, MaxHP) == 0x000004, "Member 'WB_Ammo_Icon_C_UpdateHP::MaxHP' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateCurrentBullets
// 0x0008 (0x0008 - 0x0000)
struct WB_Ammo_Icon_C_UpdateCurrentBullets final
{
public:
	int32                                         CurrentBullets;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BulletsPerMag;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateCurrentBullets) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_UpdateCurrentBullets");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateCurrentBullets) == 0x000008, "Wrong size on WB_Ammo_Icon_C_UpdateCurrentBullets");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateCurrentBullets, CurrentBullets) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateCurrentBullets::CurrentBullets' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateCurrentBullets, BulletsPerMag) == 0x000004, "Member 'WB_Ammo_Icon_C_UpdateCurrentBullets::BulletsPerMag' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateTotalBullets
// 0x0004 (0x0004 - 0x0000)
struct WB_Ammo_Icon_C_UpdateTotalBullets final
{
public:
	int32                                         TotalBullets;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateTotalBullets) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_UpdateTotalBullets");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateTotalBullets) == 0x000004, "Wrong size on WB_Ammo_Icon_C_UpdateTotalBullets");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateTotalBullets, TotalBullets) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateTotalBullets::TotalBullets' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateMatchTimer
// 0x0004 (0x0004 - 0x0000)
struct WB_Ammo_Icon_C_UpdateMatchTimer final
{
public:
	float                                         TimeInSeconds;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateMatchTimer) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_UpdateMatchTimer");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateMatchTimer) == 0x000004, "Wrong size on WB_Ammo_Icon_C_UpdateMatchTimer");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateMatchTimer, TimeInSeconds) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateMatchTimer::TimeInSeconds' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateGameModeScores
// 0x000C (0x000C - 0x0000)
struct WB_Ammo_Icon_C_UpdateGameModeScores final
{
public:
	int32                                         TeamAPoints;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamBPoints;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PointsToWin;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateGameModeScores) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_UpdateGameModeScores");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateGameModeScores) == 0x00000C, "Wrong size on WB_Ammo_Icon_C_UpdateGameModeScores");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateGameModeScores, TeamAPoints) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateGameModeScores::TeamAPoints' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateGameModeScores, TeamBPoints) == 0x000004, "Member 'WB_Ammo_Icon_C_UpdateGameModeScores::TeamBPoints' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateGameModeScores, PointsToWin) == 0x000008, "Member 'WB_Ammo_Icon_C_UpdateGameModeScores::PointsToWin' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateKillFeed
// 0x0028 (0x0028 - 0x0000)
struct WB_Ammo_Icon_C_UpdateKillFeed final
{
public:
	class APlayerState*                           Killer;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           Victim;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDamageType*                      DamageType;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           Assist;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHeadshot;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateKillFeed) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_UpdateKillFeed");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateKillFeed) == 0x000028, "Wrong size on WB_Ammo_Icon_C_UpdateKillFeed");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateKillFeed, Killer) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateKillFeed::Killer' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateKillFeed, Victim) == 0x000008, "Member 'WB_Ammo_Icon_C_UpdateKillFeed::Victim' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateKillFeed, DamageType) == 0x000010, "Member 'WB_Ammo_Icon_C_UpdateKillFeed::DamageType' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateKillFeed, Assist) == 0x000018, "Member 'WB_Ammo_Icon_C_UpdateKillFeed::Assist' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateKillFeed, bHeadshot) == 0x000020, "Member 'WB_Ammo_Icon_C_UpdateKillFeed::bHeadshot' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.ShowScore
// 0x0020 (0x0020 - 0x0000)
struct WB_Ammo_Icon_C_ShowScore final
{
public:
	float                                         Score;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Reason;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_Ammo_Icon_C_ShowScore) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_ShowScore");
static_assert(sizeof(WB_Ammo_Icon_C_ShowScore) == 0x000020, "Wrong size on WB_Ammo_Icon_C_ShowScore");
static_assert(offsetof(WB_Ammo_Icon_C_ShowScore, Score) == 0x000000, "Member 'WB_Ammo_Icon_C_ShowScore::Score' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ShowScore, Reason) == 0x000008, "Member 'WB_Ammo_Icon_C_ShowScore::Reason' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateObjectiveMarkers
// 0x0010 (0x0010 - 0x0000)
struct WB_Ammo_Icon_C_UpdateObjectiveMarkers final
{
public:
	class ABP_Base_Objective_C*                   ObjectiveToUpdate;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayIconAnim;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Team;                                              // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateObjectiveMarkers) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_UpdateObjectiveMarkers");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateObjectiveMarkers) == 0x000010, "Wrong size on WB_Ammo_Icon_C_UpdateObjectiveMarkers");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateObjectiveMarkers, ObjectiveToUpdate) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateObjectiveMarkers::ObjectiveToUpdate' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateObjectiveMarkers, PlayIconAnim) == 0x000008, "Member 'WB_Ammo_Icon_C_UpdateObjectiveMarkers::PlayIconAnim' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateObjectiveMarkers, Team) == 0x00000C, "Member 'WB_Ammo_Icon_C_UpdateObjectiveMarkers::Team' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.ShowInteractProgressBar
// 0x0004 (0x0004 - 0x0000)
struct WB_Ammo_Icon_C_ShowInteractProgressBar final
{
public:
	float                                         InteractTime;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_ShowInteractProgressBar) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_ShowInteractProgressBar");
static_assert(sizeof(WB_Ammo_Icon_C_ShowInteractProgressBar) == 0x000004, "Wrong size on WB_Ammo_Icon_C_ShowInteractProgressBar");
static_assert(offsetof(WB_Ammo_Icon_C_ShowInteractProgressBar, InteractTime) == 0x000000, "Member 'WB_Ammo_Icon_C_ShowInteractProgressBar::InteractTime' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.ShowInteractInfo
// 0x0018 (0x0018 - 0x0000)
struct WB_Ammo_Icon_C_ShowInteractInfo final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_Ammo_Icon_C_ShowInteractInfo) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_ShowInteractInfo");
static_assert(sizeof(WB_Ammo_Icon_C_ShowInteractInfo) == 0x000018, "Wrong size on WB_Ammo_Icon_C_ShowInteractInfo");
static_assert(offsetof(WB_Ammo_Icon_C_ShowInteractInfo, Description) == 0x000000, "Member 'WB_Ammo_Icon_C_ShowInteractInfo::Description' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.ShowAbilityCooldownTime
// 0x0004 (0x0004 - 0x0000)
struct WB_Ammo_Icon_C_ShowAbilityCooldownTime final
{
public:
	float                                         TimeRemaining;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_ShowAbilityCooldownTime) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_ShowAbilityCooldownTime");
static_assert(sizeof(WB_Ammo_Icon_C_ShowAbilityCooldownTime) == 0x000004, "Wrong size on WB_Ammo_Icon_C_ShowAbilityCooldownTime");
static_assert(offsetof(WB_Ammo_Icon_C_ShowAbilityCooldownTime, TimeRemaining) == 0x000000, "Member 'WB_Ammo_Icon_C_ShowAbilityCooldownTime::TimeRemaining' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateExplosives
// 0x0010 (0x0010 - 0x0000)
struct WB_Ammo_Icon_C_UpdateExplosives final
{
public:
	int32                                         ExplosivesAmount;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Icon_0;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateExplosives) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_UpdateExplosives");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateExplosives) == 0x000010, "Wrong size on WB_Ammo_Icon_C_UpdateExplosives");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateExplosives, ExplosivesAmount) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateExplosives::ExplosivesAmount' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateExplosives, Icon_0) == 0x000008, "Member 'WB_Ammo_Icon_C_UpdateExplosives::Icon_0' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateRushScores
// 0x0008 (0x0008 - 0x0000)
struct WB_Ammo_Icon_C_UpdateRushScores final
{
public:
	int32                                         Reinforcements;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalReinforcements;                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateRushScores) == 0x000004, "Wrong alignment on WB_Ammo_Icon_C_UpdateRushScores");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateRushScores) == 0x000008, "Wrong size on WB_Ammo_Icon_C_UpdateRushScores");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateRushScores, Reinforcements) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateRushScores::Reinforcements' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateRushScores, TotalReinforcements) == 0x000004, "Member 'WB_Ammo_Icon_C_UpdateRushScores::TotalReinforcements' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateDeathmatchScores
// 0x0018 (0x0018 - 0x0000)
struct WB_Ammo_Icon_C_UpdateDeathmatchScores final
{
public:
	class FString                                 WinnerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         WinnerKills;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         KillsToWin;                                        // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateDeathmatchScores) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_UpdateDeathmatchScores");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateDeathmatchScores) == 0x000018, "Wrong size on WB_Ammo_Icon_C_UpdateDeathmatchScores");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateDeathmatchScores, WinnerName) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateDeathmatchScores::WinnerName' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateDeathmatchScores, WinnerKills) == 0x000010, "Member 'WB_Ammo_Icon_C_UpdateDeathmatchScores::WinnerKills' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateDeathmatchScores, KillsToWin) == 0x000014, "Member 'WB_Ammo_Icon_C_UpdateDeathmatchScores::KillsToWin' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateTeamIcon
// 0x0008 (0x0008 - 0x0000)
struct WB_Ammo_Icon_C_UpdateTeamIcon final
{
public:
	class UTexture*                               TeamIcon;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateTeamIcon) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_UpdateTeamIcon");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateTeamIcon) == 0x000008, "Wrong size on WB_Ammo_Icon_C_UpdateTeamIcon");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateTeamIcon, TeamIcon) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateTeamIcon::TeamIcon' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.UpdateSkillIcon
// 0x0008 (0x0008 - 0x0000)
struct WB_Ammo_Icon_C_UpdateSkillIcon final
{
public:
	class UTexture2D*                             SkillIcon;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_UpdateSkillIcon) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_UpdateSkillIcon");
static_assert(sizeof(WB_Ammo_Icon_C_UpdateSkillIcon) == 0x000008, "Wrong size on WB_Ammo_Icon_C_UpdateSkillIcon");
static_assert(offsetof(WB_Ammo_Icon_C_UpdateSkillIcon, SkillIcon) == 0x000000, "Member 'WB_Ammo_Icon_C_UpdateSkillIcon::SkillIcon' has a wrong offset!");

// Function WB_Ammo_Icon.WB_Ammo_Icon_C.ExecuteUbergraph_WB_Ammo_Icon
// 0x0110 (0x0110 - 0x0000)
struct WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bVehicle;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFiringMode                                   K2Node_Event_NewFiringMode;                        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_NewHP;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_MaxHP;                                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_CurrentBullets;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_BulletsPerMag;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_TotalBullets;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_TimeInSeconds;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_TeamAPoints;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_TeamBPoints;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_PointsToWin;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           K2Node_Event_Killer;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           K2Node_Event_Victim;                               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDamageType*                      K2Node_Event_DamageType;                           // 0x0050(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           K2Node_Event_Assist;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHeadshot;                            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Score;                                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_Reason;                               // 0x0068(0x0018)()
	class ABP_Base_Objective_C*                   K2Node_Event_ObjectiveToUpdate;                    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_PlayIconAnim;                         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Team;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InteractTime;                         // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Description;                          // 0x0098(0x0018)()
	float                                         K2Node_Event_TimeRemaining;                        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ExplosivesAmount;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_Event_Icon;                                 // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Reinforcements;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_TotalReinforcements;                  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_WinnerName;                           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_WinnerKills;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_KillsToWin;                           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_Event_TeamIcon;                             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_SkillIcon;                            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0108(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon) == 0x000008, "Wrong alignment on WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon");
static_assert(sizeof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon) == 0x000110, "Wrong size on WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, EntryPoint) == 0x000000, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_bVehicle) == 0x000014, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_bVehicle' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_NewFiringMode) == 0x000015, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_NewFiringMode' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_NewHP) == 0x000018, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_NewHP' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_MaxHP) == 0x00001C, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_MaxHP' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_CurrentBullets) == 0x000020, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_CurrentBullets' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_BulletsPerMag) == 0x000024, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_BulletsPerMag' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TotalBullets) == 0x000028, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TotalBullets' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TimeInSeconds) == 0x00002C, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TimeInSeconds' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TeamAPoints) == 0x000030, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TeamAPoints' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TeamBPoints) == 0x000034, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TeamBPoints' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_PointsToWin) == 0x000038, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_PointsToWin' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Killer) == 0x000040, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Killer' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Victim) == 0x000048, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Victim' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_DamageType) == 0x000050, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Assist) == 0x000058, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Assist' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_bHeadshot) == 0x000060, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_bHeadshot' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Score) == 0x000064, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Score' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Reason) == 0x000068, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_ObjectiveToUpdate) == 0x000080, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_ObjectiveToUpdate' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_PlayIconAnim) == 0x000088, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_PlayIconAnim' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Team) == 0x00008C, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Team' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_InteractTime) == 0x000090, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_InteractTime' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Description) == 0x000098, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Description' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TimeRemaining) == 0x0000B0, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TimeRemaining' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_ExplosivesAmount) == 0x0000B4, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_ExplosivesAmount' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Icon) == 0x0000B8, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Icon' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_Reinforcements) == 0x0000C0, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_Reinforcements' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TotalReinforcements) == 0x0000C4, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TotalReinforcements' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_WinnerName) == 0x0000C8, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_WinnerName' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_WinnerKills) == 0x0000D8, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_WinnerKills' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_KillsToWin) == 0x0000DC, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_KillsToWin' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_TeamIcon) == 0x0000E0, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_TeamIcon' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, K2Node_Event_SkillIcon) == 0x0000E8, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::K2Node_Event_SkillIcon' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, CallFunc_PlayAnimation_ReturnValue) == 0x0000F0, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, CallFunc_GetEndTime_ReturnValue) == 0x0000F8, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, CallFunc_PlayAnimation_ReturnValue_1) == 0x000100, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000108, "Member 'WB_Ammo_Icon_C_ExecuteUbergraph_WB_Ammo_Icon::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}

