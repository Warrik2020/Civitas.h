#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Roads
{
    class RoadLevels : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadLevels(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Roads", "RoadLevels") {}
    public:
        void* Name(int level) const { void* __callArgs[] = { &level }; return CallStatic("Name", __callArgs, 1); }
        float CostMultiplier(int level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("CostMultiplier", __callArgs, 1); }
        float BuildDivisor(int level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("BuildDivisor", __callArgs, 1); }
        float MarchMul(int level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("MarchMul", __callArgs, 1); }
        float TradeMul(int level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("TradeMul", __callArgs, 1); }
        void* TechName(int level) const { void* __callArgs[] = { &level }; return CallStatic("TechName", __callArgs, 1); }
        int MaxLevelFor(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("MaxLevelFor", __callArgs, 1); }
        float UpgradeCost(void* r, float costPerTile) const { void* __callArgs[] = { r, &costPerTile }; return CallStaticValue<float>("UpgradeCost", __callArgs, 2); }
        float OwnLandShare(void* path, int nationId, void* grid) const { void* __callArgs[] = { path, &nationId, grid }; return CallStaticValue<float>("OwnLandShare", __callArgs, 3); }
        float MarchMulAt(void* grid, int x, int y, int nationId) const { void* __callArgs[] = { grid, &x, &y, &nationId }; return CallStaticValue<float>("MarchMulAt", __callArgs, 4); }
        int Max_() const { return ReadStaticField<int>("Max"); }
    };
}
