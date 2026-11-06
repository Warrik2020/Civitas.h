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
        float Fbm(int seed, float x, float y, int octaves) const { void* args[] = { &seed, &x, &y, &octaves }; return CallStaticValue<float>("Fbm", args, 4); }
        float Value(int seed, float px, float py) const { void* args[] = { &seed, &px, &py }; return CallStaticValue<float>("Value", args, 3); }
        float ValueAt(void* c, int seed) const { void* args[] = { &c, &seed }; return CallStaticValue<float>("ValueAt", args, 2); }
        float Hash01(int seed, int x, int y) const { void* args[] = { &seed, &x, &y }; return CallStaticValue<float>("Hash01", args, 3); }
        float Ridge(float n) const { void* args[] = { &n }; return CallStaticValue<float>("Ridge", args, 1); }
        float Frac(float v) const { void* args[] = { &v }; return CallStaticValue<float>("Frac", args, 1); }
        int x0() const { return ReadField<int>("x0"); }
        int y0() const { return ReadField<int>("y0"); }
        float tx() const { return ReadField<float>("tx"); }
        float ty() const { return ReadField<float>("ty"); }
    };
}
