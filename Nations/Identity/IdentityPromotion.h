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
        void SetTileCount(int tiles) const { void* __callArgs[] = { &tiles }; Call("SetTileCount", __callArgs, 1); }
        bool Mark(int nationId, int tile, int axisMask) const { void* __callArgs[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("Mark", __callArgs, 3); }
        bool Unmark(int nationId, int tile, int axisMask) const { void* __callArgs[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("Unmark", __callArgs, 3); }
        bool Covers(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; return CallValue<bool>("Covers", __callArgs, 2); }
        bool Covers(int nationId, int tile, int axisMask) const { void* __callArgs[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("Covers", __callArgs, 3); }
        int AxesAt(int tile) const { void* __callArgs[] = { &tile }; return CallValue<int>("AxesAt", __callArgs, 1); }
        int CountOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CountOf", __callArgs, 1); }
        int AxisTileCountOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("AxisTileCountOf", __callArgs, 1); }
        int CountOn(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("CountOn", __callArgs, 2); }
        int AxesPaintedBy(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("AxesPaintedBy", __callArgs, 1); }
        void* TilesOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("TilesOf", __callArgs, 1); }
        int ClearAll(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("ClearAll", __callArgs, 1); }
        int ClearAxes(int nationId, int axisMask) const { void* __callArgs[] = { &nationId, &axisMask }; return CallValue<int>("ClearAxes", __callArgs, 2); }
        int Prune(void* grid, void* keep = nullptr) const { void* __callArgs[] = { grid, keep }; return CallValue<int>("Prune", __callArgs, 2); }
        void Export_(void* write) const { void* __callArgs[] = { write }; Call("Export", __callArgs, 1); }
    };
}
