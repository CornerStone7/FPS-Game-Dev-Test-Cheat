#pragma once

#include "Render.h"
#include "../CppSDK/SDK/Engine_classes.hpp"

#include <string>
#include <vector>

namespace Menu
{
	extern unsigned int currTab;
	extern std::vector <SDK::FString> optionTabs;

	extern bool bMenu;

	extern bool bTracerLine;
	extern bool bSnapLine;
	extern bool bESP;
	extern bool bAimbot;
	extern std::vector<bool*> toggles;

	SDK::FString BoolToWString(bool boolean);
	void DrawMenu(SDK::UCanvas* canvas);
	void DrawTitle(SDK::UCanvas* canvas);
};

