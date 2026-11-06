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
        float People(float points) const { void* args[] = { &points }; return CallStaticValue<float>("People", args, 1); }
        float Points(float people) const { void* args[] = { &people }; return CallStaticValue<float>("Points", args, 1); }
        float TownShare(int year) const { void* args[] = { &year }; return CallStaticValue<float>("TownShare", args, 1); }
        float TownShareAt(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStaticValue<float>("TownShareAt", args, 2); }
        float PeoplePerPoint() const { return ReadStaticField<float>("PeoplePerPoint"); }
    };
}
