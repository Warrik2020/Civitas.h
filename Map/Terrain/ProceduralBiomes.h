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
        float MetresOf(float height) const { void* __callArgs[] = { &height }; return CallStaticValue<float>("MetresOf", __callArgs, 1); }
        void* Build(void* land, int w, int h, void* geo) const { void* __callArgs[] = { land, &w, &h, geo }; return CallStatic("Build", __callArgs, 4); }
        float ValueNoise(float x, float y, uint32_t seed) const { void* __callArgs[] = { &x, &y, &seed }; return CallStaticValue<float>("ValueNoise", __callArgs, 3); }
        void* Tag() const { return ReadStaticField<void*>("Tag"); }
        float ElevationScale() const { return ReadStaticField<float>("ElevationScale"); }
        float ElevationBase() const { return ReadStaticField<float>("ElevationBase"); }
    };
}
