#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Terrain
{
    class TerrainSurfaceSource : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainSurfaceSource(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Terrain", "TerrainSurfaceSource") {}
    public:
        void* Get(void* map) const { void* __callArgs[] = { map }; return CallStatic("Get", __callArgs, 1); }
        void* Shares(void* d) const { void* __callArgs[] = { d }; return CallStatic("Shares", __callArgs, 1); }
    };
}
