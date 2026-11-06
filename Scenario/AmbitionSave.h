#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class AmbitionSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AmbitionSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "AmbitionSave") {}
    public:
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Apply(void* s) const { void* args[] = { s }; CallStatic("Apply", args, 1); }
    };
}
