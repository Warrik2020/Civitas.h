#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class WorldHeightField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldHeightField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "WorldHeightField") {}
    public:
        void EnsureBuilt(void* land, int w, int h, void* style) const { void* args[] = { land, &w, &h, style }; CallStatic("EnsureBuilt", args, 4); }
        int ShapeKey(int w, int h, void* style) const { void* args[] = { &w, &h, style }; return CallStaticValue<int>("ShapeKey", args, 3); }
        float HeightTile(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("HeightTile", args, 2); }
        float SlopeTile(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("SlopeTile", args, 2); }
        float LayoutSlopeTile(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("LayoutSlopeTile", args, 2); }
        float RugAt(float mapX, float mapY) const { void* args[] = { &mapX, &mapY }; return CallStaticValue<float>("RugAt", args, 2); }
        float HeightAt(float mapX, float mapY) const { void* args[] = { &mapX, &mapY }; return CallStaticValue<float>("HeightAt", args, 2); }
        float SlopeAt(float mapX, float mapY) const { void* args[] = { &mapX, &mapY }; return CallStaticValue<float>("SlopeAt", args, 2); }
        float MountainShare() const { return ReadStaticField<float>("MountainShare"); }
        float HillShare() const { return ReadStaticField<float>("HillShare"); }
        float LowlandShare() const { return ReadStaticField<float>("LowlandShare"); }
    };
}
