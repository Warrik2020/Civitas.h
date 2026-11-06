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
        bool FindLaneUncached(void* grid, int fromWater, int toWater, int downsample, int maxExpansions, int maxWaypoints, void* route) const { void* __callArgs[] = { grid, &fromWater, &toWater, &downsample, &maxExpansions, &maxWaypoints, route }; return CallStaticValue<bool>("FindLaneUncached", __callArgs, 7); }
        bool FindLane(void* grid, int fromWater, int toWater, int downsample, int maxExpansions, int maxWaypoints, void* route) const { void* __callArgs[] = { grid, &fromWater, &toWater, &downsample, &maxExpansions, &maxWaypoints, route }; return CallStaticValue<bool>("FindLane", __callArgs, 7); }
        void ClearMemo() const { CallStatic("ClearMemo", nullptr, 0); }
    };
}
