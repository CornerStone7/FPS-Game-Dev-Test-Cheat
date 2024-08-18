#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ConquestObjectiveProgressBar

#include "Basic.hpp"

#include "ECapturePoints_structs.hpp"
#include "CapturePointInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_ConquestObjectiveProgressBar.WB_ConquestObjectiveProgressBar_C.SetCapturingPoint
// 0x0001 (0x0001 - 0x0000)
struct WB_ConquestObjectiveProgressBar_C_SetCapturingPoint final
{
public:
	ECapturePoints                                ActualCapturePoint_0;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ConquestObjectiveProgressBar_C_SetCapturingPoint) == 0x000001, "Wrong alignment on WB_ConquestObjectiveProgressBar_C_SetCapturingPoint");
static_assert(sizeof(WB_ConquestObjectiveProgressBar_C_SetCapturingPoint) == 0x000001, "Wrong size on WB_ConquestObjectiveProgressBar_C_SetCapturingPoint");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_SetCapturingPoint, ActualCapturePoint_0) == 0x000000, "Member 'WB_ConquestObjectiveProgressBar_C_SetCapturingPoint::ActualCapturePoint_0' has a wrong offset!");

// Function WB_ConquestObjectiveProgressBar.WB_ConquestObjectiveProgressBar_C.ExecuteUbergraph_WB_ConquestObjectiveProgressBar
// 0x0238 (0x0238 - 0x0000)
struct WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCapturePointInfo                      Temp_struct_Variable;                              // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Base_GS_C*                          K2Node_DynamicCast_AsBP_Base_GS;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCapturePointInfo                      Temp_struct_Variable_1;                            // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameOver_bGameOver;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0040(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0058(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x0078(0x0018)()
	ECapturePoints                                K2Node_CustomEvent_ActualCapturePoint;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Conquest_GS_C*                      K2Node_DynamicCast_AsBP_Conquest_GS;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECapturePoints                                Temp_byte_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FCapturePointInfo                      K2Node_Select_Default;                             // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIPawnActions_C>       K2Node_DynamicCast_AsI_Pawn_Actions;               // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDead_bIsDead;                           // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_173[0x5];                                      // 0x0173(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0190(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerTeamFromPlayerState_Team;        // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19E[0x2];                                      // 0x019E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x01A0(0x0018)()
	class FText                                   K2Node_Select_Default_3;                           // 0x01B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0210(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0220(0x0018)()
};
static_assert(alignof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar) == 0x000008, "Wrong alignment on WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar");
static_assert(sizeof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar) == 0x000238, "Wrong size on WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, EntryPoint) == 0x000000, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_struct_Variable) == 0x000010, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_DynamicCast_AsBP_Base_GS) == 0x000020, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_DynamicCast_AsBP_Base_GS' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_struct_Variable_1) == 0x00002C, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_IsGameOver_bGameOver) == 0x000038, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_IsGameOver_bGameOver' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_bool_Variable) == 0x000039, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_bool_Variable_1) == 0x00003A, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_text_Variable) == 0x000040, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_text_Variable_1) == 0x000058, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_bool_Variable_2) == 0x000070, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_text_Variable_2) == 0x000078, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_CustomEvent_ActualCapturePoint) == 0x000090, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_CustomEvent_ActualCapturePoint' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_GetGameState_ReturnValue_1) == 0x000098, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_DynamicCast_AsBP_Conquest_GS) == 0x0000A0, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_DynamicCast_AsBP_Conquest_GS' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000AC, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, Temp_byte_Variable) == 0x0000B0, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000B8, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_Select_Default) == 0x0000C8, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Abs_Int_ReturnValue) == 0x000130, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Less_IntInt_ReturnValue) == 0x000134, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000138, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00013C, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000140, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_GetPlayerPawn_ReturnValue) == 0x000148, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_Select_Default_1) == 0x000150, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_DynamicCast_AsI_Pawn_Actions) == 0x000160, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_DynamicCast_AsI_Pawn_Actions' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_DynamicCast_bSuccess_2) == 0x000170, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_IsDead_bIsDead) == 0x000171, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_IsDead_bIsDead' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_BooleanOR_ReturnValue) == 0x000172, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000178, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_CreateDelegate_OutputDelegate) == 0x000180, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000190, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_GetPlayerTeamFromPlayerState_Team) == 0x000198, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_GetPlayerTeamFromPlayerState_Team' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Conv_IntToBool_ReturnValue) == 0x00019C, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00019D, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_Select_Default_2) == 0x0001A0, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_Select_Default_3) == 0x0001B8, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001D0, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, K2Node_MakeArray_Array) == 0x000210, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar, CallFunc_Format_ReturnValue) == 0x000220, "Member 'WB_ConquestObjectiveProgressBar_C_ExecuteUbergraph_WB_ConquestObjectiveProgressBar::CallFunc_Format_ReturnValue' has a wrong offset!");

}

