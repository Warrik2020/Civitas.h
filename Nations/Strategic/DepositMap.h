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
        bool TryAt(int tile, void* d) const { void* __callArgs[] = { &tile, &d }; return CallStaticValue<bool>("TryAt", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Set(int tile, int kind, int richness) const { void* __callArgs[] = { &tile, &kind, &richness }; CallStatic("Set", __callArgs, 3); }
        bool Remove(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<bool>("Remove", __callArgs, 1); }
        void Capture(void* tiles, void* kinds, void* richness) const { void* __callArgs[] = { &tiles, &kinds, &richness }; CallStatic("Capture", __callArgs, 3); }
        void Restore(void* tiles, void* kinds, void* richness, int tileCount) const { void* __callArgs[] = { tiles, kinds, richness, &tileCount }; CallStatic("Restore", __callArgs, 4); }
        void Generate(void* grid, int tilesPerState, uint64_t salt = 1592639710UL) const { void* __callArgs[] = { grid, &tilesPerState, &salt }; CallStatic("Generate", __callArgs, 3); }
        int Format() const { return ReadStaticField<int>("Format"); }
    };
}
