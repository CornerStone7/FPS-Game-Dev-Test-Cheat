#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Conquest_GM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Base_GM_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Conquest_GM.BP_Conquest_GM_C
// 0x0008 (0x03E0 - 0x03D8)
class ABP_Conquest_GM_C final : public ABP_Base_GM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Conquest_GM_C;                   // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Conquest_GM(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Conquest_GM_C">();
	}
	static class ABP_Conquest_GM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Conquest_GM_C>();
	}
};
static_assert(alignof(ABP_Conquest_GM_C) == 0x000008, "Wrong alignment on ABP_Conquest_GM_C");
static_assert(sizeof(ABP_Conquest_GM_C) == 0x0003E0, "Wrong size on ABP_Conquest_GM_C");
static_assert(offsetof(ABP_Conquest_GM_C, UberGraphFrame_BP_Conquest_GM_C) == 0x0003D8, "Member 'ABP_Conquest_GM_C::UberGraphFrame_BP_Conquest_GM_C' has a wrong offset!");

}

