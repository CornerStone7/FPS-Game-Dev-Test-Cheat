#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaptureTheFlag_GS

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Base_GS_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CaptureTheFlag_GS.BP_CaptureTheFlag_GS_C
// 0x0020 (0x03F0 - 0x03D0)
class ABP_CaptureTheFlag_GS_C final : public ABP_Base_GS_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CaptureTheFlag_GS_C;             // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          NewVar_0_0;                                        // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BaseFlag_C*                         FlagTeam_1;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseFlag_C*                         FlagTeam_0;                                        // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetObjectives();
	void ExecuteUbergraph_BP_CaptureTheFlag_GS(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CaptureTheFlag_GS_C">();
	}
	static class ABP_CaptureTheFlag_GS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CaptureTheFlag_GS_C>();
	}
};
static_assert(alignof(ABP_CaptureTheFlag_GS_C) == 0x000008, "Wrong alignment on ABP_CaptureTheFlag_GS_C");
static_assert(sizeof(ABP_CaptureTheFlag_GS_C) == 0x0003F0, "Wrong size on ABP_CaptureTheFlag_GS_C");
static_assert(offsetof(ABP_CaptureTheFlag_GS_C, UberGraphFrame_BP_CaptureTheFlag_GS_C) == 0x0003D0, "Member 'ABP_CaptureTheFlag_GS_C::UberGraphFrame_BP_CaptureTheFlag_GS_C' has a wrong offset!");
static_assert(offsetof(ABP_CaptureTheFlag_GS_C, NewVar_0_0) == 0x0003D8, "Member 'ABP_CaptureTheFlag_GS_C::NewVar_0_0' has a wrong offset!");
static_assert(offsetof(ABP_CaptureTheFlag_GS_C, FlagTeam_1) == 0x0003E0, "Member 'ABP_CaptureTheFlag_GS_C::FlagTeam_1' has a wrong offset!");
static_assert(offsetof(ABP_CaptureTheFlag_GS_C, FlagTeam_0) == 0x0003E8, "Member 'ABP_CaptureTheFlag_GS_C::FlagTeam_0' has a wrong offset!");

}

