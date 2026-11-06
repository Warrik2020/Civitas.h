#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityRng : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityRng(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityRng") {}
    public:
        void Seed(int seed) const { void* __callArgs[] = { &seed }; CallStatic("Seed", __callArgs, 1); }
        void SeedIfUnset() const { CallStatic("SeedIfUnset", nullptr, 0); }
        float Tenacity(int nationId, int axis, float spread = 0.45f) const { void* __callArgs[] = { &nationId, &axis, &spread }; return CallStaticValue<float>("Tenacity", __callArgs, 3); }
        float OctaveBias(int seed, float wavelengthTiles, float periodYears, int x, int y, float gameYears) const { void* __callArgs[] = { &seed, &wavelengthTiles, &periodYears, &x, &y, &gameYears }; return CallStaticValue<float>("OctaveBias", __callArgs, 6); }
        float OctaveBiasAt(void* site, int seed) const { void* __callArgs[] = { &site, &seed }; return CallStaticValue<float>("OctaveBiasAt", __callArgs, 2); }
        float DriftField(int axis, int x, int y, int rootLo, int rootHi, float gameYears, void* cfg) const { void* __callArgs[] = { &axis, &x, &y, &rootLo, &rootHi, &gameYears, cfg }; return CallStaticValue<float>("DriftField", __callArgs, 7); }
        float DriftFieldAt(void* site, int axis, int rootLo, int rootHi, void* cfg) const { void* __callArgs[] = { &site, &axis, &rootLo, &rootHi, cfg }; return CallStaticValue<float>("DriftFieldAt", __callArgs, 5); }
        int DriftSeedBase(int axis) const { void* __callArgs[] = { &axis }; return CallStaticValue<int>("DriftSeedBase", __callArgs, 1); }
        int AxisSaltMul() const { return ReadStaticField<int>("AxisSaltMul"); }
    };
}
