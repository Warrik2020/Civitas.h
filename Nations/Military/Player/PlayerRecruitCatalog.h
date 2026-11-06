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
        bool IsUnlocked(int t, void* it, void* cfg) const { void* args[] = { &t, it, cfg }; return CallStaticValue<bool>("IsUnlocked", args, 3); }
        float BuildTicks(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("BuildTicks", args, 2); }
        float TreasuryCost(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("TreasuryCost", args, 2); }
        bool ClassDraws(int t, int pool) const { void* args[] = { &t, &pool }; return CallStaticValue<bool>("ClassDraws", args, 2); }
        float ArmsCost(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("ArmsCost", args, 2); }
        float PoolCost(int t, int pool, void* cfg) const { void* args[] = { &t, &pool, cfg }; return CallStaticValue<float>("PoolCost", args, 3); }
        float PoolCostMax(int pool, void* cfg) const { void* args[] = { &pool, cfg }; return CallStaticValue<float>("PoolCostMax", args, 2); }
        int HeaviestDrawer(int pool, void* cfg) const { void* args[] = { &pool, cfg }; return CallStaticValue<int>("HeaviestDrawer", args, 2); }
        float TreasuryCost(void* t, void* cfg, void* it) const { void* args[] = { t, cfg, it }; return CallStaticValue<float>("TreasuryCost", args, 3); }
        float TreasuryCost(void* t, void* cfg, void* it, void* city, float stateCostMul) const { void* args[] = { t, cfg, it, city, &stateCostMul }; return CallStaticValue<float>("TreasuryCost", args, 5); }
        float BuildTicks(void* t, void* cfg, void* it) const { void* args[] = { t, cfg, it }; return CallStaticValue<float>("BuildTicks", args, 3); }
        float CostMulOf(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("CostMulOf", args, 2); }
        float TimeMulOf(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("TimeMulOf", args, 2); }
        float PoolCost(void* it, void* t, int pool, void* cfg) const { void* args[] = { it, t, &pool, cfg }; return CallStaticValue<float>("PoolCost", args, 4); }
        float ManpowerCost(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("ManpowerCost", args, 2); }
        float ManpowerCost(int t, void* cfg, void* it) const { void* args[] = { &t, cfg, it }; return CallStaticValue<float>("ManpowerCost", args, 3); }
        float ManpowerCost(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStaticValue<float>("ManpowerCost", args, 3); }
        float PopulationCost(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStaticValue<float>("PopulationCost", args, 3); }
        float FullManpower(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStaticValue<float>("FullManpower", args, 3); }
        void* ShortOf(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStatic("ShortOf", args, 3); }
        bool UnarmedRefused(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<bool>("UnarmedRefused", args, 2); }
        void* UnarmedStall(void* t) const { void* args[] = { t }; return CallStatic("UnarmedStall", args, 1); }
        bool IsShort(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStaticValue<bool>("IsShort", args, 3); }
        void* ChargePools(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStatic("ChargePools", args, 3); }
        void* ShortOf(int t, void* cfg, void* it) const { void* args[] = { &t, cfg, it }; return CallStatic("ShortOf", args, 3); }
        void* ChargePools(int t, void* cfg, void* it) const { void* args[] = { &t, cfg, it }; return CallStatic("ChargePools", args, 3); }
        float PoolCost(void* it, int t, int pool, void* cfg) const { void* args[] = { it, &t, &pool, cfg }; return CallStaticValue<float>("PoolCost", args, 4); }
        float TimeMulOf(int t) const { void* args[] = { &t }; return CallStaticValue<float>("TimeMulOf", args, 1); }
        float CostMulOf(int t) const { void* args[] = { &t }; return CallStaticValue<float>("CostMulOf", args, 1); }
        float TreasuryCost(int t, void* cfg, void* it) const { void* args[] = { &t, cfg, it }; return CallStaticValue<float>("TreasuryCost", args, 3); }
        float TreasuryCost(int t, void* cfg, void* it, void* city) const { void* args[] = { &t, cfg, it, city }; return CallStaticValue<float>("TreasuryCost", args, 4); }
        float TreasuryCost(int t, void* cfg, void* it, void* city, float stateCostMul) const { void* args[] = { &t, cfg, it, city, &stateCostMul }; return CallStaticValue<float>("TreasuryCost", args, 5); }
        float PopulationCost(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("PopulationCost", args, 2); }
        float PopulationCost(int t, void* cfg, void* it) const { void* args[] = { &t, cfg, it }; return CallStaticValue<float>("PopulationCost", args, 3); }
        float PopulationCost(int t, void* cfg, void* it, void* city) const { void* args[] = { &t, cfg, it, city }; return CallStaticValue<float>("PopulationCost", args, 4); }
        float FullStrength(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("FullStrength", args, 2); }
        float FullManpower(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("FullManpower", args, 2); }
        void* DisplayName(int t) const { void* args[] = { &t }; return CallStatic("DisplayName", args, 1); }
        int TypeCount() const { return ReadStaticField<int>("TypeCount"); }
    };
}
