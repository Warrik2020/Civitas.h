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
        float Thickness(void* style, void* map) const { void* args[] = { style, map }; return CallStaticValue<float>("Thickness", args, 2); }
        void* Build(void* parent, void* map, void* style, float z) const { void* args[] = { parent, map, style, &z }; return CallStatic("Build", args, 4); }
    };
}
