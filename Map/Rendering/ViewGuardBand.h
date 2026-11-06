#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class ViewGuardBand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ViewGuardBand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "ViewGuardBand") {}
    public:
        void Configure(void* map, int gridW, int gridH) const { void* __callArgs[] = { map, &gridW, &gridH }; CallStatic("Configure", __callArgs, 3); }
        void Register_(void* layer) const { void* __callArgs[] = { layer }; CallStatic("Register", __callArgs, 1); }
        void Unregister(void* layer) const { void* __callArgs[] = { layer }; CallStatic("Unregister", __callArgs, 1); }
        void RequestWholeMap(int frames = 2) const { void* __callArgs[] = { &frames }; CallStatic("RequestWholeMap", __callArgs, 1); }
        bool TryGetBand(int& x0, int& y0, int& x1, int& y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallStaticValue<bool>("TryGetBand", __callArgs, 4); }
        bool BandCoversGrid(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallStaticValue<bool>("BandCoversGrid", __callArgs, 4); }
        bool TryGetView(float padTiles, int& x0, int& y0, int& x1, int& y1) const { void* __callArgs[] = { &padTiles, &x0, &y0, &x1, &y1 }; return CallStaticValue<bool>("TryGetView", __callArgs, 5); }
        float MinPadTiles() const { return ReadStaticField<float>("MinPadTiles"); }
        float LookaheadSeconds() const { return ReadStaticField<float>("LookaheadSeconds"); }
        float CatchUpPadTiles() const { return ReadStaticField<float>("CatchUpPadTiles"); }
    };
}
