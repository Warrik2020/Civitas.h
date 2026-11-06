#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Surface
{
    class TerrainPalette : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainPalette(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Surface", "TerrainPalette") {}
    public:
        void* Of(uint8_t terrain) const { void* __callArgs[] = { &terrain }; return CallStatic("Of", __callArgs, 1); }
        void* Layer() const { return ReadStaticField<void*>("Layer"); }
        float HillsClimate() const { return ReadStaticField<float>("HillsClimate"); }
        float MountainsClimate() const { return ReadStaticField<float>("MountainsClimate"); }
        void* Rock() const { return ReadStaticField<void*>("Rock"); }
    };
}
