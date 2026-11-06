#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class FieldWorksSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldWorksSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "FieldWorksSave") {}
    public:
        void* Capture(void* military) const { void* __callArgs[] = { military }; return CallStatic("Capture", __callArgs, 1); }
        void Apply(void* dto, void* military) const { void* __callArgs[] = { dto, military }; CallStatic("Apply", __callArgs, 2); }
    };
}
