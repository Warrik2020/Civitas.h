#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Growth
{
    class FarmPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FarmPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Growth", "FarmPlanner") {}
    public:
        void Step(void* cities, void* roads) const { void* args[] = { cities, roads }; Call("Step", args, 2); }
        void* p() const { return ReadField<void*>("p"); }
        void SetP(void* value) const { WriteField<void*>("p", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
    };
}
