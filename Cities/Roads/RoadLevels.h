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
        void* Name(int level) const { void* args[] = { &level }; return CallStatic("Name", args, 1); }
        float CostMultiplier(int level) const { void* args[] = { &level }; return CallStaticValue<float>("CostMultiplier", args, 1); }
        float BuildDivisor(int level) const { void* args[] = { &level }; return CallStaticValue<float>("BuildDivisor", args, 1); }
        float MarchMul(int level) const { void* args[] = { &level }; return CallStaticValue<float>("MarchMul", args, 1); }
        float TradeMul(int level) const { void* args[] = { &level }; return CallStaticValue<float>("TradeMul", args, 1); }
        void* TechName(int level) const { void* args[] = { &level }; return CallStatic("TechName", args, 1); }
        int MaxLevelFor(void* it) const { void* args[] = { it }; return CallStaticValue<int>("MaxLevelFor", args, 1); }
        float UpgradeCost(void* r, float costPerTile) const { void* args[] = { r, &costPerTile }; return CallStaticValue<float>("UpgradeCost", args, 2); }
        float OwnLandShare(void* path, int nationId, void* grid) const { void* args[] = { path, &nationId, grid }; return CallStaticValue<float>("OwnLandShare", args, 3); }
        float MarchMulAt(void* grid, int x, int y, int nationId) const { void* args[] = { grid, &x, &y, &nationId }; return CallStaticValue<float>("MarchMulAt", args, 4); }
        int Max() const { return ReadStaticField<int>("Max"); }
    };
}
