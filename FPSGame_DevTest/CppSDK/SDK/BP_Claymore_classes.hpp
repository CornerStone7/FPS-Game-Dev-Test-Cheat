#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Claymore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Claymore.BP_Claymore_C
// 0x0048 (0x0268 - 0x0220)
class ABP_Claymore_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActor;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HealthComponent_C*                  BP_HealthComponent;                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Team;                                              // 0x0254(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyed;                                        // 0x0258(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatorController;                              // 0x0260(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void TryToInteract(bool* bFailure);
	void GetDescription(class FText* Description);
	void GetIcon(class UTexture** Icon);
	void GetInteractTime(float* InteractTime);
	void OnRep_bDestroyed();
	void Take_Damage(float Dmg, bool* Explode);
	void BeginHover(class ACharacter* Instigator_0);
	void EndHover();
	void BeginInteract(class ACharacter* Instigator_0);
	void EndInteract();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Explode(class AController* Instigator_0);
	void MulticastPlayCosmeticEffects();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void Interact(class ACharacter* Instigator_0);
	void ExecuteUbergraph_BP_Claymore(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Claymore_C">();
	}
	static class ABP_Claymore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Claymore_C>();
	}
};
static_assert(alignof(ABP_Claymore_C) == 0x000008, "Wrong alignment on ABP_Claymore_C");
static_assert(sizeof(ABP_Claymore_C) == 0x000268, "Wrong size on ABP_Claymore_C");
static_assert(offsetof(ABP_Claymore_C, UberGraphFrame) == 0x000220, "Member 'ABP_Claymore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, ChildActor) == 0x000228, "Member 'ABP_Claymore_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Box) == 0x000230, "Member 'ABP_Claymore_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Arrow) == 0x000238, "Member 'ABP_Claymore_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Mesh) == 0x000240, "Member 'ABP_Claymore_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, BP_HealthComponent) == 0x000248, "Member 'ABP_Claymore_C::BP_HealthComponent' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Radius) == 0x000250, "Member 'ABP_Claymore_C::Radius' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Team) == 0x000254, "Member 'ABP_Claymore_C::Team' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, bDestroyed) == 0x000258, "Member 'ABP_Claymore_C::bDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, InstigatorController) == 0x000260, "Member 'ABP_Claymore_C::InstigatorController' has a wrong offset!");

}

