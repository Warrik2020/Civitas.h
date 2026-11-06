#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class NobilitySave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobilitySave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "NobilitySave") {}
    public:
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Apply(void* dto) const { void* __callArgs[] = { dto }; CallStatic("Apply", __callArgs, 1); }
    };
}
