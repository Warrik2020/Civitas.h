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
        void SetTileCount(int tiles) const { void* args[] = { &tiles }; Call("SetTileCount", args, 1); }
        void* RootTable(int axis) const { void* args[] = { &axis }; return Call("RootTable", args, 1); }
        void* PainterTable(int axis) const { void* args[] = { &axis }; return Call("PainterTable", args, 1); }
        int RootAt(int nationId, int tile, int axis) const { void* args[] = { &nationId, &tile, &axis }; return CallValue<int>("RootAt", args, 3); }
        bool Mark(int nationId, int tile, int axis, int root) const { void* args[] = { &nationId, &tile, &axis, &root }; return CallValue<bool>("Mark", args, 4); }
        bool Unmark(int nationId, int tile, int axis) const { void* args[] = { &nationId, &tile, &axis }; return CallValue<bool>("Unmark", args, 3); }
        int CountOf(int nationId, int axis, int root) const { void* args[] = { &nationId, &axis, &root }; return CallValue<int>("CountOf", args, 3); }
        int CountOn(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("CountOn", args, 2); }
        void* TilesOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("TilesOf", args, 2); }
        int Clear(int nationId, int axis, int root = -1) const { void* args[] = { &nationId, &axis, &root }; return CallValue<int>("Clear", args, 3); }
        int Prune(void* grid, void* alive) const { void* args[] = { grid, alive }; return CallValue<int>("Prune", args, 2); }
        void Export_(void* write) const { void* args[] = { write }; Call("Export", args, 1); }
    };
}
