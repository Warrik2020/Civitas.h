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
        float Pool(int kind) const { void* args[] = { &kind }; return CallValue<float>("Pool", args, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        float population() const { return ReadField<float>("population"); }
        void SetPopulation(float value) const { WriteField<float>("population", value); }
        float popCapacity() const { return ReadField<float>("popCapacity"); }
        void SetPopCapacity(float value) const { WriteField<float>("popCapacity", value); }
        float popGrowthPerTick() const { return ReadField<float>("popGrowthPerTick"); }
        void SetPopGrowthPerTick(float value) const { WriteField<float>("popGrowthPerTick", value); }
        float popGainedLastTick() const { return ReadField<float>("popGainedLastTick"); }
        void SetPopGainedLastTick(float value) const { WriteField<float>("popGainedLastTick", value); }
        float popLostLastTick() const { return ReadField<float>("popLostLastTick"); }
        void SetPopLostLastTick(float value) const { WriteField<float>("popLostLastTick", value); }
        float popDrainAccum() const { return ReadField<float>("popDrainAccum"); }
        void SetPopDrainAccum(float value) const { WriteField<float>("popDrainAccum", value); }
        float welfareGrowthTaper() const { return ReadField<float>("welfareGrowthTaper"); }
        void SetWelfareGrowthTaper(float value) const { WriteField<float>("welfareGrowthTaper", value); }
        float weightedTileCount() const { return ReadField<float>("weightedTileCount"); }
        void SetWeightedTileCount(float value) const { WriteField<float>("weightedTileCount", value); }
        float warDeadAccum() const { return ReadField<float>("warDeadAccum"); }
        void SetWarDeadAccum(float value) const { WriteField<float>("warDeadAccum", value); }
        float aggressionBank() const { return ReadField<float>("aggressionBank"); }
        void SetAggressionBank(float value) const { WriteField<float>("aggressionBank", value); }
        float aggressionMassing() const { return ReadField<float>("aggressionMassing"); }
        void SetAggressionMassing(float value) const { WriteField<float>("aggressionMassing", value); }
        int aggressionMassingOn() const { return ReadField<int>("aggressionMassingOn"); }
        void SetAggressionMassingOn(int value) const { WriteField<int>("aggressionMassingOn", value); }
        float aggressionThreatAround() const { return ReadField<float>("aggressionThreatAround"); }
        void SetAggressionThreatAround(float value) const { WriteField<float>("aggressionThreatAround", value); }
        int stagingTargetId() const { return ReadField<int>("stagingTargetId"); }
        void SetStagingTargetId(int value) const { WriteField<int>("stagingTargetId", value); }
        int stagingUntilTick() const { return ReadField<int>("stagingUntilTick"); }
        void SetStagingUntilTick(int value) const { WriteField<int>("stagingUntilTick", value); }
        void* aggressionLog() const { return ReadField<void*>("aggressionLog"); }
        int aggressionLogCount() const { return ReadField<int>("aggressionLogCount"); }
        void SetAggressionLogCount(int value) const { WriteField<int>("aggressionLogCount", value); }
        int aggressionExpelYear() const { return ReadField<int>("aggressionExpelYear"); }
        void SetAggressionExpelYear(int value) const { WriteField<int>("aggressionExpelYear", value); }
        float aggressionExpelThisYear() const { return ReadField<float>("aggressionExpelThisYear"); }
        void SetAggressionExpelThisYear(float value) const { WriteField<float>("aggressionExpelThisYear", value); }
        float techScore() const { return ReadField<float>("techScore"); }
        void SetTechScore(float value) const { WriteField<float>("techScore", value); }
        int era() const { return ReadField<int>("era"); }
        void SetEra(int value) const { WriteField<int>("era", value); }
        int buildings() const { return ReadField<int>("buildings"); }
        void SetBuildings(int value) const { WriteField<int>("buildings", value); }
        void* researched() const { return ReadField<void*>("researched"); }
        void SetResearched(void* value) const { WriteField<void*>("researched", value); }
        void* slotTech() const { return ReadField<void*>("slotTech"); }
        void* slotProgress() const { return ReadField<void*>("slotProgress"); }
        void* slotBank() const { return ReadField<void*>("slotBank"); }
        void* researchQueue() const { return ReadField<void*>("researchQueue"); }
        float researchRate() const { return ReadField<float>("researchRate"); }
        void SetResearchRate(float value) const { WriteField<float>("researchRate", value); }
        int researchAuto() const { return ReadField<int>("researchAuto"); }
        void SetResearchAuto(int value) const { WriteField<int>("researchAuto", value); }
        int researchedCount() const { return ReadField<int>("researchedCount"); }
        void SetResearchedCount(int value) const { WriteField<int>("researchedCount", value); }
        void* mods() const { return ReadField<void*>("mods"); }
        void SetMods(void* value) const { WriteField<void*>("mods", value); }
        int nextCoercionTick() const { return ReadField<int>("nextCoercionTick"); }
        void SetNextCoercionTick(int value) const { WriteField<int>("nextCoercionTick", value); }
        int nextWarDeclareTick() const { return ReadField<int>("nextWarDeclareTick"); }
        void SetNextWarDeclareTick(int value) const { WriteField<int>("nextWarDeclareTick", value); }
        float civFactories() const { return ReadField<float>("civFactories"); }
        void SetCivFactories(float value) const { WriteField<float>("civFactories", value); }
        float milFactories() const { return ReadField<float>("milFactories"); }
        void SetMilFactories(float value) const { WriteField<float>("milFactories", value); }
        float civFactoriesBilled() const { return ReadField<float>("civFactoriesBilled"); }
        void SetCivFactoriesBilled(float value) const { WriteField<float>("civFactoriesBilled", value); }
        float milFactoriesBilled() const { return ReadField<float>("milFactoriesBilled"); }
        void SetMilFactoriesBilled(float value) const { WriteField<float>("milFactoriesBilled", value); }
        float resourceImportCostPerTick() const { return ReadField<float>("resourceImportCostPerTick"); }
        void SetResourceImportCostPerTick(float value) const { WriteField<float>("resourceImportCostPerTick", value); }
        int milFactoryCount() const { return ReadField<int>("milFactoryCount"); }
        void SetMilFactoryCount(int value) const { WriteField<int>("milFactoryCount", value); }
        float arms() const { return ReadField<float>("arms"); }
        void SetArms(float value) const { WriteField<float>("arms", value); }
        float melee() const { return ReadField<float>("melee"); }
        void SetMelee(float value) const { WriteField<float>("melee", value); }
        float armour() const { return ReadField<float>("armour"); }
        void SetArmour(float value) const { WriteField<float>("armour", value); }
        float vehicles() const { return ReadField<float>("vehicles"); }
        void SetVehicles(float value) const { WriteField<float>("vehicles", value); }
        float artillery() const { return ReadField<float>("artillery"); }
        void SetArtillery(float value) const { WriteField<float>("artillery", value); }
        void* stock() const { return ReadField<void*>("stock"); }
        void* equipLedger() const { return ReadField<void*>("equipLedger"); }
        float manpower() const { return ReadField<float>("manpower"); }
        void SetManpower(float value) const { WriteField<float>("manpower", value); }
        float manpowerRefitAccum() const { return ReadField<float>("manpowerRefitAccum"); }
        void SetManpowerRefitAccum(float value) const { WriteField<float>("manpowerRefitAccum", value); }
        float manpowerRefitLast() const { return ReadField<float>("manpowerRefitLast"); }
        void SetManpowerRefitLast(float value) const { WriteField<float>("manpowerRefitLast", value); }
        void* weapons() const { return ReadField<void*>("weapons"); }
        void SetWeapons(void* value) const { WriteField<void*>("weapons", value); }
        float researchBuildings() const { return ReadField<float>("researchBuildings"); }
        void SetResearchBuildings(float value) const { WriteField<float>("researchBuildings", value); }
        float housingBuildings() const { return ReadField<float>("housingBuildings"); }
        void SetHousingBuildings(float value) const { WriteField<float>("housingBuildings", value); }
        float trainingBuildings() const { return ReadField<float>("trainingBuildings"); }
        void SetTrainingBuildings(float value) const { WriteField<float>("trainingBuildings", value); }
        float civMinistryTopPrice() const { return ReadField<float>("civMinistryTopPrice"); }
        void SetCivMinistryTopPrice(float value) const { WriteField<float>("civMinistryTopPrice", value); }
        float milMinistryTopPrice() const { return ReadField<float>("milMinistryTopPrice"); }
        void SetMilMinistryTopPrice(float value) const { WriteField<float>("milMinistryTopPrice", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void SetTaxRate(float value) const { WriteField<float>("taxRate", value); }
        float socialSpending() const { return ReadField<float>("socialSpending"); }
        void SetSocialSpending(float value) const { WriteField<float>("socialSpending", value); }
        float adminFunding() const { return ReadField<float>("adminFunding"); }
        void SetAdminFunding(float value) const { WriteField<float>("adminFunding", value); }
        float civIndustryBudget() const { return ReadField<float>("civIndustryBudget"); }
        void SetCivIndustryBudget(float value) const { WriteField<float>("civIndustryBudget", value); }
        float milIndustryBudget() const { return ReadField<float>("milIndustryBudget"); }
        void SetMilIndustryBudget(float value) const { WriteField<float>("milIndustryBudget", value); }
        float infrastructureBudget() const { return ReadField<float>("infrastructureBudget"); }
        void SetInfrastructureBudget(float value) const { WriteField<float>("infrastructureBudget", value); }
        float researchFunding() const { return ReadField<float>("researchFunding"); }
        void SetResearchFunding(float value) const { WriteField<float>("researchFunding", value); }
        float integrationFunding() const { return ReadField<float>("integrationFunding"); }
        void SetIntegrationFunding(float value) const { WriteField<float>("integrationFunding", value); }
        float econInvestment() const { return ReadField<float>("econInvestment"); }
        void SetEconInvestment(float value) const { WriteField<float>("econInvestment", value); }
        float econDevelopment() const { return ReadField<float>("econDevelopment"); }
        void SetEconDevelopment(float value) const { WriteField<float>("econDevelopment", value); }
        float manpowerFunding() const { return ReadField<float>("manpowerFunding"); }
        void SetManpowerFunding(float value) const { WriteField<float>("manpowerFunding", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void SetWarWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float propaganda() const { return ReadField<float>("propaganda"); }
        void SetPropaganda(float value) const { WriteField<float>("propaganda", value); }
        int draftAge() const { return ReadField<int>("draftAge"); }
        void SetDraftAge(int value) const { WriteField<int>("draftAge", value); }
        int draftAgeTick() const { return ReadField<int>("draftAgeTick"); }
        void SetDraftAgeTick(int value) const { WriteField<int>("draftAgeTick", value); }
        int fiscalAuto() const { return ReadField<int>("fiscalAuto"); }
        void SetFiscalAuto(int value) const { WriteField<int>("fiscalAuto", value); }
        bool fiscalAutoSeeded() const { return ReadField<bool>("fiscalAutoSeeded"); }
        void SetFiscalAutoSeeded(bool value) const { WriteField<bool>("fiscalAutoSeeded", value); }
        bool stateGovernors() const { return ReadField<bool>("stateGovernors"); }
        void SetStateGovernors(bool value) const { WriteField<bool>("stateGovernors", value); }
        float civBudgetFund() const { return ReadField<float>("civBudgetFund"); }
        void SetCivBudgetFund(float value) const { WriteField<float>("civBudgetFund", value); }
        float milBudgetFund() const { return ReadField<float>("milBudgetFund"); }
        void SetMilBudgetFund(float value) const { WriteField<float>("milBudgetFund", value); }
        float infraBudgetFund() const { return ReadField<float>("infraBudgetFund"); }
        void SetInfraBudgetFund(float value) const { WriteField<float>("infraBudgetFund", value); }
        int nextAutoCivTick() const { return ReadField<int>("nextAutoCivTick"); }
        void SetNextAutoCivTick(int value) const { WriteField<int>("nextAutoCivTick", value); }
        int nextAutoMilTick() const { return ReadField<int>("nextAutoMilTick"); }
        void SetNextAutoMilTick(int value) const { WriteField<int>("nextAutoMilTick", value); }
        float treasury() const { return ReadField<float>("treasury"); }
        void SetTreasury(float value) const { WriteField<float>("treasury", value); }
        float pendingTreasury() const { return ReadField<float>("pendingTreasury"); }
        void SetPendingTreasury(float value) const { WriteField<float>("pendingTreasury", value); }
        float lastPayday() const { return ReadField<float>("lastPayday"); }
        void SetLastPayday(float value) const { WriteField<float>("lastPayday", value); }
        float fiscalScale() const { return ReadField<float>("fiscalScale"); }
        void SetFiscalScale(float value) const { WriteField<float>("fiscalScale", value); }
        float income() const { return ReadField<float>("income"); }
        void SetIncome(float value) const { WriteField<float>("income", value); }
        float netIncome() const { return ReadField<float>("netIncome"); }
        void SetNetIncome(float value) const { WriteField<float>("netIncome", value); }
        int fieldedDivisions() const { return ReadField<int>("fieldedDivisions"); }
        void SetFieldedDivisions(int value) const { WriteField<int>("fieldedDivisions", value); }
        int fleetCount() const { return ReadField<int>("fleetCount"); }
        void SetFleetCount(int value) const { WriteField<int>("fleetCount", value); }
        float fleetUpkeepWeight() const { return ReadField<float>("fleetUpkeepWeight"); }
        void SetFleetUpkeepWeight(float value) const { WriteField<float>("fleetUpkeepWeight", value); }
        float navalInterest() const { return ReadField<float>("navalInterest"); }
        void SetNavalInterest(float value) const { WriteField<float>("navalInterest", value); }
        float levyUpkeepWeight() const { return ReadField<float>("levyUpkeepWeight"); }
        void SetLevyUpkeepWeight(float value) const { WriteField<float>("levyUpkeepWeight", value); }
        int standingSlots() const { return ReadField<int>("standingSlots"); }
        void SetStandingSlots(int value) const { WriteField<int>("standingSlots", value); }
        int standingDivisions() const { return ReadField<int>("standingDivisions"); }
        void SetStandingDivisions(int value) const { WriteField<int>("standingDivisions", value); }
        int leviesOverdue() const { return ReadField<int>("leviesOverdue"); }
        void SetLeviesOverdue(int value) const { WriteField<int>("leviesOverdue", value); }
        float arrearsFraction() const { return ReadField<float>("arrearsFraction"); }
        void SetArrearsFraction(float value) const { WriteField<float>("arrearsFraction", value); }
        float perDivisionUpkeep() const { return ReadField<float>("perDivisionUpkeep"); }
        void SetPerDivisionUpkeep(float value) const { WriteField<float>("perDivisionUpkeep", value); }
        float militaryBill() const { return ReadField<float>("militaryBill"); }
        void SetMilitaryBill(float value) const { WriteField<float>("militaryBill", value); }
        float warArmyBudget() const { return ReadField<float>("warArmyBudget"); }
        void SetWarArmyBudget(float value) const { WriteField<float>("warArmyBudget", value); }
        float warReserve() const { return ReadField<float>("warReserve"); }
        void SetWarReserve(float value) const { WriteField<float>("warReserve", value); }
        float warRunway() const { return ReadField<float>("warRunway"); }
        void SetWarRunway(float value) const { WriteField<float>("warRunway", value); }
        bool warStrained() const { return ReadField<bool>("warStrained"); }
        void SetWarStrained(bool value) const { WriteField<bool>("warStrained", value); }
        bool warFootingSnap() const { return ReadField<bool>("warFootingSnap"); }
        void SetWarFootingSnap(bool value) const { WriteField<bool>("warFootingSnap", value); }
        float landSold() const { return ReadField<float>("landSold"); }
        void SetLandSold(float value) const { WriteField<float>("landSold", value); }
        int landSoldTick() const { return ReadField<int>("landSoldTick"); }
        void SetLandSoldTick(int value) const { WriteField<int>("landSoldTick", value); }
        float goldReceived() const { return ReadField<float>("goldReceived"); }
        void SetGoldReceived(float value) const { WriteField<float>("goldReceived", value); }
        int goldReceivedTick() const { return ReadField<int>("goldReceivedTick"); }
        void SetGoldReceivedTick(int value) const { WriteField<int>("goldReceivedTick", value); }
        int bankruptTicks() const { return ReadField<int>("bankruptTicks"); }
        void SetBankruptTicks(int value) const { WriteField<int>("bankruptTicks", value); }
        int brokenSinceTick() const { return ReadField<int>("brokenSinceTick"); }
        void SetBrokenSinceTick(int value) const { WriteField<int>("brokenSinceTick", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void SetTileCount(int value) const { WriteField<int>("tileCount", value); }
        float taxEfficiency() const { return ReadField<float>("taxEfficiency"); }
        void SetTaxEfficiency(float value) const { WriteField<float>("taxEfficiency", value); }
        float adminWeightedTiles() const { return ReadField<float>("adminWeightedTiles"); }
        void SetAdminWeightedTiles(float value) const { WriteField<float>("adminWeightedTiles", value); }
        float stabilityIndex() const { return ReadField<float>("stabilityIndex"); }
        void SetStabilityIndex(float value) const { WriteField<float>("stabilityIndex", value); }
        float adminCost() const { return ReadField<float>("adminCost"); }
        void SetAdminCost(float value) const { WriteField<float>("adminCost", value); }
        float garrisonPoints() const { return ReadField<float>("garrisonPoints"); }
        void SetGarrisonPoints(float value) const { WriteField<float>("garrisonPoints", value); }
        float garrisonCoverage() const { return ReadField<float>("garrisonCoverage"); }
        void SetGarrisonCoverage(float value) const { WriteField<float>("garrisonCoverage", value); }
        int expansionCeiling() const { return ReadField<int>("expansionCeiling"); }
        void SetExpansionCeiling(int value) const { WriteField<int>("expansionCeiling", value); }
        float stateTaxMul() const { return ReadField<float>("stateTaxMul"); }
        void SetStateTaxMul(float value) const { WriteField<float>("stateTaxMul", value); }
        float stateRecruitCostMul() const { return ReadField<float>("stateRecruitCostMul"); }
        void SetStateRecruitCostMul(float value) const { WriteField<float>("stateRecruitCostMul", value); }
        float stateRecruitTimeMul() const { return ReadField<float>("stateRecruitTimeMul"); }
        void SetStateRecruitTimeMul(float value) const { WriteField<float>("stateRecruitTimeMul", value); }
        float stateTightenCostPerTick() const { return ReadField<float>("stateTightenCostPerTick"); }
        void SetStateTightenCostPerTick(float value) const { WriteField<float>("stateTightenCostPerTick", value); }
        float stateIntegrateCostPerTick() const { return ReadField<float>("stateIntegrateCostPerTick"); }
        void SetStateIntegrateCostPerTick(float value) const { WriteField<float>("stateIntegrateCostPerTick", value); }
        float stateFormCostPerTick() const { return ReadField<float>("stateFormCostPerTick"); }
        void SetStateFormCostPerTick(float value) const { WriteField<float>("stateFormCostPerTick", value); }
        int unorganizedTiles() const { return ReadField<int>("unorganizedTiles"); }
        void SetUnorganizedTiles(int value) const { WriteField<int>("unorganizedTiles", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void SetHappiness(float value) const { WriteField<float>("happiness", value); }
        float warYears() const { return ReadField<float>("warYears"); }
        void SetWarYears(float value) const { WriteField<float>("warYears", value); }
        int warYearsTick() const { return ReadField<int>("warYearsTick"); }
        void SetWarYearsTick(int value) const { WriteField<int>("warYearsTick", value); }
        int warCount() const { return ReadField<int>("warCount"); }
        void SetWarCount(int value) const { WriteField<int>("warCount", value); }
        int ownWarCount() const { return ReadField<int>("ownWarCount"); }
        void SetOwnWarCount(int value) const { WriteField<int>("ownWarCount", value); }
        float identityFraction() const { return ReadField<float>("identityFraction"); }
        void SetIdentityFraction(float value) const { WriteField<float>("identityFraction", value); }
        int ideology() const { return ReadField<int>("ideology"); }
        void SetIdeology(int value) const { WriteField<int>("ideology", value); }
        void* polityMods() const { return ReadField<void*>("polityMods"); }
        void SetPolityMods(void* value) const { WriteField<void*>("polityMods", value); }
        bool scriptless() const { return ReadField<bool>("scriptless"); }
        void SetScriptless(bool value) const { WriteField<bool>("scriptless", value); }
        bool stateAtheist() const { return ReadField<bool>("stateAtheist"); }
        void SetStateAtheist(bool value) const { WriteField<bool>("stateAtheist", value); }
        bool inControlCrisis() const { return ReadField<bool>("inControlCrisis"); }
        void SetInControlCrisis(bool value) const { WriteField<bool>("inControlCrisis", value); }
        float lapsedShare() const { return ReadField<float>("lapsedShare"); }
        void SetLapsedShare(float value) const { WriteField<float>("lapsedShare", value); }
        int lapsedTiles() const { return ReadField<int>("lapsedTiles"); }
        void SetLapsedTiles(int value) const { WriteField<int>("lapsedTiles", value); }
        float controlTaxMul() const { return ReadField<float>("controlTaxMul"); }
        void SetControlTaxMul(float value) const { WriteField<float>("controlTaxMul", value); }
        float lockdownTaxMul() const { return ReadField<float>("lockdownTaxMul"); }
        void SetLockdownTaxMul(float value) const { WriteField<float>("lockdownTaxMul", value); }
        float controlManpowerMul() const { return ReadField<float>("controlManpowerMul"); }
        void SetControlManpowerMul(float value) const { WriteField<float>("controlManpowerMul", value); }
        float nobleManpowerMul() const { return ReadField<float>("nobleManpowerMul"); }
        void SetNobleManpowerMul(float value) const { WriteField<float>("nobleManpowerMul", value); }
        float unfundedShare() const { return ReadField<float>("unfundedShare"); }
        void SetUnfundedShare(float value) const { WriteField<float>("unfundedShare", value); }
        int largestLapseTile() const { return ReadField<int>("largestLapseTile"); }
        void SetLargestLapseTile(int value) const { WriteField<int>("largestLapseTile", value); }
        void* lapseBlobs() const { return ReadField<void*>("lapseBlobs"); }
        int nextEdictTick() const { return ReadField<int>("nextEdictTick"); }
        void SetNextEdictTick(int value) const { WriteField<int>("nextEdictTick", value); }
        void* edictReadyTick() const { return ReadField<void*>("edictReadyTick"); }
        void SetEdictReadyTick(void* value) const { WriteField<void*>("edictReadyTick", value); }
        int integrationEdictUntilTick() const { return ReadField<int>("integrationEdictUntilTick"); }
        void SetIntegrationEdictUntilTick(int value) const { WriteField<int>("integrationEdictUntilTick", value); }
        int reassertUntilTick() const { return ReadField<int>("reassertUntilTick"); }
        void SetReassertUntilTick(int value) const { WriteField<int>("reassertUntilTick", value); }
        int humbleUntilTick() const { return ReadField<int>("humbleUntilTick"); }
        void SetHumbleUntilTick(int value) const { WriteField<int>("humbleUntilTick", value); }
        int nextClanCallTick() const { return ReadField<int>("nextClanCallTick"); }
        void SetNextClanCallTick(int value) const { WriteField<int>("nextClanCallTick", value); }
        int nextIdentityAdoptTick() const { return ReadField<int>("nextIdentityAdoptTick"); }
        void SetNextIdentityAdoptTick(int value) const { WriteField<int>("nextIdentityAdoptTick", value); }
        float welfareShortfall() const { return ReadField<float>("welfareShortfall"); }
        void SetWelfareShortfall(float value) const { WriteField<float>("welfareShortfall", value); }
        int welfareBelowFloorTicks() const { return ReadField<int>("welfareBelowFloorTicks"); }
        void SetWelfareBelowFloorTicks(int value) const { WriteField<int>("welfareBelowFloorTicks", value); }
        float lastEmigrants() const { return ReadField<float>("lastEmigrants"); }
        void SetLastEmigrants(float value) const { WriteField<float>("lastEmigrants", value); }
        bool bordersClosed() const { return ReadField<bool>("bordersClosed"); }
        void SetBordersClosed(bool value) const { WriteField<bool>("bordersClosed", value); }
        float polityChangeUnrest() const { return ReadField<float>("polityChangeUnrest"); }
        void SetPolityChangeUnrest(float value) const { WriteField<float>("polityChangeUnrest", value); }
        int nextPolityChangeTick() const { return ReadField<int>("nextPolityChangeTick"); }
        void SetNextPolityChangeTick(int value) const { WriteField<int>("nextPolityChangeTick", value); }
        void* policyScalars() const { return ReadField<void*>("policyScalars"); }
        void SetPolicyScalars(void* value) const { WriteField<void*>("policyScalars", value); }
        void* ethnicMods() const { return ReadField<void*>("ethnicMods"); }
        void SetEthnicMods(void* value) const { WriteField<void*>("ethnicMods", value); }
        int ethnicFoldHash() const { return ReadField<int>("ethnicFoldHash"); }
        void SetEthnicFoldHash(int value) const { WriteField<int>("ethnicFoldHash", value); }
        int identityPushMask() const { return ReadField<int>("identityPushMask"); }
        void SetIdentityPushMask(int value) const { WriteField<int>("identityPushMask", value); }
        int identityGuardMask() const { return ReadField<int>("identityGuardMask"); }
        void SetIdentityGuardMask(int value) const { WriteField<int>("identityGuardMask", value); }
        int identityZonePushMask() const { return ReadField<int>("identityZonePushMask"); }
        void SetIdentityZonePushMask(int value) const { WriteField<int>("identityZonePushMask", value); }
        int promotedTiles() const { return ReadField<int>("promotedTiles"); }
        void SetPromotedTiles(int value) const { WriteField<int>("promotedTiles", value); }
        int promotedAxisTiles() const { return ReadField<int>("promotedAxisTiles"); }
        void SetPromotedAxisTiles(int value) const { WriteField<int>("promotedAxisTiles", value); }
        int promotedFrontTiles() const { return ReadField<int>("promotedFrontTiles"); }
        void SetPromotedFrontTiles(int value) const { WriteField<int>("promotedFrontTiles", value); }
        int promotedFrontAxisTiles() const { return ReadField<int>("promotedFrontAxisTiles"); }
        void SetPromotedFrontAxisTiles(int value) const { WriteField<int>("promotedFrontAxisTiles", value); }
        void* purgeOrders() const { return ReadField<void*>("purgeOrders"); }
        void SetPurgeOrders(void* value) const { WriteField<void*>("purgeOrders", value); }
        void* treatyExpulsions() const { return ReadField<void*>("treatyExpulsions"); }
        void SetTreatyExpulsions(void* value) const { WriteField<void*>("treatyExpulsions", value); }
        int purgeCursorChunk() const { return ReadField<int>("purgeCursorChunk"); }
        void SetPurgeCursorChunk(int value) const { WriteField<int>("purgeCursorChunk", value); }
        int purgeCursorOffset() const { return ReadField<int>("purgeCursorOffset"); }
        void SetPurgeCursorOffset(int value) const { WriteField<int>("purgeCursorOffset", value); }
        int purgeCircuit() const { return ReadField<int>("purgeCircuit"); }
        void SetPurgeCircuit(int value) const { WriteField<int>("purgeCircuit", value); }
        void* forgeOrders() const { return ReadField<void*>("forgeOrders"); }
        void SetForgeOrders(void* value) const { WriteField<void*>("forgeOrders", value); }
        bool purgeCircuitClean() const { return ReadField<bool>("purgeCircuitClean"); }
        void SetPurgeCircuitClean(bool value) const { WriteField<bool>("purgeCircuitClean", value); }
        int purgeAxisMask() const { return ReadField<int>("purgeAxisMask"); }
        void SetPurgeAxisMask(int value) const { WriteField<int>("purgeAxisMask", value); }
        int purgeActiveOrders() const { return ReadField<int>("purgeActiveOrders"); }
        void SetPurgeActiveOrders(int value) const { WriteField<int>("purgeActiveOrders", value); }
        int purgeActivePurges() const { return ReadField<int>("purgeActivePurges"); }
        void SetPurgeActivePurges(int value) const { WriteField<int>("purgeActivePurges", value); }
        float expelUnrest() const { return ReadField<float>("expelUnrest"); }
        void SetExpelUnrest(float value) const { WriteField<float>("expelUnrest", value); }
        float persecutedShare() const { return ReadField<float>("persecutedShare"); }
        void SetPersecutedShare(float value) const { WriteField<float>("persecutedShare", value); }
        float standingUnrest() const { return ReadField<float>("standingUnrest"); }
        void SetStandingUnrest(float value) const { WriteField<float>("standingUnrest", value); }
        float tradeTax() const { return ReadField<float>("tradeTax"); }
        void SetTradeTax(float value) const { WriteField<float>("tradeTax", value); }
        float tradeIncome() const { return ReadField<float>("tradeIncome"); }
        void SetTradeIncome(float value) const { WriteField<float>("tradeIncome", value); }
        float tradeVolume() const { return ReadField<float>("tradeVolume"); }
        void SetTradeVolume(float value) const { WriteField<float>("tradeVolume", value); }
        float tradeOpenness() const { return ReadField<float>("tradeOpenness"); }
        void SetTradeOpenness(float value) const { WriteField<float>("tradeOpenness", value); }
        int tradePartnerCount() const { return ReadField<int>("tradePartnerCount"); }
        void SetTradePartnerCount(int value) const { WriteField<int>("tradePartnerCount", value); }
        int nextRoadBuildTick() const { return ReadField<int>("nextRoadBuildTick"); }
        void SetNextRoadBuildTick(int value) const { WriteField<int>("nextRoadBuildTick", value); }
        int overlordId() const { return ReadField<int>("overlordId"); }
        void SetOverlordId(int value) const { WriteField<int>("overlordId", value); }
        float tributeRate() const { return ReadField<float>("tributeRate"); }
        void SetTributeRate(float value) const { WriteField<float>("tributeRate", value); }
        float tributePaid() const { return ReadField<float>("tributePaid"); }
        void SetTributePaid(float value) const { WriteField<float>("tributePaid", value); }
        float tributeReceived() const { return ReadField<float>("tributeReceived"); }
        void SetTributeReceived(float value) const { WriteField<float>("tributeReceived", value); }
        float armsTradeIncome() const { return ReadField<float>("armsTradeIncome"); }
        void SetArmsTradeIncome(float value) const { WriteField<float>("armsTradeIncome", value); }
        float armsTradeSpend() const { return ReadField<float>("armsTradeSpend"); }
        void SetArmsTradeSpend(float value) const { WriteField<float>("armsTradeSpend", value); }
        int tributePactToId() const { return ReadField<int>("tributePactToId"); }
        void SetTributePactToId(int value) const { WriteField<int>("tributePactToId", value); }
        float tributePactRate() const { return ReadField<float>("tributePactRate"); }
        void SetTributePactRate(float value) const { WriteField<float>("tributePactRate", value); }
        int tributePactUntilTick() const { return ReadField<int>("tributePactUntilTick"); }
        void SetTributePactUntilTick(int value) const { WriteField<int>("tributePactUntilTick", value); }
        bool vassalMayDeclareWar() const { return ReadField<bool>("vassalMayDeclareWar"); }
        void SetVassalMayDeclareWar(bool value) const { WriteField<bool>("vassalMayDeclareWar", value); }
        bool vassalMayMakeAlliances() const { return ReadField<bool>("vassalMayMakeAlliances"); }
        void SetVassalMayMakeAlliances(bool value) const { WriteField<bool>("vassalMayMakeAlliances", value); }
        bool vassalMayFoundCities() const { return ReadField<bool>("vassalMayFoundCities"); }
        void SetVassalMayFoundCities(bool value) const { WriteField<bool>("vassalMayFoundCities", value); }
        bool vassalGrantsMarchRights() const { return ReadField<bool>("vassalGrantsMarchRights"); }
        void SetVassalGrantsMarchRights(bool value) const { WriteField<bool>("vassalGrantsMarchRights", value); }
        void* preVassalColor() const { return ReadField<void*>("preVassalColor"); }
        void SetPreVassalColor(void* value) const { WriteField<void*>("preVassalColor", value); }
        bool preVassalColorSaved() const { return ReadField<bool>("preVassalColorSaved"); }
        void SetPreVassalColorSaved(bool value) const { WriteField<bool>("preVassalColorSaved", value); }
        int unionId() const { return ReadField<int>("unionId"); }
        void SetUnionId(int value) const { WriteField<int>("unionId", value); }
        int unionRole() const { return ReadField<int>("unionRole"); }
        void SetUnionRole(int value) const { WriteField<int>("unionRole", value); }
        void* preUnionColor() const { return ReadField<void*>("preUnionColor"); }
        void SetPreUnionColor(void* value) const { WriteField<void*>("preUnionColor", value); }
        bool preUnionColorSaved() const { return ReadField<bool>("preUnionColorSaved"); }
        void SetPreUnionColorSaved(bool value) const { WriteField<bool>("preUnionColorSaved", value); }
        void* preUnionName() const { return ReadField<void*>("preUnionName"); }
        void SetPreUnionName(void* value) const { WriteField<void*>("preUnionName", value); }
        bool preUnionNameSaved() const { return ReadField<bool>("preUnionNameSaved"); }
        void SetPreUnionNameSaved(bool value) const { WriteField<bool>("preUnionNameSaved", value); }
        bool identityLocked() const { return ReadField<bool>("identityLocked"); }
        void SetIdentityLocked(bool value) const { WriteField<bool>("identityLocked", value); }
        int unionJoinedTick() const { return ReadField<int>("unionJoinedTick"); }
        void SetUnionJoinedTick(int value) const { WriteField<int>("unionJoinedTick", value); }
        int unionSubsidyReadyTick() const { return ReadField<int>("unionSubsidyReadyTick"); }
        void SetUnionSubsidyReadyTick(int value) const { WriteField<int>("unionSubsidyReadyTick", value); }
        int unionAutonomyReadyTick() const { return ReadField<int>("unionAutonomyReadyTick"); }
        void SetUnionAutonomyReadyTick(int value) const { WriteField<int>("unionAutonomyReadyTick", value); }
        int unionShieldUntilTick() const { return ReadField<int>("unionShieldUntilTick"); }
        void SetUnionShieldUntilTick(int value) const { WriteField<int>("unionShieldUntilTick", value); }
        void* leader() const { return ReadField<void*>("leader"); }
        void SetLeader(void* value) const { WriteField<void*>("leader", value); }
        float baseExpansionRate() const { return ReadField<float>("baseExpansionRate"); }
        void SetBaseExpansionRate(float value) const { WriteField<float>("baseExpansionRate", value); }
        int nextSettleAllowedTick() const { return ReadField<int>("nextSettleAllowedTick"); }
        void SetNextSettleAllowedTick(int value) const { WriteField<int>("nextSettleAllowedTick", value); }
        void* warGoal() const { return ReadField<void*>("warGoal"); }
        void SetWarGoal(void* value) const { WriteField<void*>("warGoal", value); }
    };
}
