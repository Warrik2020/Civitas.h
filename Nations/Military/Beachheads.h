#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Beachheads : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Beachheads(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Beachheads") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Add(int nationId, int anchorTile, int anchorWater, int targetNation, int tick, void* grid) const { void* __callArgs[] = { &nationId, &anchorTile, &anchorWater, &targetNation, &tick, grid }; CallStatic("Add", __callArgs, 6); }
        void Restore(void* b) const { void* __callArgs[] = { b }; CallStatic("Restore", __callArgs, 1); }
        void Prune(void* grid) const { void* __callArgs[] = { grid }; CallStatic("Prune", __callArgs, 1); }
        void AnchorsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; CallStatic("AnchorsOf", __callArgs, 2); }
        bool Any(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("Any", __callArgs, 1); }
        void Transfer(int from, int to) const { void* __callArgs[] = { &from, &to }; CallStatic("Transfer", __callArgs, 2); }
        void* AnchorPos(void* grid, void* b) const { void* __callArgs[] = { grid, &b }; return CallStatic("AnchorPos", __callArgs, 2); }
    };
}
