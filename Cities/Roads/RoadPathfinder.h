#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Roads
{
    class RoadPathfinder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadPathfinder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Roads", "RoadPathfinder") {}
    public:
        int NodeSize(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("NodeSize", __callArgs, 1); }
        void* FindRoad(void* grid, void* cfg, void* startTile, void* goalTile, int preferOwner = -1) const { void* __callArgs[] = { grid, cfg, startTile, goalTile, &preferOwner }; return CallStatic("FindRoad", __callArgs, 5); }
    };
}
