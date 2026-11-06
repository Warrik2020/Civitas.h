#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechModifiers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechModifiers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechModifiers") {}
    public:
        void Apply(int e, float v) const { void* args[] = { &e, &v }; Call("Apply", args, 2); }
        float popGrowthMul() const { return ReadField<float>("popGrowthMul"); }
        void SetPopGrowthMul(float value) const { WriteField<float>("popGrowthMul", value); }
        float popCapacityMul() const { return ReadField<float>("popCapacityMul"); }
        void SetPopCapacityMul(float value) const { WriteField<float>("popCapacityMul", value); }
        float taxIncomeMul() const { return ReadField<float>("taxIncomeMul"); }
        void SetTaxIncomeMul(float value) const { WriteField<float>("taxIncomeMul", value); }
        float tradeIncomeMul() const { return ReadField<float>("tradeIncomeMul"); }
        void SetTradeIncomeMul(float value) const { WriteField<float>("tradeIncomeMul", value); }
        float buildSpeedMul() const { return ReadField<float>("buildSpeedMul"); }
        void SetBuildSpeedMul(float value) const { WriteField<float>("buildSpeedMul", value); }
        float fortBuildSpeedMul() const { return ReadField<float>("fortBuildSpeedMul"); }
        void SetFortBuildSpeedMul(float value) const { WriteField<float>("fortBuildSpeedMul", value); }
        float roadBuildSpeedMul() const { return ReadField<float>("roadBuildSpeedMul"); }
        void SetRoadBuildSpeedMul(float value) const { WriteField<float>("roadBuildSpeedMul", value); }
        float stabilityAdd() const { return ReadField<float>("stabilityAdd"); }
        void SetStabilityAdd(float value) const { WriteField<float>("stabilityAdd", value); }
        float happinessAdd() const { return ReadField<float>("happinessAdd"); }
        void SetHappinessAdd(float value) const { WriteField<float>("happinessAdd", value); }
        float researchSpeedMul() const { return ReadField<float>("researchSpeedMul"); }
        void SetResearchSpeedMul(float value) const { WriteField<float>("researchSpeedMul", value); }
        float adminCostMul() const { return ReadField<float>("adminCostMul"); }
        void SetAdminCostMul(float value) const { WriteField<float>("adminCostMul", value); }
        float unitCostMul() const { return ReadField<float>("unitCostMul"); }
        void SetUnitCostMul(float value) const { WriteField<float>("unitCostMul", value); }
        float upkeepMul() const { return ReadField<float>("upkeepMul"); }
        void SetUpkeepMul(float value) const { WriteField<float>("upkeepMul", value); }
        float recruitSpeedMul() const { return ReadField<float>("recruitSpeedMul"); }
        void SetRecruitSpeedMul(float value) const { WriteField<float>("recruitSpeedMul", value); }
        float reinforceRateMul() const { return ReadField<float>("reinforceRateMul"); }
        void SetReinforceRateMul(float value) const { WriteField<float>("reinforceRateMul", value); }
        float armyCapMul() const { return ReadField<float>("armyCapMul"); }
        void SetArmyCapMul(float value) const { WriteField<float>("armyCapMul", value); }
        float attackMul() const { return ReadField<float>("attackMul"); }
        void SetAttackMul(float value) const { WriteField<float>("attackMul", value); }
        float defenseMul() const { return ReadField<float>("defenseMul"); }
        void SetDefenseMul(float value) const { WriteField<float>("defenseMul", value); }
        float moveSpeedMul() const { return ReadField<float>("moveSpeedMul"); }
        void SetMoveSpeedMul(float value) const { WriteField<float>("moveSpeedMul", value); }
        float orgRegenMul() const { return ReadField<float>("orgRegenMul"); }
        void SetOrgRegenMul(float value) const { WriteField<float>("orgRegenMul", value); }
        float fleetAttackMul() const { return ReadField<float>("fleetAttackMul"); }
        void SetFleetAttackMul(float value) const { WriteField<float>("fleetAttackMul", value); }
        float fleetDefenseMul() const { return ReadField<float>("fleetDefenseMul"); }
        void SetFleetDefenseMul(float value) const { WriteField<float>("fleetDefenseMul", value); }
        float fleetSpeedMul() const { return ReadField<float>("fleetSpeedMul"); }
        void SetFleetSpeedMul(float value) const { WriteField<float>("fleetSpeedMul", value); }
        float transportSpeedMul() const { return ReadField<float>("transportSpeedMul"); }
        void SetTransportSpeedMul(float value) const { WriteField<float>("transportSpeedMul", value); }
        float patrolRadiusMul() const { return ReadField<float>("patrolRadiusMul"); }
        void SetPatrolRadiusMul(float value) const { WriteField<float>("patrolRadiusMul", value); }
        float embarkTimeMul() const { return ReadField<float>("embarkTimeMul"); }
        void SetEmbarkTimeMul(float value) const { WriteField<float>("embarkTimeMul", value); }
        float supplyRangeMul() const { return ReadField<float>("supplyRangeMul"); }
        void SetSupplyRangeMul(float value) const { WriteField<float>("supplyRangeMul", value); }
        float supplyThroughputMul() const { return ReadField<float>("supplyThroughputMul"); }
        void SetSupplyThroughputMul(float value) const { WriteField<float>("supplyThroughputMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
