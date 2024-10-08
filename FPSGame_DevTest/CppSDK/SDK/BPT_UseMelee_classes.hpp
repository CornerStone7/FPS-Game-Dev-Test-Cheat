#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPT_UseMelee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPT_UseMelee.BPT_UseMelee_C
// 0x0008 (0x00B0 - 0x00A8)
class UBPT_UseMelee_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SetRunning(class APawn* Pawn, bool bRun);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BPT_UseMelee(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPT_UseMelee_C">();
	}
	static class UBPT_UseMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPT_UseMelee_C>();
	}
};
static_assert(alignof(UBPT_UseMelee_C) == 0x000008, "Wrong alignment on UBPT_UseMelee_C");
static_assert(sizeof(UBPT_UseMelee_C) == 0x0000B0, "Wrong size on UBPT_UseMelee_C");
static_assert(offsetof(UBPT_UseMelee_C, UberGraphFrame) == 0x0000A8, "Member 'UBPT_UseMelee_C::UberGraphFrame' has a wrong offset!");

}

