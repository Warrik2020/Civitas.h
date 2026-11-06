#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Growth
{
    class CityGrowth : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityGrowth(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Growth", "CityGrowth") {}
    public:
        void Grow(void* c, void* grid, void* cfg) const { void* __callArgs[] = { c, grid, cfg }; CallStatic("Grow", __callArgs, 3); }
    };
}
