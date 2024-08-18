#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ChatText

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_ChatText.WB_ChatText_C.GetTextColor
// 0x0078 (0x0078 - 0x0000)
struct WB_ChatText_C_GetTextColor final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
};
static_assert(alignof(WB_ChatText_C_GetTextColor) == 0x000008, "Wrong alignment on WB_ChatText_C_GetTextColor");
static_assert(sizeof(WB_ChatText_C_GetTextColor) == 0x000078, "Wrong size on WB_ChatText_C_GetTextColor");
static_assert(offsetof(WB_ChatText_C_GetTextColor, ReturnValue) == 0x000000, "Member 'WB_ChatText_C_GetTextColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_GetTextColor, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'WB_ChatText_C_GetTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_GetTextColor, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'WB_ChatText_C_GetTextColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function WB_ChatText.WB_ChatText_C.ExecuteUbergraph_WB_ChatText
// 0x0160 (0x0160 - 0x0000)
struct WB_ChatText_C_ExecuteUbergraph_WB_ChatText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings;             // 0x0030(0x0020)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0058(0x0058)(HasGetValueTypeHash)
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings_1;           // 0x00B0(0x0020)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo_1;                 // 0x00D0(0x0058)(HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0138(0x0028)()
};
static_assert(alignof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText) == 0x000008, "Wrong alignment on WB_ChatText_C_ExecuteUbergraph_WB_ChatText");
static_assert(sizeof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText) == 0x000160, "Wrong size on WB_ChatText_C_ExecuteUbergraph_WB_ChatText");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, EntryPoint) == 0x000000, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_MakeStruct_FontOutlineSettings) == 0x000030, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_MakeStruct_FontOutlineSettings' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, Temp_bool_Variable) == 0x000050, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_MakeStruct_SlateFontInfo) == 0x000058, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_MakeStruct_FontOutlineSettings_1) == 0x0000B0, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_MakeStruct_FontOutlineSettings_1' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_MakeStruct_SlateFontInfo_1) == 0x0000D0, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_MakeStruct_SlateFontInfo_1' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_Select_Default) == 0x000128, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_ChatText_C_ExecuteUbergraph_WB_ChatText, K2Node_MakeStruct_SlateColor_1) == 0x000138, "Member 'WB_ChatText_C_ExecuteUbergraph_WB_ChatText::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

