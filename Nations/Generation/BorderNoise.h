#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Generation
{
    class BorderNoise : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderNoise(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Generation", "BorderNoise") {}
    public:
        float Fbm(int seed, float x, float y, int octaves) const { void* __callArgs[] = { &seed, &x, &y, &octaves }; return CallStaticValue<float>("Fbm", __callArgs, 4); }
        float Value(int seed, float px, float py) const { void* __callArgs[] = { &seed, &px, &py }; return CallStaticValue<float>("Value", __callArgs, 3); }
        float ValueAt(void* c, int seed) const { void* __callArgs[] = { &c, &seed }; return CallStaticValue<float>("ValueAt", __callArgs, 2); }
        float Hash01(int seed, int x, int y) const { void* __callArgs[] = { &seed, &x, &y }; return CallStaticValue<float>("Hash01", __callArgs, 3); }
        float Ridge(float n) const { void* __callArgs[] = { &n }; return CallStaticValue<float>("Ridge", __callArgs, 1); }
        float Frac(float v) const { void* __callArgs[] = { &v }; return CallStaticValue<float>("Frac", __callArgs, 1); }
    };
}
