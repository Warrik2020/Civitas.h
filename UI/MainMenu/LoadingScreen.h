#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class LoadingScreen : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LoadingScreen(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "LoadingScreen") {}
    public:
        void* Raise() const { return CallStatic("Raise", nullptr, 0); }
        void Drop(float seconds = 0.7f) const { void* __callArgs[] = { &seconds }; Call("Drop", __callArgs, 1); }
        void DropCurrent(float seconds = 0.7f) const { void* __callArgs[] = { &seconds }; CallStatic("DropCurrent", __callArgs, 1); }
    };
}
