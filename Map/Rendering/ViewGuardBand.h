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
        void Configure(void* map, int gridW, int gridH) const { void* args[] = { map, &gridW, &gridH }; CallStatic("Configure", args, 3); }
        void Register_(void* layer) const { void* args[] = { layer }; CallStatic("Register", args, 1); }
        void Unregister(void* layer) const { void* args[] = { layer }; CallStatic("Unregister", args, 1); }
        void RequestWholeMap(int frames = 2) const { void* args[] = { &frames }; CallStatic("RequestWholeMap", args, 1); }
        bool TryGetBand(int& x0, int& y0, int& x1, int& y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallStaticValue<bool>("TryGetBand", args, 4); }
        bool BandCoversGrid(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallStaticValue<bool>("BandCoversGrid", args, 4); }
        bool TryGetView(float padTiles, int& x0, int& y0, int& x1, int& y1) const { void* args[] = { &padTiles, &x0, &y0, &x1, &y1 }; return CallStaticValue<bool>("TryGetView", args, 5); }
        float MinPadTiles() const { return ReadStaticField<float>("MinPadTiles"); }
        float LookaheadSeconds() const { return ReadStaticField<float>("LookaheadSeconds"); }
        float CatchUpPadTiles() const { return ReadStaticField<float>("CatchUpPadTiles"); }
    };
}
