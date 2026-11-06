#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class TerrainRelief : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainRelief(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "TerrainRelief") {}
    public:
        void* Build(void* land, int w, int h, void* style, float shelfDarkenOverride = -1.0f) const { void* __callArgs[] = { land, &w, &h, style, &shelfDarkenOverride }; return CallStatic("Build", __callArgs, 5); }
    };
}
