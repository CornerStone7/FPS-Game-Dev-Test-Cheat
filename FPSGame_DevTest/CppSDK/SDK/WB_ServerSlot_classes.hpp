#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ServerSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "OnlineSubsystemUtils_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ServerSlot.WB_ServerSlot_C
// 0x0148 (0x03A8 - 0x0260)
class UWB_ServerSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ServerName;                                        // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ServerSlotButton;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   NameOfTheServer;                                   // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxPlayers;                                        // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentPlayers;                                    // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                SessionToJoin;                                     // 0x0290(0x0108)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_JoinServerMenu_C*                   JoinServerWB;                                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ServerPing;                                        // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FText GetServerPing();
	class FText GetServerName();
	class FText GetServerCurrentPlayers();
	void BndEvt__ServerSlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ServerSlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ServerSlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_ServerSlot(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ServerSlot_C">();
	}
	static class UWB_ServerSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ServerSlot_C>();
	}
};
static_assert(alignof(UWB_ServerSlot_C) == 0x000008, "Wrong alignment on UWB_ServerSlot_C");
static_assert(sizeof(UWB_ServerSlot_C) == 0x0003A8, "Wrong size on UWB_ServerSlot_C");
static_assert(offsetof(UWB_ServerSlot_C, UberGraphFrame) == 0x000260, "Member 'UWB_ServerSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, ServerName) == 0x000268, "Member 'UWB_ServerSlot_C::ServerName' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, ServerSlotButton) == 0x000270, "Member 'UWB_ServerSlot_C::ServerSlotButton' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, TextBlock_1) == 0x000278, "Member 'UWB_ServerSlot_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, NameOfTheServer) == 0x000280, "Member 'UWB_ServerSlot_C::NameOfTheServer' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, MaxPlayers) == 0x000288, "Member 'UWB_ServerSlot_C::MaxPlayers' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, CurrentPlayers) == 0x00028C, "Member 'UWB_ServerSlot_C::CurrentPlayers' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, SessionToJoin) == 0x000290, "Member 'UWB_ServerSlot_C::SessionToJoin' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, JoinServerWB) == 0x000398, "Member 'UWB_ServerSlot_C::JoinServerWB' has a wrong offset!");
static_assert(offsetof(UWB_ServerSlot_C, ServerPing) == 0x0003A0, "Member 'UWB_ServerSlot_C::ServerPing' has a wrong offset!");

}

