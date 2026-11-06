#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class NavalRoutes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalRoutes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "NavalRoutes") {}
    public:
        bool PlanCrossing(void* grid, void* nation, int goalTile, int tick, int downsample, int maxExpansions, int maxWaypoints, int quayCacheTicks, int& embarkTile, int& landTile, void* route) const { void* __callArgs[] = { grid, nation, &goalTile, &tick, &downsample, &maxExpansions, &maxWaypoints, &quayCacheTicks, &embarkTile, &landTile, route }; return CallStaticValue<bool>("PlanCrossing", __callArgs, 11); }
        void BeachesNear(void* grid, int goalTile, void* into) const { void* __callArgs[] = { grid, &goalTile, into }; CallStatic("BeachesNear", __callArgs, 3); }
        void OwnQuaysNear(void* grid, void* n, int tick, int cacheTicks, void* near_, int seaComp, int max_, void* into) const { void* __callArgs[] = { grid, n, &tick, &cacheTicks, near_, &seaComp, &max_, into }; CallStatic("OwnQuaysNear", __callArgs, 8); }
    };
}
