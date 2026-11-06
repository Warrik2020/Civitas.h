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
        void* AddManualRoad(void* path, int builderNationId, int cityA = -1, int cityB = -1) const { void* __callArgs[] = { path, &builderNationId, &cityA, &cityB }; return Call("AddManualRoad", __callArgs, 4); }
        void LinkCity(void* c, void* all) const { void* __callArgs[] = { c, all }; Call("LinkCity", __callArgs, 2); }
        void QueueFoundingRoad(int town, int other, int nationId) const { void* __callArgs[] = { &town, &other, &nationId }; Call("QueueFoundingRoad", __callArgs, 3); }
        bool IsQueued(int64_t key) const { void* __callArgs[] = { &key }; return CallValue<bool>("IsQueued", __callArgs, 1); }
        void StepPathfinding() const { Call("StepPathfinding", nullptr, 0); }
        void StepReveal(int ticks = 1) const { void* __callArgs[] = { &ticks }; Call("StepReveal", __callArgs, 1); }
        bool BeginUpgrade(void* r) const { void* __callArgs[] = { r }; return CallValue<bool>("BeginUpgrade", __callArgs, 1); }
        int LevelAt(int tile) const { void* __callArgs[] = { &tile }; return CallValue<int>("LevelAt", __callArgs, 1); }
        void StampTiles(void* r) const { void* __callArgs[] = { r }; Call("StampTiles", __callArgs, 1); }
        void* NearestRoad(void* p, float maxDist, void* filter = nullptr) const { void* __callArgs[] = { p, &maxDist, filter }; return Call("NearestRoad", __callArgs, 3); }
        void* Roads() const { return ReadField<void*>("Roads"); }
    };
}
