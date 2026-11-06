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
        float UrbanRadius(float people, float kmPerTile) const { void* __callArgs[] = { &people, &kmPerTile }; return CallStaticValue<float>("UrbanRadius", __callArgs, 2); }
        float RingRadius(float urbanRadius) const { void* __callArgs[] = { &urbanRadius }; return CallStaticValue<float>("RingRadius", __callArgs, 1); }
        float CoreRadius(float people, float urbanRadius) const { void* __callArgs[] = { &people, &urbanRadius }; return CallStaticValue<float>("CoreRadius", __callArgs, 2); }
        float PeopleOf(void* c) const { void* __callArgs[] = { c }; return CallStaticValue<float>("PeopleOf", __callArgs, 1); }
        float PeoplePerKm2() const { return ReadStaticField<float>("PeoplePerKm2"); }
        float MinUrbanTiles() const { return ReadStaticField<float>("MinUrbanTiles"); }
        float MaxUrbanTiles() const { return ReadStaticField<float>("MaxUrbanTiles"); }
        float MaxRingTiles() const { return ReadStaticField<float>("MaxRingTiles"); }
        float CorePeople() const { return ReadStaticField<float>("CorePeople"); }
    };
}
