#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class DepositMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DepositMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "DepositMap") {}
    public:
        bool TryAt(int tile, void* d) const { void* args[] = { &tile, &d }; return CallStaticValue<bool>("TryAt", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Set(int tile, int kind, int richness) const { void* args[] = { &tile, &kind, &richness }; CallStatic("Set", args, 3); }
        bool Remove(int tile) const { void* args[] = { &tile }; return CallStaticValue<bool>("Remove", args, 1); }
        void Capture(void* tiles, void* kinds, void* richness) const { void* args[] = { &tiles, &kinds, &richness }; CallStatic("Capture", args, 3); }
        void Restore(void* tiles, void* kinds, void* richness, int tileCount) const { void* args[] = { tiles, kinds, richness, &tileCount }; CallStatic("Restore", args, 4); }
        void Generate(void* grid, int tilesPerState, uint64_t salt = 1592639710UL) const { void* args[] = { grid, &tilesPerState, &salt }; CallStatic("Generate", args, 3); }
        uint64_t Next() const { return CallValue<uint64_t>("Next", nullptr, 0); }
        float NextFloat() const { return CallValue<float>("NextFloat", nullptr, 0); }
        int NextInt(int n) const { void* args[] = { &n }; return CallValue<int>("NextInt", args, 1); }
        int Format() const { return ReadStaticField<int>("Format"); }
    };
}
