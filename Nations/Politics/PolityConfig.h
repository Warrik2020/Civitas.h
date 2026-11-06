#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PolityConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PolityConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PolityConfig") {}
    public:
        void Publish(void* cfg) const { void* __callArgs[] = { cfg }; CallStatic("Publish", __callArgs, 1); }
        bool ControlOn(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<bool>("ControlOn", __callArgs, 1); }
        float welfareFloorMax() const { return ReadField<float>("welfareFloorMax"); }
        void welfareFloorMax(float value) const { WriteField<float>("welfareFloorMax", value); }
        float welfareShortfallHappinessFactor() const { return ReadField<float>("welfareShortfallHappinessFactor"); }
        void welfareShortfallHappinessFactor(float value) const { WriteField<float>("welfareShortfallHappinessFactor", value); }
        float welfareShortfallDeadband() const { return ReadField<float>("welfareShortfallDeadband"); }
        void welfareShortfallDeadband(float value) const { WriteField<float>("welfareShortfallDeadband", value); }
        float emigrationRatePerTick() const { return ReadField<float>("emigrationRatePerTick"); }
        void emigrationRatePerTick(float value) const { WriteField<float>("emigrationRatePerTick", value); }
        float emigrationMaxFractionPerTick() const { return ReadField<float>("emigrationMaxFractionPerTick"); }
        void emigrationMaxFractionPerTick(float value) const { WriteField<float>("emigrationMaxFractionPerTick", value); }
        float persecutionEmigrationRatePerTick() const { return ReadField<float>("persecutionEmigrationRatePerTick"); }
        void persecutionEmigrationRatePerTick(float value) const { WriteField<float>("persecutionEmigrationRatePerTick", value); }
        float emigrationPopulationFloor() const { return ReadField<float>("emigrationPopulationFloor"); }
        void emigrationPopulationFloor(float value) const { WriteField<float>("emigrationPopulationFloor", value); }
        float emigrationHappinessGap() const { return ReadField<float>("emigrationHappinessGap"); }
        void emigrationHappinessGap(float value) const { WriteField<float>("emigrationHappinessGap", value); }
        float closedBorderHappinessPenalty() const { return ReadField<float>("closedBorderHappinessPenalty"); }
        void closedBorderHappinessPenalty(float value) const { WriteField<float>("closedBorderHappinessPenalty", value); }
        int welfareRevoltArmTicks() const { return ReadField<int>("welfareRevoltArmTicks"); }
        void welfareRevoltArmTicks(int value) const { WriteField<int>("welfareRevoltArmTicks", value); }
        float welfareRevoltDailyChance() const { return ReadField<float>("welfareRevoltDailyChance"); }
        void welfareRevoltDailyChance(float value) const { WriteField<float>("welfareRevoltDailyChance", value); }
        float changeCostIncomeMultiple() const { return ReadField<float>("changeCostIncomeMultiple"); }
        void changeCostIncomeMultiple(float value) const { WriteField<float>("changeCostIncomeMultiple", value); }
        float changeCostMinimum() const { return ReadField<float>("changeCostMinimum"); }
        void changeCostMinimum(float value) const { WriteField<float>("changeCostMinimum", value); }
        int changeCooldownTicks() const { return ReadField<int>("changeCooldownTicks"); }
        void changeCooldownTicks(int value) const { WriteField<int>("changeCooldownTicks", value); }
        float changeUnrestHit() const { return ReadField<float>("changeUnrestHit"); }
        void changeUnrestHit(float value) const { WriteField<float>("changeUnrestHit", value); }
        int changeUnrestDecayTicks() const { return ReadField<int>("changeUnrestDecayTicks"); }
        void changeUnrestDecayTicks(int value) const { WriteField<int>("changeUnrestDecayTicks", value); }
        bool randomiseAtFounding() const { return ReadField<bool>("randomiseAtFounding"); }
        void randomiseAtFounding(bool value) const { WriteField<bool>("randomiseAtFounding", value); }
        float edictCooldownYears() const { return ReadField<float>("edictCooldownYears"); }
        void edictCooldownYears(float value) const { WriteField<float>("edictCooldownYears", value); }
        float amnestyDaysOfTax() const { return ReadField<float>("amnestyDaysOfTax"); }
        void amnestyDaysOfTax(float value) const { WriteField<float>("amnestyDaysOfTax", value); }
        float amnestyLoyaltyBonus() const { return ReadField<float>("amnestyLoyaltyBonus"); }
        void amnestyLoyaltyBonus(float value) const { WriteField<float>("amnestyLoyaltyBonus", value); }
        float reassertDaysPerShare() const { return ReadField<float>("reassertDaysPerShare"); }
        void reassertDaysPerShare(float value) const { WriteField<float>("reassertDaysPerShare", value); }
        float reassertMinDays() const { return ReadField<float>("reassertMinDays"); }
        void reassertMinDays(float value) const { WriteField<float>("reassertMinDays", value); }
        float reassertYears() const { return ReadField<float>("reassertYears"); }
        void reassertYears(float value) const { WriteField<float>("reassertYears", value); }
        float reassertRecoverMul() const { return ReadField<float>("reassertRecoverMul"); }
        void reassertRecoverMul(float value) const { WriteField<float>("reassertRecoverMul", value); }
        float reassertCooldownYears() const { return ReadField<float>("reassertCooldownYears"); }
        void reassertCooldownYears(float value) const { WriteField<float>("reassertCooldownYears", value); }
        float levyDaysOfTax() const { return ReadField<float>("levyDaysOfTax"); }
        void levyDaysOfTax(float value) const { WriteField<float>("levyDaysOfTax", value); }
        float levyLoyaltyDip() const { return ReadField<float>("levyLoyaltyDip"); }
        void levyLoyaltyDip(float value) const { WriteField<float>("levyLoyaltyDip", value); }
        float levyCooldownYears() const { return ReadField<float>("levyCooldownYears"); }
        void levyCooldownYears(float value) const { WriteField<float>("levyCooldownYears", value); }
        float suppressMeterKeep() const { return ReadField<float>("suppressMeterKeep"); }
        void suppressMeterKeep(float value) const { WriteField<float>("suppressMeterKeep", value); }
        float suppressLoyaltyDip() const { return ReadField<float>("suppressLoyaltyDip"); }
        void suppressLoyaltyDip(float value) const { WriteField<float>("suppressLoyaltyDip", value); }
        float suppressWeariness() const { return ReadField<float>("suppressWeariness"); }
        void suppressWeariness(float value) const { WriteField<float>("suppressWeariness", value); }
        float suppressCooldownYears() const { return ReadField<float>("suppressCooldownYears"); }
        void suppressCooldownYears(float value) const { WriteField<float>("suppressCooldownYears", value); }
        float humbleYears() const { return ReadField<float>("humbleYears"); }
        void humbleYears(float value) const { WriteField<float>("humbleYears", value); }
        float humbleAmbitionCut() const { return ReadField<float>("humbleAmbitionCut"); }
        void humbleAmbitionCut(float value) const { WriteField<float>("humbleAmbitionCut", value); }
        float humbleLoyaltyDip() const { return ReadField<float>("humbleLoyaltyDip"); }
        void humbleLoyaltyDip(float value) const { WriteField<float>("humbleLoyaltyDip", value); }
        float humbleCooldownYears() const { return ReadField<float>("humbleCooldownYears"); }
        void humbleCooldownYears(float value) const { WriteField<float>("humbleCooldownYears", value); }
        bool controlEnabled() const { return ReadField<bool>("controlEnabled"); }
        void controlEnabled(bool value) const { WriteField<bool>("controlEnabled", value); }
        float controlStabilityWeight() const { return ReadField<float>("controlStabilityWeight"); }
        void controlStabilityWeight(float value) const { WriteField<float>("controlStabilityWeight", value); }
        float controlLoyaltyWeight() const { return ReadField<float>("controlLoyaltyWeight"); }
        void controlLoyaltyWeight(float value) const { WriteField<float>("controlLoyaltyWeight", value); }
        float controlLoyaltyGrip() const { return ReadField<float>("controlLoyaltyGrip"); }
        void controlLoyaltyGrip(float value) const { WriteField<float>("controlLoyaltyGrip", value); }
        float controlLoyaltyLine() const { return ReadField<float>("controlLoyaltyLine"); }
        void controlLoyaltyLine(float value) const { WriteField<float>("controlLoyaltyLine", value); }
        float controlContainCoverage() const { return ReadField<float>("controlContainCoverage"); }
        void controlContainCoverage(float value) const { WriteField<float>("controlContainCoverage", value); }
        float controlCutOffPenalty() const { return ReadField<float>("controlCutOffPenalty"); }
        void controlCutOffPenalty(float value) const { WriteField<float>("controlCutOffPenalty", value); }
        float controlNoise() const { return ReadField<float>("controlNoise"); }
        void controlNoise(float value) const { WriteField<float>("controlNoise", value); }
        float controlNoiseTiles() const { return ReadField<float>("controlNoiseTiles"); }
        void controlNoiseTiles(float value) const { WriteField<float>("controlNoiseTiles", value); }
        float controlCityGrip() const { return ReadField<float>("controlCityGrip"); }
        void controlCityGrip(float value) const { WriteField<float>("controlCityGrip", value); }
        float controlCityRadius() const { return ReadField<float>("controlCityRadius"); }
        void controlCityRadius(float value) const { WriteField<float>("controlCityRadius", value); }
        float controlLapsePerDay() const { return ReadField<float>("controlLapsePerDay"); }
        void controlLapsePerDay(float value) const { WriteField<float>("controlLapsePerDay", value); }
        float controlRecoverPerDay() const { return ReadField<float>("controlRecoverPerDay"); }
        void controlRecoverPerDay(float value) const { WriteField<float>("controlRecoverPerDay", value); }
        float controlSeedIntervalDays() const { return ReadField<float>("controlSeedIntervalDays"); }
        void controlSeedIntervalDays(float value) const { WriteField<float>("controlSeedIntervalDays", value); }
        int controlSeedSamples() const { return ReadField<int>("controlSeedSamples"); }
        void controlSeedSamples(int value) const { WriteField<int>("controlSeedSamples", value); }
        float controlSeedGripMargin() const { return ReadField<float>("controlSeedGripMargin"); }
        void controlSeedGripMargin(float value) const { WriteField<float>("controlSeedGripMargin", value); }
        int controlMaxGrowingBlobs() const { return ReadField<int>("controlMaxGrowingBlobs"); }
        void controlMaxGrowingBlobs(int value) const { WriteField<int>("controlMaxGrowingBlobs", value); }
        float controlSeedMaxShare() const { return ReadField<float>("controlSeedMaxShare"); }
        void controlSeedMaxShare(float value) const { WriteField<float>("controlSeedMaxShare", value); }
        float controlBlobGrowDaysMin() const { return ReadField<float>("controlBlobGrowDaysMin"); }
        void controlBlobGrowDaysMin(float value) const { WriteField<float>("controlBlobGrowDaysMin", value); }
        float controlBlobGrowDaysMax() const { return ReadField<float>("controlBlobGrowDaysMax"); }
        void controlBlobGrowDaysMax(float value) const { WriteField<float>("controlBlobGrowDaysMax", value); }
        float controlBlobReach() const { return ReadField<float>("controlBlobReach"); }
        void controlBlobReach(float value) const { WriteField<float>("controlBlobReach", value); }
        float controlLobeBase() const { return ReadField<float>("controlLobeBase"); }
        void controlLobeBase(float value) const { WriteField<float>("controlLobeBase", value); }
        float controlLobeBoost() const { return ReadField<float>("controlLobeBoost"); }
        void controlLobeBoost(float value) const { WriteField<float>("controlLobeBoost", value); }
        float controlTerrainSlow() const { return ReadField<float>("controlTerrainSlow"); }
        void controlTerrainSlow(float value) const { WriteField<float>("controlTerrainSlow", value); }
        float controlGrainSlow() const { return ReadField<float>("controlGrainSlow"); }
        void controlGrainSlow(float value) const { WriteField<float>("controlGrainSlow", value); }
        float controlGrainTiles() const { return ReadField<float>("controlGrainTiles"); }
        void controlGrainTiles(float value) const { WriteField<float>("controlGrainTiles", value); }
        float controlTaxLoss() const { return ReadField<float>("controlTaxLoss"); }
        void controlTaxLoss(float value) const { WriteField<float>("controlTaxLoss", value); }
        float controlManpowerLoss() const { return ReadField<float>("controlManpowerLoss"); }
        void controlManpowerLoss(float value) const { WriteField<float>("controlManpowerLoss", value); }
        float controlNoRecruitShare() const { return ReadField<float>("controlNoRecruitShare"); }
        void controlNoRecruitShare(float value) const { WriteField<float>("controlNoRecruitShare", value); }
        float controlUnfundedGrip() const { return ReadField<float>("controlUnfundedGrip"); }
        void controlUnfundedGrip(float value) const { WriteField<float>("controlUnfundedGrip", value); }
        float controlUnfundedSeedDays() const { return ReadField<float>("controlUnfundedSeedDays"); }
        void controlUnfundedSeedDays(float value) const { WriteField<float>("controlUnfundedSeedDays", value); }
        float controlUnfundedSpreadMul() const { return ReadField<float>("controlUnfundedSpreadMul"); }
        void controlUnfundedSpreadMul(float value) const { WriteField<float>("controlUnfundedSpreadMul", value); }
        float controlOverfundRecoverMul() const { return ReadField<float>("controlOverfundRecoverMul"); }
        void controlOverfundRecoverMul(float value) const { WriteField<float>("controlOverfundRecoverMul", value); }
        float controlCrisisEnterShare() const { return ReadField<float>("controlCrisisEnterShare"); }
        void controlCrisisEnterShare(float value) const { WriteField<float>("controlCrisisEnterShare", value); }
        float controlCrisisExitShare() const { return ReadField<float>("controlCrisisExitShare"); }
        void controlCrisisExitShare(float value) const { WriteField<float>("controlCrisisExitShare", value); }
        float controlGarrisonRadius() const { return ReadField<float>("controlGarrisonRadius"); }
        void controlGarrisonRadius(float value) const { WriteField<float>("controlGarrisonRadius", value); }
        float controlGarrisonRecoverPerDay() const { return ReadField<float>("controlGarrisonRecoverPerDay"); }
        void controlGarrisonRecoverPerDay(float value) const { WriteField<float>("controlGarrisonRecoverPerDay", value); }
        float controlContainRadius() const { return ReadField<float>("controlContainRadius"); }
        void controlContainRadius(float value) const { WriteField<float>("controlContainRadius", value); }
        float controlContainRimRecoverPerDay() const { return ReadField<float>("controlContainRimRecoverPerDay"); }
        void controlContainRimRecoverPerDay(float value) const { WriteField<float>("controlContainRimRecoverPerDay", value); }
        float restoreOrderYears() const { return ReadField<float>("restoreOrderYears"); }
        void restoreOrderYears(float value) const { WriteField<float>("restoreOrderYears", value); }
        float restoreOrderRecoverMul() const { return ReadField<float>("restoreOrderRecoverMul"); }
        void restoreOrderRecoverMul(float value) const { WriteField<float>("restoreOrderRecoverMul", value); }
        float restoreOrderDaysPerShare() const { return ReadField<float>("restoreOrderDaysPerShare"); }
        void restoreOrderDaysPerShare(float value) const { WriteField<float>("restoreOrderDaysPerShare", value); }
        float restoreOrderMinDays() const { return ReadField<float>("restoreOrderMinDays"); }
        void restoreOrderMinDays(float value) const { WriteField<float>("restoreOrderMinDays", value); }
        float restoreOrderAiShare() const { return ReadField<float>("restoreOrderAiShare"); }
        void restoreOrderAiShare(float value) const { WriteField<float>("restoreOrderAiShare", value); }
        float restoreOrderAiTreasuryShare() const { return ReadField<float>("restoreOrderAiTreasuryShare"); }
        void restoreOrderAiTreasuryShare(float value) const { WriteField<float>("restoreOrderAiTreasuryShare", value); }
        float standingCooldownYears() const { return ReadField<float>("standingCooldownYears"); }
        void standingCooldownYears(float value) const { WriteField<float>("standingCooldownYears", value); }
        float directRuleDaysOfTax() const { return ReadField<float>("directRuleDaysOfTax"); }
        void directRuleDaysOfTax(float value) const { WriteField<float>("directRuleDaysOfTax", value); }
        float directRuleAutonomyCut() const { return ReadField<float>("directRuleAutonomyCut"); }
        void directRuleAutonomyCut(float value) const { WriteField<float>("directRuleAutonomyCut", value); }
        float directRuleLoyaltyDip() const { return ReadField<float>("directRuleLoyaltyDip"); }
        void directRuleLoyaltyDip(float value) const { WriteField<float>("directRuleLoyaltyDip", value); }
        float directRuleCooldownYears() const { return ReadField<float>("directRuleCooldownYears"); }
        void directRuleCooldownYears(float value) const { WriteField<float>("directRuleCooldownYears", value); }
        float sellCharterGoldPerTile() const { return ReadField<float>("sellCharterGoldPerTile"); }
        void sellCharterGoldPerTile(float value) const { WriteField<float>("sellCharterGoldPerTile", value); }
        float sellCharterMinGold() const { return ReadField<float>("sellCharterMinGold"); }
        void sellCharterMinGold(float value) const { WriteField<float>("sellCharterMinGold", value); }
        float sellCharterLockYears() const { return ReadField<float>("sellCharterLockYears"); }
        void sellCharterLockYears(float value) const { WriteField<float>("sellCharterLockYears", value); }
        int clanCallBaseDivisions() const { return ReadField<int>("clanCallBaseDivisions"); }
        void clanCallBaseDivisions(int value) const { WriteField<int>("clanCallBaseDivisions", value); }
        float clanCallLoyaltyDip() const { return ReadField<float>("clanCallLoyaltyDip"); }
        void clanCallLoyaltyDip(float value) const { WriteField<float>("clanCallLoyaltyDip", value); }
        float clanCallCooldownYears() const { return ReadField<float>("clanCallCooldownYears"); }
        void clanCallCooldownYears(float value) const { WriteField<float>("clanCallCooldownYears", value); }
        float identityAdoptCooldownYears() const { return ReadField<float>("identityAdoptCooldownYears"); }
        void identityAdoptCooldownYears(float value) const { WriteField<float>("identityAdoptCooldownYears", value); }
        float identityAdoptUnrestHit() const { return ReadField<float>("identityAdoptUnrestHit"); }
        void identityAdoptUnrestHit(float value) const { WriteField<float>("identityAdoptUnrestHit", value); }
        float identityAdoptComfortableShare() const { return ReadField<float>("identityAdoptComfortableShare"); }
        void identityAdoptComfortableShare(float value) const { WriteField<float>("identityAdoptComfortableShare", value); }
        float identityAdoptThinUnrestHit() const { return ReadField<float>("identityAdoptThinUnrestHit"); }
        void identityAdoptThinUnrestHit(float value) const { WriteField<float>("identityAdoptThinUnrestHit", value); }
        float identityAdoptGrievanceRelief() const { return ReadField<float>("identityAdoptGrievanceRelief"); }
        void identityAdoptGrievanceRelief(float value) const { WriteField<float>("identityAdoptGrievanceRelief", value); }
        float identityAdoptAcceptanceGain() const { return ReadField<float>("identityAdoptAcceptanceGain"); }
        void identityAdoptAcceptanceGain(float value) const { WriteField<float>("identityAdoptAcceptanceGain", value); }
        float identityAdoptOldAcceptanceHit() const { return ReadField<float>("identityAdoptOldAcceptanceHit"); }
        void identityAdoptOldAcceptanceHit(float value) const { WriteField<float>("identityAdoptOldAcceptanceHit", value); }
        float identityRenounceUnrestScale() const { return ReadField<float>("identityRenounceUnrestScale"); }
        void identityRenounceUnrestScale(float value) const { WriteField<float>("identityRenounceUnrestScale", value); }
        float identityRenounceAcceptanceHit() const { return ReadField<float>("identityRenounceAcceptanceHit"); }
        void identityRenounceAcceptanceHit(float value) const { WriteField<float>("identityRenounceAcceptanceHit", value); }
    };
}
