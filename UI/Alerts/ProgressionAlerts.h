#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class ProgressionAlerts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProgressionAlerts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "ProgressionAlerts") {}
    public:
        void Collect(void* into, void* it) const { void* args[] = { into, it }; CallStatic("Collect", args, 2); }
    };
}
