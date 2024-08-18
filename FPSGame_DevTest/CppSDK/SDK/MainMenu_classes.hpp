#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0010 (0x0238 - 0x0228)
class AMainMenu_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_MainMenu_C*                         MainMenu;                                          // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFailure_288B6391425B13DE61F261A17C2D6D78();
	void OnSuccess_288B6391425B13DE61F261A17C2D6D78();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_C">();
	}
	static class AMainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainMenu_C>();
	}
};
static_assert(alignof(AMainMenu_C) == 0x000008, "Wrong alignment on AMainMenu_C");
static_assert(sizeof(AMainMenu_C) == 0x000238, "Wrong size on AMainMenu_C");
static_assert(offsetof(AMainMenu_C, UberGraphFrame) == 0x000228, "Member 'AMainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MainMenu) == 0x000230, "Member 'AMainMenu_C::MainMenu' has a wrong offset!");

}

