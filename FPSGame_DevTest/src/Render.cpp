#include "Render.h"

SDK::UFont* Font::defaultFont = SDK::UObject::FindObject<SDK::UFont>("Font Roboto.Roboto");

SDK::FLinearColor Color::red{ 1.0f, 0.0f, 0.0f, 1.0f };
SDK::FLinearColor Color::green{ 0.0f, 1.0f, 0.0f, 1.0f };
SDK::FLinearColor Color::white{ 1.0f, 1.0f, 1.0f, 1.0f };
SDK::FLinearColor Color::yellow{ 1.0f, 1.0f, 0.0f, 1.0f };
SDK::FLinearColor Color::none{ 0.0f, 0.0f, 0.0f, 1.0f };
