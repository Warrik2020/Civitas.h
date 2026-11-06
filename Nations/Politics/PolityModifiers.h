#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PolityModifiers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PolityModifiers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PolityModifiers") {}
    public:
        void Combine(void* o) const { void* __callArgs[] = { &o }; Call("Combine", __callArgs, 1); }
        void CombineScaled(void* o, float s) const { void* __callArgs[] = { &o, &s }; Call("CombineScaled", __callArgs, 2); }
        float taxIncomeMul() const { return ReadField<float>("taxIncomeMul"); }
        void taxIncomeMul(float value) const { WriteField<float>("taxIncomeMul", value); }
        float adminCostMul() const { return ReadField<float>("adminCostMul"); }
        void adminCostMul(float value) const { WriteField<float>("adminCostMul", value); }
        float tradeIncomeMul() const { return ReadField<float>("tradeIncomeMul"); }
        void tradeIncomeMul(float value) const { WriteField<float>("tradeIncomeMul", value); }
        float tradeOpennessCap() const { return ReadField<float>("tradeOpennessCap"); }
        void tradeOpennessCap(float value) const { WriteField<float>("tradeOpennessCap", value); }
        float maxTaxRateMul() const { return ReadField<float>("maxTaxRateMul"); }
        void maxTaxRateMul(float value) const { WriteField<float>("maxTaxRateMul", value); }
        float corruptionSkim() const { return ReadField<float>("corruptionSkim"); }
        void corruptionSkim(float value) const { WriteField<float>("corruptionSkim", value); }
        float buildingUpkeepMul() const { return ReadField<float>("buildingUpkeepMul"); }
        void buildingUpkeepMul(float value) const { WriteField<float>("buildingUpkeepMul", value); }
        float buildSpeedMul() const { return ReadField<float>("buildSpeedMul"); }
        void buildSpeedMul(float value) const { WriteField<float>("buildSpeedMul", value); }
        float welfareFloor() const { return ReadField<float>("welfareFloor"); }
        void welfareFloor(float value) const { WriteField<float>("welfareFloor", value); }
        float welfareCostMul() const { return ReadField<float>("welfareCostMul"); }
        void welfareCostMul(float value) const { WriteField<float>("welfareCostMul", value); }
        float socialHappinessMul() const { return ReadField<float>("socialHappinessMul"); }
        void socialHappinessMul(float value) const { WriteField<float>("socialHappinessMul", value); }
        float popGrowthMul() const { return ReadField<float>("popGrowthMul"); }
        void popGrowthMul(float value) const { WriteField<float>("popGrowthMul", value); }
        float popCapacityMul() const { return ReadField<float>("popCapacityMul"); }
        void popCapacityMul(float value) const { WriteField<float>("popCapacityMul", value); }
        float emigrationMul() const { return ReadField<float>("emigrationMul"); }
        void emigrationMul(float value) const { WriteField<float>("emigrationMul", value); }
        bool canCloseBorders() const { return ReadField<bool>("canCloseBorders"); }
        void canCloseBorders(bool value) const { WriteField<bool>("canCloseBorders", value); }
        float upkeepMul() const { return ReadField<float>("upkeepMul"); }
        void upkeepMul(float value) const { WriteField<float>("upkeepMul", value); }
        float wartimeUpkeepMul() const { return ReadField<float>("wartimeUpkeepMul"); }
        void wartimeUpkeepMul(float value) const { WriteField<float>("wartimeUpkeepMul", value); }
        float recruitSpeedMul() const { return ReadField<float>("recruitSpeedMul"); }
        void recruitSpeedMul(float value) const { WriteField<float>("recruitSpeedMul", value); }
        float unitCostMul() const { return ReadField<float>("unitCostMul"); }
        void unitCostMul(float value) const { WriteField<float>("unitCostMul", value); }
        float recruitPopCostMul() const { return ReadField<float>("recruitPopCostMul"); }
        void recruitPopCostMul(float value) const { WriteField<float>("recruitPopCostMul", value); }
        float armyCapMul() const { return ReadField<float>("armyCapMul"); }
        void armyCapMul(float value) const { WriteField<float>("armyCapMul", value); }
        float attackMul() const { return ReadField<float>("attackMul"); }
        void attackMul(float value) const { WriteField<float>("attackMul", value); }
        float defenseMul() const { return ReadField<float>("defenseMul"); }
        void defenseMul(float value) const { WriteField<float>("defenseMul", value); }
        float happinessAdd() const { return ReadField<float>("happinessAdd"); }
        void happinessAdd(float value) const { WriteField<float>("happinessAdd", value); }
        float warWearinessMul() const { return ReadField<float>("warWearinessMul"); }
        void warWearinessMul(float value) const { WriteField<float>("warWearinessMul", value); }
        float revoltChanceMul() const { return ReadField<float>("revoltChanceMul"); }
        void revoltChanceMul(float value) const { WriteField<float>("revoltChanceMul", value); }
        float integrationSpeedMul() const { return ReadField<float>("integrationSpeedMul"); }
        void integrationSpeedMul(float value) const { WriteField<float>("integrationSpeedMul", value); }
        float assimilationCostMul() const { return ReadField<float>("assimilationCostMul"); }
        void assimilationCostMul(float value) const { WriteField<float>("assimilationCostMul", value); }
        float sameIdeologyOpinion() const { return ReadField<float>("sameIdeologyOpinion"); }
        void sameIdeologyOpinion(float value) const { WriteField<float>("sameIdeologyOpinion", value); }
        bool allianceGate() const { return ReadField<bool>("allianceGate"); }
        void allianceGate(bool value) const { WriteField<bool>("allianceGate", value); }
        float grievanceDecayMul() const { return ReadField<float>("grievanceDecayMul"); }
        void grievanceDecayMul(float value) const { WriteField<float>("grievanceDecayMul", value); }
        float garrisonSuppressionMul() const { return ReadField<float>("garrisonSuppressionMul"); }
        void garrisonSuppressionMul(float value) const { WriteField<float>("garrisonSuppressionMul", value); }
        float loyaltyDriftAdd() const { return ReadField<float>("loyaltyDriftAdd"); }
        void loyaltyDriftAdd(float value) const { WriteField<float>("loyaltyDriftAdd", value); }
        float autonomyDriftAdd() const { return ReadField<float>("autonomyDriftAdd"); }
        void autonomyDriftAdd(float value) const { WriteField<float>("autonomyDriftAdd", value); }
        float taxShareMul() const { return ReadField<float>("taxShareMul"); }
        void taxShareMul(float value) const { WriteField<float>("taxShareMul", value); }
        float manpowerRecoveryMul() const { return ReadField<float>("manpowerRecoveryMul"); }
        void manpowerRecoveryMul(float value) const { WriteField<float>("manpowerRecoveryMul", value); }
        float trainingSpeedMul() const { return ReadField<float>("trainingSpeedMul"); }
        void trainingSpeedMul(float value) const { WriteField<float>("trainingSpeedMul", value); }
        float dealPriceMul() const { return ReadField<float>("dealPriceMul"); }
        void dealPriceMul(float value) const { WriteField<float>("dealPriceMul", value); }
        float identityPushMul() const { return ReadField<float>("identityPushMul"); }
        void identityPushMul(float value) const { WriteField<float>("identityPushMul", value); }
        float identityGuardMul() const { return ReadField<float>("identityGuardMul"); }
        void identityGuardMul(float value) const { WriteField<float>("identityGuardMul", value); }
        float acceptanceDriftAdd() const { return ReadField<float>("acceptanceDriftAdd"); }
        void acceptanceDriftAdd(float value) const { WriteField<float>("acceptanceDriftAdd", value); }
        float levyStandingAdd() const { return ReadField<float>("levyStandingAdd"); }
        void levyStandingAdd(float value) const { WriteField<float>("levyStandingAdd", value); }
        float levyStandingMul() const { return ReadField<float>("levyStandingMul"); }
        void levyStandingMul(float value) const { WriteField<float>("levyStandingMul", value); }
        float levyToleranceMul() const { return ReadField<float>("levyToleranceMul"); }
        void levyToleranceMul(float value) const { WriteField<float>("levyToleranceMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
