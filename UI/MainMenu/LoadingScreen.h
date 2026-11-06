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
        void Drop(float seconds) const { void* args[] = { &seconds }; Call("Drop", args, 1); }
        void DropCurrent(float seconds) const { void* args[] = { &seconds }; CallStatic("DropCurrent", args, 1); }
    };
}
