#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class PeoplesAlerts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesAlerts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "PeoplesAlerts") {}
    public:
        void Collect(void* into, void* it) const { void* args[] = { into, it }; CallStatic("Collect", args, 2); }
    };
}
