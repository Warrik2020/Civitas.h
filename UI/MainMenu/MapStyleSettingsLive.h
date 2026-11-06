#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MapStyleSettingsLive : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapStyleSettingsLive(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MapStyleSettingsLive") {}
    public:
        void Bind(void* name, void* desc, void* down, void* up) const { void* args[] = { name, desc, down, up }; Call("Bind", args, 4); }
        void Step(int dir) const { void* args[] = { &dir }; Call("Step", args, 1); }
    };
}
