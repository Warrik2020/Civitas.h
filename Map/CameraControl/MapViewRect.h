#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::CameraControl
{
    class MapViewRect : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapViewRect(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.CameraControl", "MapViewRect") {}
    public:
        void WorldAabb(void* cam, void* min_, void* max_) const { void* __callArgs[] = { cam, &min_, &max_ }; CallStatic("WorldAabb", __callArgs, 3); }
        void TileAabb(void* cam, void* space, float marginTiles, float& minX, float& maxX, float& minY, float& maxY) const { void* __callArgs[] = { cam, space, &marginTiles, &minX, &maxX, &minY, &maxY }; CallStatic("TileAabb", __callArgs, 7); }
    };
}
