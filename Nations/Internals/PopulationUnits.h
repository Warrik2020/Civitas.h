#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PopulationUnits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PopulationUnits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PopulationUnits") {}
    public:
        float People(float points) const { void* __callArgs[] = { &points }; return CallStaticValue<float>("People", __callArgs, 1); }
        float Points(float people) const { void* __callArgs[] = { &people }; return CallStaticValue<float>("Points", __callArgs, 1); }
        float TownShare(int year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("TownShare", __callArgs, 1); }
        float TownShareAt(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStaticValue<float>("TownShareAt", __callArgs, 2); }
        float PeoplePerPoint() const { return ReadStaticField<float>("PeoplePerPoint"); }
    };
}
