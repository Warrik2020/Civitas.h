#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Roads
{
    class RoadPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Roads", "RoadPlanner") {}
    public:
        void* AddManualRoad(void* path, int builderNationId, int cityA = -1, int cityB = -1) const { void* args[] = { path, &builderNationId, &cityA, &cityB }; return Call("AddManualRoad", args, 4); }
        void LinkCity(void* c, void* all) const { void* args[] = { c, all }; Call("LinkCity", args, 2); }
        void QueueFoundingRoad(int town, int other, int nationId) const { void* args[] = { &town, &other, &nationId }; Call("QueueFoundingRoad", args, 3); }
        bool IsQueued(int64_t key) const { void* args[] = { &key }; return CallValue<bool>("IsQueued", args, 1); }
        void StepPathfinding() const { Call("StepPathfinding", nullptr, 0); }
        void StepReveal(int ticks = 1) const { void* args[] = { &ticks }; Call("StepReveal", args, 1); }
        bool BeginUpgrade(void* r) const { void* args[] = { r }; return CallValue<bool>("BeginUpgrade", args, 1); }
        int LevelAt(int tile) const { void* args[] = { &tile }; return CallValue<int>("LevelAt", args, 1); }
        void StampTiles(void* r) const { void* args[] = { r }; Call("StampTiles", args, 1); }
        void* NearestRoad(void* p, float maxDist, void* filter = nullptr) const { void* args[] = { p, &maxDist, filter }; return Call("NearestRoad", args, 3); }
        void* Roads() const { return ReadField<void*>("Roads"); }
    };
}
