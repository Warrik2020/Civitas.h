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
        void Seed(int seed) const { void* args[] = { &seed }; CallStatic("Seed", args, 1); }
        void SeedIfUnset() const { CallStatic("SeedIfUnset", nullptr, 0); }
        float Tenacity(int nationId, int axis, float spread) const { void* args[] = { &nationId, &axis, &spread }; return CallStaticValue<float>("Tenacity", args, 3); }
        float OctaveBias(int seed, float wavelengthTiles, float periodYears, int x, int y, float gameYears) const { void* args[] = { &seed, &wavelengthTiles, &periodYears, &x, &y, &gameYears }; return CallStaticValue<float>("OctaveBias", args, 6); }
        float OctaveBiasAt(void* site, int seed) const { void* args[] = { &site, &seed }; return CallStaticValue<float>("OctaveBiasAt", args, 2); }
        float DriftField(int axis, int x, int y, int rootLo, int rootHi, float gameYears, void* cfg) const { void* args[] = { &axis, &x, &y, &rootLo, &rootHi, &gameYears, cfg }; return CallStaticValue<float>("DriftField", args, 7); }
        float DriftFieldAt(void* site, int axis, int rootLo, int rootHi, void* cfg) const { void* args[] = { &site, &axis, &rootLo, &rootHi, cfg }; return CallStaticValue<float>("DriftFieldAt", args, 5); }
        int DriftSeedBase(int axis) const { void* args[] = { &axis }; return CallStaticValue<int>("DriftSeedBase", args, 1); }
        float Field(int seedBase, int rootLo, int rootHi, float contrast) const { void* args[] = { &seedBase, &rootLo, &rootHi, &contrast }; return CallValue<float>("Field", args, 4); }
        void* For_(int worldSeed, int tick, int axis, int chunk) const { void* args[] = { &worldSeed, &tick, &axis, &chunk }; return CallStatic("For", args, 4); }
        uint32_t Next() const { return CallValue<uint32_t>("Next", nullptr, 0); }
        float Next01() const { return CallValue<float>("Next01", nullptr, 0); }
        int Poisson(float mean) const { void* args[] = { &mean }; return CallValue<int>("Poisson", args, 1); }
        int AxisSaltMul() const { return ReadStaticField<int>("AxisSaltMul"); }
        void* phase() const { return ReadField<void*>("phase"); }
        void* cell() const { return ReadField<void*>("cell"); }
        float epochBase() const { return ReadField<float>("epochBase"); }
    };
}
