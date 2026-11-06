#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerRecruitCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerRecruitCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerRecruitCatalog") {}
    public:
        bool IsUnlocked(int t, void* it, void* cfg) const { void* __callArgs[] = { &t, it, cfg }; return CallStaticValue<bool>("IsUnlocked", __callArgs, 3); }
        float BuildTicks(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("BuildTicks", __callArgs, 2); }
        float TreasuryCost(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("TreasuryCost", __callArgs, 2); }
        bool ClassDraws(int t, int pool) const { void* __callArgs[] = { &t, &pool }; return CallStaticValue<bool>("ClassDraws", __callArgs, 2); }
        float ArmsCost(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("ArmsCost", __callArgs, 2); }
        float PoolCost(int t, int pool, void* cfg) const { void* __callArgs[] = { &t, &pool, cfg }; return CallStaticValue<float>("PoolCost", __callArgs, 3); }
        float PoolCostMax(int pool, void* cfg) const { void* __callArgs[] = { &pool, cfg }; return CallStaticValue<float>("PoolCostMax", __callArgs, 2); }
        int HeaviestDrawer(int pool, void* cfg) const { void* __callArgs[] = { &pool, cfg }; return CallStaticValue<int>("HeaviestDrawer", __callArgs, 2); }
        float TreasuryCost(void* t, void* cfg, void* it) const { void* __callArgs[] = { t, cfg, it }; return CallStaticValue<float>("TreasuryCost", __callArgs, 3); }
        float TreasuryCost(void* t, void* cfg, void* it, void* city, float stateCostMul) const { void* __callArgs[] = { t, cfg, it, city, &stateCostMul }; return CallStaticValue<float>("TreasuryCost", __callArgs, 5); }
        float BuildTicks(void* t, void* cfg, void* it) const { void* __callArgs[] = { t, cfg, it }; return CallStaticValue<float>("BuildTicks", __callArgs, 3); }
        float CostMulOf(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("CostMulOf", __callArgs, 2); }
        float TimeMulOf(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("TimeMulOf", __callArgs, 2); }
        float PoolCost(void* it, void* t, int pool, void* cfg) const { void* __callArgs[] = { it, t, &pool, cfg }; return CallStaticValue<float>("PoolCost", __callArgs, 4); }
        float ManpowerCost(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("ManpowerCost", __callArgs, 2); }
        float ManpowerCost(int t, void* cfg, void* it) const { void* __callArgs[] = { &t, cfg, it }; return CallStaticValue<float>("ManpowerCost", __callArgs, 3); }
        float ManpowerCost(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStaticValue<float>("ManpowerCost", __callArgs, 3); }
        float PopulationCost(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStaticValue<float>("PopulationCost", __callArgs, 3); }
        float FullManpower(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStaticValue<float>("FullManpower", __callArgs, 3); }
        void* ShortOf(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStatic("ShortOf", __callArgs, 3); }
        bool UnarmedRefused(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<bool>("UnarmedRefused", __callArgs, 2); }
        void* UnarmedStall(void* t) const { void* __callArgs[] = { t }; return CallStatic("UnarmedStall", __callArgs, 1); }
        bool IsShort(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStaticValue<bool>("IsShort", __callArgs, 3); }
        void* ChargePools(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStatic("ChargePools", __callArgs, 3); }
        void* ShortOf(int t, void* cfg, void* it) const { void* __callArgs[] = { &t, cfg, it }; return CallStatic("ShortOf", __callArgs, 3); }
        void* ChargePools(int t, void* cfg, void* it) const { void* __callArgs[] = { &t, cfg, it }; return CallStatic("ChargePools", __callArgs, 3); }
        float PoolCost(void* it, int t, int pool, void* cfg) const { void* __callArgs[] = { it, &t, &pool, cfg }; return CallStaticValue<float>("PoolCost", __callArgs, 4); }
        float TimeMulOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("TimeMulOf", __callArgs, 1); }
        float CostMulOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("CostMulOf", __callArgs, 1); }
        float TreasuryCost(int t, void* cfg, void* it) const { void* __callArgs[] = { &t, cfg, it }; return CallStaticValue<float>("TreasuryCost", __callArgs, 3); }
        float TreasuryCost(int t, void* cfg, void* it, void* city) const { void* __callArgs[] = { &t, cfg, it, city }; return CallStaticValue<float>("TreasuryCost", __callArgs, 4); }
        float TreasuryCost(int t, void* cfg, void* it, void* city, float stateCostMul) const { void* __callArgs[] = { &t, cfg, it, city, &stateCostMul }; return CallStaticValue<float>("TreasuryCost", __callArgs, 5); }
        float PopulationCost(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("PopulationCost", __callArgs, 2); }
        float PopulationCost(int t, void* cfg, void* it) const { void* __callArgs[] = { &t, cfg, it }; return CallStaticValue<float>("PopulationCost", __callArgs, 3); }
        float PopulationCost(int t, void* cfg, void* it, void* city) const { void* __callArgs[] = { &t, cfg, it, city }; return CallStaticValue<float>("PopulationCost", __callArgs, 4); }
        float FullStrength(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("FullStrength", __callArgs, 2); }
        float FullManpower(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("FullManpower", __callArgs, 2); }
        void* DisplayName(int t) const { void* __callArgs[] = { &t }; return CallStatic("DisplayName", __callArgs, 1); }
        int TypeCount() const { return ReadStaticField<int>("TypeCount"); }
    };
}
