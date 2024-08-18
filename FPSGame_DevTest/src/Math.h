#pragma once
#include "Render.h"
#include "../CppSDK/SDK/Engine_classes.hpp"

namespace Math
{
	bool WorldToScreen(SDK::APlayerController playerController, SDK::FVector &worldPos, SDK::FVector2D *screenPos);
	bool IsVisible(SDK::UWorld* world, SDK::FVector& viewPoint, SDK::FVector& boneWorldPos);
	void DrawCircle(SDK::UCanvas* canvas, SDK::FVector2D pos, int radius, int numSides, SDK::FLinearColor Color);
	float Distance2D(SDK::FVector2D point_1, SDK::FVector2D point_2);
};
