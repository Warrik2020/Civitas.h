#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityIconMarker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityIconMarker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityIconMarker") {}
    public:
        void SetForcedPickable(void* cityIds) const { void* args[] = { cityIds }; CallStatic("SetForcedPickable", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        bool IsPickable(void* c) const { void* args[] = { c }; return CallStaticValue<bool>("IsPickable", args, 1); }
        float HalfHeightWorld(void* c, void* space, void* cam) const { void* args[] = { c, space, cam }; return CallStaticValue<float>("HalfHeightWorld", args, 3); }
        void* Shape(void* view, void* at, float halfH) const { void* args[] = { &view, at, &halfH }; return CallStatic("Shape", args, 3); }
        void* IconPath() const { return ReadStaticField<void*>("IconPath"); }
        float MinScreenPx() const { return ReadStaticField<float>("MinScreenPx"); }
        float RadiusFactor() const { return ReadStaticField<float>("RadiusFactor"); }
        float PickableScale() const { return ReadStaticField<float>("PickableScale"); }
        float MajorsOnlyTilePx() const { return ReadStaticField<float>("MajorsOnlyTilePx"); }
        float FadeTilePx() const { return ReadStaticField<float>("FadeTilePx"); }
        float MinFadeAlpha() const { return ReadStaticField<float>("MinFadeAlpha"); }
        float ShowExitFactor() const { return ReadStaticField<float>("ShowExitFactor"); }
        float DensityCellPx() const { return ReadStaticField<float>("DensityCellPx"); }
        int DensityMax() const { return ReadStaticField<int>("DensityMax"); }
        int MaxIcons() const { return ReadStaticField<int>("MaxIcons"); }
        float CullMarginTiles() const { return ReadStaticField<float>("CullMarginTiles"); }
    };
}
