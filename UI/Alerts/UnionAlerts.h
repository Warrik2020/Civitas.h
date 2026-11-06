#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class UnionAlerts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionAlerts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "UnionAlerts") {}
    public:
        void Collect(void* into, void* it) const { void* args[] = { into, it }; CallStatic("Collect", args, 2); }
    };
}
