#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NationInternals : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationInternals(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NationInternals") {}
    public:
        float Pool(int kind) const { void* __callArgs[] = { &kind }; return CallValue<float>("Pool", __callArgs, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        float population() const { return ReadField<float>("population"); }
        void population(float value) const { WriteField<float>("population", value); }
        float popCapacity() const { return ReadField<float>("popCapacity"); }
        void popCapacity(float value) const { WriteField<float>("popCapacity", value); }
        float popGrowthPerTick() const { return ReadField<float>("popGrowthPerTick"); }
        void popGrowthPerTick(float value) const { WriteField<float>("popGrowthPerTick", value); }
        float popGainedLastTick() const { return ReadField<float>("popGainedLastTick"); }
        void popGainedLastTick(float value) const { WriteField<float>("popGainedLastTick", value); }
        float popLostLastTick() const { return ReadField<float>("popLostLastTick"); }
        void popLostLastTick(float value) const { WriteField<float>("popLostLastTick", value); }
        float popDrainAccum() const { return ReadField<float>("popDrainAccum"); }
        void popDrainAccum(float value) const { WriteField<float>("popDrainAccum", value); }
        float welfareGrowthTaper() const { return ReadField<float>("welfareGrowthTaper"); }
        void welfareGrowthTaper(float value) const { WriteField<float>("welfareGrowthTaper", value); }
        float weightedTileCount() const { return ReadField<float>("weightedTileCount"); }
        void weightedTileCount(float value) const { WriteField<float>("weightedTileCount", value); }
        float warDeadAccum() const { return ReadField<float>("warDeadAccum"); }
        void warDeadAccum(float value) const { WriteField<float>("warDeadAccum", value); }
        float aggressionBank() const { return ReadField<float>("aggressionBank"); }
        void aggressionBank(float value) const { WriteField<float>("aggressionBank", value); }
        float aggressionMassing() const { return ReadField<float>("aggressionMassing"); }
        void aggressionMassing(float value) const { WriteField<float>("aggressionMassing", value); }
        int aggressionMassingOn() const { return ReadField<int>("aggressionMassingOn"); }
        void aggressionMassingOn(int value) const { WriteField<int>("aggressionMassingOn", value); }
        float aggressionThreatAround() const { return ReadField<float>("aggressionThreatAround"); }
        void aggressionThreatAround(float value) const { WriteField<float>("aggressionThreatAround", value); }
        int stagingTargetId() const { return ReadField<int>("stagingTargetId"); }
        void stagingTargetId(int value) const { WriteField<int>("stagingTargetId", value); }
        int stagingUntilTick() const { return ReadField<int>("stagingUntilTick"); }
        void stagingUntilTick(int value) const { WriteField<int>("stagingUntilTick", value); }
        void* aggressionLog() const { return ReadField<void*>("aggressionLog"); }
        int aggressionLogCount() const { return ReadField<int>("aggressionLogCount"); }
        void aggressionLogCount(int value) const { WriteField<int>("aggressionLogCount", value); }
        int aggressionExpelYear() const { return ReadField<int>("aggressionExpelYear"); }
        void aggressionExpelYear(int value) const { WriteField<int>("aggressionExpelYear", value); }
        float aggressionExpelThisYear() const { return ReadField<float>("aggressionExpelThisYear"); }
        void aggressionExpelThisYear(float value) const { WriteField<float>("aggressionExpelThisYear", value); }
        float techScore() const { return ReadField<float>("techScore"); }
        void techScore(float value) const { WriteField<float>("techScore", value); }
        int era() const { return ReadField<int>("era"); }
        void era(int value) const { WriteField<int>("era", value); }
        int buildings() const { return ReadField<int>("buildings"); }
        void buildings(int value) const { WriteField<int>("buildings", value); }
        void* researched() const { return ReadField<void*>("researched"); }
        void researched(void* value) const { WriteField<void*>("researched", value); }
        void* slotTech() const { return ReadField<void*>("slotTech"); }
        void* slotProgress() const { return ReadField<void*>("slotProgress"); }
        void* slotBank() const { return ReadField<void*>("slotBank"); }
        void* researchQueue() const { return ReadField<void*>("researchQueue"); }
        float researchRate() const { return ReadField<float>("researchRate"); }
        void researchRate(float value) const { WriteField<float>("researchRate", value); }
        int researchAuto() const { return ReadField<int>("researchAuto"); }
        void researchAuto(int value) const { WriteField<int>("researchAuto", value); }
        int researchedCount() const { return ReadField<int>("researchedCount"); }
        void researchedCount(int value) const { WriteField<int>("researchedCount", value); }
        void* mods() const { return ReadField<void*>("mods"); }
        void mods(void* value) const { WriteField<void*>("mods", value); }
        int nextCoercionTick() const { return ReadField<int>("nextCoercionTick"); }
        void nextCoercionTick(int value) const { WriteField<int>("nextCoercionTick", value); }
        int nextWarDeclareTick() const { return ReadField<int>("nextWarDeclareTick"); }
        void nextWarDeclareTick(int value) const { WriteField<int>("nextWarDeclareTick", value); }
        float civFactories() const { return ReadField<float>("civFactories"); }
        void civFactories(float value) const { WriteField<float>("civFactories", value); }
        float milFactories() const { return ReadField<float>("milFactories"); }
        void milFactories(float value) const { WriteField<float>("milFactories", value); }
        float civFactoriesBilled() const { return ReadField<float>("civFactoriesBilled"); }
        void civFactoriesBilled(float value) const { WriteField<float>("civFactoriesBilled", value); }
        float milFactoriesBilled() const { return ReadField<float>("milFactoriesBilled"); }
        void milFactoriesBilled(float value) const { WriteField<float>("milFactoriesBilled", value); }
        float resourceImportCostPerTick() const { return ReadField<float>("resourceImportCostPerTick"); }
        void resourceImportCostPerTick(float value) const { WriteField<float>("resourceImportCostPerTick", value); }
        int milFactoryCount() const { return ReadField<int>("milFactoryCount"); }
        void milFactoryCount(int value) const { WriteField<int>("milFactoryCount", value); }
        float arms() const { return ReadField<float>("arms"); }
        void arms(float value) const { WriteField<float>("arms", value); }
        float melee() const { return ReadField<float>("melee"); }
        void melee(float value) const { WriteField<float>("melee", value); }
        float armour() const { return ReadField<float>("armour"); }
        void armour(float value) const { WriteField<float>("armour", value); }
        float vehicles() const { return ReadField<float>("vehicles"); }
        void vehicles(float value) const { WriteField<float>("vehicles", value); }
        float artillery() const { return ReadField<float>("artillery"); }
        void artillery(float value) const { WriteField<float>("artillery", value); }
        void* stock() const { return ReadField<void*>("stock"); }
        void* equipLedger() const { return ReadField<void*>("equipLedger"); }
        float manpower() const { return ReadField<float>("manpower"); }
        void manpower(float value) const { WriteField<float>("manpower", value); }
        float manpowerRefitAccum() const { return ReadField<float>("manpowerRefitAccum"); }
        void manpowerRefitAccum(float value) const { WriteField<float>("manpowerRefitAccum", value); }
        float manpowerRefitLast() const { return ReadField<float>("manpowerRefitLast"); }
        void manpowerRefitLast(float value) const { WriteField<float>("manpowerRefitLast", value); }
        void* weapons() const { return ReadField<void*>("weapons"); }
        void weapons(void* value) const { WriteField<void*>("weapons", value); }
        float researchBuildings() const { return ReadField<float>("researchBuildings"); }
        void researchBuildings(float value) const { WriteField<float>("researchBuildings", value); }
        float housingBuildings() const { return ReadField<float>("housingBuildings"); }
        void housingBuildings(float value) const { WriteField<float>("housingBuildings", value); }
        float trainingBuildings() const { return ReadField<float>("trainingBuildings"); }
        void trainingBuildings(float value) const { WriteField<float>("trainingBuildings", value); }
        float civMinistryTopPrice() const { return ReadField<float>("civMinistryTopPrice"); }
        void civMinistryTopPrice(float value) const { WriteField<float>("civMinistryTopPrice", value); }
        float milMinistryTopPrice() const { return ReadField<float>("milMinistryTopPrice"); }
        void milMinistryTopPrice(float value) const { WriteField<float>("milMinistryTopPrice", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void taxRate(float value) const { WriteField<float>("taxRate", value); }
        float socialSpending() const { return ReadField<float>("socialSpending"); }
        void socialSpending(float value) const { WriteField<float>("socialSpending", value); }
        float adminFunding() const { return ReadField<float>("adminFunding"); }
        void adminFunding(float value) const { WriteField<float>("adminFunding", value); }
        float civIndustryBudget() const { return ReadField<float>("civIndustryBudget"); }
        void civIndustryBudget(float value) const { WriteField<float>("civIndustryBudget", value); }
        float milIndustryBudget() const { return ReadField<float>("milIndustryBudget"); }
        void milIndustryBudget(float value) const { WriteField<float>("milIndustryBudget", value); }
        float infrastructureBudget() const { return ReadField<float>("infrastructureBudget"); }
        void infrastructureBudget(float value) const { WriteField<float>("infrastructureBudget", value); }
        float researchFunding() const { return ReadField<float>("researchFunding"); }
        void researchFunding(float value) const { WriteField<float>("researchFunding", value); }
        float integrationFunding() const { return ReadField<float>("integrationFunding"); }
        void integrationFunding(float value) const { WriteField<float>("integrationFunding", value); }
        float econInvestment() const { return ReadField<float>("econInvestment"); }
        void econInvestment(float value) const { WriteField<float>("econInvestment", value); }
        float econDevelopment() const { return ReadField<float>("econDevelopment"); }
        void econDevelopment(float value) const { WriteField<float>("econDevelopment", value); }
        float manpowerFunding() const { return ReadField<float>("manpowerFunding"); }
        void manpowerFunding(float value) const { WriteField<float>("manpowerFunding", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void warWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float propaganda() const { return ReadField<float>("propaganda"); }
        void propaganda(float value) const { WriteField<float>("propaganda", value); }
        int draftAge() const { return ReadField<int>("draftAge"); }
        void draftAge(int value) const { WriteField<int>("draftAge", value); }
        int draftAgeTick() const { return ReadField<int>("draftAgeTick"); }
        void draftAgeTick(int value) const { WriteField<int>("draftAgeTick", value); }
        int fiscalAuto() const { return ReadField<int>("fiscalAuto"); }
        void fiscalAuto(int value) const { WriteField<int>("fiscalAuto", value); }
        bool fiscalAutoSeeded() const { return ReadField<bool>("fiscalAutoSeeded"); }
        void fiscalAutoSeeded(bool value) const { WriteField<bool>("fiscalAutoSeeded", value); }
        bool stateGovernors() const { return ReadField<bool>("stateGovernors"); }
        void stateGovernors(bool value) const { WriteField<bool>("stateGovernors", value); }
        float civBudgetFund() const { return ReadField<float>("civBudgetFund"); }
        void civBudgetFund(float value) const { WriteField<float>("civBudgetFund", value); }
        float milBudgetFund() const { return ReadField<float>("milBudgetFund"); }
        void milBudgetFund(float value) const { WriteField<float>("milBudgetFund", value); }
        float infraBudgetFund() const { return ReadField<float>("infraBudgetFund"); }
        void infraBudgetFund(float value) const { WriteField<float>("infraBudgetFund", value); }
        int nextAutoCivTick() const { return ReadField<int>("nextAutoCivTick"); }
        void nextAutoCivTick(int value) const { WriteField<int>("nextAutoCivTick", value); }
        int nextAutoMilTick() const { return ReadField<int>("nextAutoMilTick"); }
        void nextAutoMilTick(int value) const { WriteField<int>("nextAutoMilTick", value); }
        float treasury() const { return ReadField<float>("treasury"); }
        void treasury(float value) const { WriteField<float>("treasury", value); }
        float pendingTreasury() const { return ReadField<float>("pendingTreasury"); }
        void pendingTreasury(float value) const { WriteField<float>("pendingTreasury", value); }
        float lastPayday() const { return ReadField<float>("lastPayday"); }
        void lastPayday(float value) const { WriteField<float>("lastPayday", value); }
        float fiscalScale() const { return ReadField<float>("fiscalScale"); }
        void fiscalScale(float value) const { WriteField<float>("fiscalScale", value); }
        float income() const { return ReadField<float>("income"); }
        void income(float value) const { WriteField<float>("income", value); }
        float netIncome() const { return ReadField<float>("netIncome"); }
        void netIncome(float value) const { WriteField<float>("netIncome", value); }
        int fieldedDivisions() const { return ReadField<int>("fieldedDivisions"); }
        void fieldedDivisions(int value) const { WriteField<int>("fieldedDivisions", value); }
        int fleetCount() const { return ReadField<int>("fleetCount"); }
        void fleetCount(int value) const { WriteField<int>("fleetCount", value); }
        float fleetUpkeepWeight() const { return ReadField<float>("fleetUpkeepWeight"); }
        void fleetUpkeepWeight(float value) const { WriteField<float>("fleetUpkeepWeight", value); }
        float navalInterest() const { return ReadField<float>("navalInterest"); }
        void navalInterest(float value) const { WriteField<float>("navalInterest", value); }
        float levyUpkeepWeight() const { return ReadField<float>("levyUpkeepWeight"); }
        void levyUpkeepWeight(float value) const { WriteField<float>("levyUpkeepWeight", value); }
        int standingSlots() const { return ReadField<int>("standingSlots"); }
        void standingSlots(int value) const { WriteField<int>("standingSlots", value); }
        int standingDivisions() const { return ReadField<int>("standingDivisions"); }
        void standingDivisions(int value) const { WriteField<int>("standingDivisions", value); }
        int leviesOverdue() const { return ReadField<int>("leviesOverdue"); }
        void leviesOverdue(int value) const { WriteField<int>("leviesOverdue", value); }
        float arrearsFraction() const { return ReadField<float>("arrearsFraction"); }
        void arrearsFraction(float value) const { WriteField<float>("arrearsFraction", value); }
        float perDivisionUpkeep() const { return ReadField<float>("perDivisionUpkeep"); }
        void perDivisionUpkeep(float value) const { WriteField<float>("perDivisionUpkeep", value); }
        float militaryBill() const { return ReadField<float>("militaryBill"); }
        void militaryBill(float value) const { WriteField<float>("militaryBill", value); }
        float warArmyBudget() const { return ReadField<float>("warArmyBudget"); }
        void warArmyBudget(float value) const { WriteField<float>("warArmyBudget", value); }
        float warReserve() const { return ReadField<float>("warReserve"); }
        void warReserve(float value) const { WriteField<float>("warReserve", value); }
        float warRunway() const { return ReadField<float>("warRunway"); }
        void warRunway(float value) const { WriteField<float>("warRunway", value); }
        bool warStrained() const { return ReadField<bool>("warStrained"); }
        void warStrained(bool value) const { WriteField<bool>("warStrained", value); }
        bool warFootingSnap() const { return ReadField<bool>("warFootingSnap"); }
        void warFootingSnap(bool value) const { WriteField<bool>("warFootingSnap", value); }
        float landSold() const { return ReadField<float>("landSold"); }
        void landSold(float value) const { WriteField<float>("landSold", value); }
        int landSoldTick() const { return ReadField<int>("landSoldTick"); }
        void landSoldTick(int value) const { WriteField<int>("landSoldTick", value); }
        float goldReceived() const { return ReadField<float>("goldReceived"); }
        void goldReceived(float value) const { WriteField<float>("goldReceived", value); }
        int goldReceivedTick() const { return ReadField<int>("goldReceivedTick"); }
        void goldReceivedTick(int value) const { WriteField<int>("goldReceivedTick", value); }
        int bankruptTicks() const { return ReadField<int>("bankruptTicks"); }
        void bankruptTicks(int value) const { WriteField<int>("bankruptTicks", value); }
        int brokenSinceTick() const { return ReadField<int>("brokenSinceTick"); }
        void brokenSinceTick(int value) const { WriteField<int>("brokenSinceTick", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void tileCount(int value) const { WriteField<int>("tileCount", value); }
        float taxEfficiency() const { return ReadField<float>("taxEfficiency"); }
        void taxEfficiency(float value) const { WriteField<float>("taxEfficiency", value); }
        float adminWeightedTiles() const { return ReadField<float>("adminWeightedTiles"); }
        void adminWeightedTiles(float value) const { WriteField<float>("adminWeightedTiles", value); }
        float stabilityIndex() const { return ReadField<float>("stabilityIndex"); }
        void stabilityIndex(float value) const { WriteField<float>("stabilityIndex", value); }
        float adminCost() const { return ReadField<float>("adminCost"); }
        void adminCost(float value) const { WriteField<float>("adminCost", value); }
        float garrisonPoints() const { return ReadField<float>("garrisonPoints"); }
        void garrisonPoints(float value) const { WriteField<float>("garrisonPoints", value); }
        float garrisonCoverage() const { return ReadField<float>("garrisonCoverage"); }
        void garrisonCoverage(float value) const { WriteField<float>("garrisonCoverage", value); }
        int expansionCeiling() const { return ReadField<int>("expansionCeiling"); }
        void expansionCeiling(int value) const { WriteField<int>("expansionCeiling", value); }
        float stateTaxMul() const { return ReadField<float>("stateTaxMul"); }
        void stateTaxMul(float value) const { WriteField<float>("stateTaxMul", value); }
        float stateRecruitCostMul() const { return ReadField<float>("stateRecruitCostMul"); }
        void stateRecruitCostMul(float value) const { WriteField<float>("stateRecruitCostMul", value); }
        float stateRecruitTimeMul() const { return ReadField<float>("stateRecruitTimeMul"); }
        void stateRecruitTimeMul(float value) const { WriteField<float>("stateRecruitTimeMul", value); }
        float stateTightenCostPerTick() const { return ReadField<float>("stateTightenCostPerTick"); }
        void stateTightenCostPerTick(float value) const { WriteField<float>("stateTightenCostPerTick", value); }
        float stateIntegrateCostPerTick() const { return ReadField<float>("stateIntegrateCostPerTick"); }
        void stateIntegrateCostPerTick(float value) const { WriteField<float>("stateIntegrateCostPerTick", value); }
        float stateFormCostPerTick() const { return ReadField<float>("stateFormCostPerTick"); }
        void stateFormCostPerTick(float value) const { WriteField<float>("stateFormCostPerTick", value); }
        int unorganizedTiles() const { return ReadField<int>("unorganizedTiles"); }
        void unorganizedTiles(int value) const { WriteField<int>("unorganizedTiles", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void happiness(float value) const { WriteField<float>("happiness", value); }
        float warYears() const { return ReadField<float>("warYears"); }
        void warYears(float value) const { WriteField<float>("warYears", value); }
        int warYearsTick() const { return ReadField<int>("warYearsTick"); }
        void warYearsTick(int value) const { WriteField<int>("warYearsTick", value); }
        int warCount() const { return ReadField<int>("warCount"); }
        void warCount(int value) const { WriteField<int>("warCount", value); }
        int ownWarCount() const { return ReadField<int>("ownWarCount"); }
        void ownWarCount(int value) const { WriteField<int>("ownWarCount", value); }
        float identityFraction() const { return ReadField<float>("identityFraction"); }
        void identityFraction(float value) const { WriteField<float>("identityFraction", value); }
        int ideology() const { return ReadField<int>("ideology"); }
        void ideology(int value) const { WriteField<int>("ideology", value); }
        void* polityMods() const { return ReadField<void*>("polityMods"); }
        void polityMods(void* value) const { WriteField<void*>("polityMods", value); }
        bool scriptless() const { return ReadField<bool>("scriptless"); }
        void scriptless(bool value) const { WriteField<bool>("scriptless", value); }
        bool stateAtheist() const { return ReadField<bool>("stateAtheist"); }
        void stateAtheist(bool value) const { WriteField<bool>("stateAtheist", value); }
        bool inControlCrisis() const { return ReadField<bool>("inControlCrisis"); }
        void inControlCrisis(bool value) const { WriteField<bool>("inControlCrisis", value); }
        float lapsedShare() const { return ReadField<float>("lapsedShare"); }
        void lapsedShare(float value) const { WriteField<float>("lapsedShare", value); }
        int lapsedTiles() const { return ReadField<int>("lapsedTiles"); }
        void lapsedTiles(int value) const { WriteField<int>("lapsedTiles", value); }
        float controlTaxMul() const { return ReadField<float>("controlTaxMul"); }
        void controlTaxMul(float value) const { WriteField<float>("controlTaxMul", value); }
        float lockdownTaxMul() const { return ReadField<float>("lockdownTaxMul"); }
        void lockdownTaxMul(float value) const { WriteField<float>("lockdownTaxMul", value); }
        float controlManpowerMul() const { return ReadField<float>("controlManpowerMul"); }
        void controlManpowerMul(float value) const { WriteField<float>("controlManpowerMul", value); }
        float nobleManpowerMul() const { return ReadField<float>("nobleManpowerMul"); }
        void nobleManpowerMul(float value) const { WriteField<float>("nobleManpowerMul", value); }
        float unfundedShare() const { return ReadField<float>("unfundedShare"); }
        void unfundedShare(float value) const { WriteField<float>("unfundedShare", value); }
        int largestLapseTile() const { return ReadField<int>("largestLapseTile"); }
        void largestLapseTile(int value) const { WriteField<int>("largestLapseTile", value); }
        void* lapseBlobs() const { return ReadField<void*>("lapseBlobs"); }
        int nextEdictTick() const { return ReadField<int>("nextEdictTick"); }
        void nextEdictTick(int value) const { WriteField<int>("nextEdictTick", value); }
        void* edictReadyTick() const { return ReadField<void*>("edictReadyTick"); }
        void edictReadyTick(void* value) const { WriteField<void*>("edictReadyTick", value); }
        int integrationEdictUntilTick() const { return ReadField<int>("integrationEdictUntilTick"); }
        void integrationEdictUntilTick(int value) const { WriteField<int>("integrationEdictUntilTick", value); }
        int reassertUntilTick() const { return ReadField<int>("reassertUntilTick"); }
        void reassertUntilTick(int value) const { WriteField<int>("reassertUntilTick", value); }
        int humbleUntilTick() const { return ReadField<int>("humbleUntilTick"); }
        void humbleUntilTick(int value) const { WriteField<int>("humbleUntilTick", value); }
        int nextClanCallTick() const { return ReadField<int>("nextClanCallTick"); }
        void nextClanCallTick(int value) const { WriteField<int>("nextClanCallTick", value); }
        int nextIdentityAdoptTick() const { return ReadField<int>("nextIdentityAdoptTick"); }
        void nextIdentityAdoptTick(int value) const { WriteField<int>("nextIdentityAdoptTick", value); }
        float welfareShortfall() const { return ReadField<float>("welfareShortfall"); }
        void welfareShortfall(float value) const { WriteField<float>("welfareShortfall", value); }
        int welfareBelowFloorTicks() const { return ReadField<int>("welfareBelowFloorTicks"); }
        void welfareBelowFloorTicks(int value) const { WriteField<int>("welfareBelowFloorTicks", value); }
        float lastEmigrants() const { return ReadField<float>("lastEmigrants"); }
        void lastEmigrants(float value) const { WriteField<float>("lastEmigrants", value); }
        bool bordersClosed() const { return ReadField<bool>("bordersClosed"); }
        void bordersClosed(bool value) const { WriteField<bool>("bordersClosed", value); }
        float polityChangeUnrest() const { return ReadField<float>("polityChangeUnrest"); }
        void polityChangeUnrest(float value) const { WriteField<float>("polityChangeUnrest", value); }
        int nextPolityChangeTick() const { return ReadField<int>("nextPolityChangeTick"); }
        void nextPolityChangeTick(int value) const { WriteField<int>("nextPolityChangeTick", value); }
        void* policyScalars() const { return ReadField<void*>("policyScalars"); }
        void policyScalars(void* value) const { WriteField<void*>("policyScalars", value); }
        void* ethnicMods() const { return ReadField<void*>("ethnicMods"); }
        void ethnicMods(void* value) const { WriteField<void*>("ethnicMods", value); }
        int ethnicFoldHash() const { return ReadField<int>("ethnicFoldHash"); }
        void ethnicFoldHash(int value) const { WriteField<int>("ethnicFoldHash", value); }
        int identityPushMask() const { return ReadField<int>("identityPushMask"); }
        void identityPushMask(int value) const { WriteField<int>("identityPushMask", value); }
        int identityGuardMask() const { return ReadField<int>("identityGuardMask"); }
        void identityGuardMask(int value) const { WriteField<int>("identityGuardMask", value); }
        int identityZonePushMask() const { return ReadField<int>("identityZonePushMask"); }
        void identityZonePushMask(int value) const { WriteField<int>("identityZonePushMask", value); }
        int promotedTiles() const { return ReadField<int>("promotedTiles"); }
        void promotedTiles(int value) const { WriteField<int>("promotedTiles", value); }
        int promotedAxisTiles() const { return ReadField<int>("promotedAxisTiles"); }
        void promotedAxisTiles(int value) const { WriteField<int>("promotedAxisTiles", value); }
        int promotedFrontTiles() const { return ReadField<int>("promotedFrontTiles"); }
        void promotedFrontTiles(int value) const { WriteField<int>("promotedFrontTiles", value); }
        int promotedFrontAxisTiles() const { return ReadField<int>("promotedFrontAxisTiles"); }
        void promotedFrontAxisTiles(int value) const { WriteField<int>("promotedFrontAxisTiles", value); }
        void* purgeOrders() const { return ReadField<void*>("purgeOrders"); }
        void purgeOrders(void* value) const { WriteField<void*>("purgeOrders", value); }
        void* treatyExpulsions() const { return ReadField<void*>("treatyExpulsions"); }
        void treatyExpulsions(void* value) const { WriteField<void*>("treatyExpulsions", value); }
        int purgeCursorChunk() const { return ReadField<int>("purgeCursorChunk"); }
        void purgeCursorChunk(int value) const { WriteField<int>("purgeCursorChunk", value); }
        int purgeCursorOffset() const { return ReadField<int>("purgeCursorOffset"); }
        void purgeCursorOffset(int value) const { WriteField<int>("purgeCursorOffset", value); }
        int purgeCircuit() const { return ReadField<int>("purgeCircuit"); }
        void purgeCircuit(int value) const { WriteField<int>("purgeCircuit", value); }
        void* forgeOrders() const { return ReadField<void*>("forgeOrders"); }
        void forgeOrders(void* value) const { WriteField<void*>("forgeOrders", value); }
        bool purgeCircuitClean() const { return ReadField<bool>("purgeCircuitClean"); }
        void purgeCircuitClean(bool value) const { WriteField<bool>("purgeCircuitClean", value); }
        int purgeAxisMask() const { return ReadField<int>("purgeAxisMask"); }
        void purgeAxisMask(int value) const { WriteField<int>("purgeAxisMask", value); }
        int purgeActiveOrders() const { return ReadField<int>("purgeActiveOrders"); }
        void purgeActiveOrders(int value) const { WriteField<int>("purgeActiveOrders", value); }
        int purgeActivePurges() const { return ReadField<int>("purgeActivePurges"); }
        void purgeActivePurges(int value) const { WriteField<int>("purgeActivePurges", value); }
        float expelUnrest() const { return ReadField<float>("expelUnrest"); }
        void expelUnrest(float value) const { WriteField<float>("expelUnrest", value); }
        float persecutedShare() const { return ReadField<float>("persecutedShare"); }
        void persecutedShare(float value) const { WriteField<float>("persecutedShare", value); }
        float standingUnrest() const { return ReadField<float>("standingUnrest"); }
        void standingUnrest(float value) const { WriteField<float>("standingUnrest", value); }
        float tradeTax() const { return ReadField<float>("tradeTax"); }
        void tradeTax(float value) const { WriteField<float>("tradeTax", value); }
        float tradeIncome() const { return ReadField<float>("tradeIncome"); }
        void tradeIncome(float value) const { WriteField<float>("tradeIncome", value); }
        float tradeVolume() const { return ReadField<float>("tradeVolume"); }
        void tradeVolume(float value) const { WriteField<float>("tradeVolume", value); }
        float tradeOpenness() const { return ReadField<float>("tradeOpenness"); }
        void tradeOpenness(float value) const { WriteField<float>("tradeOpenness", value); }
        int tradePartnerCount() const { return ReadField<int>("tradePartnerCount"); }
        void tradePartnerCount(int value) const { WriteField<int>("tradePartnerCount", value); }
        int nextRoadBuildTick() const { return ReadField<int>("nextRoadBuildTick"); }
        void nextRoadBuildTick(int value) const { WriteField<int>("nextRoadBuildTick", value); }
        int overlordId() const { return ReadField<int>("overlordId"); }
        void overlordId(int value) const { WriteField<int>("overlordId", value); }
        float tributeRate() const { return ReadField<float>("tributeRate"); }
        void tributeRate(float value) const { WriteField<float>("tributeRate", value); }
        float tributePaid() const { return ReadField<float>("tributePaid"); }
        void tributePaid(float value) const { WriteField<float>("tributePaid", value); }
        float tributeReceived() const { return ReadField<float>("tributeReceived"); }
        void tributeReceived(float value) const { WriteField<float>("tributeReceived", value); }
        float armsTradeIncome() const { return ReadField<float>("armsTradeIncome"); }
        void armsTradeIncome(float value) const { WriteField<float>("armsTradeIncome", value); }
        float armsTradeSpend() const { return ReadField<float>("armsTradeSpend"); }
        void armsTradeSpend(float value) const { WriteField<float>("armsTradeSpend", value); }
        int tributePactToId() const { return ReadField<int>("tributePactToId"); }
        void tributePactToId(int value) const { WriteField<int>("tributePactToId", value); }
        float tributePactRate() const { return ReadField<float>("tributePactRate"); }
        void tributePactRate(float value) const { WriteField<float>("tributePactRate", value); }
        int tributePactUntilTick() const { return ReadField<int>("tributePactUntilTick"); }
        void tributePactUntilTick(int value) const { WriteField<int>("tributePactUntilTick", value); }
        bool vassalMayDeclareWar() const { return ReadField<bool>("vassalMayDeclareWar"); }
        void vassalMayDeclareWar(bool value) const { WriteField<bool>("vassalMayDeclareWar", value); }
        bool vassalMayMakeAlliances() const { return ReadField<bool>("vassalMayMakeAlliances"); }
        void vassalMayMakeAlliances(bool value) const { WriteField<bool>("vassalMayMakeAlliances", value); }
        bool vassalMayFoundCities() const { return ReadField<bool>("vassalMayFoundCities"); }
        void vassalMayFoundCities(bool value) const { WriteField<bool>("vassalMayFoundCities", value); }
        bool vassalGrantsMarchRights() const { return ReadField<bool>("vassalGrantsMarchRights"); }
        void vassalGrantsMarchRights(bool value) const { WriteField<bool>("vassalGrantsMarchRights", value); }
        void* preVassalColor() const { return ReadField<void*>("preVassalColor"); }
        void preVassalColor(void* value) const { WriteField<void*>("preVassalColor", value); }
        bool preVassalColorSaved() const { return ReadField<bool>("preVassalColorSaved"); }
        void preVassalColorSaved(bool value) const { WriteField<bool>("preVassalColorSaved", value); }
        int unionId() const { return ReadField<int>("unionId"); }
        void unionId(int value) const { WriteField<int>("unionId", value); }
        int unionRole() const { return ReadField<int>("unionRole"); }
        void unionRole(int value) const { WriteField<int>("unionRole", value); }
        void* preUnionColor() const { return ReadField<void*>("preUnionColor"); }
        void preUnionColor(void* value) const { WriteField<void*>("preUnionColor", value); }
        bool preUnionColorSaved() const { return ReadField<bool>("preUnionColorSaved"); }
        void preUnionColorSaved(bool value) const { WriteField<bool>("preUnionColorSaved", value); }
        void* preUnionName() const { return ReadField<void*>("preUnionName"); }
        void preUnionName(void* value) const { WriteField<void*>("preUnionName", value); }
        bool preUnionNameSaved() const { return ReadField<bool>("preUnionNameSaved"); }
        void preUnionNameSaved(bool value) const { WriteField<bool>("preUnionNameSaved", value); }
        bool identityLocked() const { return ReadField<bool>("identityLocked"); }
        void identityLocked(bool value) const { WriteField<bool>("identityLocked", value); }
        int unionJoinedTick() const { return ReadField<int>("unionJoinedTick"); }
        void unionJoinedTick(int value) const { WriteField<int>("unionJoinedTick", value); }
        int unionSubsidyReadyTick() const { return ReadField<int>("unionSubsidyReadyTick"); }
        void unionSubsidyReadyTick(int value) const { WriteField<int>("unionSubsidyReadyTick", value); }
        int unionAutonomyReadyTick() const { return ReadField<int>("unionAutonomyReadyTick"); }
        void unionAutonomyReadyTick(int value) const { WriteField<int>("unionAutonomyReadyTick", value); }
        int unionShieldUntilTick() const { return ReadField<int>("unionShieldUntilTick"); }
        void unionShieldUntilTick(int value) const { WriteField<int>("unionShieldUntilTick", value); }
        void* leader() const { return ReadField<void*>("leader"); }
        void leader(void* value) const { WriteField<void*>("leader", value); }
        float baseExpansionRate() const { return ReadField<float>("baseExpansionRate"); }
        void baseExpansionRate(float value) const { WriteField<float>("baseExpansionRate", value); }
        int nextSettleAllowedTick() const { return ReadField<int>("nextSettleAllowedTick"); }
        void nextSettleAllowedTick(int value) const { WriteField<int>("nextSettleAllowedTick", value); }
        void* warGoal() const { return ReadField<void*>("warGoal"); }
        void warGoal(void* value) const { WriteField<void*>("warGoal", value); }
    };
}
