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
        bool AnchorOpen(void* fb, int enemySide, float halfW, void* mid, void* along, void* inward, float& spanTiles) const { void* args[] = { fb, &enemySide, &halfW, &mid, &along, &inward, &spanTiles }; return CallStaticValue<bool>("AnchorOpen", args, 7); }
        bool Anchor(void* pts, void* breaks, float halfW, void* grid, int ownId, void* foes, void* capital, void* mid, void* along, void* inward, float& noiseTiles, float& spanTiles) const { void* args[] = { pts, breaks, &halfW, grid, &ownId, foes, capital, &mid, &along, &inward, &noiseTiles, &spanTiles }; return CallStaticValue<bool>("Anchor", args, 12); }
        bool AnchorPoints(void* pts, float halfW, void* grid, int ownId, void* foes, void* capital, void* mid, void* along, void* inward, float& noiseTiles, float& spanTiles) const { void* args[] = { pts, &halfW, grid, &ownId, foes, capital, &mid, &along, &inward, &noiseTiles, &spanTiles }; return CallStaticValue<bool>("AnchorPoints", args, 11); }
        float TotalLength(void* pts, void* breaks) const { void* args[] = { pts, breaks }; return CallStaticValue<float>("TotalLength", args, 2); }
        float ChainLength(void* pts, int s0, int s1) const { void* args[] = { pts, &s0, &s1 }; return CallStaticValue<float>("ChainLength", args, 3); }
        float DeadZoneTiles() const { return ReadStaticField<float>("DeadZoneTiles"); }
        int s0() const { return ReadField<int>("s0"); }
        void SetS0(int value) const { WriteField<int>("s0", value); }
        int s1() const { return ReadField<int>("s1"); }
        void SetS1(int value) const { WriteField<int>("s1", value); }
        bool loop() const { return ReadField<bool>("loop"); }
        void SetLoop(bool value) const { WriteField<bool>("loop", value); }
        float len() const { return ReadField<float>("len"); }
        void SetLen(float value) const { WriteField<float>("len", value); }
        float key() const { return ReadField<float>("key"); }
        void SetKey(float value) const { WriteField<float>("key", value); }
        float startArc() const { return ReadField<float>("startArc"); }
        void SetStartArc(float value) const { WriteField<float>("startArc", value); }
        int dir() const { return ReadField<int>("dir"); }
        void SetDir(int value) const { WriteField<int>("dir", value); }
    };
}
