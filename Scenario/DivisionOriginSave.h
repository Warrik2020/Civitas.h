#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class DivisionOriginSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionOriginSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "DivisionOriginSave") {}
    public:
        void* Capture(void* nations, void* divisions) const { void* args[] = { nations, divisions }; return CallStatic("Capture", args, 2); }
        void Apply(void* former, void* nations, void* military) const { void* args[] = { former, nations, military }; CallStatic("Apply", args, 3); }
    };
}
