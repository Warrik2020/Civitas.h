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
        void Publish(void* cfg) const { void* args[] = { cfg }; CallStatic("Publish", args, 1); }
        bool ControlOn(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<bool>("ControlOn", args, 1); }
        float welfareFloorMax() const { return ReadField<float>("welfareFloorMax"); }
        void SetWelfareFloorMax(float value) const { WriteField<float>("welfareFloorMax", value); }
        float welfareShortfallHappinessFactor() const { return ReadField<float>("welfareShortfallHappinessFactor"); }
        void SetWelfareShortfallHappinessFactor(float value) const { WriteField<float>("welfareShortfallHappinessFactor", value); }
        float welfareShortfallDeadband() const { return ReadField<float>("welfareShortfallDeadband"); }
        void SetWelfareShortfallDeadband(float value) const { WriteField<float>("welfareShortfallDeadband", value); }
        float emigrationRatePerTick() const { return ReadField<float>("emigrationRatePerTick"); }
        void SetEmigrationRatePerTick(float value) const { WriteField<float>("emigrationRatePerTick", value); }
        float emigrationMaxFractionPerTick() const { return ReadField<float>("emigrationMaxFractionPerTick"); }
        void SetEmigrationMaxFractionPerTick(float value) const { WriteField<float>("emigrationMaxFractionPerTick", value); }
        float persecutionEmigrationRatePerTick() const { return ReadField<float>("persecutionEmigrationRatePerTick"); }
        void SetPersecutionEmigrationRatePerTick(float value) const { WriteField<float>("persecutionEmigrationRatePerTick", value); }
        float emigrationPopulationFloor() const { return ReadField<float>("emigrationPopulationFloor"); }
        void SetEmigrationPopulationFloor(float value) const { WriteField<float>("emigrationPopulationFloor", value); }
        float emigrationHappinessGap() const { return ReadField<float>("emigrationHappinessGap"); }
        void SetEmigrationHappinessGap(float value) const { WriteField<float>("emigrationHappinessGap", value); }
        float closedBorderHappinessPenalty() const { return ReadField<float>("closedBorderHappinessPenalty"); }
        void SetClosedBorderHappinessPenalty(float value) const { WriteField<float>("closedBorderHappinessPenalty", value); }
        int welfareRevoltArmTicks() const { return ReadField<int>("welfareRevoltArmTicks"); }
        void SetWelfareRevoltArmTicks(int value) const { WriteField<int>("welfareRevoltArmTicks", value); }
        float welfareRevoltDailyChance() const { return ReadField<float>("welfareRevoltDailyChance"); }
        void SetWelfareRevoltDailyChance(float value) const { WriteField<float>("welfareRevoltDailyChance", value); }
        float changeCostIncomeMultiple() const { return ReadField<float>("changeCostIncomeMultiple"); }
        void SetChangeCostIncomeMultiple(float value) const { WriteField<float>("changeCostIncomeMultiple", value); }
        float changeCostMinimum() const { return ReadField<float>("changeCostMinimum"); }
        void SetChangeCostMinimum(float value) const { WriteField<float>("changeCostMinimum", value); }
        int changeCooldownTicks() const { return ReadField<int>("changeCooldownTicks"); }
        void SetChangeCooldownTicks(int value) const { WriteField<int>("changeCooldownTicks", value); }
        float changeUnrestHit() const { return ReadField<float>("changeUnrestHit"); }
        void SetChangeUnrestHit(float value) const { WriteField<float>("changeUnrestHit", value); }
        int changeUnrestDecayTicks() const { return ReadField<int>("changeUnrestDecayTicks"); }
        void SetChangeUnrestDecayTicks(int value) const { WriteField<int>("changeUnrestDecayTicks", value); }
        bool randomiseAtFounding() const { return ReadField<bool>("randomiseAtFounding"); }
        void SetRandomiseAtFounding(bool value) const { WriteField<bool>("randomiseAtFounding", value); }
        float edictCooldownYears() const { return ReadField<float>("edictCooldownYears"); }
        void SetEdictCooldownYears(float value) const { WriteField<float>("edictCooldownYears", value); }
        float amnestyDaysOfTax() const { return ReadField<float>("amnestyDaysOfTax"); }
        void SetAmnestyDaysOfTax(float value) const { WriteField<float>("amnestyDaysOfTax", value); }
        float amnestyLoyaltyBonus() const { return ReadField<float>("amnestyLoyaltyBonus"); }
        void SetAmnestyLoyaltyBonus(float value) const { WriteField<float>("amnestyLoyaltyBonus", value); }
        float reassertDaysPerShare() const { return ReadField<float>("reassertDaysPerShare"); }
        void SetReassertDaysPerShare(float value) const { WriteField<float>("reassertDaysPerShare", value); }
        float reassertMinDays() const { return ReadField<float>("reassertMinDays"); }
        void SetReassertMinDays(float value) const { WriteField<float>("reassertMinDays", value); }
        float reassertYears() const { return ReadField<float>("reassertYears"); }
        void SetReassertYears(float value) const { WriteField<float>("reassertYears", value); }
        float reassertRecoverMul() const { return ReadField<float>("reassertRecoverMul"); }
        void SetReassertRecoverMul(float value) const { WriteField<float>("reassertRecoverMul", value); }
        float reassertCooldownYears() const { return ReadField<float>("reassertCooldownYears"); }
        void SetReassertCooldownYears(float value) const { WriteField<float>("reassertCooldownYears", value); }
        float levyDaysOfTax() const { return ReadField<float>("levyDaysOfTax"); }
        void SetLevyDaysOfTax(float value) const { WriteField<float>("levyDaysOfTax", value); }
        float levyLoyaltyDip() const { return ReadField<float>("levyLoyaltyDip"); }
        void SetLevyLoyaltyDip(float value) const { WriteField<float>("levyLoyaltyDip", value); }
        float levyCooldownYears() const { return ReadField<float>("levyCooldownYears"); }
        void SetLevyCooldownYears(float value) const { WriteField<float>("levyCooldownYears", value); }
        float suppressMeterKeep() const { return ReadField<float>("suppressMeterKeep"); }
        void SetSuppressMeterKeep(float value) const { WriteField<float>("suppressMeterKeep", value); }
        float suppressLoyaltyDip() const { return ReadField<float>("suppressLoyaltyDip"); }
        void SetSuppressLoyaltyDip(float value) const { WriteField<float>("suppressLoyaltyDip", value); }
        float suppressWeariness() const { return ReadField<float>("suppressWeariness"); }
        void SetSuppressWeariness(float value) const { WriteField<float>("suppressWeariness", value); }
        float suppressCooldownYears() const { return ReadField<float>("suppressCooldownYears"); }
        void SetSuppressCooldownYears(float value) const { WriteField<float>("suppressCooldownYears", value); }
        float humbleYears() const { return ReadField<float>("humbleYears"); }
        void SetHumbleYears(float value) const { WriteField<float>("humbleYears", value); }
        float humbleAmbitionCut() const { return ReadField<float>("humbleAmbitionCut"); }
        void SetHumbleAmbitionCut(float value) const { WriteField<float>("humbleAmbitionCut", value); }
        float humbleLoyaltyDip() const { return ReadField<float>("humbleLoyaltyDip"); }
        void SetHumbleLoyaltyDip(float value) const { WriteField<float>("humbleLoyaltyDip", value); }
        float humbleCooldownYears() const { return ReadField<float>("humbleCooldownYears"); }
        void SetHumbleCooldownYears(float value) const { WriteField<float>("humbleCooldownYears", value); }
        bool controlEnabled() const { return ReadField<bool>("controlEnabled"); }
        void SetControlEnabled(bool value) const { WriteField<bool>("controlEnabled", value); }
        float controlStabilityWeight() const { return ReadField<float>("controlStabilityWeight"); }
        void SetControlStabilityWeight(float value) const { WriteField<float>("controlStabilityWeight", value); }
        float controlLoyaltyWeight() const { return ReadField<float>("controlLoyaltyWeight"); }
        void SetControlLoyaltyWeight(float value) const { WriteField<float>("controlLoyaltyWeight", value); }
        float controlLoyaltyGrip() const { return ReadField<float>("controlLoyaltyGrip"); }
        void SetControlLoyaltyGrip(float value) const { WriteField<float>("controlLoyaltyGrip", value); }
        float controlLoyaltyLine() const { return ReadField<float>("controlLoyaltyLine"); }
        void SetControlLoyaltyLine(float value) const { WriteField<float>("controlLoyaltyLine", value); }
        float controlContainCoverage() const { return ReadField<float>("controlContainCoverage"); }
        void SetControlContainCoverage(float value) const { WriteField<float>("controlContainCoverage", value); }
        float controlCutOffPenalty() const { return ReadField<float>("controlCutOffPenalty"); }
        void SetControlCutOffPenalty(float value) const { WriteField<float>("controlCutOffPenalty", value); }
        float controlNoise() const { return ReadField<float>("controlNoise"); }
        void SetControlNoise(float value) const { WriteField<float>("controlNoise", value); }
        float controlNoiseTiles() const { return ReadField<float>("controlNoiseTiles"); }
        void SetControlNoiseTiles(float value) const { WriteField<float>("controlNoiseTiles", value); }
        float controlCityGrip() const { return ReadField<float>("controlCityGrip"); }
        void SetControlCityGrip(float value) const { WriteField<float>("controlCityGrip", value); }
        float controlCityRadius() const { return ReadField<float>("controlCityRadius"); }
        void SetControlCityRadius(float value) const { WriteField<float>("controlCityRadius", value); }
        float controlLapsePerDay() const { return ReadField<float>("controlLapsePerDay"); }
        void SetControlLapsePerDay(float value) const { WriteField<float>("controlLapsePerDay", value); }
        float controlRecoverPerDay() const { return ReadField<float>("controlRecoverPerDay"); }
        void SetControlRecoverPerDay(float value) const { WriteField<float>("controlRecoverPerDay", value); }
        float controlSeedIntervalDays() const { return ReadField<float>("controlSeedIntervalDays"); }
        void SetControlSeedIntervalDays(float value) const { WriteField<float>("controlSeedIntervalDays", value); }
        int controlSeedSamples() const { return ReadField<int>("controlSeedSamples"); }
        void SetControlSeedSamples(int value) const { WriteField<int>("controlSeedSamples", value); }
        float controlSeedGripMargin() const { return ReadField<float>("controlSeedGripMargin"); }
        void SetControlSeedGripMargin(float value) const { WriteField<float>("controlSeedGripMargin", value); }
        int controlMaxGrowingBlobs() const { return ReadField<int>("controlMaxGrowingBlobs"); }
        void SetControlMaxGrowingBlobs(int value) const { WriteField<int>("controlMaxGrowingBlobs", value); }
        float controlSeedMaxShare() const { return ReadField<float>("controlSeedMaxShare"); }
        void SetControlSeedMaxShare(float value) const { WriteField<float>("controlSeedMaxShare", value); }
        float controlBlobGrowDaysMin() const { return ReadField<float>("controlBlobGrowDaysMin"); }
        void SetControlBlobGrowDaysMin(float value) const { WriteField<float>("controlBlobGrowDaysMin", value); }
        float controlBlobGrowDaysMax() const { return ReadField<float>("controlBlobGrowDaysMax"); }
        void SetControlBlobGrowDaysMax(float value) const { WriteField<float>("controlBlobGrowDaysMax", value); }
        float controlBlobReach() const { return ReadField<float>("controlBlobReach"); }
        void SetControlBlobReach(float value) const { WriteField<float>("controlBlobReach", value); }
        float controlLobeBase() const { return ReadField<float>("controlLobeBase"); }
        void SetControlLobeBase(float value) const { WriteField<float>("controlLobeBase", value); }
        float controlLobeBoost() const { return ReadField<float>("controlLobeBoost"); }
        void SetControlLobeBoost(float value) const { WriteField<float>("controlLobeBoost", value); }
        float controlTerrainSlow() const { return ReadField<float>("controlTerrainSlow"); }
        void SetControlTerrainSlow(float value) const { WriteField<float>("controlTerrainSlow", value); }
        float controlGrainSlow() const { return ReadField<float>("controlGrainSlow"); }
        void SetControlGrainSlow(float value) const { WriteField<float>("controlGrainSlow", value); }
        float controlGrainTiles() const { return ReadField<float>("controlGrainTiles"); }
        void SetControlGrainTiles(float value) const { WriteField<float>("controlGrainTiles", value); }
        float controlTaxLoss() const { return ReadField<float>("controlTaxLoss"); }
        void SetControlTaxLoss(float value) const { WriteField<float>("controlTaxLoss", value); }
        float controlManpowerLoss() const { return ReadField<float>("controlManpowerLoss"); }
        void SetControlManpowerLoss(float value) const { WriteField<float>("controlManpowerLoss", value); }
        float controlNoRecruitShare() const { return ReadField<float>("controlNoRecruitShare"); }
        void SetControlNoRecruitShare(float value) const { WriteField<float>("controlNoRecruitShare", value); }
        float controlUnfundedGrip() const { return ReadField<float>("controlUnfundedGrip"); }
        void SetControlUnfundedGrip(float value) const { WriteField<float>("controlUnfundedGrip", value); }
        float controlUnfundedSeedDays() const { return ReadField<float>("controlUnfundedSeedDays"); }
        void SetControlUnfundedSeedDays(float value) const { WriteField<float>("controlUnfundedSeedDays", value); }
        float controlUnfundedSpreadMul() const { return ReadField<float>("controlUnfundedSpreadMul"); }
        void SetControlUnfundedSpreadMul(float value) const { WriteField<float>("controlUnfundedSpreadMul", value); }
        float controlOverfundRecoverMul() const { return ReadField<float>("controlOverfundRecoverMul"); }
        void SetControlOverfundRecoverMul(float value) const { WriteField<float>("controlOverfundRecoverMul", value); }
        float controlCrisisEnterShare() const { return ReadField<float>("controlCrisisEnterShare"); }
        void SetControlCrisisEnterShare(float value) const { WriteField<float>("controlCrisisEnterShare", value); }
        float controlCrisisExitShare() const { return ReadField<float>("controlCrisisExitShare"); }
        void SetControlCrisisExitShare(float value) const { WriteField<float>("controlCrisisExitShare", value); }
        float controlGarrisonRadius() const { return ReadField<float>("controlGarrisonRadius"); }
        void SetControlGarrisonRadius(float value) const { WriteField<float>("controlGarrisonRadius", value); }
        float controlGarrisonRecoverPerDay() const { return ReadField<float>("controlGarrisonRecoverPerDay"); }
        void SetControlGarrisonRecoverPerDay(float value) const { WriteField<float>("controlGarrisonRecoverPerDay", value); }
        float controlContainRadius() const { return ReadField<float>("controlContainRadius"); }
        void SetControlContainRadius(float value) const { WriteField<float>("controlContainRadius", value); }
        float controlContainRimRecoverPerDay() const { return ReadField<float>("controlContainRimRecoverPerDay"); }
        void SetControlContainRimRecoverPerDay(float value) const { WriteField<float>("controlContainRimRecoverPerDay", value); }
        float restoreOrderYears() const { return ReadField<float>("restoreOrderYears"); }
        void SetRestoreOrderYears(float value) const { WriteField<float>("restoreOrderYears", value); }
        float restoreOrderRecoverMul() const { return ReadField<float>("restoreOrderRecoverMul"); }
        void SetRestoreOrderRecoverMul(float value) const { WriteField<float>("restoreOrderRecoverMul", value); }
        float restoreOrderDaysPerShare() const { return ReadField<float>("restoreOrderDaysPerShare"); }
        void SetRestoreOrderDaysPerShare(float value) const { WriteField<float>("restoreOrderDaysPerShare", value); }
        float restoreOrderMinDays() const { return ReadField<float>("restoreOrderMinDays"); }
        void SetRestoreOrderMinDays(float value) const { WriteField<float>("restoreOrderMinDays", value); }
        float restoreOrderAiShare() const { return ReadField<float>("restoreOrderAiShare"); }
        void SetRestoreOrderAiShare(float value) const { WriteField<float>("restoreOrderAiShare", value); }
        float restoreOrderAiTreasuryShare() const { return ReadField<float>("restoreOrderAiTreasuryShare"); }
        void SetRestoreOrderAiTreasuryShare(float value) const { WriteField<float>("restoreOrderAiTreasuryShare", value); }
        float standingCooldownYears() const { return ReadField<float>("standingCooldownYears"); }
        void SetStandingCooldownYears(float value) const { WriteField<float>("standingCooldownYears", value); }
        float directRuleDaysOfTax() const { return ReadField<float>("directRuleDaysOfTax"); }
        void SetDirectRuleDaysOfTax(float value) const { WriteField<float>("directRuleDaysOfTax", value); }
        float directRuleAutonomyCut() const { return ReadField<float>("directRuleAutonomyCut"); }
        void SetDirectRuleAutonomyCut(float value) const { WriteField<float>("directRuleAutonomyCut", value); }
        float directRuleLoyaltyDip() const { return ReadField<float>("directRuleLoyaltyDip"); }
        void SetDirectRuleLoyaltyDip(float value) const { WriteField<float>("directRuleLoyaltyDip", value); }
        float directRuleCooldownYears() const { return ReadField<float>("directRuleCooldownYears"); }
        void SetDirectRuleCooldownYears(float value) const { WriteField<float>("directRuleCooldownYears", value); }
        float sellCharterGoldPerTile() const { return ReadField<float>("sellCharterGoldPerTile"); }
        void SetSellCharterGoldPerTile(float value) const { WriteField<float>("sellCharterGoldPerTile", value); }
        float sellCharterMinGold() const { return ReadField<float>("sellCharterMinGold"); }
        void SetSellCharterMinGold(float value) const { WriteField<float>("sellCharterMinGold", value); }
        float sellCharterLockYears() const { return ReadField<float>("sellCharterLockYears"); }
        void SetSellCharterLockYears(float value) const { WriteField<float>("sellCharterLockYears", value); }
        int clanCallBaseDivisions() const { return ReadField<int>("clanCallBaseDivisions"); }
        void SetClanCallBaseDivisions(int value) const { WriteField<int>("clanCallBaseDivisions", value); }
        float clanCallLoyaltyDip() const { return ReadField<float>("clanCallLoyaltyDip"); }
        void SetClanCallLoyaltyDip(float value) const { WriteField<float>("clanCallLoyaltyDip", value); }
        float clanCallCooldownYears() const { return ReadField<float>("clanCallCooldownYears"); }
        void SetClanCallCooldownYears(float value) const { WriteField<float>("clanCallCooldownYears", value); }
        float identityAdoptCooldownYears() const { return ReadField<float>("identityAdoptCooldownYears"); }
        void SetIdentityAdoptCooldownYears(float value) const { WriteField<float>("identityAdoptCooldownYears", value); }
        float identityAdoptUnrestHit() const { return ReadField<float>("identityAdoptUnrestHit"); }
        void SetIdentityAdoptUnrestHit(float value) const { WriteField<float>("identityAdoptUnrestHit", value); }
        float identityAdoptComfortableShare() const { return ReadField<float>("identityAdoptComfortableShare"); }
        void SetIdentityAdoptComfortableShare(float value) const { WriteField<float>("identityAdoptComfortableShare", value); }
        float identityAdoptThinUnrestHit() const { return ReadField<float>("identityAdoptThinUnrestHit"); }
        void SetIdentityAdoptThinUnrestHit(float value) const { WriteField<float>("identityAdoptThinUnrestHit", value); }
        float identityAdoptGrievanceRelief() const { return ReadField<float>("identityAdoptGrievanceRelief"); }
        void SetIdentityAdoptGrievanceRelief(float value) const { WriteField<float>("identityAdoptGrievanceRelief", value); }
        float identityAdoptAcceptanceGain() const { return ReadField<float>("identityAdoptAcceptanceGain"); }
        void SetIdentityAdoptAcceptanceGain(float value) const { WriteField<float>("identityAdoptAcceptanceGain", value); }
        float identityAdoptOldAcceptanceHit() const { return ReadField<float>("identityAdoptOldAcceptanceHit"); }
        void SetIdentityAdoptOldAcceptanceHit(float value) const { WriteField<float>("identityAdoptOldAcceptanceHit", value); }
        float identityRenounceUnrestScale() const { return ReadField<float>("identityRenounceUnrestScale"); }
        void SetIdentityRenounceUnrestScale(float value) const { WriteField<float>("identityRenounceUnrestScale", value); }
        float identityRenounceAcceptanceHit() const { return ReadField<float>("identityRenounceAcceptanceHit"); }
        void SetIdentityRenounceAcceptanceHit(float value) const { WriteField<float>("identityRenounceAcceptanceHit", value); }
    };
}
