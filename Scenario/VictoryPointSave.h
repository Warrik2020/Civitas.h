#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class VictoryPointSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VictoryPointSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "VictoryPointSave") {}
    public:
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Apply(void* dto) const { void* args[] = { dto }; CallStatic("Apply", args, 1); }
        int Version() const { return ReadStaticField<int>("Version"); }
    };
}
