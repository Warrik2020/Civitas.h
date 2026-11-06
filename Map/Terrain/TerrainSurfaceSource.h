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
        void* Get(void* map) const { void* args[] = { map }; return CallStatic("Get", args, 1); }
        void* Shares(void* d) const { void* args[] = { d }; return CallStatic("Shares", args, 1); }
    };
}
