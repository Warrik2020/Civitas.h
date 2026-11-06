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
        bool PlanCrossing(void* grid, void* nation, int goalTile, int tick, int downsample, int maxExpansions, int maxWaypoints, int quayCacheTicks, int& embarkTile, int& landTile, void* route) const { void* args[] = { grid, nation, &goalTile, &tick, &downsample, &maxExpansions, &maxWaypoints, &quayCacheTicks, &embarkTile, &landTile, route }; return CallStaticValue<bool>("PlanCrossing", args, 11); }
        void BeachesNear(void* grid, int goalTile, void* into) const { void* args[] = { grid, &goalTile, into }; CallStatic("BeachesNear", args, 3); }
        void OwnQuaysNear(void* grid, void* n, int tick, int cacheTicks, void* near, int seaComp, int max, void* into) const { void* args[] = { grid, n, &tick, &cacheTicks, near, &seaComp, &max, into }; CallStatic("OwnQuaysNear", args, 8); }
        int quay() const { return ReadField<int>("quay"); }
        void SetQuay(int value) const { WriteField<int>("quay", value); }
        int beach() const { return ReadField<int>("beach"); }
        void SetBeach(int value) const { WriteField<int>("beach", value); }
        float distSq() const { return ReadField<float>("distSq"); }
        void SetDistSq(float value) const { WriteField<float>("distSq", value); }
    };
}
