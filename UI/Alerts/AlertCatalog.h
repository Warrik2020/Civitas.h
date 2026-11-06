#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class AlertCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AlertCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "AlertCatalog") {}
    public:
        void Collect(void* into, void* it, void* internals, void* mcfg, void* expansion) const { void* args[] = { into, it, internals, mcfg, expansion }; CallStatic("Collect", args, 5); }
    };
}
