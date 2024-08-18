#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sky_Sphere

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// 0x00A0 (0x02C0 - 0x0220)
class ABP_Sky_Sphere_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SkySphereMesh;                                     // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Base;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Sky_material;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Refresh_material;                                  // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      Directional_light_actor;                           // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Colors_determined_by_sun_position;                 // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Sun_height;                                        // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sun_brightness;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Horizon_falloff;                                   // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Zenith_color;                                      // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Horizon_color;                                     // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Cloud_color;                                       // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Overall_color;                                     // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cloud_speed;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cloud_opacity;                                     // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Stars_brightness;                                  // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      Horizon_color_curve;                               // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Zenith_color_curve;                                // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Cloud_color_curve;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RefreshMaterial();
	void UpdateSunDirection();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sky_Sphere_C">();
	}
	static class ABP_Sky_Sphere_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Sky_Sphere_C>();
	}
};
static_assert(alignof(ABP_Sky_Sphere_C) == 0x000008, "Wrong alignment on ABP_Sky_Sphere_C");
static_assert(sizeof(ABP_Sky_Sphere_C) == 0x0002C0, "Wrong size on ABP_Sky_Sphere_C");
static_assert(offsetof(ABP_Sky_Sphere_C, SkySphereMesh) == 0x000220, "Member 'ABP_Sky_Sphere_C::SkySphereMesh' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Base) == 0x000228, "Member 'ABP_Sky_Sphere_C::Base' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Sky_material) == 0x000230, "Member 'ABP_Sky_Sphere_C::Sky_material' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Refresh_material) == 0x000238, "Member 'ABP_Sky_Sphere_C::Refresh_material' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Directional_light_actor) == 0x000240, "Member 'ABP_Sky_Sphere_C::Directional_light_actor' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Colors_determined_by_sun_position) == 0x000248, "Member 'ABP_Sky_Sphere_C::Colors_determined_by_sun_position' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Sun_height) == 0x00024C, "Member 'ABP_Sky_Sphere_C::Sun_height' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Sun_brightness) == 0x000250, "Member 'ABP_Sky_Sphere_C::Sun_brightness' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Horizon_falloff) == 0x000254, "Member 'ABP_Sky_Sphere_C::Horizon_falloff' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Zenith_color) == 0x000258, "Member 'ABP_Sky_Sphere_C::Zenith_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Horizon_color) == 0x000268, "Member 'ABP_Sky_Sphere_C::Horizon_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_color) == 0x000278, "Member 'ABP_Sky_Sphere_C::Cloud_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Overall_color) == 0x000288, "Member 'ABP_Sky_Sphere_C::Overall_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_speed) == 0x000298, "Member 'ABP_Sky_Sphere_C::Cloud_speed' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_opacity) == 0x00029C, "Member 'ABP_Sky_Sphere_C::Cloud_opacity' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Stars_brightness) == 0x0002A0, "Member 'ABP_Sky_Sphere_C::Stars_brightness' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Horizon_color_curve) == 0x0002A8, "Member 'ABP_Sky_Sphere_C::Horizon_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Zenith_color_curve) == 0x0002B0, "Member 'ABP_Sky_Sphere_C::Zenith_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_color_curve) == 0x0002B8, "Member 'ABP_Sky_Sphere_C::Cloud_color_curve' has a wrong offset!");

}

