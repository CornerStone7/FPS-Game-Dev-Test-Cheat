#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bullet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Bullet.BP_Bullet_C.MoveBullet
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Bullet_C_MoveBullet final
{
public:
	struct FVector                                NewLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBlockingHit;                                      // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x001C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bullet_C_MoveBullet) == 0x000004, "Wrong alignment on BP_Bullet_C_MoveBullet");
static_assert(sizeof(BP_Bullet_C_MoveBullet) == 0x0000B8, "Wrong size on BP_Bullet_C_MoveBullet");
static_assert(offsetof(BP_Bullet_C_MoveBullet, NewLocation) == 0x000000, "Member 'BP_Bullet_C_MoveBullet::NewLocation' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, bBlockingHit) == 0x00000C, "Member 'BP_Bullet_C_MoveBullet::bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_BreakVector_X) == 0x000010, "Member 'BP_Bullet_C_MoveBullet::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_BreakVector_Y) == 0x000014, "Member 'BP_Bullet_C_MoveBullet::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_BreakVector_Z) == 0x000018, "Member 'BP_Bullet_C_MoveBullet::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x00001C, "Member 'BP_Bullet_C_MoveBullet::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000A4, "Member 'BP_Bullet_C_MoveBullet::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000A8, "Member 'BP_Bullet_C_MoveBullet::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_MoveBullet, CallFunc_MakeVector_ReturnValue) == 0x0000AC, "Member 'BP_Bullet_C_MoveBullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_Bullet.BP_Bullet_C.HandleHit
// 0x0140 (0x0140 - 0x0000)
struct BP_Bullet_C_HandleHit final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_HealthComponent_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                    K2Node_DynamicCast_AsBP_Base_Character;            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Bullet_C_HandleHit) == 0x000008, "Wrong alignment on BP_Bullet_C_HandleHit");
static_assert(sizeof(BP_Bullet_C_HandleHit) == 0x000140, "Wrong size on BP_Bullet_C_HandleHit");
static_assert(offsetof(BP_Bullet_C_HandleHit, Hit) == 0x000000, "Member 'BP_Bullet_C_HandleHit::Hit' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_bBlockingHit) == 0x000088, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_bInitialOverlap) == 0x000089, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_Time) == 0x00008C, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_Distance) == 0x000090, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_Location) == 0x000094, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_ImpactPoint) == 0x0000A0, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_Normal) == 0x0000AC, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_ImpactNormal) == 0x0000B8, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_PhysMat) == 0x0000C8, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_HitActor) == 0x0000D0, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_HitComponent) == 0x0000D8, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_HitBoneName) == 0x0000E0, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_HitItem) == 0x0000E8, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_ElementIndex) == 0x0000EC, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_FaceIndex) == 0x0000F0, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_TraceStart) == 0x0000F4, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_BreakHitResult_TraceEnd) == 0x000100, "Member 'BP_Bullet_C_HandleHit::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_IsValid_ReturnValue) == 0x00010C, "Member 'BP_Bullet_C_HandleHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_GetComponentByClass_ReturnValue) == 0x000110, "Member 'BP_Bullet_C_HandleHit::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'BP_Bullet_C_HandleHit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_IsValid_ReturnValue_2) == 0x000119, "Member 'BP_Bullet_C_HandleHit::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_Array_AddUnique_ReturnValue) == 0x00011C, "Member 'BP_Bullet_C_HandleHit::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_Array_Contains_ReturnValue) == 0x000120, "Member 'BP_Bullet_C_HandleHit::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, CallFunc_GetOwner_ReturnValue) == 0x000128, "Member 'BP_Bullet_C_HandleHit::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, K2Node_DynamicCast_AsBP_Base_Character) == 0x000130, "Member 'BP_Bullet_C_HandleHit::K2Node_DynamicCast_AsBP_Base_Character' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_HandleHit, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'BP_Bullet_C_HandleHit::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_Bullet.BP_Bullet_C.BulletApplyDamage
// 0x0148 (0x0148 - 0x0000)
struct BP_Bullet_C_BulletApplyDamage final
{
public:
	class ABP_BaseCharacter_C*                    Instigator_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DamageType;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0010(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AB[0x1];                                       // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyPointDamage_ReturnValue;             // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bullet_C_BulletApplyDamage) == 0x000008, "Wrong alignment on BP_Bullet_C_BulletApplyDamage");
static_assert(sizeof(BP_Bullet_C_BulletApplyDamage) == 0x000148, "Wrong size on BP_Bullet_C_BulletApplyDamage");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, Instigator_0) == 0x000000, "Member 'BP_Bullet_C_BulletApplyDamage::Instigator_0' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, DamageType) == 0x000008, "Member 'BP_Bullet_C_BulletApplyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, Hit) == 0x000010, "Member 'BP_Bullet_C_BulletApplyDamage::Hit' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, Temp_bool_Variable) == 0x000098, "Member 'BP_Bullet_C_BulletApplyDamage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_GetController_ReturnValue) == 0x0000A0, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_bBlockingHit) == 0x0000A9, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000AA, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_Time) == 0x0000AC, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_Distance) == 0x0000B0, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_Location) == 0x0000B4, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_ImpactPoint) == 0x0000C0, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_Normal) == 0x0000CC, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_ImpactNormal) == 0x0000D8, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_PhysMat) == 0x0000E8, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_HitActor) == 0x0000F0, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_HitComponent) == 0x0000F8, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_HitBoneName) == 0x000100, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_HitItem) == 0x000108, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_ElementIndex) == 0x00010C, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_FaceIndex) == 0x000110, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_TraceStart) == 0x000114, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_BreakHitResult_TraceEnd) == 0x000120, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00012C, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000138, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00013C, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, K2Node_Select_Default) == 0x000140, "Member 'BP_Bullet_C_BulletApplyDamage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_BulletApplyDamage, CallFunc_ApplyPointDamage_ReturnValue) == 0x000144, "Member 'BP_Bullet_C_BulletApplyDamage::CallFunc_ApplyPointDamage_ReturnValue' has a wrong offset!");

// Function BP_Bullet.BP_Bullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Bullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Bullet_C_ReceiveTick");
static_assert(sizeof(BP_Bullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_Bullet_C_ReceiveTick");
static_assert(offsetof(BP_Bullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Bullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Bullet.BP_Bullet_C.Server_ApplyPointDamageServer
// 0x0098 (0x0098 - 0x0000)
struct BP_Bullet_C_Server_ApplyPointDamageServer final
{
public:
	class ABP_BaseCharacter_C*                    Instigator_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DamageType;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0010(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Bullet_C_Server_ApplyPointDamageServer) == 0x000008, "Wrong alignment on BP_Bullet_C_Server_ApplyPointDamageServer");
static_assert(sizeof(BP_Bullet_C_Server_ApplyPointDamageServer) == 0x000098, "Wrong size on BP_Bullet_C_Server_ApplyPointDamageServer");
static_assert(offsetof(BP_Bullet_C_Server_ApplyPointDamageServer, Instigator_0) == 0x000000, "Member 'BP_Bullet_C_Server_ApplyPointDamageServer::Instigator_0' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_Server_ApplyPointDamageServer, DamageType) == 0x000008, "Member 'BP_Bullet_C_Server_ApplyPointDamageServer::DamageType' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_Server_ApplyPointDamageServer, Hit) == 0x000010, "Member 'BP_Bullet_C_Server_ApplyPointDamageServer::Hit' has a wrong offset!");

// Function BP_Bullet.BP_Bullet_C.ExecuteUbergraph_BP_Bullet
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Bullet_C_ExecuteUbergraph_BP_Bullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FHitResult>                     CallFunc_LineTraceMulti_OutHits;                   // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceMulti_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x0064(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BaseCharacter_C*                    K2Node_CustomEvent_Instigator;                     // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_DamageType;                     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0108(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                    K2Node_DynamicCast_AsBP_Base_Character;            // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet) == 0x000008, "Wrong alignment on BP_Bullet_C_ExecuteUbergraph_BP_Bullet");
static_assert(sizeof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet) == 0x0001B0, "Wrong size on BP_Bullet_C_ExecuteUbergraph_BP_Bullet");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, EntryPoint) == 0x000000, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00000C, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000018, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Add_VectorVector_ReturnValue) == 0x000030, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_MakeArray_Array) == 0x000040, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_LineTraceMulti_OutHits) == 0x000050, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_LineTraceMulti_OutHits' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_LineTraceMulti_ReturnValue) == 0x000060, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_LineTraceMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Array_Get_Item) == 0x000064, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Array_Length_ReturnValue) == 0x0000EC, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000F0, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_CustomEvent_Instigator) == 0x0000F8, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_CustomEvent_Instigator' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_CustomEvent_DamageType) == 0x000100, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_CustomEvent_DamageType' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_CustomEvent_Hit) == 0x000108, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_GetOwner_ReturnValue_1) == 0x000190, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_DynamicCast_AsBP_Base_Character) == 0x000198, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_DynamicCast_AsBP_Base_Character' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, Temp_int_Loop_Counter_Variable) == 0x0001A4, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Less_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bullet_C_ExecuteUbergraph_BP_Bullet, CallFunc_Add_IntInt_ReturnValue) == 0x0001AC, "Member 'BP_Bullet_C_ExecuteUbergraph_BP_Bullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

