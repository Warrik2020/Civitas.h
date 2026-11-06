#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class CoastlineRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CoastlineRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "CoastlineRenderer") {}
    public:
        void* Build(void* parent, void* data, void* space, void* style, float z, void* material) const { void* args[] = { parent, data, space, style, &z, material }; return CallStatic("Build", args, 6); }
        void* BuildShadow(void* parent, void* data, void* space, float halfWidth, float minInradius, float z, void* material) const { void* args[] = { parent, data, space, &halfWidth, &minInradius, &z, material }; return CallStatic("BuildShadow", args, 7); }
    };
}
