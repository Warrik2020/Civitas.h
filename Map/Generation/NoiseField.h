#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Generation
{
    class NoiseField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NoiseField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Generation", "NoiseField") {}
    public:
        float Hash(int x, int y, int seed) const { void* args[] = { &x, &y, &seed }; return CallStaticValue<float>("Hash", args, 3); }
        float Value(float x, float y, int seed) const { void* args[] = { &x, &y, &seed }; return CallStaticValue<float>("Value", args, 3); }
        float Fbm(float x, float y, int seed, int octaves) const { void* args[] = { &x, &y, &seed, &octaves }; return CallStaticValue<float>("Fbm", args, 4); }
        float Fbm(float x, float y, int seed, int octaves, float persistence) const { void* args[] = { &x, &y, &seed, &octaves, &persistence }; return CallStaticValue<float>("Fbm", args, 5); }
        float Percentile(void* values, int count, float fraction) const { void* args[] = { values, &count, &fraction }; return CallStaticValue<float>("Percentile", args, 3); }
        float Sample(void* field, int gw, int step, int x, int y) const { void* args[] = { field, &gw, &step, &x, &y }; return CallStaticValue<float>("Sample", args, 5); }
    };
}
