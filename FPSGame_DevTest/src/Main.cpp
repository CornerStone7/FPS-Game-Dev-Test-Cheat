#include "../CppSDK/SDK/Basic.cpp"
#include "../CppSDK/SDK/CoreUObject_functions.cpp"
#include "../CppSDK/SDK/Engine_functions.cpp"
#include "../CppSDK/SDK/BP_PlayerCharacter_classes.hpp"
#include "../CppSDK/SDK/BP_PlayerState_classes.hpp"
#include "../CppSDK/SDK/BP_PlayerState_functions.cpp"

#include "Render.h"
#include "Math.h"
#include "Bones.h"
#include "Menu.h"
#include <Windows.h>
#include <iostream>

// Instances.
SDK::UWorld* world{ nullptr };
SDK::ULevel* persistentLevel{ nullptr };
SDK::APlayerController* localPlayerController{ nullptr };
SDK::UGameViewportClient* gameViewPortClient{ nullptr };
// Post Render Hook Vars.
bool bHooked{ false };
int postRenderIndex{ 0x63 };
uintptr_t* vTable{ nullptr };
static uintptr_t vTableHooked[4096];
void (*PostRender)(SDK::UGameViewportClient* _this, SDK::UCanvas* Canvas);
// Menu Toggles.
bool bRButtonDown{ false };
//Misc vars.
int localTeam{ 0 };
SDK::FVector viewPoint;

// Find and loop through actors array.
void LoopActors(SDK::UCanvas* canvas)
{
    if (persistentLevel != nullptr && localPlayerController->AcknowledgedPawn != nullptr)
    {
        SDK::FVector localWorldPos;
        SDK::TArray<SDK::AActor*> actors = persistentLevel->Actors;
        std::vector<SDK::FVector> headWorldPosArray;
        for (int actorIndex{ 0 }; actorIndex < actors.Num(); actorIndex++)
        {
            SDK::AActor* actor = actors[actorIndex];
            if (actor == nullptr)
                continue;
            if (actor->IsA(SDK::EClassCastFlags::Pawn))
            {
                SDK::ABP_PlayerCharacter_C* playerChar = static_cast<SDK::ABP_PlayerCharacter_C*>(actor);
                if (playerChar == nullptr || playerChar->Mesh == nullptr || playerChar->PlayerState == nullptr)
                    continue;

                int actorTeam{ 0 };
                SDK::ABP_PlayerState_C* playerCharState = static_cast<SDK::ABP_PlayerState_C*>(playerChar->PlayerState);
                actorTeam = playerCharState->Team;

                if (playerChar == localPlayerController->AcknowledgedPawn)
                {
                    localWorldPos = playerChar->K2_GetActorLocation();
                    playerChar->GetActorEyesViewPoint(&viewPoint, nullptr);
                    localTeam = actorTeam;
                    continue;
                }

                if (actorTeam == localTeam)
                    continue;

                if (playerChar->bDead)
                    continue;

                // if tracer line activated.
                if (Menu::bTracerLine)
                {
                    SDK::FVector actorWorldPos = playerChar->K2_GetActorLocation();
                    SDK::FVector2D tracerStartScreenPos{ canvas->ClipX / 2, 0 };
                    SDK::FVector2D actorScreenPos{ -1, -1 };
                    if (Math::WorldToScreen(*localPlayerController, actorWorldPos, &actorScreenPos))
                        canvas->K2_DrawLine(tracerStartScreenPos, actorScreenPos, 1.0f, Color::yellow);
                }
                // skip bone section if not activated
                if (!Menu::bESP && !Menu::bAimbot && !Menu::bSnapLine)
                    continue;

                SDK::USkeletalMeshComponent* skeletalMesh = playerChar->Mesh;
                for (std::pair<int, int> boneLink: boneLinks)
                {
                    SDK::FName boneName_1 = skeletalMesh->GetBoneName(boneLink.first);
                    SDK::FName boneName_2 = skeletalMesh->GetBoneName(boneLink.second);

                    SDK::FVector boneWorldPos_1 = skeletalMesh->GetSocketLocation(boneName_1);  
                    SDK::FVector boneWorldPos_2 = skeletalMesh->GetSocketLocation(boneName_2);

                    //Draw Bone ESP.
                    if (Menu::bESP)
                    {
                        SDK::FVector2D boneScreenPos1;
                        SDK::FVector2D boneScreenPos2;

                        SDK::FLinearColor drawColor{ Color::red };
                        if (Math::IsVisible(world, viewPoint, boneWorldPos_1) || Math::IsVisible(world, viewPoint, boneWorldPos_2))
                            drawColor = Color::green;

                        if (Math::WorldToScreen(*localPlayerController, boneWorldPos_1, &boneScreenPos1) && Math::WorldToScreen(*localPlayerController, boneWorldPos_2, &boneScreenPos2))
                        {
                            canvas->K2_DrawLine(boneScreenPos1, boneScreenPos2, 1.0f, drawColor);
                        }
                    }

                    // Store head info if functions activated.
                    if (Menu::bSnapLine || Menu::bAimbot)
                    {
                        if (skeletalMesh->GetBoneIndex(boneName_1) == Bones::Head)
                            headWorldPosArray.push_back(boneWorldPos_1);
                    }
                }
            }
        }
        // loop through head infos if functions activated.
        if (Menu::bSnapLine || Menu::bAimbot)
        {
            std::vector<float> distanceArray;
            if (headWorldPosArray.size() <= 0)
                return;
            for (SDK::FVector headWorldPos : headWorldPosArray)
            {
                SDK::FVector2D headScreenPos;
                Math::WorldToScreen(*localPlayerController, headWorldPos, &headScreenPos);
                distanceArray.push_back(Math::Distance2D(SDK::FVector2D{ (canvas->ClipX / 2), (canvas->ClipY / 2) }, headScreenPos));
            }
            int minIndex = std::distance(std::begin(distanceArray), std::min_element(std::begin(distanceArray), std::end(distanceArray)));

            SDK::FVector2D closestHeadScreenPos;
            if (Math::WorldToScreen(*localPlayerController, headWorldPosArray[minIndex], &closestHeadScreenPos))
            {
                if (Math::IsVisible(world, viewPoint, headWorldPosArray[minIndex]))
                {
                    if (Menu::bSnapLine)
                        canvas->K2_DrawLine(SDK::FVector2D{ (canvas->ClipX / 2), (canvas->ClipY / 2) }, closestHeadScreenPos, 1.0f, Color::green);
                    // if aimbot activated and holding hotkey..
                    if (Menu::bAimbot && bRButtonDown)
                    {
                        SDK::FRotator rotation = SDK::UKismetMathLibrary::FindLookAtRotation(localPlayerController->PlayerCameraManager->GetCameraLocation(), headWorldPosArray[minIndex]);
                        localPlayerController->SetControlRotation(rotation);
                    }
                }
                else
                    if (Menu::bSnapLine)
                        canvas->K2_DrawLine(SDK::FVector2D{ (canvas->ClipX / 2), (canvas->ClipY / 2) }, closestHeadScreenPos, 1.0f, Color::red);
            }
        }
    }
}

// Update instances.
bool UpdateInstance()
{
    world = SDK::UWorld::GetWorld();
    if (world == nullptr)
        return false;

    persistentLevel = world->PersistentLevel;
    if (persistentLevel == nullptr)
        return false;

    if (world->OwningGameInstance == nullptr)
        return false;
    if (world->OwningGameInstance->LocalPlayers[0] == nullptr)
        return false;
    if (world->OwningGameInstance->LocalPlayers[0]->PlayerController == nullptr)
        return false;

    localPlayerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;

    return true;
}

// Unhook.
void UnHook()
{
    // Swap the VTable to the original one.
    *(PVOID*)gameViewPortClient = vTable;
}

// Hacking Loop goes here.
void PostRenderHook(SDK::UGameViewportClient* _this, SDK::UCanvas* Canvas)
{
    if (UpdateInstance())
    {
        // Hotkey and toggles.
        if (GetAsyncKeyState(VK_INSERT) & 1)
            Menu::bMenu = !Menu::bMenu;
        bRButtonDown = (GetAsyncKeyState(VK_RBUTTON) & 0x8000);

        // Hack Loop.
        // Only start getting actors if any of the function is activated.
        if (Menu::bESP || Menu::bTracerLine || Menu::bSnapLine || Menu::bAimbot)
        {
            LoopActors(Canvas);
        }
        if (Menu::bMenu)
        {
            // Draw Menu
            Menu::DrawMenu(Canvas);

            // Hotkey on menu
            if (GetAsyncKeyState(VK_UP) & 1)
            {
                if (Menu::currTab > 0)
                    Menu::currTab -= 1;
            }
            if (GetAsyncKeyState(VK_DOWN) & 1)
            {
                if (Menu::currTab < Menu::optionTabs.size() - 1)
                    Menu::currTab += 1;
            }
            if ((GetAsyncKeyState(VK_LEFT) & 1) || (GetAsyncKeyState(VK_RIGHT) & 1))
            {
                *Menu::toggles[Menu::currTab] = !*Menu::toggles[Menu::currTab];
            }
        }
    }

    return PostRender(_this, Canvas);
}

// Hook post render by vtable swapping.
void InitHook()
{
    bHooked = true;
    vTable = *(uintptr_t**)gameViewPortClient;

    // VTable Swapping.
    memcpy(vTableHooked, vTable, ( sizeof(vTableHooked) / sizeof(uintptr_t) ));
    vTableHooked[0x63] = (uintptr_t)&PostRenderHook;
    PostRender = (decltype(PostRender))vTable[0x63];
    *(PVOID*)gameViewPortClient = vTableHooked;
}

DWORD HackThread(HMODULE hModule)
{
    // Get UWorld to obtain viewportclient to hook post render.
    do
    {
        world = SDK::UWorld::GetWorld();
        if (!world)
            continue;
        if (!world->OwningGameInstance)
            continue;
        if (!world->OwningGameInstance->LocalPlayers[0])
            continue;
        if (!world->OwningGameInstance->LocalPlayers[0]->ViewportClient)
            continue;

        gameViewPortClient = world->OwningGameInstance->LocalPlayers[0]->ViewportClient;
        InitHook();
    } while (!bHooked);

    while (bHooked)
    {
        if (GetAsyncKeyState(VK_END) & 1)
        {
            UnHook();
            FreeLibraryAndExitThread(hModule, 0);
            break;
        }
        Sleep(5);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)HackThread, hModule, 0, 0));
        break;
    }

    return TRUE;
}