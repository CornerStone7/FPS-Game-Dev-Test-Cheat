#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CS_Explosion

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_Explosion.CS_Explosion_C
// 0x0000 (0x01B0 - 0x01B0)
class UCS_Explosion_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_Explosion_C">();
	}
	static class UCS_Explosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_Explosion_C>();
	}
};
static_assert(alignof(UCS_Explosion_C) == 0x000010, "Wrong alignment on UCS_Explosion_C");
static_assert(sizeof(UCS_Explosion_C) == 0x0001B0, "Wrong size on UCS_Explosion_C");

}

