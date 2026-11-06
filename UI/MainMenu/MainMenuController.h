#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MainMenuController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MainMenuController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MainMenuController") {}
    public:
        void RefuseToMenu(const char* why, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* __callArgs[] = { managed_0, &kind }; CallStatic("RefuseToMenu", __callArgs, 2); }
    };
}
