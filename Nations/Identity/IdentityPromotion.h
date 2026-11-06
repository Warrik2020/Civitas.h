#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityPromotion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityPromotion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityPromotion") {}
    public:
        void SetTileCount(int tiles) const { void* args[] = { &tiles }; Call("SetTileCount", args, 1); }
        bool Mark(int nationId, int tile, int axisMask) const { void* args[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("Mark", args, 3); }
        bool Unmark(int nationId, int tile, int axisMask) const { void* args[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("Unmark", args, 3); }
        bool Covers(int nationId, int tile) const { void* args[] = { &nationId, &tile }; return CallValue<bool>("Covers", args, 2); }
        bool Covers(int nationId, int tile, int axisMask) const { void* args[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("Covers", args, 3); }
        int AxesAt(int tile) const { void* args[] = { &tile }; return CallValue<int>("AxesAt", args, 1); }
        int CountOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CountOf", args, 1); }
        int AxisTileCountOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("AxisTileCountOf", args, 1); }
        int CountOn(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("CountOn", args, 2); }
        int AxesPaintedBy(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("AxesPaintedBy", args, 1); }
        void* TilesOf(int nationId) const { void* args[] = { &nationId }; return Call("TilesOf", args, 1); }
        int ClearAll(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("ClearAll", args, 1); }
        int ClearAxes(int nationId, int axisMask) const { void* args[] = { &nationId, &axisMask }; return CallValue<int>("ClearAxes", args, 2); }
        int Prune(void* grid, void* keep = nullptr) const { void* args[] = { grid, keep }; return CallValue<int>("Prune", args, 2); }
        void Export_(void* write) const { void* args[] = { write }; Call("Export", args, 1); }
    };
}
