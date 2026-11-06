#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class RevoltConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RevoltConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "RevoltConfig") {}
    public:
        float RisingSeedShare(int axis) const { void* args[] = { &axis }; return CallValue<float>("RisingSeedShare", args, 1); }
        int consolidationIntervalTicks() const { return ReadField<int>("consolidationIntervalTicks"); }
        void SetConsolidationIntervalTicks(int value) const { WriteField<int>("consolidationIntervalTicks", value); }
        int minNationAgeToRevolt() const { return ReadField<int>("minNationAgeToRevolt"); }
        void SetMinNationAgeToRevolt(int value) const { WriteField<int>("minNationAgeToRevolt", value); }
        float significantMinorityShare() const { return ReadField<float>("significantMinorityShare"); }
        void SetSignificantMinorityShare(float value) const { WriteField<float>("significantMinorityShare", value); }
        bool risingsOnAllCounts() const { return ReadField<bool>("risingsOnAllCounts"); }
        void SetRisingsOnAllCounts(bool value) const { WriteField<bool>("risingsOnAllCounts", value); }
        void* risingSeedMinShareByAxis() const { return ReadField<void*>("risingSeedMinShareByAxis"); }
        void SetRisingSeedMinShareByAxis(void* value) const { WriteField<void*>("risingSeedMinShareByAxis", value); }
        float grievanceBaseRatePerDay() const { return ReadField<float>("grievanceBaseRatePerDay"); }
        void SetGrievanceBaseRatePerDay(float value) const { WriteField<float>("grievanceBaseRatePerDay", value); }
        float grievanceCeiling() const { return ReadField<float>("grievanceCeiling"); }
        void SetGrievanceCeiling(float value) const { WriteField<float>("grievanceCeiling", value); }
        float unacceptedGrievancePerYear() const { return ReadField<float>("unacceptedGrievancePerYear"); }
        void SetUnacceptedGrievancePerYear(float value) const { WriteField<float>("unacceptedGrievancePerYear", value); }
        float grievanceOccupationBoost() const { return ReadField<float>("grievanceOccupationBoost"); }
        void SetGrievanceOccupationBoost(float value) const { WriteField<float>("grievanceOccupationBoost", value); }
        float grievanceResistanceWeight() const { return ReadField<float>("grievanceResistanceWeight"); }
        void SetGrievanceResistanceWeight(float value) const { WriteField<float>("grievanceResistanceWeight", value); }
        float grievanceTaxWeight() const { return ReadField<float>("grievanceTaxWeight"); }
        void SetGrievanceTaxWeight(float value) const { WriteField<float>("grievanceTaxWeight", value); }
        float grievanceWarWeight() const { return ReadField<float>("grievanceWarWeight"); }
        void SetGrievanceWarWeight(float value) const { WriteField<float>("grievanceWarWeight", value); }
        float identityAccelerationWeight() const { return ReadField<float>("identityAccelerationWeight"); }
        void SetIdentityAccelerationWeight(float value) const { WriteField<float>("identityAccelerationWeight", value); }
        float acceptanceHalfLifeYears() const { return ReadField<float>("acceptanceHalfLifeYears"); }
        void SetAcceptanceHalfLifeYears(float value) const { WriteField<float>("acceptanceHalfLifeYears", value); }
        float acceptanceWarPenalty() const { return ReadField<float>("acceptanceWarPenalty"); }
        void SetAcceptanceWarPenalty(float value) const { WriteField<float>("acceptanceWarPenalty", value); }
        float acceptanceRecoveryPenalty() const { return ReadField<float>("acceptanceRecoveryPenalty"); }
        void SetAcceptanceRecoveryPenalty(float value) const { WriteField<float>("acceptanceRecoveryPenalty", value); }
        float acceptanceFearWeight() const { return ReadField<float>("acceptanceFearWeight"); }
        void SetAcceptanceFearWeight(float value) const { WriteField<float>("acceptanceFearWeight", value); }
        float acceptanceFearGrowthPerYear() const { return ReadField<float>("acceptanceFearGrowthPerYear"); }
        void SetAcceptanceFearGrowthPerYear(float value) const { WriteField<float>("acceptanceFearGrowthPerYear", value); }
        float acceptanceExpulsionPenalty() const { return ReadField<float>("acceptanceExpulsionPenalty"); }
        void SetAcceptanceExpulsionPenalty(float value) const { WriteField<float>("acceptanceExpulsionPenalty", value); }
        float acceptanceConquestPenaltyAnnexed() const { return ReadField<float>("acceptanceConquestPenaltyAnnexed"); }
        void SetAcceptanceConquestPenaltyAnnexed(float value) const { WriteField<float>("acceptanceConquestPenaltyAnnexed", value); }
        float acceptanceConquestPenaltyOccupied() const { return ReadField<float>("acceptanceConquestPenaltyOccupied"); }
        void SetAcceptanceConquestPenaltyOccupied(float value) const { WriteField<float>("acceptanceConquestPenaltyOccupied", value); }
        float standingMismatchUnrest() const { return ReadField<float>("standingMismatchUnrest"); }
        void SetStandingMismatchUnrest(float value) const { WriteField<float>("standingMismatchUnrest", value); }
        float standingLowerGrievanceLump() const { return ReadField<float>("standingLowerGrievanceLump"); }
        void SetStandingLowerGrievanceLump(float value) const { WriteField<float>("standingLowerGrievanceLump", value); }
        float petitionRightsFraction() const { return ReadField<float>("petitionRightsFraction"); }
        void SetPetitionRightsFraction(float value) const { WriteField<float>("petitionRightsFraction", value); }
        float petitionHomeRuleFraction() const { return ReadField<float>("petitionHomeRuleFraction"); }
        void SetPetitionHomeRuleFraction(float value) const { WriteField<float>("petitionHomeRuleFraction", value); }
        float petitionCooldownYears() const { return ReadField<float>("petitionCooldownYears"); }
        void SetPetitionCooldownYears(float value) const { WriteField<float>("petitionCooldownYears", value); }
        float petitionRefusalGrievance() const { return ReadField<float>("petitionRefusalGrievance"); }
        void SetPetitionRefusalGrievance(float value) const { WriteField<float>("petitionRefusalGrievance", value); }
        float petitionRecognitionFraction() const { return ReadField<float>("petitionRecognitionFraction"); }
        void SetPetitionRecognitionFraction(float value) const { WriteField<float>("petitionRecognitionFraction", value); }
        float demandLeverageFraction() const { return ReadField<float>("demandLeverageFraction"); }
        void SetDemandLeverageFraction(float value) const { WriteField<float>("demandLeverageFraction", value); }
        float demandMinShare() const { return ReadField<float>("demandMinShare"); }
        void SetDemandMinShare(float value) const { WriteField<float>("demandMinShare", value); }
        float demandReverseGrievanceShare() const { return ReadField<float>("demandReverseGrievanceShare"); }
        void SetDemandReverseGrievanceShare(float value) const { WriteField<float>("demandReverseGrievanceShare", value); }
        float demandReverseAcceptance() const { return ReadField<float>("demandReverseAcceptance"); }
        void SetDemandReverseAcceptance(float value) const { WriteField<float>("demandReverseAcceptance", value); }
        float demandAcceptAcceptance() const { return ReadField<float>("demandAcceptAcceptance"); }
        void SetDemandAcceptAcceptance(float value) const { WriteField<float>("demandAcceptAcceptance", value); }
        float homeRuleGrievanceFloor() const { return ReadField<float>("homeRuleGrievanceFloor"); }
        void SetHomeRuleGrievanceFloor(float value) const { WriteField<float>("homeRuleGrievanceFloor", value); }
        bool enableSupportRebels() const { return ReadField<bool>("enableSupportRebels"); }
        void SetEnableSupportRebels(bool value) const { WriteField<bool>("enableSupportRebels", value); }
        float supportGoldPerGrievance() const { return ReadField<float>("supportGoldPerGrievance"); }
        void SetSupportGoldPerGrievance(float value) const { WriteField<float>("supportGoldPerGrievance", value); }
        float supportOverpaySizeWeight() const { return ReadField<float>("supportOverpaySizeWeight"); }
        void SetSupportOverpaySizeWeight(float value) const { WriteField<float>("supportOverpaySizeWeight", value); }
        float supportMaxSizeMultiplier() const { return ReadField<float>("supportMaxSizeMultiplier"); }
        void SetSupportMaxSizeMultiplier(float value) const { WriteField<float>("supportMaxSizeMultiplier", value); }
        float moneyRevoltDaysBufferThreshold() const { return ReadField<float>("moneyRevoltDaysBufferThreshold"); }
        void SetMoneyRevoltDaysBufferThreshold(float value) const { WriteField<float>("moneyRevoltDaysBufferThreshold", value); }
        float moneyRevoltHappinessThreshold() const { return ReadField<float>("moneyRevoltHappinessThreshold"); }
        void SetMoneyRevoltHappinessThreshold(float value) const { WriteField<float>("moneyRevoltHappinessThreshold", value); }
        float moneyRevoltDailyChance() const { return ReadField<float>("moneyRevoltDailyChance"); }
        void SetMoneyRevoltDailyChance(float value) const { WriteField<float>("moneyRevoltDailyChance", value); }
        float instabilityRevoltStabilityThreshold() const { return ReadField<float>("instabilityRevoltStabilityThreshold"); }
        void SetInstabilityRevoltStabilityThreshold(float value) const { WriteField<float>("instabilityRevoltStabilityThreshold", value); }
        float instabilityRevoltChancePerDay() const { return ReadField<float>("instabilityRevoltChancePerDay"); }
        void SetInstabilityRevoltChancePerDay(float value) const { WriteField<float>("instabilityRevoltChancePerDay", value); }
        float occupationRevoltMultiplier() const { return ReadField<float>("occupationRevoltMultiplier"); }
        void SetOccupationRevoltMultiplier(float value) const { WriteField<float>("occupationRevoltMultiplier", value); }
        bool allowPlayerInstabilityRevolts() const { return ReadField<bool>("allowPlayerInstabilityRevolts"); }
        void SetAllowPlayerInstabilityRevolts(bool value) const { WriteField<bool>("allowPlayerInstabilityRevolts", value); }
        float instabilityFillPerYear() const { return ReadField<float>("instabilityFillPerYear"); }
        void SetInstabilityFillPerYear(float value) const { WriteField<float>("instabilityFillPerYear", value); }
        float stateLoyaltyFillPerYear() const { return ReadField<float>("stateLoyaltyFillPerYear"); }
        void SetStateLoyaltyFillPerYear(float value) const { WriteField<float>("stateLoyaltyFillPerYear", value); }
        float moneyFillPerYear() const { return ReadField<float>("moneyFillPerYear"); }
        void SetMoneyFillPerYear(float value) const { WriteField<float>("moneyFillPerYear", value); }
        float welfareFillPerYear() const { return ReadField<float>("welfareFillPerYear"); }
        void SetWelfareFillPerYear(float value) const { WriteField<float>("welfareFillPerYear", value); }
        float unrestDrainPerYear() const { return ReadField<float>("unrestDrainPerYear"); }
        void SetUnrestDrainPerYear(float value) const { WriteField<float>("unrestDrainPerYear", value); }
        float garrisonDrainPerYear() const { return ReadField<float>("garrisonDrainPerYear"); }
        void SetGarrisonDrainPerYear(float value) const { WriteField<float>("garrisonDrainPerYear", value); }
        float countdownYears() const { return ReadField<float>("countdownYears"); }
        void SetCountdownYears(float value) const { WriteField<float>("countdownYears", value); }
        float countdownCancelFraction() const { return ReadField<float>("countdownCancelFraction"); }
        void SetCountdownCancelFraction(float value) const { WriteField<float>("countdownCancelFraction", value); }
        float quietYears() const { return ReadField<float>("quietYears"); }
        void SetQuietYears(float value) const { WriteField<float>("quietYears", value); }
        float concedeMeterKeep() const { return ReadField<float>("concedeMeterKeep"); }
        void SetConcedeMeterKeep(float value) const { WriteField<float>("concedeMeterKeep", value); }
        float crackdownMeterCut() const { return ReadField<float>("crackdownMeterCut"); }
        void SetCrackdownMeterCut(float value) const { WriteField<float>("crackdownMeterCut", value); }
        float crackdownYears() const { return ReadField<float>("crackdownYears"); }
        void SetCrackdownYears(float value) const { WriteField<float>("crackdownYears", value); }
        float crackdownFillMul() const { return ReadField<float>("crackdownFillMul"); }
        void SetCrackdownFillMul(float value) const { WriteField<float>("crackdownFillMul", value); }
        float payoffBaseGold() const { return ReadField<float>("payoffBaseGold"); }
        void SetPayoffBaseGold(float value) const { WriteField<float>("payoffBaseGold", value); }
        float payoffGoldPerTile() const { return ReadField<float>("payoffGoldPerTile"); }
        void SetPayoffGoldPerTile(float value) const { WriteField<float>("payoffGoldPerTile", value); }
        float payoffRepeatMul() const { return ReadField<float>("payoffRepeatMul"); }
        void SetPayoffRepeatMul(float value) const { WriteField<float>("payoffRepeatMul", value); }
        float payoffMemoryYears() const { return ReadField<float>("payoffMemoryYears"); }
        void SetPayoffMemoryYears(float value) const { WriteField<float>("payoffMemoryYears", value); }
        float identityRevoltSeedFraction() const { return ReadField<float>("identityRevoltSeedFraction"); }
        void SetIdentityRevoltSeedFraction(float value) const { WriteField<float>("identityRevoltSeedFraction", value); }
        float instabilityRevoltSeedFraction() const { return ReadField<float>("instabilityRevoltSeedFraction"); }
        void SetInstabilityRevoltSeedFraction(float value) const { WriteField<float>("instabilityRevoltSeedFraction", value); }
        float moneyRevoltSeedFraction() const { return ReadField<float>("moneyRevoltSeedFraction"); }
        void SetMoneyRevoltSeedFraction(float value) const { WriteField<float>("moneyRevoltSeedFraction", value); }
        int minSeedTiles() const { return ReadField<int>("minSeedTiles"); }
        void SetMinSeedTiles(int value) const { WriteField<int>("minSeedTiles", value); }
        int listMinTiles() const { return ReadField<int>("listMinTiles"); }
        void SetListMinTiles(int value) const { WriteField<int>("listMinTiles", value); }
        int maxSeedTiles() const { return ReadField<int>("maxSeedTiles"); }
        void SetMaxSeedTiles(int value) const { WriteField<int>("maxSeedTiles", value); }
        int identityMaxSeedTiles() const { return ReadField<int>("identityMaxSeedTiles"); }
        void SetIdentityMaxSeedTiles(int value) const { WriteField<int>("identityMaxSeedTiles", value); }
        int instabilityMaxSeedTiles() const { return ReadField<int>("instabilityMaxSeedTiles"); }
        void SetInstabilityMaxSeedTiles(int value) const { WriteField<int>("instabilityMaxSeedTiles", value); }
        float stateAbsorbFraction() const { return ReadField<float>("stateAbsorbFraction"); }
        void SetStateAbsorbFraction(float value) const { WriteField<float>("stateAbsorbFraction", value); }
        float stateAbsorbMaxGrowth() const { return ReadField<float>("stateAbsorbMaxGrowth"); }
        void SetStateAbsorbMaxGrowth(float value) const { WriteField<float>("stateAbsorbMaxGrowth", value); }
        int maxSeedCities() const { return ReadField<int>("maxSeedCities"); }
        void SetMaxSeedCities(int value) const { WriteField<int>("maxSeedCities", value); }
        bool enableConquestRevoltScale() const { return ReadField<bool>("enableConquestRevoltScale"); }
        void SetEnableConquestRevoltScale(bool value) const { WriteField<bool>("enableConquestRevoltScale", value); }
        float annexedRevoltStateFraction() const { return ReadField<float>("annexedRevoltStateFraction"); }
        void SetAnnexedRevoltStateFraction(float value) const { WriteField<float>("annexedRevoltStateFraction", value); }
        float occupiedRevoltSizeShare() const { return ReadField<float>("occupiedRevoltSizeShare"); }
        void SetOccupiedRevoltSizeShare(float value) const { WriteField<float>("occupiedRevoltSizeShare", value); }
        int occupiedRevoltMaxDivisions() const { return ReadField<int>("occupiedRevoltMaxDivisions"); }
        void SetOccupiedRevoltMaxDivisions(int value) const { WriteField<int>("occupiedRevoltMaxDivisions", value); }
        float occupiedRevoltFervourShare() const { return ReadField<float>("occupiedRevoltFervourShare"); }
        void SetOccupiedRevoltFervourShare(float value) const { WriteField<float>("occupiedRevoltFervourShare", value); }
        int occupiedRevoltLevyWaves() const { return ReadField<int>("occupiedRevoltLevyWaves"); }
        void SetOccupiedRevoltLevyWaves(int value) const { WriteField<int>("occupiedRevoltLevyWaves", value); }
        int revoltRecoveryDays() const { return ReadField<int>("revoltRecoveryDays"); }
        void SetRevoltRecoveryDays(int value) const { WriteField<int>("revoltRecoveryDays", value); }
        bool enableGarrisonSuppression() const { return ReadField<bool>("enableGarrisonSuppression"); }
        void SetEnableGarrisonSuppression(bool value) const { WriteField<bool>("enableGarrisonSuppression", value); }
        float garrisonTilesPerDivision() const { return ReadField<float>("garrisonTilesPerDivision"); }
        void SetGarrisonTilesPerDivision(float value) const { WriteField<float>("garrisonTilesPerDivision", value); }
        float garrisonSizeExponent() const { return ReadField<float>("garrisonSizeExponent"); }
        void SetGarrisonSizeExponent(float value) const { WriteField<float>("garrisonSizeExponent", value); }
        float garrisonGrievanceDamp() const { return ReadField<float>("garrisonGrievanceDamp"); }
        void SetGarrisonGrievanceDamp(float value) const { WriteField<float>("garrisonGrievanceDamp", value); }
        float garrisonInstabilityDamp() const { return ReadField<float>("garrisonInstabilityDamp"); }
        void SetGarrisonInstabilityDamp(float value) const { WriteField<float>("garrisonInstabilityDamp", value); }
        float garrisonUnrestDamp() const { return ReadField<float>("garrisonUnrestDamp"); }
        void SetGarrisonUnrestDamp(float value) const { WriteField<float>("garrisonUnrestDamp", value); }
        float garrisonGrievanceDecayPerDay() const { return ReadField<float>("garrisonGrievanceDecayPerDay"); }
        void SetGarrisonGrievanceDecayPerDay(float value) const { WriteField<float>("garrisonGrievanceDecayPerDay", value); }
        float integrationGrievanceDamp() const { return ReadField<float>("integrationGrievanceDamp"); }
        void SetIntegrationGrievanceDamp(float value) const { WriteField<float>("integrationGrievanceDamp", value); }
        float integratedGrievanceDecayPerDay() const { return ReadField<float>("integratedGrievanceDecayPerDay"); }
        void SetIntegratedGrievanceDecayPerDay(float value) const { WriteField<float>("integratedGrievanceDecayPerDay", value); }
        float garrisonRisingDamp() const { return ReadField<float>("garrisonRisingDamp"); }
        void SetGarrisonRisingDamp(float value) const { WriteField<float>("garrisonRisingDamp", value); }
        int maxRevoltBlobs() const { return ReadField<int>("maxRevoltBlobs"); }
        void SetMaxRevoltBlobs(int value) const { WriteField<int>("maxRevoltBlobs", value); }
        int minBlobTiles() const { return ReadField<int>("minBlobTiles"); }
        void SetMinBlobTiles(int value) const { WriteField<int>("minBlobTiles", value); }
        float blobForeignTilePenalty() const { return ReadField<float>("blobForeignTilePenalty"); }
        void SetBlobForeignTilePenalty(float value) const { WriteField<float>("blobForeignTilePenalty", value); }
        float blobCompactnessWeight() const { return ReadField<float>("blobCompactnessWeight"); }
        void SetBlobCompactnessWeight(float value) const { WriteField<float>("blobCompactnessWeight", value); }
        float blobGrowthJitter() const { return ReadField<float>("blobGrowthJitter"); }
        void SetBlobGrowthJitter(float value) const { WriteField<float>("blobGrowthJitter", value); }
        float blobNoiseWeight() const { return ReadField<float>("blobNoiseWeight"); }
        void SetBlobNoiseWeight(float value) const { WriteField<float>("blobNoiseWeight", value); }
        float blobNoiseFeatureFraction() const { return ReadField<float>("blobNoiseFeatureFraction"); }
        void SetBlobNoiseFeatureFraction(float value) const { WriteField<float>("blobNoiseFeatureFraction", value); }
        int blobNoiseOctaves() const { return ReadField<int>("blobNoiseOctaves"); }
        void SetBlobNoiseOctaves(int value) const { WriteField<int>("blobNoiseOctaves", value); }
        float blobSlopeResistance() const { return ReadField<float>("blobSlopeResistance"); }
        void SetBlobSlopeResistance(float value) const { WriteField<float>("blobSlopeResistance", value); }
        float blobElongation() const { return ReadField<float>("blobElongation"); }
        void SetBlobElongation(float value) const { WriteField<float>("blobElongation", value); }
        float blobReachFactor() const { return ReadField<float>("blobReachFactor"); }
        void SetBlobReachFactor(float value) const { WriteField<float>("blobReachFactor", value); }
        int blobSmoothingPasses() const { return ReadField<int>("blobSmoothingPasses"); }
        void SetBlobSmoothingPasses(int value) const { WriteField<int>("blobSmoothingPasses", value); }
        bool enableRevoltWarnings() const { return ReadField<bool>("enableRevoltWarnings"); }
        void SetEnableRevoltWarnings(bool value) const { WriteField<bool>("enableRevoltWarnings", value); }
        float warnGrievanceFraction() const { return ReadField<float>("warnGrievanceFraction"); }
        void SetWarnGrievanceFraction(float value) const { WriteField<float>("warnGrievanceFraction", value); }
        float warnInstabilityFraction() const { return ReadField<float>("warnInstabilityFraction"); }
        void SetWarnInstabilityFraction(float value) const { WriteField<float>("warnInstabilityFraction", value); }
        int warnRefreshDays() const { return ReadField<int>("warnRefreshDays"); }
        void SetWarnRefreshDays(int value) const { WriteField<int>("warnRefreshDays", value); }
        int warnExpiryDays() const { return ReadField<int>("warnExpiryDays"); }
        void SetWarnExpiryDays(int value) const { WriteField<int>("warnExpiryDays", value); }
        int maxLiveWarnings() const { return ReadField<int>("maxLiveWarnings"); }
        void SetMaxLiveWarnings(int value) const { WriteField<int>("maxLiveWarnings", value); }
        float warnShapeReuseFraction() const { return ReadField<float>("warnShapeReuseFraction"); }
        void SetWarnShapeReuseFraction(float value) const { WriteField<float>("warnShapeReuseFraction", value); }
        float divisionsPerSeedTile() const { return ReadField<float>("divisionsPerSeedTile"); }
        void SetDivisionsPerSeedTile(float value) const { WriteField<float>("divisionsPerSeedTile", value); }
        int minStartingDivisions() const { return ReadField<int>("minStartingDivisions"); }
        void SetMinStartingDivisions(int value) const { WriteField<int>("minStartingDivisions", value); }
        int maxStartingDivisions() const { return ReadField<int>("maxStartingDivisions"); }
        void SetMaxStartingDivisions(int value) const { WriteField<int>("maxStartingDivisions", value); }
        void* escalationSeedTileThresholds() const { return ReadField<void*>("escalationSeedTileThresholds"); }
        void SetEscalationSeedTileThresholds(void* value) const { WriteField<void*>("escalationSeedTileThresholds", value); }
        int escalationDivisionsPerStep() const { return ReadField<int>("escalationDivisionsPerStep"); }
        void SetEscalationDivisionsPerStep(int value) const { WriteField<int>("escalationDivisionsPerStep", value); }
        float rebelParentArmyShare() const { return ReadField<float>("rebelParentArmyShare"); }
        void SetRebelParentArmyShare(float value) const { WriteField<float>("rebelParentArmyShare", value); }
        float rebelMaxParentArmyShare() const { return ReadField<float>("rebelMaxParentArmyShare"); }
        void SetRebelMaxParentArmyShare(float value) const { WriteField<float>("rebelMaxParentArmyShare", value); }
        int rebelHardDivisionCap() const { return ReadField<int>("rebelHardDivisionCap"); }
        void SetRebelHardDivisionCap(int value) const { WriteField<int>("rebelHardDivisionCap", value); }
        float rebelPopulationShare() const { return ReadField<float>("rebelPopulationShare"); }
        void SetRebelPopulationShare(float value) const { WriteField<float>("rebelPopulationShare", value); }
        float rebelPopulationSpendShare() const { return ReadField<float>("rebelPopulationSpendShare"); }
        void SetRebelPopulationSpendShare(float value) const { WriteField<float>("rebelPopulationSpendShare", value); }
        bool enableUprisingStayingPower() const { return ReadField<bool>("enableUprisingStayingPower"); }
        void SetEnableUprisingStayingPower(bool value) const { WriteField<bool>("enableUprisingStayingPower", value); }
        float uprisingFervourMax() const { return ReadField<float>("uprisingFervourMax"); }
        void SetUprisingFervourMax(float value) const { WriteField<float>("uprisingFervourMax", value); }
        float uprisingFervourDays() const { return ReadField<float>("uprisingFervourDays"); }
        void SetUprisingFervourDays(float value) const { WriteField<float>("uprisingFervourDays", value); }
        float uprisingAttackBonus() const { return ReadField<float>("uprisingAttackBonus"); }
        void SetUprisingAttackBonus(float value) const { WriteField<float>("uprisingAttackBonus", value); }
        float uprisingDefenceBonus() const { return ReadField<float>("uprisingDefenceBonus"); }
        void SetUprisingDefenceBonus(float value) const { WriteField<float>("uprisingDefenceBonus", value); }
        float uprisingParentPenaltyShare() const { return ReadField<float>("uprisingParentPenaltyShare"); }
        void SetUprisingParentPenaltyShare(float value) const { WriteField<float>("uprisingParentPenaltyShare", value); }
        float uprisingLevyIntervalDays() const { return ReadField<float>("uprisingLevyIntervalDays"); }
        void SetUprisingLevyIntervalDays(float value) const { WriteField<float>("uprisingLevyIntervalDays", value); }
        int uprisingLevyWaves() const { return ReadField<int>("uprisingLevyWaves"); }
        void SetUprisingLevyWaves(int value) const { WriteField<int>("uprisingLevyWaves", value); }
        float uprisingLevyShareOfFounding() const { return ReadField<float>("uprisingLevyShareOfFounding"); }
        void SetUprisingLevyShareOfFounding(float value) const { WriteField<float>("uprisingLevyShareOfFounding", value); }
        float uprisingLevySpendShare() const { return ReadField<float>("uprisingLevySpendShare"); }
        void SetUprisingLevySpendShare(float value) const { WriteField<float>("uprisingLevySpendShare", value); }
        float uprisingLevyHoldFraction() const { return ReadField<float>("uprisingLevyHoldFraction"); }
        void SetUprisingLevyHoldFraction(float value) const { WriteField<float>("uprisingLevyHoldFraction", value); }
        float grievanceUprisingContagion() const { return ReadField<float>("grievanceUprisingContagion"); }
        void SetGrievanceUprisingContagion(float value) const { WriteField<float>("grievanceUprisingContagion", value); }
        float rebelCavalryShare() const { return ReadField<float>("rebelCavalryShare"); }
        void SetRebelCavalryShare(float value) const { WriteField<float>("rebelCavalryShare", value); }
        int rebelRuralTilesPerCavalryDivision() const { return ReadField<int>("rebelRuralTilesPerCavalryDivision"); }
        void SetRebelRuralTilesPerCavalryDivision(int value) const { WriteField<int>("rebelRuralTilesPerCavalryDivision", value); }
        float rebelTankShare() const { return ReadField<float>("rebelTankShare"); }
        void SetRebelTankShare(float value) const { WriteField<float>("rebelTankShare", value); }
        float rebelFactoriesPerTankDivision() const { return ReadField<float>("rebelFactoriesPerTankDivision"); }
        void SetRebelFactoriesPerTankDivision(float value) const { WriteField<float>("rebelFactoriesPerTankDivision", value); }
        float branchRisingMinShare() const { return ReadField<float>("branchRisingMinShare"); }
        void SetBranchRisingMinShare(float value) const { WriteField<float>("branchRisingMinShare", value); }
        float neglectGrievancePerDay() const { return ReadField<float>("neglectGrievancePerDay"); }
        void SetNeglectGrievancePerDay(float value) const { WriteField<float>("neglectGrievancePerDay", value); }
        float trustNeglectGrievanceMul() const { return ReadField<float>("trustNeglectGrievanceMul"); }
        void SetTrustNeglectGrievanceMul(float value) const { WriteField<float>("trustNeglectGrievanceMul", value); }
        float trustContentGrievanceMul() const { return ReadField<float>("trustContentGrievanceMul"); }
        void SetTrustContentGrievanceMul(float value) const { WriteField<float>("trustContentGrievanceMul", value); }
        float neglectGarrisonDampShare() const { return ReadField<float>("neglectGarrisonDampShare"); }
        void SetNeglectGarrisonDampShare(float value) const { WriteField<float>("neglectGarrisonDampShare", value); }
        float concedeTrust() const { return ReadField<float>("concedeTrust"); }
        void SetConcedeTrust(float value) const { WriteField<float>("concedeTrust", value); }
        float crackdownTrust() const { return ReadField<float>("crackdownTrust"); }
        void SetCrackdownTrust(float value) const { WriteField<float>("crackdownTrust", value); }
        float neglectRisingTrust() const { return ReadField<float>("neglectRisingTrust"); }
        void SetNeglectRisingTrust(float value) const { WriteField<float>("neglectRisingTrust", value); }
        float neglectSeedFraction() const { return ReadField<float>("neglectSeedFraction"); }
        void SetNeglectSeedFraction(float value) const { WriteField<float>("neglectSeedFraction", value); }
        float neglectAnnexedStateFraction() const { return ReadField<float>("neglectAnnexedStateFraction"); }
        void SetNeglectAnnexedStateFraction(float value) const { WriteField<float>("neglectAnnexedStateFraction", value); }
        float neglectMaxRealmShare() const { return ReadField<float>("neglectMaxRealmShare"); }
        void SetNeglectMaxRealmShare(float value) const { WriteField<float>("neglectMaxRealmShare", value); }
        float identityRebelMaxParentArmyShare() const { return ReadField<float>("identityRebelMaxParentArmyShare"); }
        void SetIdentityRebelMaxParentArmyShare(float value) const { WriteField<float>("identityRebelMaxParentArmyShare", value); }
        float neglectFervourBonus() const { return ReadField<float>("neglectFervourBonus"); }
        void SetNeglectFervourBonus(float value) const { WriteField<float>("neglectFervourBonus", value); }
        float backedFervourBonus() const { return ReadField<float>("backedFervourBonus"); }
        void SetBackedFervourBonus(float value) const { WriteField<float>("backedFervourBonus", value); }
        int neglectLevyWaves() const { return ReadField<int>("neglectLevyWaves"); }
        void SetNeglectLevyWaves(int value) const { WriteField<int>("neglectLevyWaves", value); }
        float neglectFirstLevyDays() const { return ReadField<float>("neglectFirstLevyDays"); }
        void SetNeglectFirstLevyDays(float value) const { WriteField<float>("neglectFirstLevyDays", value); }
        float neglectLevyIntervalDays() const { return ReadField<float>("neglectLevyIntervalDays"); }
        void SetNeglectLevyIntervalDays(float value) const { WriteField<float>("neglectLevyIntervalDays", value); }
        int maxWorldNeglectRisings() const { return ReadField<int>("maxWorldNeglectRisings"); }
        void SetMaxWorldNeglectRisings(int value) const { WriteField<int>("maxWorldNeglectRisings", value); }
        float homelandBackingGrudge() const { return ReadField<float>("homelandBackingGrudge"); }
        void SetHomelandBackingGrudge(float value) const { WriteField<float>("homelandBackingGrudge", value); }
        float homelandSubsidyMonths() const { return ReadField<float>("homelandSubsidyMonths"); }
        void SetHomelandSubsidyMonths(float value) const { WriteField<float>("homelandSubsidyMonths", value); }
        float homelandSubsidyTreasuryShare() const { return ReadField<float>("homelandSubsidyTreasuryShare"); }
        void SetHomelandSubsidyTreasuryShare(float value) const { WriteField<float>("homelandSubsidyTreasuryShare", value); }
    };
}
