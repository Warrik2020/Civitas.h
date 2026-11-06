#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityFootprint : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityFootprint(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityFootprint") {}
    public:
        float UrbanRadius(float people, float kmPerTile) const { void* args[] = { &people, &kmPerTile }; return CallStaticValue<float>("UrbanRadius", args, 2); }
        float RingRadius(float urbanRadius) const { void* args[] = { &urbanRadius }; return CallStaticValue<float>("RingRadius", args, 1); }
        float CoreRadius(float people, float urbanRadius) const { void* args[] = { &people, &urbanRadius }; return CallStaticValue<float>("CoreRadius", args, 2); }
        float PeopleOf(void* c) const { void* args[] = { c }; return CallStaticValue<float>("PeopleOf", args, 1); }
        float PeoplePerKm2() const { return ReadStaticField<float>("PeoplePerKm2"); }
        float MinUrbanTiles() const { return ReadStaticField<float>("MinUrbanTiles"); }
        float MaxUrbanTiles() const { return ReadStaticField<float>("MaxUrbanTiles"); }
        float MaxRingTiles() const { return ReadStaticField<float>("MaxRingTiles"); }
        float CorePeople() const { return ReadStaticField<float>("CorePeople"); }
    };
}
