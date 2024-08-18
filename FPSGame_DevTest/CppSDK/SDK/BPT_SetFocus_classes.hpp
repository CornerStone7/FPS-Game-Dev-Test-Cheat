#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPT_SetFocus

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPT_SetFocus.BPT_SetFocus_C
// 0x0030 (0x00D8 - 0x00A8)
class UBPT_SetFocus_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Vectorkey;                                         // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BPT_SetFocus(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPT_SetFocus_C">();
	}
	static class UBPT_SetFocus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPT_SetFocus_C>();
	}
};
static_assert(alignof(UBPT_SetFocus_C) == 0x000008, "Wrong alignment on UBPT_SetFocus_C");
static_assert(sizeof(UBPT_SetFocus_C) == 0x0000D8, "Wrong size on UBPT_SetFocus_C");
static_assert(offsetof(UBPT_SetFocus_C, UberGraphFrame) == 0x0000A8, "Member 'UBPT_SetFocus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPT_SetFocus_C, Vectorkey) == 0x0000B0, "Member 'UBPT_SetFocus_C::Vectorkey' has a wrong offset!");

}

