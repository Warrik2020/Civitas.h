#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Terrain
{
    class ProceduralBiomes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProceduralBiomes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Terrain", "ProceduralBiomes") {}
    public:
        float MetresOf(float height) const { void* args[] = { &height }; return CallStaticValue<float>("MetresOf", args, 1); }
        void* Build(void* land, int w, int h, void* geo) const { void* args[] = { land, &w, &h, geo }; return CallStatic("Build", args, 4); }
        float ValueNoise(float x, float y, uint32_t seed) const { void* args[] = { &x, &y, &seed }; return CallStaticValue<float>("ValueNoise", args, 3); }
        void* Tag() const { return ReadStaticField<void*>("Tag"); }
        float ElevationScale() const { return ReadStaticField<float>("ElevationScale"); }
        float ElevationBase() const { return ReadStaticField<float>("ElevationBase"); }
    };
}
