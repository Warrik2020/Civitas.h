#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class UnificationAlerts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnificationAlerts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "UnificationAlerts") {}
    public:
        void Collect(void* into, void* it) const { void* __callArgs[] = { into, it }; CallStatic("Collect", __callArgs, 2); }
    };
}
