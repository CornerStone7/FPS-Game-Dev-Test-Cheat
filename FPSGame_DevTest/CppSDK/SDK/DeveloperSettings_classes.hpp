#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeveloperSettings

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DeveloperSettings.DeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UDeveloperSettings : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeveloperSettings">();
	}
	static class UDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeveloperSettings>();
	}
};
static_assert(alignof(UDeveloperSettings) == 0x000008, "Wrong alignment on UDeveloperSettings");
static_assert(sizeof(UDeveloperSettings) == 0x000038, "Wrong size on UDeveloperSettings");

}

