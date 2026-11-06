#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class MapFrame : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapFrame(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "MapFrame") {}
    public:
        float Thickness(void* style, void* map) const { void* __callArgs[] = { style, map }; return CallStaticValue<float>("Thickness", __callArgs, 2); }
        void* Build(void* parent, void* map, void* style, float z) const { void* __callArgs[] = { parent, map, style, &z }; return CallStatic("Build", __callArgs, 4); }
    };
}
