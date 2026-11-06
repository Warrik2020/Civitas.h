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
        void EnsureBuilt(void* land, int w, int h, void* style) const { void* __callArgs[] = { land, &w, &h, style }; CallStatic("EnsureBuilt", __callArgs, 4); }
        int ShapeKey(int w, int h, void* style) const { void* __callArgs[] = { &w, &h, style }; return CallStaticValue<int>("ShapeKey", __callArgs, 3); }
        float HeightTile(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<float>("HeightTile", __callArgs, 2); }
        float SlopeTile(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<float>("SlopeTile", __callArgs, 2); }
        float LayoutSlopeTile(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<float>("LayoutSlopeTile", __callArgs, 2); }
        float RugAt(float mapX, float mapY) const { void* __callArgs[] = { &mapX, &mapY }; return CallStaticValue<float>("RugAt", __callArgs, 2); }
        float HeightAt(float mapX, float mapY) const { void* __callArgs[] = { &mapX, &mapY }; return CallStaticValue<float>("HeightAt", __callArgs, 2); }
        float SlopeAt(float mapX, float mapY) const { void* __callArgs[] = { &mapX, &mapY }; return CallStaticValue<float>("SlopeAt", __callArgs, 2); }
        float MountainShare() const { return ReadStaticField<float>("MountainShare"); }
        float HillShare() const { return ReadStaticField<float>("HillShare"); }
        float LowlandShare() const { return ReadStaticField<float>("LowlandShare"); }
    };
}
