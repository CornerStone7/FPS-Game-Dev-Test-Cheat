#include "Math.h"

bool Math::WorldToScreen(SDK::APlayerController playerController, SDK::FVector &worldPos, SDK::FVector2D *screenPos)
{
	return playerController.ProjectWorldLocationToScreen(worldPos, screenPos, true);
}

bool Math::IsVisible(SDK::UWorld* world, SDK::FVector &viewPoint, SDK::FVector &targetWorldPos)
{
	SDK::FHitResult hitResult;
	return (!SDK::UKismetSystemLibrary::LineTraceSingle(world, viewPoint, targetWorldPos, SDK::ETraceTypeQuery::TraceTypeQuery2, false, SDK::TArray<SDK::AActor*>(), SDK::EDrawDebugTrace::None, &hitResult, true, Color::red, Color::red, NULL));
}

void Math::DrawCircle(SDK::UCanvas* canvas, SDK::FVector2D pos, int radius, int numSides, SDK::FLinearColor Color)
{
	float PI = 3.1415927f;

	float Step = PI * 2.0 / numSides;
	int Count = 0;
	SDK::FVector2D V[128];
	for (float a = 0; a < PI * 2.0; a += Step) {
		float X1 = radius * cos(a) + pos.X;
		float Y1 = radius * sin(a) + pos.Y;
		float X2 = radius * cos(a + Step) + pos.X;
		float Y2 = radius * sin(a + Step) + pos.Y;
		V[Count].X = X1;
		V[Count].Y = Y1;
		V[Count + 1].X = X2;
		V[Count + 1].Y = Y2;
		//Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ X2, Y2 }, 1.0f, Color); // Points from Centre to ends of circle
		canvas->K2_DrawLine(SDK::FVector2D{ V[Count].X, V[Count].Y }, SDK::FVector2D{ X2, Y2 }, 1.0f, Color);// Circle Around
	}
}

float Math::Distance2D(SDK::FVector2D point_1, SDK::FVector2D point_2)
{
	return (SDK::UKismetMathLibrary::Sqrt(((point_1.X - point_2.X) * (point_1.X - point_2.X)) + ((point_1.Y - point_2.Y) * (point_1.Y - point_2.Y))));

}