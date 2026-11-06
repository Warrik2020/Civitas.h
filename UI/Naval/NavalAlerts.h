#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Naval
{
    class NavalAlerts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalAlerts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Naval", "NavalAlerts") {}
    public:
        void Collect(void* into, void* it) const { void* __callArgs[] = { into, it }; CallStatic("Collect", __callArgs, 2); }
    };
}
