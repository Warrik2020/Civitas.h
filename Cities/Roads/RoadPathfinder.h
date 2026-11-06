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
        int NodeSize(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("NodeSize", args, 1); }
        void* FindRoad(void* grid, void* cfg, void* startTile, void* goalTile, int preferOwner = -1) const { void* args[] = { grid, cfg, startTile, goalTile, &preferOwner }; return CallStatic("FindRoad", args, 5); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Push(int node, float pri) const { void* args[] = { &node, &pri }; Call("Push", args, 2); }
        int Pop() const { return CallValue<int>("Pop", nullptr, 0); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float noise() const { return ReadField<float>("noise"); }
        void SetNoise(float value) const { WriteField<float>("noise", value); }
        int from() const { return ReadField<int>("from"); }
        void SetFrom(int value) const { WriteField<int>("from", value); }
        int stamp() const { return ReadField<int>("stamp"); }
        void SetStamp(int value) const { WriteField<int>("stamp", value); }
        bool closed() const { return ReadField<bool>("closed"); }
        void SetClosed(bool value) const { WriteField<bool>("closed", value); }
    };
}
