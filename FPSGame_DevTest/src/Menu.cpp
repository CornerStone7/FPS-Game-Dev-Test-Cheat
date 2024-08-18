#include "Menu.h"

unsigned int Menu::currTab{ 0 };
std::vector <SDK::FString> Menu::optionTabs{ L"Tracer Line", L"Snap Line", L"Bone ESP", L"Aimbot" };

bool Menu::bMenu{ true };

bool Menu::bTracerLine{ false };
bool Menu::bSnapLine{ false };
bool Menu::bESP{ false };
bool Menu::bAimbot{ false };

std::vector<bool*> Menu::toggles{ &bTracerLine, &bSnapLine, &bESP, &bAimbot };

SDK::FString Menu::BoolToWString(bool boolean)
{
	if (boolean)
		return L"ON";
		
	return L"OFF";
}

void Menu::DrawTitle(SDK::UCanvas* canvas)
{
	SDK::FVector2D screenPos{ 100, 50 };
	SDK::FVector2D scale{ 2.0f, 2.0f };
	SDK::FString renderText{ L"All credits go to the helpful community @ UnknownCheats" };
	canvas->K2_DrawText(Font::defaultFont, renderText, screenPos, scale, Color::red, false, Color::none, SDK::FVector2D{ 0.0f, 0.0f }, false, true, true, Color::none);
}

void Menu::DrawMenu(SDK::UCanvas* canvas)
{
	SDK::FVector2D screenPos{ 100, 100 };
	DrawTitle(canvas);
	for (int tab{ 0 }; tab < optionTabs.size(); tab++)
	{
		SDK::FVector2D scale{ 1.0f, 1.0f };
		SDK::FLinearColor renderColor{ Color::white };
		if (tab == currTab)
		{
			scale = { 1.5f, 1.5f };
			renderColor = Color::green;
		}
		std::wstring renderWString = optionTabs[tab].ToWString() + L" [ " + BoolToWString(*toggles[tab]).ToWString() + L" ]";
		canvas->K2_DrawText(Font::defaultFont, SDK::FString{ renderWString.c_str()}, screenPos, scale, renderColor, false, Color::none, SDK::FVector2D{0.0f, 0.0f}, false, true, true, Color::none);
		screenPos.Y += 50;
	}
}