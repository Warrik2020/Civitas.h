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
        float HinterRadius(float people, float ringRadius, float kmPerTile) const { void* args[] = { &people, &ringRadius, &kmPerTile }; return CallStaticValue<float>("HinterRadius", args, 3); }
        float Chance(float people, float hinterRadius, float d, float kmPerTile) const { void* args[] = { &people, &hinterRadius, &d, &kmPerTile }; return CallStaticValue<float>("Chance", args, 4); }
        float CellTiles(float kmPerTile) const { void* args[] = { &kmPerTile }; return CallStaticValue<float>("CellTiles", args, 1); }
        float MaxRadiusTiles(float kmPerTile) const { void* args[] = { &kmPerTile }; return CallStaticValue<float>("MaxRadiusTiles", args, 1); }
        float FullDensity() const { return ReadStaticField<float>("FullDensity"); }
        float HinterDensity() const { return ReadStaticField<float>("HinterDensity"); }
        float MinHinterTiles() const { return ReadStaticField<float>("MinHinterTiles"); }
        float MaxHinterTiles() const { return ReadStaticField<float>("MaxHinterTiles"); }
        float CellKm() const { return ReadStaticField<float>("CellKm"); }
        float MaxRadiusKm() const { return ReadStaticField<float>("MaxRadiusKm"); }
    };
}
