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
        void Step(void* cities, void* roads) const { void* __callArgs[] = { cities, roads }; Call("Step", __callArgs, 2); }
    };
}
