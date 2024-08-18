#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LuminRuntimeSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum LuminRuntimeSettings.ELuminPrivilege
// NumValues: 0x002C
enum class ELuminPrivilege : uint8
{
	Invalid                                  = 0,
	BatteryInfo                              = 1,
	CameraCapture                            = 2,
	ComputerVision                           = 3,
	WorldReconstruction                      = 4,
	InAppPurchase                            = 5,
	AudioCaptureMic                          = 6,
	DrmCertificates                          = 7,
	Occlusion                                = 8,
	LowLatencyLightwear                      = 9,
	Internet                                 = 10,
	IdentityRead                             = 11,
	BackgroundDownload                       = 12,
	BackgroundUpload                         = 13,
	MediaDrm                                 = 14,
	Media                                    = 15,
	MediaMetadata                            = 16,
	PowerInfo                                = 17,
	LocalAreaNetwork                         = 18,
	VoiceInput                               = 19,
	Documents                                = 20,
	ConnectBackgroundMusicService            = 21,
	RegisterBackgroundMusicService           = 22,
	PcfRead                                  = 23,
	PwFoundObjRead                           = 23,
	NormalNotificationsUsage                 = 24,
	MusicService                             = 25,
	ControllerPose                           = 26,
	GesturesSubscribe                        = 27,
	GesturesConfig                           = 28,
	AddressBookRead                          = 29,
	AddressBookWrite                         = 30,
	AddressBookBasicAccess                   = 31,
	CoarseLocation                           = 32,
	FineLocation                             = 33,
	HandMesh                                 = 34,
	WifiStatusRead                           = 35,
	SocialConnectionsInvitesAccess           = 36,
	SocialConnectionsSelectAccess            = 37,
	SecureBrowserWindow                      = 38,
	BluetoothAdapterExternalApp              = 39,
	BluetoothAdapterUser                     = 40,
	BluetoothGattWrite                       = 41,
	ELuminPrivilege_MAX                      = 42,
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
// NumValues: 0x0005
enum class ELuminFrameTimingHint : uint8
{
	Unspecified                              = 0,
	Maximum                                  = 1,
	FPS_60                                   = 2,
	FPS_120                                  = 3,
	ELuminFrameTimingHint_MAX                = 4,
};

// Enum LuminRuntimeSettings.ELuminComponentType
// NumValues: 0x0007
enum class ELuminComponentType : uint8
{
	Universe                                 = 0,
	Fullscreen                               = 1,
	SearchProvider                           = 2,
	MusicService                             = 3,
	Console                                  = 4,
	SystemUI                                 = 5,
	ELuminComponentType_MAX                  = 6,
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
// NumValues: 0x0006
enum class ELuminComponentSubElementType : uint8
{
	FileExtension                            = 0,
	MimeType                                 = 1,
	Mode                                     = 2,
	MusicAttribute                           = 3,
	Schema                                   = 4,
	ELuminComponentSubElementType_MAX        = 5,
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
// 0x0030 (0x0030 - 0x0000)
struct FLocalizedIconInfo final
{
public:
	class FString                                 LanguageCode;                                      // 0x0000(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         IconModelPath;                                     // 0x0010(0x0010)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         IconPortalPath;                                    // 0x0020(0x0010)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizedIconInfo) == 0x000008, "Wrong alignment on FLocalizedIconInfo");
static_assert(sizeof(FLocalizedIconInfo) == 0x000030, "Wrong size on FLocalizedIconInfo");
static_assert(offsetof(FLocalizedIconInfo, LanguageCode) == 0x000000, "Member 'FLocalizedIconInfo::LanguageCode' has a wrong offset!");
static_assert(offsetof(FLocalizedIconInfo, IconModelPath) == 0x000010, "Member 'FLocalizedIconInfo::IconModelPath' has a wrong offset!");
static_assert(offsetof(FLocalizedIconInfo, IconPortalPath) == 0x000020, "Member 'FLocalizedIconInfo::IconPortalPath' has a wrong offset!");

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
// 0x0010 (0x0010 - 0x0000)
struct FLocalizedIconInfos final
{
public:
	TArray<struct FLocalizedIconInfo>             IconData;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizedIconInfos) == 0x000008, "Wrong alignment on FLocalizedIconInfos");
static_assert(sizeof(FLocalizedIconInfos) == 0x000010, "Wrong size on FLocalizedIconInfos");
static_assert(offsetof(FLocalizedIconInfos, IconData) == 0x000000, "Member 'FLocalizedIconInfos::IconData' has a wrong offset!");

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
// 0x0020 (0x0020 - 0x0000)
struct FLocalizedAppName final
{
public:
	class FString                                 LanguageCode;                                      // 0x0000(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppName;                                           // 0x0010(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizedAppName) == 0x000008, "Wrong alignment on FLocalizedAppName");
static_assert(sizeof(FLocalizedAppName) == 0x000020, "Wrong size on FLocalizedAppName");
static_assert(offsetof(FLocalizedAppName, LanguageCode) == 0x000000, "Member 'FLocalizedAppName::LanguageCode' has a wrong offset!");
static_assert(offsetof(FLocalizedAppName, AppName) == 0x000010, "Member 'FLocalizedAppName::AppName' has a wrong offset!");

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// 0x0018 (0x0018 - 0x0000)
struct FLuminComponentSubElement final
{
public:
	ELuminComponentSubElementType                 ElementType;                                       // 0x0000(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Value;                                             // 0x0008(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLuminComponentSubElement) == 0x000008, "Wrong alignment on FLuminComponentSubElement");
static_assert(sizeof(FLuminComponentSubElement) == 0x000018, "Wrong size on FLuminComponentSubElement");
static_assert(offsetof(FLuminComponentSubElement, ElementType) == 0x000000, "Member 'FLuminComponentSubElement::ElementType' has a wrong offset!");
static_assert(offsetof(FLuminComponentSubElement, Value) == 0x000008, "Member 'FLuminComponentSubElement::Value' has a wrong offset!");

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// 0x0048 (0x0048 - 0x0000)
struct FLuminComponentElement final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 VisibleName;                                       // 0x0010(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExecutableName;                                    // 0x0020(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELuminComponentType                           ComponentType;                                     // 0x0030(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLuminComponentSubElement>      ExtraComponentSubElements;                         // 0x0038(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLuminComponentElement) == 0x000008, "Wrong alignment on FLuminComponentElement");
static_assert(sizeof(FLuminComponentElement) == 0x000048, "Wrong size on FLuminComponentElement");
static_assert(offsetof(FLuminComponentElement, Name) == 0x000000, "Member 'FLuminComponentElement::Name' has a wrong offset!");
static_assert(offsetof(FLuminComponentElement, VisibleName) == 0x000010, "Member 'FLuminComponentElement::VisibleName' has a wrong offset!");
static_assert(offsetof(FLuminComponentElement, ExecutableName) == 0x000020, "Member 'FLuminComponentElement::ExecutableName' has a wrong offset!");
static_assert(offsetof(FLuminComponentElement, ComponentType) == 0x000030, "Member 'FLuminComponentElement::ComponentType' has a wrong offset!");
static_assert(offsetof(FLuminComponentElement, ExtraComponentSubElements) == 0x000038, "Member 'FLuminComponentElement::ExtraComponentSubElements' has a wrong offset!");

}

