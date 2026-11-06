#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class SeaLanes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SeaLanes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "SeaLanes") {}
    public:
        bool FindLaneUncached(void* grid, int fromWater, int toWater, int downsample, int maxExpansions, int maxWaypoints, void* route) const { void* args[] = { grid, &fromWater, &toWater, &downsample, &maxExpansions, &maxWaypoints, route }; return CallStaticValue<bool>("FindLaneUncached", args, 7); }
        bool FindLane(void* grid, int fromWater, int toWater, int downsample, int maxExpansions, int maxWaypoints, void* route) const { void* args[] = { grid, &fromWater, &toWater, &downsample, &maxExpansions, &maxWaypoints, route }; return CallStaticValue<bool>("FindLane", args, 7); }
        void ClearMemo() const { CallStatic("ClearMemo", nullptr, 0); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        bool Equals(void* obj) const { void* args[] = { obj }; return CallValue<bool>("Equals", args, 1); }
        int GetHashCode() const { return CallValue<int>("GetHashCode", nullptr, 0); }
        void* ToString() const { return Call("ToString", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Push(int item, float pri) const { void* args[] = { &item, &pri }; Call("Push", args, 2); }
        int Pop() const { return CallValue<int>("Pop", nullptr, 0); }
        int From() const { return ReadField<int>("From"); }
        int To() const { return ReadField<int>("To"); }
        int Downsample() const { return ReadField<int>("Downsample"); }
        int MaxExpansions() const { return ReadField<int>("MaxExpansions"); }
        int MaxWaypoints() const { return ReadField<int>("MaxWaypoints"); }
    };
}
