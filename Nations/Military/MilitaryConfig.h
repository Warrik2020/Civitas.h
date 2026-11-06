#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MilitaryConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MilitaryConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MilitaryConfig") {}
    public:
        float popPerDivision() const { return ReadField<float>("popPerDivision"); }
        void popPerDivision(float value) const { WriteField<float>("popPerDivision", value); }
        int hardDivisionCap() const { return ReadField<int>("hardDivisionCap"); }
        void hardDivisionCap(int value) const { WriteField<int>("hardDivisionCap", value); }
        float armyCapBorderFactor() const { return ReadField<float>("armyCapBorderFactor"); }
        void armyCapBorderFactor(float value) const { WriteField<float>("armyCapBorderFactor", value); }
        float armyCapBorderKnee() const { return ReadField<float>("armyCapBorderKnee"); }
        void armyCapBorderKnee(float value) const { WriteField<float>("armyCapBorderKnee", value); }
        float armyCapBorderExponent() const { return ReadField<float>("armyCapBorderExponent"); }
        void armyCapBorderExponent(float value) const { WriteField<float>("armyCapBorderExponent", value); }
        float armyCapPopSupportMin() const { return ReadField<float>("armyCapPopSupportMin"); }
        void armyCapPopSupportMin(float value) const { WriteField<float>("armyCapPopSupportMin", value); }
        float armyCapPerMilFactory() const { return ReadField<float>("armyCapPerMilFactory"); }
        void armyCapPerMilFactory(float value) const { WriteField<float>("armyCapPerMilFactory", value); }
        float armyCapReserveFraction() const { return ReadField<float>("armyCapReserveFraction"); }
        void armyCapReserveFraction(float value) const { WriteField<float>("armyCapReserveFraction", value); }
        float armyCapBaseDivisions() const { return ReadField<float>("armyCapBaseDivisions"); }
        void armyCapBaseDivisions(float value) const { WriteField<float>("armyCapBaseDivisions", value); }
        bool recruitRequiresSolvency() const { return ReadField<bool>("recruitRequiresSolvency"); }
        void recruitRequiresSolvency(bool value) const { WriteField<bool>("recruitRequiresSolvency", value); }
        float peacetimeArmyFraction() const { return ReadField<float>("peacetimeArmyFraction"); }
        void peacetimeArmyFraction(float value) const { WriteField<float>("peacetimeArmyFraction", value); }
        float armyCapAggressionMin() const { return ReadField<float>("armyCapAggressionMin"); }
        void armyCapAggressionMin(float value) const { WriteField<float>("armyCapAggressionMin", value); }
        float armyCapAggressionMax() const { return ReadField<float>("armyCapAggressionMax"); }
        void armyCapAggressionMax(float value) const { WriteField<float>("armyCapAggressionMax", value); }
        float armyCapIncomeFactor() const { return ReadField<float>("armyCapIncomeFactor"); }
        void armyCapIncomeFactor(float value) const { WriteField<float>("armyCapIncomeFactor", value); }
        bool armyCapWartimeAwareUpkeep() const { return ReadField<bool>("armyCapWartimeAwareUpkeep"); }
        void armyCapWartimeAwareUpkeep(bool value) const { WriteField<bool>("armyCapWartimeAwareUpkeep", value); }
        float armyCapUpkeepBudgetFraction() const { return ReadField<float>("armyCapUpkeepBudgetFraction"); }
        void armyCapUpkeepBudgetFraction(float value) const { WriteField<float>("armyCapUpkeepBudgetFraction", value); }
        float armyCapWarUpkeepBudgetFraction() const { return ReadField<float>("armyCapWarUpkeepBudgetFraction"); }
        void armyCapWarUpkeepBudgetFraction(float value) const { WriteField<float>("armyCapWarUpkeepBudgetFraction", value); }
        float recruitRatePerTick() const { return ReadField<float>("recruitRatePerTick"); }
        void recruitRatePerTick(float value) const { WriteField<float>("recruitRatePerTick", value); }
        float recruitBulkMaxParallel() const { return ReadField<float>("recruitBulkMaxParallel"); }
        void recruitBulkMaxParallel(float value) const { WriteField<float>("recruitBulkMaxParallel", value); }
        float recruitParallelCapFraction() const { return ReadField<float>("recruitParallelCapFraction"); }
        void recruitParallelCapFraction(float value) const { WriteField<float>("recruitParallelCapFraction", value); }
        float recruitRatePerMilFactory() const { return ReadField<float>("recruitRatePerMilFactory"); }
        void recruitRatePerMilFactory(float value) const { WriteField<float>("recruitRatePerMilFactory", value); }
        float playerTrainingSpeedPerBarracks() const { return ReadField<float>("playerTrainingSpeedPerBarracks"); }
        void playerTrainingSpeedPerBarracks(float value) const { WriteField<float>("playerTrainingSpeedPerBarracks", value); }
        float trainingPowerPerRecruitSlot() const { return ReadField<float>("trainingPowerPerRecruitSlot"); }
        void trainingPowerPerRecruitSlot(float value) const { WriteField<float>("trainingPowerPerRecruitSlot", value); }
        float playerTrainingSpeedMaxMul() const { return ReadField<float>("playerTrainingSpeedMaxMul"); }
        void playerTrainingSpeedMaxMul(float value) const { WriteField<float>("playerTrainingSpeedMaxMul", value); }
        float aiTrainingSpeedPerBuilding() const { return ReadField<float>("aiTrainingSpeedPerBuilding"); }
        void aiTrainingSpeedPerBuilding(float value) const { WriteField<float>("aiTrainingSpeedPerBuilding", value); }
        int recruitInsolvencyGraceTicks() const { return ReadField<int>("recruitInsolvencyGraceTicks"); }
        void recruitInsolvencyGraceTicks(int value) const { WriteField<int>("recruitInsolvencyGraceTicks", value); }
        float recruitInsolventRateMul() const { return ReadField<float>("recruitInsolventRateMul"); }
        void recruitInsolventRateMul(float value) const { WriteField<float>("recruitInsolventRateMul", value); }
        int recruitInsolvencyHardStopTicks() const { return ReadField<int>("recruitInsolvencyHardStopTicks"); }
        void recruitInsolvencyHardStopTicks(int value) const { WriteField<int>("recruitInsolvencyHardStopTicks", value); }
        float aiRecruitTreasuryCost() const { return ReadField<float>("aiRecruitTreasuryCost"); }
        void aiRecruitTreasuryCost(float value) const { WriteField<float>("aiRecruitTreasuryCost", value); }
        float raiseManpowerFraction() const { return ReadField<float>("raiseManpowerFraction"); }
        void raiseManpowerFraction(float value) const { WriteField<float>("raiseManpowerFraction", value); }
        int disbandIntervalTicks() const { return ReadField<int>("disbandIntervalTicks"); }
        void disbandIntervalTicks(int value) const { WriteField<int>("disbandIntervalTicks", value); }
        bool scaleDoctrineEnabled() const { return ReadField<bool>("scaleDoctrineEnabled"); }
        void scaleDoctrineEnabled(bool value) const { WriteField<bool>("scaleDoctrineEnabled", value); }
        float scaleQualityFullWorldShare() const { return ReadField<float>("scaleQualityFullWorldShare"); }
        void scaleQualityFullWorldShare(float value) const { WriteField<float>("scaleQualityFullWorldShare", value); }
        float scaleAttackBonusMax() const { return ReadField<float>("scaleAttackBonusMax"); }
        void scaleAttackBonusMax(float value) const { WriteField<float>("scaleAttackBonusMax", value); }
        float scaleDefenceBonusMax() const { return ReadField<float>("scaleDefenceBonusMax"); }
        void scaleDefenceBonusMax(float value) const { WriteField<float>("scaleDefenceBonusMax", value); }
        bool armyCapBaseScalesWithSize() const { return ReadField<bool>("armyCapBaseScalesWithSize"); }
        void armyCapBaseScalesWithSize(bool value) const { WriteField<bool>("armyCapBaseScalesWithSize", value); }
        float armyCapBaseFullTiles() const { return ReadField<float>("armyCapBaseFullTiles"); }
        void armyCapBaseFullTiles(float value) const { WriteField<float>("armyCapBaseFullTiles", value); }
        float divisionManpowerMax() const { return ReadField<float>("divisionManpowerMax"); }
        void divisionManpowerMax(float value) const { WriteField<float>("divisionManpowerMax", value); }
        float orgMax() const { return ReadField<float>("orgMax"); }
        void orgMax(float value) const { WriteField<float>("orgMax", value); }
        float moveSpeedTilesPerTick() const { return ReadField<float>("moveSpeedTilesPerTick"); }
        void moveSpeedTilesPerTick(float value) const { WriteField<float>("moveSpeedTilesPerTick", value); }
        float moveTurnRateDegPerTick() const { return ReadField<float>("moveTurnRateDegPerTick"); }
        void moveTurnRateDegPerTick(float value) const { WriteField<float>("moveTurnRateDegPerTick", value); }
        float moveMaxTurnDeviationDeg() const { return ReadField<float>("moveMaxTurnDeviationDeg"); }
        void moveMaxTurnDeviationDeg(float value) const { WriteField<float>("moveMaxTurnDeviationDeg", value); }
        int navStallWindowTicks() const { return ReadField<int>("navStallWindowTicks"); }
        void navStallWindowTicks(int value) const { WriteField<int>("navStallWindowTicks", value); }
        float navStallNetTiles() const { return ReadField<float>("navStallNetTiles"); }
        void navStallNetTiles(float value) const { WriteField<float>("navStallNetTiles", value); }
        int navStallDirectStrikes() const { return ReadField<int>("navStallDirectStrikes"); }
        void navStallDirectStrikes(int value) const { WriteField<int>("navStallDirectStrikes", value); }
        float navBlockedMinDistTiles() const { return ReadField<float>("navBlockedMinDistTiles"); }
        void navBlockedMinDistTiles(float value) const { WriteField<float>("navBlockedMinDistTiles", value); }
        int navBlockedCooldownTicks() const { return ReadField<int>("navBlockedCooldownTicks"); }
        void navBlockedCooldownTicks(int value) const { WriteField<int>("navBlockedCooldownTicks", value); }
        bool navCrowdFollowEnabled() const { return ReadField<bool>("navCrowdFollowEnabled"); }
        void navCrowdFollowEnabled(bool value) const { WriteField<bool>("navCrowdFollowEnabled", value); }
        int navCrowdBlockedCooldownTicks() const { return ReadField<int>("navCrowdBlockedCooldownTicks"); }
        void navCrowdBlockedCooldownTicks(int value) const { WriteField<int>("navCrowdBlockedCooldownTicks", value); }
        float marchPassRadiusFactor() const { return ReadField<float>("marchPassRadiusFactor"); }
        void marchPassRadiusFactor(float value) const { WriteField<float>("marchPassRadiusFactor", value); }
        int navFollowMaxTicks() const { return ReadField<int>("navFollowMaxTicks"); }
        void navFollowMaxTicks(int value) const { WriteField<int>("navFollowMaxTicks", value); }
        float navFollowMaxRecedeTiles() const { return ReadField<float>("navFollowMaxRecedeTiles"); }
        void navFollowMaxRecedeTiles(float value) const { WriteField<float>("navFollowMaxRecedeTiles", value); }
        float moveOrgDrainPerTick() const { return ReadField<float>("moveOrgDrainPerTick"); }
        void moveOrgDrainPerTick(float value) const { WriteField<float>("moveOrgDrainPerTick", value); }
        float orgRegenPerTick() const { return ReadField<float>("orgRegenPerTick"); }
        void orgRegenPerTick(float value) const { WriteField<float>("orgRegenPerTick", value); }
        int orgRegenDelayTicks() const { return ReadField<int>("orgRegenDelayTicks"); }
        void orgRegenDelayTicks(int value) const { WriteField<int>("orgRegenDelayTicks", value); }
        float reengageOrgFraction() const { return ReadField<float>("reengageOrgFraction"); }
        void reengageOrgFraction(float value) const { WriteField<float>("reengageOrgFraction", value); }
        float retreatDistanceTiles() const { return ReadField<float>("retreatDistanceTiles"); }
        void retreatDistanceTiles(float value) const { WriteField<float>("retreatDistanceTiles", value); }
        float retreatSpeedFactor() const { return ReadField<float>("retreatSpeedFactor"); }
        void retreatSpeedFactor(float value) const { WriteField<float>("retreatSpeedFactor", value); }
        float arriveRadius() const { return ReadField<float>("arriveRadius"); }
        void arriveRadius(float value) const { WriteField<float>("arriveRadius", value); }
        int displaceSearchRadius() const { return ReadField<int>("displaceSearchRadius"); }
        void displaceSearchRadius(int value) const { WriteField<int>("displaceSearchRadius", value); }
        float displaceOrgPenalty() const { return ReadField<float>("displaceOrgPenalty"); }
        void displaceOrgPenalty(float value) const { WriteField<float>("displaceOrgPenalty", value); }
        float overrunOrgPenalty() const { return ReadField<float>("overrunOrgPenalty"); }
        void overrunOrgPenalty(float value) const { WriteField<float>("overrunOrgPenalty", value); }
        float overrunManpowerPenaltyFraction() const { return ReadField<float>("overrunManpowerPenaltyFraction"); }
        void overrunManpowerPenaltyFraction(float value) const { WriteField<float>("overrunManpowerPenaltyFraction", value); }
        bool researchGatesRoster() const { return ReadField<bool>("researchGatesRoster"); }
        void researchGatesRoster(bool value) const { WriteField<bool>("researchGatesRoster", value); }
        int lateRosterMinEra() const { return ReadField<int>("lateRosterMinEra"); }
        void lateRosterMinEra(int value) const { WriteField<int>("lateRosterMinEra", value); }
        float lateRosterMinTechScore() const { return ReadField<float>("lateRosterMinTechScore"); }
        void lateRosterMinTechScore(float value) const { WriteField<float>("lateRosterMinTechScore", value); }
        float lateRosterMinMilFactories() const { return ReadField<float>("lateRosterMinMilFactories"); }
        void lateRosterMinMilFactories(float value) const { WriteField<float>("lateRosterMinMilFactories", value); }
        void* earlyMixPattern() const { return ReadField<void*>("earlyMixPattern"); }
        void earlyMixPattern(void* value) const { WriteField<void*>("earlyMixPattern", value); }
        void* lateMixPattern() const { return ReadField<void*>("lateMixPattern"); }
        void lateMixPattern(void* value) const { WriteField<void*>("lateMixPattern", value); }
        float typeStatsStrength() const { return ReadField<float>("typeStatsStrength"); }
        void typeStatsStrength(float value) const { WriteField<float>("typeStatsStrength", value); }
        float groupCombinedBonus() const { return ReadField<float>("groupCombinedBonus"); }
        void groupCombinedBonus(float value) const { WriteField<float>("groupCombinedBonus", value); }
        float divisionRadiusMaxTiles() const { return ReadField<float>("divisionRadiusMaxTiles"); }
        void divisionRadiusMaxTiles(float value) const { WriteField<float>("divisionRadiusMaxTiles", value); }
        float divisionRadiusMinTiles() const { return ReadField<float>("divisionRadiusMinTiles"); }
        void divisionRadiusMinTiles(float value) const { WriteField<float>("divisionRadiusMinTiles", value); }
        float divisionBodyScale() const { return ReadField<float>("divisionBodyScale"); }
        void divisionBodyScale(float value) const { WriteField<float>("divisionBodyScale", value); }
        float aoiFactor() const { return ReadField<float>("aoiFactor"); }
        void aoiFactor(float value) const { WriteField<float>("aoiFactor", value); }
        float conquestAoiFraction() const { return ReadField<float>("conquestAoiFraction"); }
        void conquestAoiFraction(float value) const { WriteField<float>("conquestAoiFraction", value); }
        float engageHoldDistanceFraction() const { return ReadField<float>("engageHoldDistanceFraction"); }
        void engageHoldDistanceFraction(float value) const { WriteField<float>("engageHoldDistanceFraction", value); }
        float warStandoffTiles() const { return ReadField<float>("warStandoffTiles"); }
        void warStandoffTiles(float value) const { WriteField<float>("warStandoffTiles", value); }
        float armyCapCoverageSlackFraction() const { return ReadField<float>("armyCapCoverageSlackFraction"); }
        void armyCapCoverageSlackFraction(float value) const { WriteField<float>("armyCapCoverageSlackFraction", value); }
        float wartimeDepthFactor() const { return ReadField<float>("wartimeDepthFactor"); }
        void wartimeDepthFactor(float value) const { WriteField<float>("wartimeDepthFactor", value); }
        float advanceForceRatio() const { return ReadField<float>("advanceForceRatio"); }
        void advanceForceRatio(float value) const { WriteField<float>("advanceForceRatio", value); }
        float advanceReleaseRatio() const { return ReadField<float>("advanceReleaseRatio"); }
        void advanceReleaseRatio(float value) const { WriteField<float>("advanceReleaseRatio", value); }
        int advanceSustainTicks() const { return ReadField<int>("advanceSustainTicks"); }
        void advanceSustainTicks(int value) const { WriteField<int>("advanceSustainTicks", value); }
        int maxActiveOperations() const { return ReadField<int>("maxActiveOperations"); }
        void maxActiveOperations(int value) const { WriteField<int>("maxActiveOperations", value); }
        int entrenchTicks() const { return ReadField<int>("entrenchTicks"); }
        void entrenchTicks(int value) const { WriteField<int>("entrenchTicks", value); }
        bool moveOrgDrainWhileEngaged() const { return ReadField<bool>("moveOrgDrainWhileEngaged"); }
        void moveOrgDrainWhileEngaged(bool value) const { WriteField<bool>("moveOrgDrainWhileEngaged", value); }
        float playerCombatEdge() const { return ReadField<float>("playerCombatEdge"); }
        void playerCombatEdge(float value) const { WriteField<float>("playerCombatEdge", value); }
        float retreatDamageFactor() const { return ReadField<float>("retreatDamageFactor"); }
        void retreatDamageFactor(float value) const { WriteField<float>("retreatDamageFactor", value); }
        int combatContactWindowTicks() const { return ReadField<int>("combatContactWindowTicks"); }
        void combatContactWindowTicks(int value) const { WriteField<int>("combatContactWindowTicks", value); }
        float destroyBelowManpower() const { return ReadField<float>("destroyBelowManpower"); }
        void destroyBelowManpower(float value) const { WriteField<float>("destroyBelowManpower", value); }
        bool combatResolutionEnabled() const { return ReadField<bool>("combatResolutionEnabled"); }
        void combatResolutionEnabled(bool value) const { WriteField<bool>("combatResolutionEnabled", value); }
        bool hoi4BattlesEnabled() const { return ReadField<bool>("hoi4BattlesEnabled"); }
        void hoi4BattlesEnabled(bool value) const { WriteField<bool>("hoi4BattlesEnabled", value); }
        float entrenchBonusMul() const { return ReadField<float>("entrenchBonusMul"); }
        void entrenchBonusMul(float value) const { WriteField<float>("entrenchBonusMul", value); }
        float pocketCombatPenaltyMul() const { return ReadField<float>("pocketCombatPenaltyMul"); }
        void pocketCombatPenaltyMul(float value) const { WriteField<float>("pocketCombatPenaltyMul", value); }
        float fortDefenseMulPerLevel() const { return ReadField<float>("fortDefenseMulPerLevel"); }
        void fortDefenseMulPerLevel(float value) const { WriteField<float>("fortDefenseMulPerLevel", value); }
        float baseCombatOrgDamagePerTick() const { return ReadField<float>("baseCombatOrgDamagePerTick"); }
        void baseCombatOrgDamagePerTick(float value) const { WriteField<float>("baseCombatOrgDamagePerTick", value); }
        float casualtyOrgThreshold() const { return ReadField<float>("casualtyOrgThreshold"); }
        void casualtyOrgThreshold(float value) const { WriteField<float>("casualtyOrgThreshold", value); }
        float baseCombatManpowerBleedPerTick() const { return ReadField<float>("baseCombatManpowerBleedPerTick"); }
        void baseCombatManpowerBleedPerTick(float value) const { WriteField<float>("baseCombatManpowerBleedPerTick", value); }
        float combatRatioMax() const { return ReadField<float>("combatRatioMax"); }
        void combatRatioMax(float value) const { WriteField<float>("combatRatioMax", value); }
        float autoWithdrawOrgFraction() const { return ReadField<float>("autoWithdrawOrgFraction"); }
        void autoWithdrawOrgFraction(float value) const { WriteField<float>("autoWithdrawOrgFraction", value); }
        int autoWithdrawCooldownTicks() const { return ReadField<int>("autoWithdrawCooldownTicks"); }
        void autoWithdrawCooldownTicks(int value) const { WriteField<int>("autoWithdrawCooldownTicks", value); }
        float withdrawRefitManpowerFraction() const { return ReadField<float>("withdrawRefitManpowerFraction"); }
        void withdrawRefitManpowerFraction(float value) const { WriteField<float>("withdrawRefitManpowerFraction", value); }
        int fallbackMaxTicks() const { return ReadField<int>("fallbackMaxTicks"); }
        void fallbackMaxTicks(int value) const { WriteField<int>("fallbackMaxTicks", value); }
        float withdrawDistanceTiles() const { return ReadField<float>("withdrawDistanceTiles"); }
        void withdrawDistanceTiles(float value) const { WriteField<float>("withdrawDistanceTiles", value); }
        float withdrawSpeedFactor() const { return ReadField<float>("withdrawSpeedFactor"); }
        void withdrawSpeedFactor(float value) const { WriteField<float>("withdrawSpeedFactor", value); }
        float withdrawPressureFactor() const { return ReadField<float>("withdrawPressureFactor"); }
        void withdrawPressureFactor(float value) const { WriteField<float>("withdrawPressureFactor", value); }
        float defenderBonus() const { return ReadField<float>("defenderBonus"); }
        void defenderBonus(float value) const { WriteField<float>("defenderBonus", value); }
        float contestThreshold() const { return ReadField<float>("contestThreshold"); }
        void contestThreshold(float value) const { WriteField<float>("contestThreshold", value); }
        float pushGain() const { return ReadField<float>("pushGain"); }
        void pushGain(float value) const { WriteField<float>("pushGain", value); }
        float warPushFactorMax() const { return ReadField<float>("warPushFactorMax"); }
        void warPushFactorMax(float value) const { WriteField<float>("warPushFactorMax", value); }
        float undefendedCaveFactor() const { return ReadField<float>("undefendedCaveFactor"); }
        void undefendedCaveFactor(float value) const { WriteField<float>("undefendedCaveFactor", value); }
        float undefendedPushFactorMax() const { return ReadField<float>("undefendedPushFactorMax"); }
        void undefendedPushFactorMax(float value) const { WriteField<float>("undefendedPushFactorMax", value); }
        int contestFactorCacheTicks() const { return ReadField<int>("contestFactorCacheTicks"); }
        void contestFactorCacheTicks(int value) const { WriteField<int>("contestFactorCacheTicks", value); }
        bool eventDrivenWars() const { return ReadField<bool>("eventDrivenWars"); }
        void eventDrivenWars(bool value) const { WriteField<bool>("eventDrivenWars", value); }
        bool divPathfindingEnabled() const { return ReadField<bool>("divPathfindingEnabled"); }
        void divPathfindingEnabled(bool value) const { WriteField<bool>("divPathfindingEnabled", value); }
        int divPathDownsample() const { return ReadField<int>("divPathDownsample"); }
        void divPathDownsample(int value) const { WriteField<int>("divPathDownsample", value); }
        int divPathMaxExpansions() const { return ReadField<int>("divPathMaxExpansions"); }
        void divPathMaxExpansions(int value) const { WriteField<int>("divPathMaxExpansions", value); }
        int divPathAiMaxExpansions() const { return ReadField<int>("divPathAiMaxExpansions"); }
        void divPathAiMaxExpansions(int value) const { WriteField<int>("divPathAiMaxExpansions", value); }
        int divPathMaxPerTick() const { return ReadField<int>("divPathMaxPerTick"); }
        void divPathMaxPerTick(int value) const { WriteField<int>("divPathMaxPerTick", value); }
        int divPathPlayerMaxPerTick() const { return ReadField<int>("divPathPlayerMaxPerTick"); }
        void divPathPlayerMaxPerTick(int value) const { WriteField<int>("divPathPlayerMaxPerTick", value); }
        float divPathMinDistTiles() const { return ReadField<float>("divPathMinDistTiles"); }
        void divPathMinDistTiles(float value) const { WriteField<float>("divPathMinDistTiles", value); }
        float divPathForeignCostMul() const { return ReadField<float>("divPathForeignCostMul"); }
        void divPathForeignCostMul(float value) const { WriteField<float>("divPathForeignCostMul", value); }
        bool divPathOwnLandFirst() const { return ReadField<bool>("divPathOwnLandFirst"); }
        void divPathOwnLandFirst(bool value) const { WriteField<bool>("divPathOwnLandFirst", value); }
        float divPathWaypointRadius() const { return ReadField<float>("divPathWaypointRadius"); }
        void divPathWaypointRadius(float value) const { WriteField<float>("divPathWaypointRadius", value); }
        float divPathReaimTiles() const { return ReadField<float>("divPathReaimTiles"); }
        void divPathReaimTiles(float value) const { WriteField<float>("divPathReaimTiles", value); }
        int divPathMaxWaypoints() const { return ReadField<int>("divPathMaxWaypoints"); }
        void divPathMaxWaypoints(int value) const { WriteField<int>("divPathMaxWaypoints", value); }
        int divPathFailCooldownTicks() const { return ReadField<int>("divPathFailCooldownTicks"); }
        void divPathFailCooldownTicks(int value) const { WriteField<int>("divPathFailCooldownTicks", value); }
        int divPathStaleCooldownTicks() const { return ReadField<int>("divPathStaleCooldownTicks"); }
        void divPathStaleCooldownTicks(int value) const { WriteField<int>("divPathStaleCooldownTicks", value); }
        float divPathDriftMaxTiles() const { return ReadField<float>("divPathDriftMaxTiles"); }
        void divPathDriftMaxTiles(float value) const { WriteField<float>("divPathDriftMaxTiles", value); }
        int divPathLosSkipInterval() const { return ReadField<int>("divPathLosSkipInterval"); }
        void divPathLosSkipInterval(int value) const { WriteField<int>("divPathLosSkipInterval", value); }
        int divPathMaxLegNodes() const { return ReadField<int>("divPathMaxLegNodes"); }
        void divPathMaxLegNodes(int value) const { WriteField<int>("divPathMaxLegNodes", value); }
        float divPathStraightSlack() const { return ReadField<float>("divPathStraightSlack"); }
        void divPathStraightSlack(float value) const { WriteField<float>("divPathStraightSlack", value); }
        float divPathEnemyCostMul() const { return ReadField<float>("divPathEnemyCostMul"); }
        void divPathEnemyCostMul(float value) const { WriteField<float>("divPathEnemyCostMul", value); }
        float divPathMaxMillisPerTick() const { return ReadField<float>("divPathMaxMillisPerTick"); }
        void divPathMaxMillisPerTick(float value) const { WriteField<float>("divPathMaxMillisPerTick", value); }
        float divPathPlayerMaxMillisPerTick() const { return ReadField<float>("divPathPlayerMaxMillisPerTick"); }
        void divPathPlayerMaxMillisPerTick(float value) const { WriteField<float>("divPathPlayerMaxMillisPerTick", value); }
        float warScorePerTile() const { return ReadField<float>("warScorePerTile"); }
        void warScorePerTile(float value) const { WriteField<float>("warScorePerTile", value); }
        float warScorePerDivisionKilled() const { return ReadField<float>("warScorePerDivisionKilled"); }
        void warScorePerDivisionKilled(float value) const { WriteField<float>("warScorePerDivisionKilled", value); }
        float warScoreClamp() const { return ReadField<float>("warScoreClamp"); }
        void warScoreClamp(float value) const { WriteField<float>("warScoreClamp", value); }
        float reinforceRatePerTick() const { return ReadField<float>("reinforceRatePerTick"); }
        void reinforceRatePerTick(float value) const { WriteField<float>("reinforceRatePerTick", value); }
        float reinforceContactFraction() const { return ReadField<float>("reinforceContactFraction"); }
        void reinforceContactFraction(float value) const { WriteField<float>("reinforceContactFraction", value); }
        float strainReinforceWeight() const { return ReadField<float>("strainReinforceWeight"); }
        void strainReinforceWeight(float value) const { WriteField<float>("strainReinforceWeight", value); }
        float reinforceInsolvencyMul() const { return ReadField<float>("reinforceInsolvencyMul"); }
        void reinforceInsolvencyMul(float value) const { WriteField<float>("reinforceInsolvencyMul", value); }
        float strainArmyCapWeight() const { return ReadField<float>("strainArmyCapWeight"); }
        void strainArmyCapWeight(float value) const { WriteField<float>("strainArmyCapWeight", value); }
        float popCostPerManpower() const { return ReadField<float>("popCostPerManpower"); }
        void popCostPerManpower(float value) const { WriteField<float>("popCostPerManpower", value); }
        bool enableAiSpawnPopCost() const { return ReadField<bool>("enableAiSpawnPopCost"); }
        void enableAiSpawnPopCost(bool value) const { WriteField<bool>("enableAiSpawnPopCost", value); }
        float reinforcePopFloor() const { return ReadField<float>("reinforcePopFloor"); }
        void reinforcePopFloor(float value) const { WriteField<float>("reinforcePopFloor", value); }
        float pocketAttritionPerTick() const { return ReadField<float>("pocketAttritionPerTick"); }
        void pocketAttritionPerTick(float value) const { WriteField<float>("pocketAttritionPerTick", value); }
        float pocketOrgCapFactor() const { return ReadField<float>("pocketOrgCapFactor"); }
        void pocketOrgCapFactor(float value) const { WriteField<float>("pocketOrgCapFactor", value); }
        int pocketGraceTicks() const { return ReadField<int>("pocketGraceTicks"); }
        void pocketGraceTicks(int value) const { WriteField<int>("pocketGraceTicks", value); }
        bool overlandTransitSupply() const { return ReadField<bool>("overlandTransitSupply"); }
        void overlandTransitSupply(bool value) const { WriteField<bool>("overlandTransitSupply", value); }
        int connectivityRefreshTicks() const { return ReadField<int>("connectivityRefreshTicks"); }
        void connectivityRefreshTicks(int value) const { WriteField<int>("connectivityRefreshTicks", value); }
        bool frontlineAiEnabled() const { return ReadField<bool>("frontlineAiEnabled"); }
        void frontlineAiEnabled(bool value) const { WriteField<bool>("frontlineAiEnabled", value); }
        bool frontlineDoctrineEnabled() const { return ReadField<bool>("frontlineDoctrineEnabled"); }
        void frontlineDoctrineEnabled(bool value) const { WriteField<bool>("frontlineDoctrineEnabled", value); }
        float frontlineStickyRadiusTiles() const { return ReadField<float>("frontlineStickyRadiusTiles"); }
        void frontlineStickyRadiusTiles(float value) const { WriteField<float>("frontlineStickyRadiusTiles", value); }
        float exploitAdvanceTiles() const { return ReadField<float>("exploitAdvanceTiles"); }
        void exploitAdvanceTiles(float value) const { WriteField<float>("exploitAdvanceTiles", value); }
        float exploitEnemyFreeRadiusTiles() const { return ReadField<float>("exploitEnemyFreeRadiusTiles"); }
        void exploitEnemyFreeRadiusTiles(float value) const { WriteField<float>("exploitEnemyFreeRadiusTiles", value); }
        float reserveBacksetTiles() const { return ReadField<float>("reserveBacksetTiles"); }
        void reserveBacksetTiles(float value) const { WriteField<float>("reserveBacksetTiles", value); }
        int militaryAiIntervalTicks() const { return ReadField<int>("militaryAiIntervalTicks"); }
        void militaryAiIntervalTicks(int value) const { WriteField<int>("militaryAiIntervalTicks", value); }
        int frontReevalMaxPerTick() const { return ReadField<int>("frontReevalMaxPerTick"); }
        void frontReevalMaxPerTick(int value) const { WriteField<int>("frontReevalMaxPerTick", value); }
        bool bodyCollisionEnabled() const { return ReadField<bool>("bodyCollisionEnabled"); }
        void bodyCollisionEnabled(bool value) const { WriteField<bool>("bodyCollisionEnabled", value); }
        float crowdSeparationPerTick() const { return ReadField<float>("crowdSeparationPerTick"); }
        void crowdSeparationPerTick(float value) const { WriteField<float>("crowdSeparationPerTick", value); }
        float crowdWarnThreshold() const { return ReadField<float>("crowdWarnThreshold"); }
        void crowdWarnThreshold(float value) const { WriteField<float>("crowdWarnThreshold", value); }
        float stackingRadiusTiles() const { return ReadField<float>("stackingRadiusTiles"); }
        void stackingRadiusTiles(float value) const { WriteField<float>("stackingRadiusTiles", value); }
        int stackingSoftCap() const { return ReadField<int>("stackingSoftCap"); }
        void stackingSoftCap(int value) const { WriteField<int>("stackingSoftCap", value); }
        float stackingManpowerAttritionPerExcess() const { return ReadField<float>("stackingManpowerAttritionPerExcess"); }
        void stackingManpowerAttritionPerExcess(float value) const { WriteField<float>("stackingManpowerAttritionPerExcess", value); }
        float stackingOrgAttritionPerExcess() const { return ReadField<float>("stackingOrgAttritionPerExcess"); }
        void stackingOrgAttritionPerExcess(float value) const { WriteField<float>("stackingOrgAttritionPerExcess", value); }
        float counterFadePx() const { return ReadField<float>("counterFadePx"); }
        void counterFadePx(float value) const { WriteField<float>("counterFadePx", value); }
        float counterHidePx() const { return ReadField<float>("counterHidePx"); }
        void counterHidePx(float value) const { WriteField<float>("counterHidePx", value); }
        float popInDuration() const { return ReadField<float>("popInDuration"); }
        void popInDuration(float value) const { WriteField<float>("popInDuration", value); }
        float counterDrawScale() const { return ReadField<float>("counterDrawScale"); }
        void counterDrawScale(float value) const { WriteField<float>("counterDrawScale", value); }
        bool counterSmoothingEnabled() const { return ReadField<bool>("counterSmoothingEnabled"); }
        void counterSmoothingEnabled(bool value) const { WriteField<bool>("counterSmoothingEnabled", value); }
        float counterSmoothTime() const { return ReadField<float>("counterSmoothTime"); }
        void counterSmoothTime(float value) const { WriteField<float>("counterSmoothTime", value); }
        float counterSmoothMaxLagTiles() const { return ReadField<float>("counterSmoothMaxLagTiles"); }
        void counterSmoothMaxLagTiles(float value) const { WriteField<float>("counterSmoothMaxLagTiles", value); }
        float counterSmoothSnapTiles() const { return ReadField<float>("counterSmoothSnapTiles"); }
        void counterSmoothSnapTiles(float value) const { WriteField<float>("counterSmoothSnapTiles", value); }
        float counterSmoothRebuildInterval() const { return ReadField<float>("counterSmoothRebuildInterval"); }
        void counterSmoothRebuildInterval(float value) const { WriteField<float>("counterSmoothRebuildInterval", value); }
        int counterSmoothMaxCounters() const { return ReadField<int>("counterSmoothMaxCounters"); }
        void counterSmoothMaxCounters(int value) const { WriteField<int>("counterSmoothMaxCounters", value); }
        float counterRebuildInterval() const { return ReadField<float>("counterRebuildInterval"); }
        void counterRebuildInterval(float value) const { WriteField<float>("counterRebuildInterval", value); }
        bool counterCullOffscreen() const { return ReadField<bool>("counterCullOffscreen"); }
        void counterCullOffscreen(bool value) const { WriteField<bool>("counterCullOffscreen", value); }
        float counterCullMarginTiles() const { return ReadField<float>("counterCullMarginTiles"); }
        void counterCullMarginTiles(float value) const { WriteField<float>("counterCullMarginTiles", value); }
        float counterDetailMinPx() const { return ReadField<float>("counterDetailMinPx"); }
        void counterDetailMinPx(float value) const { WriteField<float>("counterDetailMinPx", value); }
        float counterNumberMinPx() const { return ReadField<float>("counterNumberMinPx"); }
        void counterNumberMinPx(float value) const { WriteField<float>("counterNumberMinPx", value); }
        float counterDensityCellPx() const { return ReadField<float>("counterDensityCellPx"); }
        void counterDensityCellPx(float value) const { WriteField<float>("counterDensityCellPx", value); }
        int counterDensityMax() const { return ReadField<int>("counterDensityMax"); }
        void counterDensityMax(int value) const { WriteField<int>("counterDensityMax", value); }
        float counterAspect() const { return ReadField<float>("counterAspect"); }
        void counterAspect(float value) const { WriteField<float>("counterAspect", value); }
        float frameOutlineFraction() const { return ReadField<float>("frameOutlineFraction"); }
        void frameOutlineFraction(float value) const { WriteField<float>("frameOutlineFraction", value); }
        bool counterValueBarsEnabled() const { return ReadField<bool>("counterValueBarsEnabled"); }
        void counterValueBarsEnabled(bool value) const { WriteField<bool>("counterValueBarsEnabled", value); }
        float counterPlateBarFraction() const { return ReadField<float>("counterPlateBarFraction"); }
        void counterPlateBarFraction(float value) const { WriteField<float>("counterPlateBarFraction", value); }
        float counterBarGapFraction() const { return ReadField<float>("counterBarGapFraction"); }
        void counterBarGapFraction(float value) const { WriteField<float>("counterBarGapFraction", value); }
        float glyphInsetFraction() const { return ReadField<float>("glyphInsetFraction"); }
        void glyphInsetFraction(float value) const { WriteField<float>("glyphInsetFraction", value); }
        float glyphStrokeFraction() const { return ReadField<float>("glyphStrokeFraction"); }
        void glyphStrokeFraction(float value) const { WriteField<float>("glyphStrokeFraction", value); }
        bool counterIconStyle() const { return ReadField<bool>("counterIconStyle"); }
        void counterIconStyle(bool value) const { WriteField<bool>("counterIconStyle", value); }
        float iconTintLift() const { return ReadField<float>("iconTintLift"); }
        void iconTintLift(float value) const { WriteField<float>("iconTintLift", value); }
        float iconInsetFraction() const { return ReadField<float>("iconInsetFraction"); }
        void iconInsetFraction(float value) const { WriteField<float>("iconInsetFraction", value); }
        float iconShadeFloor() const { return ReadField<float>("iconShadeFloor"); }
        void iconShadeFloor(float value) const { WriteField<float>("iconShadeFloor", value); }
        bool ownershipReadoutEnabled() const { return ReadField<bool>("ownershipReadoutEnabled"); }
        void ownershipReadoutEnabled(bool value) const { WriteField<bool>("ownershipReadoutEnabled", value); }
        float hostileTintStrength() const { return ReadField<float>("hostileTintStrength"); }
        void hostileTintStrength(float value) const { WriteField<float>("hostileTintStrength", value); }
        float bystanderDesaturate() const { return ReadField<float>("bystanderDesaturate"); }
        void bystanderDesaturate(float value) const { WriteField<float>("bystanderDesaturate", value); }
        float bystanderAlpha() const { return ReadField<float>("bystanderAlpha"); }
        void bystanderAlpha(float value) const { WriteField<float>("bystanderAlpha", value); }
        bool megaArmyEnabled() const { return ReadField<bool>("megaArmyEnabled"); }
        void megaArmyEnabled(bool value) const { WriteField<bool>("megaArmyEnabled", value); }
        float megaArmyPx() const { return ReadField<float>("megaArmyPx"); }
        void megaArmyPx(float value) const { WriteField<float>("megaArmyPx", value); }
        float megaArmyCellPx() const { return ReadField<float>("megaArmyCellPx"); }
        void megaArmyCellPx(float value) const { WriteField<float>("megaArmyCellPx", value); }
        float megaArmyScale() const { return ReadField<float>("megaArmyScale"); }
        void megaArmyScale(float value) const { WriteField<float>("megaArmyScale", value); }
        float megaArmyGrowthPower() const { return ReadField<float>("megaArmyGrowthPower"); }
        void megaArmyGrowthPower(float value) const { WriteField<float>("megaArmyGrowthPower", value); }
        float megaArmyMaxScale() const { return ReadField<float>("megaArmyMaxScale"); }
        void megaArmyMaxScale(float value) const { WriteField<float>("megaArmyMaxScale", value); }
        float crackStartFraction() const { return ReadField<float>("crackStartFraction"); }
        void crackStartFraction(float value) const { WriteField<float>("crackStartFraction", value); }
        float shatterStartFraction() const { return ReadField<float>("shatterStartFraction"); }
        void shatterStartFraction(float value) const { WriteField<float>("shatterStartFraction", value); }
        float shatterFullFraction() const { return ReadField<float>("shatterFullFraction"); }
        void shatterFullFraction(float value) const { WriteField<float>("shatterFullFraction", value); }
        float shatterMaxGapFraction() const { return ReadField<float>("shatterMaxGapFraction"); }
        void shatterMaxGapFraction(float value) const { WriteField<float>("shatterMaxGapFraction", value); }
        float shatterMaxRotationDeg() const { return ReadField<float>("shatterMaxRotationDeg"); }
        void shatterMaxRotationDeg(float value) const { WriteField<float>("shatterMaxRotationDeg", value); }
        int shatterDebrisPerChunk() const { return ReadField<int>("shatterDebrisPerChunk"); }
        void shatterDebrisPerChunk(int value) const { WriteField<int>("shatterDebrisPerChunk", value); }
        float shatterDebrisSizeFraction() const { return ReadField<float>("shatterDebrisSizeFraction"); }
        void shatterDebrisSizeFraction(float value) const { WriteField<float>("shatterDebrisSizeFraction", value); }
        float shatterDebrisDriftFraction() const { return ReadField<float>("shatterDebrisDriftFraction"); }
        void shatterDebrisDriftFraction(float value) const { WriteField<float>("shatterDebrisDriftFraction", value); }
        float crackWidthFraction() const { return ReadField<float>("crackWidthFraction"); }
        void crackWidthFraction(float value) const { WriteField<float>("crackWidthFraction", value); }
        float crackDarken() const { return ReadField<float>("crackDarken"); }
        void crackDarken(float value) const { WriteField<float>("crackDarken", value); }
        float glyphShatterFadeMax() const { return ReadField<float>("glyphShatterFadeMax"); }
        void glyphShatterFadeMax(float value) const { WriteField<float>("glyphShatterFadeMax", value); }
        float orgCrackStartFraction() const { return ReadField<float>("orgCrackStartFraction"); }
        void orgCrackStartFraction(float value) const { WriteField<float>("orgCrackStartFraction", value); }
        float chunkStartFraction() const { return ReadField<float>("chunkStartFraction"); }
        void chunkStartFraction(float value) const { WriteField<float>("chunkStartFraction", value); }
        float chunkFullFraction() const { return ReadField<float>("chunkFullFraction"); }
        void chunkFullFraction(float value) const { WriteField<float>("chunkFullFraction", value); }
        float chunkMaxMissingFraction() const { return ReadField<float>("chunkMaxMissingFraction"); }
        void chunkMaxMissingFraction(float value) const { WriteField<float>("chunkMaxMissingFraction", value); }
        float chunkBiteDepthFraction() const { return ReadField<float>("chunkBiteDepthFraction"); }
        void chunkBiteDepthFraction(float value) const { WriteField<float>("chunkBiteDepthFraction", value); }
        float orgCrackWeight() const { return ReadField<float>("orgCrackWeight"); }
        void orgCrackWeight(float value) const { WriteField<float>("orgCrackWeight", value); }
        int orgCrackRecentCombatTicks() const { return ReadField<int>("orgCrackRecentCombatTicks"); }
        void orgCrackRecentCombatTicks(int value) const { WriteField<int>("orgCrackRecentCombatTicks", value); }
        void* warFrontStyle() const { return ReadField<void*>("warFrontStyle"); }
        void warFrontStyle(void* value) const { WriteField<void*>("warFrontStyle", value); }
        bool battleLinkLinesEnabled() const { return ReadField<bool>("battleLinkLinesEnabled"); }
        void battleLinkLinesEnabled(bool value) const { WriteField<bool>("battleLinkLinesEnabled", value); }
        bool fxEnabled() const { return ReadField<bool>("fxEnabled"); }
        void fxEnabled(bool value) const { WriteField<bool>("fxEnabled", value); }
        int fxMaxParticles() const { return ReadField<int>("fxMaxParticles"); }
        void fxMaxParticles(int value) const { WriteField<int>("fxMaxParticles", value); }
        int fxMaxSpawnsPerFrame() const { return ReadField<int>("fxMaxSpawnsPerFrame"); }
        void fxMaxSpawnsPerFrame(int value) const { WriteField<int>("fxMaxSpawnsPerFrame", value); }
        float fxFadePx() const { return ReadField<float>("fxFadePx"); }
        void fxFadePx(float value) const { WriteField<float>("fxFadePx", value); }
        float fxHidePx() const { return ReadField<float>("fxHidePx"); }
        void fxHidePx(float value) const { WriteField<float>("fxHidePx", value); }
        bool fxFirefightsEnabled() const { return ReadField<bool>("fxFirefightsEnabled"); }
        void fxFirefightsEnabled(bool value) const { WriteField<bool>("fxFirefightsEnabled", value); }
        float fxShotsPerSecond() const { return ReadField<float>("fxShotsPerSecond"); }
        void fxShotsPerSecond(float value) const { WriteField<float>("fxShotsPerSecond", value); }
        float fxFireIntensityRef() const { return ReadField<float>("fxFireIntensityRef"); }
        void fxFireIntensityRef(float value) const { WriteField<float>("fxFireIntensityRef", value); }
        float fxTracerSpeedTiles() const { return ReadField<float>("fxTracerSpeedTiles"); }
        void fxTracerSpeedTiles(float value) const { WriteField<float>("fxTracerSpeedTiles", value); }
        float fxTracerLengthTiles() const { return ReadField<float>("fxTracerLengthTiles"); }
        void fxTracerLengthTiles(float value) const { WriteField<float>("fxTracerLengthTiles", value); }
        float fxTracerWidthTiles() const { return ReadField<float>("fxTracerWidthTiles"); }
        void fxTracerWidthTiles(float value) const { WriteField<float>("fxTracerWidthTiles", value); }
        float fxImpactScaleTiles() const { return ReadField<float>("fxImpactScaleTiles"); }
        void fxImpactScaleTiles(float value) const { WriteField<float>("fxImpactScaleTiles", value); }
        float fxBattleSmokePerSecond() const { return ReadField<float>("fxBattleSmokePerSecond"); }
        void fxBattleSmokePerSecond(float value) const { WriteField<float>("fxBattleSmokePerSecond", value); }
        bool fxShellsEnabled() const { return ReadField<bool>("fxShellsEnabled"); }
        void fxShellsEnabled(bool value) const { WriteField<bool>("fxShellsEnabled", value); }
        float fxShellSpeedTiles() const { return ReadField<float>("fxShellSpeedTiles"); }
        void fxShellSpeedTiles(float value) const { WriteField<float>("fxShellSpeedTiles", value); }
        float fxShellArcFraction() const { return ReadField<float>("fxShellArcFraction"); }
        void fxShellArcFraction(float value) const { WriteField<float>("fxShellArcFraction", value); }
        float fxBurstRadiusTiles() const { return ReadField<float>("fxBurstRadiusTiles"); }
        void fxBurstRadiusTiles(float value) const { WriteField<float>("fxBurstRadiusTiles", value); }
        float fxExplosionRadiusScale() const { return ReadField<float>("fxExplosionRadiusScale"); }
        void fxExplosionRadiusScale(float value) const { WriteField<float>("fxExplosionRadiusScale", value); }
        bool fxDustEnabled() const { return ReadField<bool>("fxDustEnabled"); }
        void fxDustEnabled(bool value) const { WriteField<bool>("fxDustEnabled", value); }
        float fxMarchDustPerSecond() const { return ReadField<float>("fxMarchDustPerSecond"); }
        void fxMarchDustPerSecond(float value) const { WriteField<float>("fxMarchDustPerSecond", value); }
        float fxRetreatDustPerSecond() const { return ReadField<float>("fxRetreatDustPerSecond"); }
        void fxRetreatDustPerSecond(float value) const { WriteField<float>("fxRetreatDustPerSecond", value); }
        bool fxMusterPuffEnabled() const { return ReadField<bool>("fxMusterPuffEnabled"); }
        void fxMusterPuffEnabled(bool value) const { WriteField<bool>("fxMusterPuffEnabled", value); }
        bool fxConquestFlecks() const { return ReadField<bool>("fxConquestFlecks"); }
        void fxConquestFlecks(bool value) const { WriteField<bool>("fxConquestFlecks", value); }
        float fxConquestFleckChance() const { return ReadField<float>("fxConquestFleckChance"); }
        void fxConquestFleckChance(float value) const { WriteField<float>("fxConquestFleckChance", value); }
        float fxMidairPopsPerSecond() const { return ReadField<float>("fxMidairPopsPerSecond"); }
        void fxMidairPopsPerSecond(float value) const { WriteField<float>("fxMidairPopsPerSecond", value); }
        bool fxMuzzleFlashEnabled() const { return ReadField<bool>("fxMuzzleFlashEnabled"); }
        void fxMuzzleFlashEnabled(bool value) const { WriteField<bool>("fxMuzzleFlashEnabled", value); }
        float fxMuzzleFlashScaleTiles() const { return ReadField<float>("fxMuzzleFlashScaleTiles"); }
        void fxMuzzleFlashScaleTiles(float value) const { WriteField<float>("fxMuzzleFlashScaleTiles", value); }
        int fxImpactSparks() const { return ReadField<int>("fxImpactSparks"); }
        void fxImpactSparks(int value) const { WriteField<int>("fxImpactSparks", value); }
        bool fxScorchEnabled() const { return ReadField<bool>("fxScorchEnabled"); }
        void fxScorchEnabled(bool value) const { WriteField<bool>("fxScorchEnabled", value); }
        float fxScorchChance() const { return ReadField<float>("fxScorchChance"); }
        void fxScorchChance(float value) const { WriteField<float>("fxScorchChance", value); }
        float fxScorchLifeSec() const { return ReadField<float>("fxScorchLifeSec"); }
        void fxScorchLifeSec(float value) const { WriteField<float>("fxScorchLifeSec", value); }
        float fxScorchScaleTiles() const { return ReadField<float>("fxScorchScaleTiles"); }
        void fxScorchScaleTiles(float value) const { WriteField<float>("fxScorchScaleTiles", value); }
        float fxCapitalFireDurationSec() const { return ReadField<float>("fxCapitalFireDurationSec"); }
        void fxCapitalFireDurationSec(float value) const { WriteField<float>("fxCapitalFireDurationSec", value); }
        float fxCapitalFirePerSecond() const { return ReadField<float>("fxCapitalFirePerSecond"); }
        void fxCapitalFirePerSecond(float value) const { WriteField<float>("fxCapitalFirePerSecond", value); }
        bool contactGlyphsEnabled() const { return ReadField<bool>("contactGlyphsEnabled"); }
        void contactGlyphsEnabled(bool value) const { WriteField<bool>("contactGlyphsEnabled", value); }
        bool tacticalBattlesEnabled() const { return ReadField<bool>("tacticalBattlesEnabled"); }
        void tacticalBattlesEnabled(bool value) const { WriteField<bool>("tacticalBattlesEnabled", value); }
        bool warAudioEnabled() const { return ReadField<bool>("warAudioEnabled"); }
        void warAudioEnabled(bool value) const { WriteField<bool>("warAudioEnabled", value); }
        void* warAudioSet() const { return ReadField<void*>("warAudioSet"); }
        void warAudioSet(void* value) const { WriteField<void*>("warAudioSet", value); }
        float warAudioMasterVolume() const { return ReadField<float>("warAudioMasterVolume"); }
        void warAudioMasterVolume(float value) const { WriteField<float>("warAudioMasterVolume", value); }
        float warAudioFadePx() const { return ReadField<float>("warAudioFadePx"); }
        void warAudioFadePx(float value) const { WriteField<float>("warAudioFadePx", value); }
        float warAudioHidePx() const { return ReadField<float>("warAudioHidePx"); }
        void warAudioHidePx(float value) const { WriteField<float>("warAudioHidePx", value); }
        float warAudioIntensityRef() const { return ReadField<float>("warAudioIntensityRef"); }
        void warAudioIntensityRef(float value) const { WriteField<float>("warAudioIntensityRef", value); }
        float warAudioMinBattleVolume() const { return ReadField<float>("warAudioMinBattleVolume"); }
        void warAudioMinBattleVolume(float value) const { WriteField<float>("warAudioMinBattleVolume", value); }
        float warAudioFadeInPerSec() const { return ReadField<float>("warAudioFadeInPerSec"); }
        void warAudioFadeInPerSec(float value) const { WriteField<float>("warAudioFadeInPerSec", value); }
        float warAudioFadeOutPerSec() const { return ReadField<float>("warAudioFadeOutPerSec"); }
        void warAudioFadeOutPerSec(float value) const { WriteField<float>("warAudioFadeOutPerSec", value); }
        float warAudioCrossfadeSec() const { return ReadField<float>("warAudioCrossfadeSec"); }
        void warAudioCrossfadeSec(float value) const { WriteField<float>("warAudioCrossfadeSec", value); }
        float overstretchOnRatio() const { return ReadField<float>("overstretchOnRatio"); }
        void overstretchOnRatio(float value) const { WriteField<float>("overstretchOnRatio", value); }
        float overstretchOffRatio() const { return ReadField<float>("overstretchOffRatio"); }
        void overstretchOffRatio(float value) const { WriteField<float>("overstretchOffRatio", value); }
        int encircleProbeDirections() const { return ReadField<int>("encircleProbeDirections"); }
        void encircleProbeDirections(int value) const { WriteField<int>("encircleProbeDirections", value); }
        float salientMinEnemyMass() const { return ReadField<float>("salientMinEnemyMass"); }
        void salientMinEnemyMass(float value) const { WriteField<float>("salientMinEnemyMass", value); }
        float playerRecruitBuildTicks() const { return ReadField<float>("playerRecruitBuildTicks"); }
        void playerRecruitBuildTicks(float value) const { WriteField<float>("playerRecruitBuildTicks", value); }
        float playerRecruitTreasuryCost() const { return ReadField<float>("playerRecruitTreasuryCost"); }
        void playerRecruitTreasuryCost(float value) const { WriteField<float>("playerRecruitTreasuryCost", value); }
        float armsPerSoldier() const { return ReadField<float>("armsPerSoldier"); }
        void armsPerSoldier(float value) const { WriteField<float>("armsPerSoldier", value); }
        float meleePerSoldier() const { return ReadField<float>("meleePerSoldier"); }
        void meleePerSoldier(float value) const { WriteField<float>("meleePerSoldier", value); }
        float armourPerSoldier() const { return ReadField<float>("armourPerSoldier"); }
        void armourPerSoldier(float value) const { WriteField<float>("armourPerSoldier", value); }
        float vehiclesPerSoldier() const { return ReadField<float>("vehiclesPerSoldier"); }
        void vehiclesPerSoldier(float value) const { WriteField<float>("vehiclesPerSoldier", value); }
        bool combatSupplyDrain() const { return ReadField<bool>("combatSupplyDrain"); }
        void combatSupplyDrain(bool value) const { WriteField<bool>("combatSupplyDrain", value); }
        bool weaponDesignEnabled() const { return ReadField<bool>("weaponDesignEnabled"); }
        void weaponDesignEnabled(bool value) const { WriteField<bool>("weaponDesignEnabled", value); }
        float playerRecruitPopFloor() const { return ReadField<float>("playerRecruitPopFloor"); }
        void playerRecruitPopFloor(float value) const { WriteField<float>("playerRecruitPopFloor", value); }
        float playerRecruitPopCostMul() const { return ReadField<float>("playerRecruitPopCostMul"); }
        void playerRecruitPopCostMul(float value) const { WriteField<float>("playerRecruitPopCostMul", value); }
        float playerSpawnSearchRadiusTiles() const { return ReadField<float>("playerSpawnSearchRadiusTiles"); }
        void playerSpawnSearchRadiusTiles(float value) const { WriteField<float>("playerSpawnSearchRadiusTiles", value); }
        int playerCityRecruitSlots() const { return ReadField<int>("playerCityRecruitSlots"); }
        void playerCityRecruitSlots(int value) const { WriteField<int>("playerCityRecruitSlots", value); }
        int playerCityMusterRadiusTiles() const { return ReadField<int>("playerCityMusterRadiusTiles"); }
        void playerCityMusterRadiusTiles(int value) const { WriteField<int>("playerCityMusterRadiusTiles", value); }
        float draftOrgFraction() const { return ReadField<float>("draftOrgFraction"); }
        void draftOrgFraction(float value) const { WriteField<float>("draftOrgFraction", value); }
        int playerDraftCooldownTicks() const { return ReadField<int>("playerDraftCooldownTicks"); }
        void playerDraftCooldownTicks(int value) const { WriteField<int>("playerDraftCooldownTicks", value); }
        bool aiRecruitProductionLines() const { return ReadField<bool>("aiRecruitProductionLines"); }
        void aiRecruitProductionLines(bool value) const { WriteField<bool>("aiRecruitProductionLines", value); }
        float aiRecruitBuildTicks() const { return ReadField<float>("aiRecruitBuildTicks"); }
        void aiRecruitBuildTicks(float value) const { WriteField<float>("aiRecruitBuildTicks", value); }
        float aiRecruitSpeedMaxMul() const { return ReadField<float>("aiRecruitSpeedMaxMul"); }
        void aiRecruitSpeedMaxMul(float value) const { WriteField<float>("aiRecruitSpeedMaxMul", value); }
        int aiRecruitMaxParallelLines() const { return ReadField<int>("aiRecruitMaxParallelLines"); }
        void aiRecruitMaxParallelLines(int value) const { WriteField<int>("aiRecruitMaxParallelLines", value); }
        int aiRecruitMaxDeploysPerTick() const { return ReadField<int>("aiRecruitMaxDeploysPerTick"); }
        void aiRecruitMaxDeploysPerTick(int value) const { WriteField<int>("aiRecruitMaxDeploysPerTick", value); }
        int aiSpawnCitySamples() const { return ReadField<int>("aiSpawnCitySamples"); }
        void aiSpawnCitySamples(int value) const { WriteField<int>("aiSpawnCitySamples", value); }
        float aiSpawnCrowdRadiusTiles() const { return ReadField<float>("aiSpawnCrowdRadiusTiles"); }
        void aiSpawnCrowdRadiusTiles(float value) const { WriteField<float>("aiSpawnCrowdRadiusTiles", value); }
        int aiSpawnRecentMemory() const { return ReadField<int>("aiSpawnRecentMemory"); }
        void aiSpawnRecentMemory(int value) const { WriteField<int>("aiSpawnRecentMemory", value); }
        float aiSpawnRecentPenalty() const { return ReadField<float>("aiSpawnRecentPenalty"); }
        void aiSpawnRecentPenalty(float value) const { WriteField<float>("aiSpawnRecentPenalty", value); }
        int playerFrontReevalTicks() const { return ReadField<int>("playerFrontReevalTicks"); }
        void playerFrontReevalTicks(int value) const { WriteField<int>("playerFrontReevalTicks", value); }
        float armyCreateCostPerSoldier() const { return ReadField<float>("armyCreateCostPerSoldier"); }
        void armyCreateCostPerSoldier(float value) const { WriteField<float>("armyCreateCostPerSoldier", value); }
        float playerPickSlackPixels() const { return ReadField<float>("playerPickSlackPixels"); }
        void playerPickSlackPixels(float value) const { WriteField<float>("playerPickSlackPixels", value); }
        float playerFrontPickRadiusTiles() const { return ReadField<float>("playerFrontPickRadiusTiles"); }
        void playerFrontPickRadiusTiles(float value) const { WriteField<float>("playerFrontPickRadiusTiles", value); }
        int playerNavBlockedCooldownTicks() const { return ReadField<int>("playerNavBlockedCooldownTicks"); }
        void playerNavBlockedCooldownTicks(int value) const { WriteField<int>("playerNavBlockedCooldownTicks", value); }
        float playerOrderWithdrawDot() const { return ReadField<float>("playerOrderWithdrawDot"); }
        void playerOrderWithdrawDot(float value) const { WriteField<float>("playerOrderWithdrawDot", value); }
        float playerOrderPathMinDistTiles() const { return ReadField<float>("playerOrderPathMinDistTiles"); }
        void playerOrderPathMinDistTiles(float value) const { WriteField<float>("playerOrderPathMinDistTiles", value); }
        bool levyClockEnabled() const { return ReadField<bool>("levyClockEnabled"); }
        void levyClockEnabled(bool value) const { WriteField<bool>("levyClockEnabled", value); }
        float levyToleranceAncientYears() const { return ReadField<float>("levyToleranceAncientYears"); }
        void levyToleranceAncientYears(float value) const { WriteField<float>("levyToleranceAncientYears", value); }
        float levyToleranceEarlyModernYears() const { return ReadField<float>("levyToleranceEarlyModernYears"); }
        void levyToleranceEarlyModernYears(float value) const { WriteField<float>("levyToleranceEarlyModernYears", value); }
        float levyToleranceIndustrialYears() const { return ReadField<float>("levyToleranceIndustrialYears"); }
        void levyToleranceIndustrialYears(float value) const { WriteField<float>("levyToleranceIndustrialYears", value); }
        float levyToleranceGreatWarYears() const { return ReadField<float>("levyToleranceGreatWarYears"); }
        void levyToleranceGreatWarYears(float value) const { WriteField<float>("levyToleranceGreatWarYears", value); }
        float levyToleranceModernYears() const { return ReadField<float>("levyToleranceModernYears"); }
        void levyToleranceModernYears(float value) const { WriteField<float>("levyToleranceModernYears", value); }
        float levyStandingSlotsAncient() const { return ReadField<float>("levyStandingSlotsAncient"); }
        void levyStandingSlotsAncient(float value) const { WriteField<float>("levyStandingSlotsAncient", value); }
        float levyStandingSlotsEarlyModern() const { return ReadField<float>("levyStandingSlotsEarlyModern"); }
        void levyStandingSlotsEarlyModern(float value) const { WriteField<float>("levyStandingSlotsEarlyModern", value); }
        float levyStandingSlotsIndustrial() const { return ReadField<float>("levyStandingSlotsIndustrial"); }
        void levyStandingSlotsIndustrial(float value) const { WriteField<float>("levyStandingSlotsIndustrial", value); }
        float levyStandingSlotsGreatWar() const { return ReadField<float>("levyStandingSlotsGreatWar"); }
        void levyStandingSlotsGreatWar(float value) const { WriteField<float>("levyStandingSlotsGreatWar", value); }
        float levyStandingSlotsModern() const { return ReadField<float>("levyStandingSlotsModern"); }
        void levyStandingSlotsModern(float value) const { WriteField<float>("levyStandingSlotsModern", value); }
        float levyStandingSlotsPerMilFactory() const { return ReadField<float>("levyStandingSlotsPerMilFactory"); }
        void levyStandingSlotsPerMilFactory(float value) const { WriteField<float>("levyStandingSlotsPerMilFactory", value); }
        float levyUpkeepSlope() const { return ReadField<float>("levyUpkeepSlope"); }
        void levyUpkeepSlope(float value) const { WriteField<float>("levyUpkeepSlope", value); }
        float levyUpkeepMax() const { return ReadField<float>("levyUpkeepMax"); }
        void levyUpkeepMax(float value) const { WriteField<float>("levyUpkeepMax", value); }
        float levyOrgThreshold() const { return ReadField<float>("levyOrgThreshold"); }
        void levyOrgThreshold(float value) const { WriteField<float>("levyOrgThreshold", value); }
        float levyOrgSlope() const { return ReadField<float>("levyOrgSlope"); }
        void levyOrgSlope(float value) const { WriteField<float>("levyOrgSlope", value); }
        float levyOrgFloor() const { return ReadField<float>("levyOrgFloor"); }
        void levyOrgFloor(float value) const { WriteField<float>("levyOrgFloor", value); }
        float levyDesertThreshold() const { return ReadField<float>("levyDesertThreshold"); }
        void levyDesertThreshold(float value) const { WriteField<float>("levyDesertThreshold", value); }
        float levyDesertFraction() const { return ReadField<float>("levyDesertFraction"); }
        void levyDesertFraction(float value) const { WriteField<float>("levyDesertFraction", value); }
        float levyHomeUnrestPerTick() const { return ReadField<float>("levyHomeUnrestPerTick"); }
        void levyHomeUnrestPerTick(float value) const { WriteField<float>("levyHomeUnrestPerTick", value); }
        float levyDismissManpowerReturn() const { return ReadField<float>("levyDismissManpowerReturn"); }
        void levyDismissManpowerReturn(float value) const { WriteField<float>("levyDismissManpowerReturn", value); }
        float levyDismissKitReturn() const { return ReadField<float>("levyDismissKitReturn"); }
        void levyDismissKitReturn(float value) const { WriteField<float>("levyDismissKitReturn", value); }
        bool reinforceDrawsEquipment() const { return ReadField<bool>("reinforceDrawsEquipment"); }
        void reinforceDrawsEquipment(bool value) const { WriteField<bool>("reinforceDrawsEquipment", value); }
        float reinforceKitFloor() const { return ReadField<float>("reinforceKitFloor"); }
        void reinforceKitFloor(float value) const { WriteField<float>("reinforceKitFloor", value); }
        bool arrearsDesertionEnabled() const { return ReadField<bool>("arrearsDesertionEnabled"); }
        void arrearsDesertionEnabled(bool value) const { WriteField<bool>("arrearsDesertionEnabled", value); }
        float arrearsDesertFraction() const { return ReadField<float>("arrearsDesertFraction"); }
        void arrearsDesertFraction(float value) const { WriteField<float>("arrearsDesertFraction", value); }
        float arrearsStandingMul() const { return ReadField<float>("arrearsStandingMul"); }
        void arrearsStandingMul(float value) const { WriteField<float>("arrearsStandingMul", value); }
        float arrearsLevyMul() const { return ReadField<float>("arrearsLevyMul"); }
        void arrearsLevyMul(float value) const { WriteField<float>("arrearsLevyMul", value); }
        float arrearsOrgLossPerTick() const { return ReadField<float>("arrearsOrgLossPerTick"); }
        void arrearsOrgLossPerTick(float value) const { WriteField<float>("arrearsOrgLossPerTick", value); }
        float wartimeUpkeepLongWarSlope() const { return ReadField<float>("wartimeUpkeepLongWarSlope"); }
        void wartimeUpkeepLongWarSlope(float value) const { WriteField<float>("wartimeUpkeepLongWarSlope", value); }
        float wartimeUpkeepLongWarMax() const { return ReadField<float>("wartimeUpkeepLongWarMax"); }
        void wartimeUpkeepLongWarMax(float value) const { WriteField<float>("wartimeUpkeepLongWarMax", value); }
    };
}
