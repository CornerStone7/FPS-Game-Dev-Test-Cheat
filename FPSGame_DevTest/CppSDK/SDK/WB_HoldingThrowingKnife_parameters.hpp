#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HoldingThrowingKnife

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_HoldingThrowingKnife.WB_HoldingThrowingKnife_C.ExecuteUbergraph_WB_HoldingThrowingKnife
// 0x0038 (0x0038 - 0x0000)
struct WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                    K2Node_DynamicCast_AsBP_Base_Character;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife) == 0x000008, "Wrong alignment on WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife");
static_assert(sizeof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife) == 0x000038, "Wrong size on WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife");
static_assert(offsetof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife, EntryPoint) == 0x000000, "Member 'WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife, CallFunc_GetPlayerPawn_ReturnValue) == 0x000018, "Member 'WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife, K2Node_DynamicCast_AsBP_Base_Character) == 0x000028, "Member 'WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife::K2Node_DynamicCast_AsBP_Base_Character' has a wrong offset!");
static_assert(offsetof(WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WB_HoldingThrowingKnife_C_ExecuteUbergraph_WB_HoldingThrowingKnife::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

