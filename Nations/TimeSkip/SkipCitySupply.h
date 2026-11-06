#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipCitySupply : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipCitySupply(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipCitySupply") {}
    public:
        bool Step(void* grid, void* cities, int tick, int span, float ticksPerDay) const { void* __callArgs[] = { grid, cities, &tick, &span, &ticksPerDay }; return CallStaticValue<bool>("Step", __callArgs, 5); }
    };
}
