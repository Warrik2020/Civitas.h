#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Numbers
{
    class FrontNumberGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontNumberGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Numbers", "FrontNumberGeometry") {}
    public:
        bool AnchorOpen(void* fb, int enemySide, float halfW, void* mid, void* along, void* inward, float& spanTiles) const { void* __callArgs[] = { fb, &enemySide, &halfW, &mid, &along, &inward, &spanTiles }; return CallStaticValue<bool>("AnchorOpen", __callArgs, 7); }
        bool Anchor(void* pts, void* breaks, float halfW, void* grid, int ownId, void* foes, void* capital, void* mid, void* along, void* inward, float& noiseTiles, float& spanTiles) const { void* __callArgs[] = { pts, breaks, &halfW, grid, &ownId, foes, capital, &mid, &along, &inward, &noiseTiles, &spanTiles }; return CallStaticValue<bool>("Anchor", __callArgs, 12); }
        bool AnchorPoints(void* pts, float halfW, void* grid, int ownId, void* foes, void* capital, void* mid, void* along, void* inward, float& noiseTiles, float& spanTiles) const { void* __callArgs[] = { pts, &halfW, grid, &ownId, foes, capital, &mid, &along, &inward, &noiseTiles, &spanTiles }; return CallStaticValue<bool>("AnchorPoints", __callArgs, 11); }
        float TotalLength(void* pts, void* breaks) const { void* __callArgs[] = { pts, breaks }; return CallStaticValue<float>("TotalLength", __callArgs, 2); }
        float ChainLength(void* pts, int s0, int s1) const { void* __callArgs[] = { pts, &s0, &s1 }; return CallStaticValue<float>("ChainLength", __callArgs, 3); }
        float DeadZoneTiles() const { return ReadStaticField<float>("DeadZoneTiles"); }
    };
}
