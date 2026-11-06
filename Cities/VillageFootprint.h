#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class VillageFootprint : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VillageFootprint(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "VillageFootprint") {}
    public:
        float HinterRadius(float people, float ringRadius, float kmPerTile) const { void* __callArgs[] = { &people, &ringRadius, &kmPerTile }; return CallStaticValue<float>("HinterRadius", __callArgs, 3); }
        float Chance(float people, float hinterRadius, float d, float kmPerTile) const { void* __callArgs[] = { &people, &hinterRadius, &d, &kmPerTile }; return CallStaticValue<float>("Chance", __callArgs, 4); }
        float CellTiles(float kmPerTile) const { void* __callArgs[] = { &kmPerTile }; return CallStaticValue<float>("CellTiles", __callArgs, 1); }
        float MaxRadiusTiles(float kmPerTile) const { void* __callArgs[] = { &kmPerTile }; return CallStaticValue<float>("MaxRadiusTiles", __callArgs, 1); }
        float FullDensity() const { return ReadStaticField<float>("FullDensity"); }
        float HinterDensity() const { return ReadStaticField<float>("HinterDensity"); }
        float MinHinterTiles() const { return ReadStaticField<float>("MinHinterTiles"); }
        float MaxHinterTiles() const { return ReadStaticField<float>("MaxHinterTiles"); }
        float CellKm() const { return ReadStaticField<float>("CellKm"); }
        float MaxRadiusKm() const { return ReadStaticField<float>("MaxRadiusKm"); }
    };
}
