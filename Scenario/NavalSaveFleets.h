#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class NavalSaveFleets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalSaveFleets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "NavalSaveFleets") {}
    public:
        void Capture(void* naval, void* military, int tick) const { void* args[] = { naval, military, &tick }; CallStatic("Capture", args, 3); }
        void Apply(void* naval, void* military, int tick) const { void* args[] = { naval, military, &tick }; CallStatic("Apply", args, 3); }
        void ApplyTaskForces(void* naval, void* military, void* members) const { void* args[] = { naval, military, members }; CallStatic("ApplyTaskForces", args, 3); }
    };
}
