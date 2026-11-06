#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CaptureShape : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CaptureShape(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CaptureShape") {}
    public:
        float Proximity(float dist, float core, float reach) const { void* args[] = { &dist, &core, &reach }; return CallStaticValue<float>("Proximity", args, 3); }
        float Strength(float power) const { void* args[] = { &power }; return CallStaticValue<float>("Strength", args, 1); }
        float Noise(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("Noise", args, 2); }
        float TerrainMul(void* grid, int x, int y) const { void* args[] = { grid, &x, &y }; return CallStaticValue<float>("TerrainMul", args, 3); }
        int OwnSides(void* grid, int tile, int attackerId) const { void* args[] = { grid, &tile, &attackerId }; return CallStaticValue<int>("OwnSides", args, 3); }
        float FillMul(int ownSides) const { void* args[] = { &ownSides }; return CallStaticValue<float>("FillMul", args, 1); }
        float Share(float best, void* grid, int tile, int attackerId) const { void* args[] = { &best, grid, &tile, &attackerId }; return CallStaticValue<float>("Share", args, 4); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float FalloffPower() const { return ReadStaticField<float>("FalloffPower"); }
        float FullPower() const { return ReadStaticField<float>("FullPower"); }
        float TerrainPower() const { return ReadStaticField<float>("TerrainPower"); }
        float NoiseTiles() const { return ReadStaticField<float>("NoiseTiles"); }
        int NoiseCell() const { return ReadStaticField<int>("NoiseCell"); }
        float FillPerSide() const { return ReadStaticField<float>("FillPerSide"); }
    };
}
