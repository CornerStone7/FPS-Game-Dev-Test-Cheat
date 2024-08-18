#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorIcon_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActorIcon_Component.BP_ActorIcon_Component_C
// 0x0038 (0x0258 - 0x0220)
class ABP_ActorIcon_Component_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       Icon_Widget;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CollisionSphere;                                   // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SetWidgetActionRadius;                             // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 WidgetClass;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseTeam;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Team;                                              // 0x0254(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void OnRep_Team();
	void UserConstructionScript();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void CheckPlayersInside();
	void ExecuteUbergraph_BP_ActorIcon_Component(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActorIcon_Component_C">();
	}
	static class ABP_ActorIcon_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActorIcon_Component_C>();
	}
};
static_assert(alignof(ABP_ActorIcon_Component_C) == 0x000008, "Wrong alignment on ABP_ActorIcon_Component_C");
static_assert(sizeof(ABP_ActorIcon_Component_C) == 0x000258, "Wrong size on ABP_ActorIcon_Component_C");
static_assert(offsetof(ABP_ActorIcon_Component_C, UberGraphFrame) == 0x000220, "Member 'ABP_ActorIcon_Component_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, Icon_Widget) == 0x000228, "Member 'ABP_ActorIcon_Component_C::Icon_Widget' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, CollisionSphere) == 0x000230, "Member 'ABP_ActorIcon_Component_C::CollisionSphere' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_ActorIcon_Component_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, SetWidgetActionRadius) == 0x000240, "Member 'ABP_ActorIcon_Component_C::SetWidgetActionRadius' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, WidgetClass) == 0x000248, "Member 'ABP_ActorIcon_Component_C::WidgetClass' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, bUseTeam) == 0x000250, "Member 'ABP_ActorIcon_Component_C::bUseTeam' has a wrong offset!");
static_assert(offsetof(ABP_ActorIcon_Component_C, Team) == 0x000254, "Member 'ABP_ActorIcon_Component_C::Team' has a wrong offset!");

}

