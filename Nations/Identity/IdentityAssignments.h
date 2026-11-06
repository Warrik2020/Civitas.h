#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityAssignments : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityAssignments(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityAssignments") {}
    public:
        void SetTileCount(int tiles) const { void* __callArgs[] = { &tiles }; Call("SetTileCount", __callArgs, 1); }
        void* RootTable(int axis) const { void* __callArgs[] = { &axis }; return Call("RootTable", __callArgs, 1); }
        void* PainterTable(int axis) const { void* __callArgs[] = { &axis }; return Call("PainterTable", __callArgs, 1); }
        int RootAt(int nationId, int tile, int axis) const { void* __callArgs[] = { &nationId, &tile, &axis }; return CallValue<int>("RootAt", __callArgs, 3); }
        bool Mark(int nationId, int tile, int axis, int root) const { void* __callArgs[] = { &nationId, &tile, &axis, &root }; return CallValue<bool>("Mark", __callArgs, 4); }
        bool Unmark(int nationId, int tile, int axis) const { void* __callArgs[] = { &nationId, &tile, &axis }; return CallValue<bool>("Unmark", __callArgs, 3); }
        int CountOf(int nationId, int axis, int root) const { void* __callArgs[] = { &nationId, &axis, &root }; return CallValue<int>("CountOf", __callArgs, 3); }
        int CountOn(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("CountOn", __callArgs, 2); }
        void* TilesOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("TilesOf", __callArgs, 2); }
        int Clear(int nationId, int axis, int root = -1) const { void* __callArgs[] = { &nationId, &axis, &root }; return CallValue<int>("Clear", __callArgs, 3); }
        int Prune(void* grid, void* alive) const { void* __callArgs[] = { grid, alive }; return CallValue<int>("Prune", __callArgs, 2); }
        void Export_(void* write) const { void* __callArgs[] = { write }; Call("Export", __callArgs, 1); }
    };
}
