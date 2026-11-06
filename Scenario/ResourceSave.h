#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ResourceSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ResourceSave") {}
    public:
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Apply(void* s, void* grid) const { void* args[] = { s, grid }; CallStatic("Apply", args, 2); }
    };
}
