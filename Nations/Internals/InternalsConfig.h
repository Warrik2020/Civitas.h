#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class InternalsConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit InternalsConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "InternalsConfig") {}
    public:
        float startingPopulation() const { return ReadField<float>("startingPopulation"); }
        void startingPopulation(float value) const { WriteField<float>("startingPopulation", value); }
        float popPerTile() const { return ReadField<float>("popPerTile"); }
        void popPerTile(float value) const { WriteField<float>("popPerTile", value); }
        float popGrowthRate() const { return ReadField<float>("popGrowthRate"); }
        void popGrowthRate(float value) const { WriteField<float>("popGrowthRate", value); }
        float eraCapacityBonus() const { return ReadField<float>("eraCapacityBonus"); }
        void eraCapacityBonus(float value) const { WriteField<float>("eraCapacityBonus", value); }
        float popCapacityFloor() const { return ReadField<float>("popCapacityFloor"); }
        void popCapacityFloor(float value) const { WriteField<float>("popCapacityFloor", value); }
        float popGrowthSeed() const { return ReadField<float>("popGrowthSeed"); }
        void popGrowthSeed(float value) const { WriteField<float>("popGrowthSeed", value); }
        float popOvershootTolerance() const { return ReadField<float>("popOvershootTolerance"); }
        void popOvershootTolerance(float value) const { WriteField<float>("popOvershootTolerance", value); }
        float socialSpendingMax() const { return ReadField<float>("socialSpendingMax"); }
        void socialSpendingMax(float value) const { WriteField<float>("socialSpendingMax", value); }
        float socialSpendingCostPerPop() const { return ReadField<float>("socialSpendingCostPerPop"); }
        void socialSpendingCostPerPop(float value) const { WriteField<float>("socialSpendingCostPerPop", value); }
        float socialFedLevel() const { return ReadField<float>("socialFedLevel"); }
        void socialFedLevel(float value) const { WriteField<float>("socialFedLevel", value); }
        float socialGrowthLevel() const { return ReadField<float>("socialGrowthLevel"); }
        void socialGrowthLevel(float value) const { WriteField<float>("socialGrowthLevel", value); }
        float welfarePerCapitaFedLevel() const { return ReadField<float>("welfarePerCapitaFedLevel"); }
        void welfarePerCapitaFedLevel(float value) const { WriteField<float>("welfarePerCapitaFedLevel", value); }
        float welfarePerCapitaGrowthLevel() const { return ReadField<float>("welfarePerCapitaGrowthLevel"); }
        void welfarePerCapitaGrowthLevel(float value) const { WriteField<float>("welfarePerCapitaGrowthLevel", value); }
        float welfareGrowthShareLevel() const { return ReadField<float>("welfareGrowthShareLevel"); }
        void welfareGrowthShareLevel(float value) const { WriteField<float>("welfareGrowthShareLevel", value); }
        float socialPlateauFullLevel() const { return ReadField<float>("socialPlateauFullLevel"); }
        void socialPlateauFullLevel(float value) const { WriteField<float>("socialPlateauFullLevel", value); }
        float socialGrowthPerYear() const { return ReadField<float>("socialGrowthPerYear"); }
        void socialGrowthPerYear(float value) const { WriteField<float>("socialGrowthPerYear", value); }
        float socialGrowthMaxPerYear() const { return ReadField<float>("socialGrowthMaxPerYear"); }
        void socialGrowthMaxPerYear(float value) const { WriteField<float>("socialGrowthMaxPerYear", value); }
        float socialGrowthFactor() const { return ReadField<float>("socialGrowthFactor"); }
        void socialGrowthFactor(float value) const { WriteField<float>("socialGrowthFactor", value); }
        float socialHappinessFactor() const { return ReadField<float>("socialHappinessFactor"); }
        void socialHappinessFactor(float value) const { WriteField<float>("socialHappinessFactor", value); }
        float civBudgetCostPerTick() const { return ReadField<float>("civBudgetCostPerTick"); }
        void civBudgetCostPerTick(float value) const { WriteField<float>("civBudgetCostPerTick", value); }
        float milBudgetCostPerTick() const { return ReadField<float>("milBudgetCostPerTick"); }
        void milBudgetCostPerTick(float value) const { WriteField<float>("milBudgetCostPerTick", value); }
        float infraBudgetCostPerTick() const { return ReadField<float>("infraBudgetCostPerTick"); }
        void infraBudgetCostPerTick(float value) const { WriteField<float>("infraBudgetCostPerTick", value); }
        float budgetIncomeShare() const { return ReadField<float>("budgetIncomeShare"); }
        void budgetIncomeShare(float value) const { WriteField<float>("budgetIncomeShare", value); }
        int budgetFundCapTicks() const { return ReadField<int>("budgetFundCapTicks"); }
        void budgetFundCapTicks(int value) const { WriteField<int>("budgetFundCapTicks", value); }
        float budgetFundPriceMargin() const { return ReadField<float>("budgetFundPriceMargin"); }
        void budgetFundPriceMargin(float value) const { WriteField<float>("budgetFundPriceMargin", value); }
        float popPerBuilding() const { return ReadField<float>("popPerBuilding"); }
        void popPerBuilding(float value) const { WriteField<float>("popPerBuilding", value); }
        float incomePerCivFactory() const { return ReadField<float>("incomePerCivFactory"); }
        void incomePerCivFactory(float value) const { WriteField<float>("incomePerCivFactory", value); }
        float popCapacityPerCivFactory() const { return ReadField<float>("popCapacityPerCivFactory"); }
        void popCapacityPerCivFactory(float value) const { WriteField<float>("popCapacityPerCivFactory", value); }
        float civFactoryUpkeepPerTick() const { return ReadField<float>("civFactoryUpkeepPerTick"); }
        void civFactoryUpkeepPerTick(float value) const { WriteField<float>("civFactoryUpkeepPerTick", value); }
        float milFactoryUpkeepPerTick() const { return ReadField<float>("milFactoryUpkeepPerTick"); }
        void milFactoryUpkeepPerTick(float value) const { WriteField<float>("milFactoryUpkeepPerTick", value); }
        float popCapacityPerHousing() const { return ReadField<float>("popCapacityPerHousing"); }
        void popCapacityPerHousing(float value) const { WriteField<float>("popCapacityPerHousing", value); }
        float popGrowthPerHousing() const { return ReadField<float>("popGrowthPerHousing"); }
        void popGrowthPerHousing(float value) const { WriteField<float>("popGrowthPerHousing", value); }
        float statePopGrowthPerHousing() const { return ReadField<float>("statePopGrowthPerHousing"); }
        void statePopGrowthPerHousing(float value) const { WriteField<float>("statePopGrowthPerHousing", value); }
        float popGrowthHousingMax() const { return ReadField<float>("popGrowthHousingMax"); }
        void popGrowthHousingMax(float value) const { WriteField<float>("popGrowthHousingMax", value); }
        float buildingUpkeepPerPower() const { return ReadField<float>("buildingUpkeepPerPower"); }
        void buildingUpkeepPerPower(float value) const { WriteField<float>("buildingUpkeepPerPower", value); }
        float stateBuildingUpkeepMul() const { return ReadField<float>("stateBuildingUpkeepMul"); }
        void stateBuildingUpkeepMul(float value) const { WriteField<float>("stateBuildingUpkeepMul", value); }
        bool enableArmyUpkeep() const { return ReadField<bool>("enableArmyUpkeep"); }
        void enableArmyUpkeep(bool value) const { WriteField<bool>("enableArmyUpkeep", value); }
        float divisionUpkeepPerTick() const { return ReadField<float>("divisionUpkeepPerTick"); }
        void divisionUpkeepPerTick(float value) const { WriteField<float>("divisionUpkeepPerTick", value); }
        float wartimeUpkeepMul() const { return ReadField<float>("wartimeUpkeepMul"); }
        void wartimeUpkeepMul(float value) const { WriteField<float>("wartimeUpkeepMul", value); }
        float milFactoryUpkeepOffset() const { return ReadField<float>("milFactoryUpkeepOffset"); }
        void milFactoryUpkeepOffset(float value) const { WriteField<float>("milFactoryUpkeepOffset", value); }
        float armsStartStock() const { return ReadField<float>("armsStartStock"); }
        void armsStartStock(float value) const { WriteField<float>("armsStartStock", value); }
        float armsBasePerTick() const { return ReadField<float>("armsBasePerTick"); }
        void armsBasePerTick(float value) const { WriteField<float>("armsBasePerTick", value); }
        float armsPerMilFactoryPerTick() const { return ReadField<float>("armsPerMilFactoryPerTick"); }
        void armsPerMilFactoryPerTick(float value) const { WriteField<float>("armsPerMilFactoryPerTick", value); }
        float armsStockCapBase() const { return ReadField<float>("armsStockCapBase"); }
        void armsStockCapBase(float value) const { WriteField<float>("armsStockCapBase", value); }
        float armsStockCapPerMilFactory() const { return ReadField<float>("armsStockCapPerMilFactory"); }
        void armsStockCapPerMilFactory(float value) const { WriteField<float>("armsStockCapPerMilFactory", value); }
        float armsBudgetCostPerTick() const { return ReadField<float>("armsBudgetCostPerTick"); }
        void armsBudgetCostPerTick(float value) const { WriteField<float>("armsBudgetCostPerTick", value); }
        float armsPerFundingPerTick() const { return ReadField<float>("armsPerFundingPerTick"); }
        void armsPerFundingPerTick(float value) const { WriteField<float>("armsPerFundingPerTick", value); }
        float aiArmsSurplusFraction() const { return ReadField<float>("aiArmsSurplusFraction"); }
        void aiArmsSurplusFraction(float value) const { WriteField<float>("aiArmsSurplusFraction", value); }
        int workshopSlots() const { return ReadField<int>("workshopSlots"); }
        void workshopSlots(int value) const { WriteField<int>("workshopSlots", value); }
        float workshopOutputMul() const { return ReadField<float>("workshopOutputMul"); }
        void workshopOutputMul(float value) const { WriteField<float>("workshopOutputMul", value); }
        void* meleePool() const { return ReadField<void*>("meleePool"); }
        void meleePool(void* value) const { WriteField<void*>("meleePool", value); }
        void* armourPool() const { return ReadField<void*>("armourPool"); }
        void armourPool(void* value) const { WriteField<void*>("armourPool", value); }
        void* vehiclesPool() const { return ReadField<void*>("vehiclesPool"); }
        void vehiclesPool(void* value) const { WriteField<void*>("vehiclesPool", value); }
        void* artilleryPool() const { return ReadField<void*>("artilleryPool"); }
        void artilleryPool(void* value) const { WriteField<void*>("artilleryPool", value); }
        bool enableUpkeepScaleEconomy() const { return ReadField<bool>("enableUpkeepScaleEconomy"); }
        void enableUpkeepScaleEconomy(bool value) const { WriteField<bool>("enableUpkeepScaleEconomy", value); }
        float upkeepScaleFullWorldShare() const { return ReadField<float>("upkeepScaleFullWorldShare"); }
        void upkeepScaleFullWorldShare(float value) const { WriteField<float>("upkeepScaleFullWorldShare", value); }
        float upkeepScaleMinFactor() const { return ReadField<float>("upkeepScaleMinFactor"); }
        void upkeepScaleMinFactor(float value) const { WriteField<float>("upkeepScaleMinFactor", value); }
        float wartimeUpkeepLongWarSlope() const { return ReadField<float>("wartimeUpkeepLongWarSlope"); }
        void wartimeUpkeepLongWarSlope(float value) const { WriteField<float>("wartimeUpkeepLongWarSlope", value); }
        float wartimeUpkeepLongWarMax() const { return ReadField<float>("wartimeUpkeepLongWarMax"); }
        void wartimeUpkeepLongWarMax(float value) const { WriteField<float>("wartimeUpkeepLongWarMax", value); }
        float manpowerCapShare() const { return ReadField<float>("manpowerCapShare"); }
        void manpowerCapShare(float value) const { WriteField<float>("manpowerCapShare", value); }
        float manpowerCapBase() const { return ReadField<float>("manpowerCapBase"); }
        void manpowerCapBase(float value) const { WriteField<float>("manpowerCapBase", value); }
        float manpowerCapMaxShare() const { return ReadField<float>("manpowerCapMaxShare"); }
        void manpowerCapMaxShare(float value) const { WriteField<float>("manpowerCapMaxShare", value); }
        float manpowerIntakeSharePerTick() const { return ReadField<float>("manpowerIntakeSharePerTick"); }
        void manpowerIntakeSharePerTick(float value) const { WriteField<float>("manpowerIntakeSharePerTick", value); }
        float manpowerIntakeBasePerTick() const { return ReadField<float>("manpowerIntakeBasePerTick"); }
        void manpowerIntakeBasePerTick(float value) const { WriteField<float>("manpowerIntakeBasePerTick", value); }
        float manpowerStartFraction() const { return ReadField<float>("manpowerStartFraction"); }
        void manpowerStartFraction(float value) const { WriteField<float>("manpowerStartFraction", value); }
        float strainManpowerWeight() const { return ReadField<float>("strainManpowerWeight"); }
        void strainManpowerWeight(float value) const { WriteField<float>("strainManpowerWeight", value); }
        float identityMismatchWeight() const { return ReadField<float>("identityMismatchWeight"); }
        void identityMismatchWeight(float value) const { WriteField<float>("identityMismatchWeight", value); }
        float assimilationPushUpkeepPerTick() const { return ReadField<float>("assimilationPushUpkeepPerTick"); }
        void assimilationPushUpkeepPerTick(float value) const { WriteField<float>("assimilationPushUpkeepPerTick", value); }
        float assimilationPushCostPerTilePerTick() const { return ReadField<float>("assimilationPushCostPerTilePerTick"); }
        void assimilationPushCostPerTilePerTick(float value) const { WriteField<float>("assimilationPushCostPerTilePerTick", value); }
        float borderGuardUpkeepPerTick() const { return ReadField<float>("borderGuardUpkeepPerTick"); }
        void borderGuardUpkeepPerTick(float value) const { WriteField<float>("borderGuardUpkeepPerTick", value); }
        float borderGuardCostPerTilePerTick() const { return ReadField<float>("borderGuardCostPerTilePerTick"); }
        void borderGuardCostPerTilePerTick(float value) const { WriteField<float>("borderGuardCostPerTilePerTick", value); }
        float aiIdentityIncomeMargin() const { return ReadField<float>("aiIdentityIncomeMargin"); }
        void aiIdentityIncomeMargin(float value) const { WriteField<float>("aiIdentityIncomeMargin", value); }
        float promotionCostPerTilePerTick() const { return ReadField<float>("promotionCostPerTilePerTick"); }
        void promotionCostPerTilePerTick(float value) const { WriteField<float>("promotionCostPerTilePerTick", value); }
        int expulsionTilesPerTick() const { return ReadField<int>("expulsionTilesPerTick"); }
        void expulsionTilesPerTick(int value) const { WriteField<int>("expulsionTilesPerTick", value); }
        int expulsionQuantaPerVisit() const { return ReadField<int>("expulsionQuantaPerVisit"); }
        void expulsionQuantaPerVisit(int value) const { WriteField<int>("expulsionQuantaPerVisit", value); }
        float expulsionPopulationFactor() const { return ReadField<float>("expulsionPopulationFactor"); }
        void expulsionPopulationFactor(float value) const { WriteField<float>("expulsionPopulationFactor", value); }
        float expulsionArrivalShare() const { return ReadField<float>("expulsionArrivalShare"); }
        void expulsionArrivalShare(float value) const { WriteField<float>("expulsionArrivalShare", value); }
        float expulsionGrievancePerTile() const { return ReadField<float>("expulsionGrievancePerTile"); }
        void expulsionGrievancePerTile(float value) const { WriteField<float>("expulsionGrievancePerTile", value); }
        float expulsionOpinionPerTile() const { return ReadField<float>("expulsionOpinionPerTile"); }
        void expulsionOpinionPerTile(float value) const { WriteField<float>("expulsionOpinionPerTile", value); }
        float expulsionUnrest() const { return ReadField<float>("expulsionUnrest"); }
        void expulsionUnrest(float value) const { WriteField<float>("expulsionUnrest", value); }
        float expulsionUnrestStepPerTick() const { return ReadField<float>("expulsionUnrestStepPerTick"); }
        void expulsionUnrestStepPerTick(float value) const { WriteField<float>("expulsionUnrestStepPerTick", value); }
        float expulsionUpkeepPerTick() const { return ReadField<float>("expulsionUpkeepPerTick"); }
        void expulsionUpkeepPerTick(float value) const { WriteField<float>("expulsionUpkeepPerTick", value); }
        float exterminationPopulationMul() const { return ReadField<float>("exterminationPopulationMul"); }
        void exterminationPopulationMul(float value) const { WriteField<float>("exterminationPopulationMul", value); }
        float exterminationOutrageMul() const { return ReadField<float>("exterminationOutrageMul"); }
        void exterminationOutrageMul(float value) const { WriteField<float>("exterminationOutrageMul", value); }
        int treatyExpulsionTilesPerTick() const { return ReadField<int>("treatyExpulsionTilesPerTick"); }
        void treatyExpulsionTilesPerTick(int value) const { WriteField<int>("treatyExpulsionTilesPerTick", value); }
        int treatyExpulsionQuantaPerVisit() const { return ReadField<int>("treatyExpulsionQuantaPerVisit"); }
        void treatyExpulsionQuantaPerVisit(int value) const { WriteField<int>("treatyExpulsionQuantaPerVisit", value); }
        float treatyExpulsionArrivalShare() const { return ReadField<float>("treatyExpulsionArrivalShare"); }
        void treatyExpulsionArrivalShare(float value) const { WriteField<float>("treatyExpulsionArrivalShare", value); }
        float treatyExpulsionYears() const { return ReadField<float>("treatyExpulsionYears"); }
        void treatyExpulsionYears(float value) const { WriteField<float>("treatyExpulsionYears", value); }
        float peaceExpulsionValueShare() const { return ReadField<float>("peaceExpulsionValueShare"); }
        void peaceExpulsionValueShare(float value) const { WriteField<float>("peaceExpulsionValueShare", value); }
        float peopleStatelessCapacityShare() const { return ReadField<float>("peopleStatelessCapacityShare"); }
        void peopleStatelessCapacityShare(float value) const { WriteField<float>("peopleStatelessCapacityShare", value); }
        float peopleSpreadPerMonth() const { return ReadField<float>("peopleSpreadPerMonth"); }
        void peopleSpreadPerMonth(float value) const { WriteField<float>("peopleSpreadPerMonth", value); }
        float peopleSpreadUnownedMul() const { return ReadField<float>("peopleSpreadUnownedMul"); }
        void peopleSpreadUnownedMul(float value) const { WriteField<float>("peopleSpreadUnownedMul", value); }
        float peopleSpreadAcrossBordersMul() const { return ReadField<float>("peopleSpreadAcrossBordersMul"); }
        void peopleSpreadAcrossBordersMul(float value) const { WriteField<float>("peopleSpreadAcrossBordersMul", value); }
        float peopleTownTileWeight() const { return ReadField<float>("peopleTownTileWeight"); }
        void peopleTownTileWeight(float value) const { WriteField<float>("peopleTownTileWeight", value); }
        float peoplePioneers() const { return ReadField<float>("peoplePioneers"); }
        void peoplePioneers(float value) const { WriteField<float>("peoplePioneers", value); }
        float peopleRefugeeTownShare() const { return ReadField<float>("peopleRefugeeTownShare"); }
        void peopleRefugeeTownShare(float value) const { WriteField<float>("peopleRefugeeTownShare", value); }
        float peopleResettleShare() const { return ReadField<float>("peopleResettleShare"); }
        void peopleResettleShare(float value) const { WriteField<float>("peopleResettleShare", value); }
        int peopleTravelTicksBase() const { return ReadField<int>("peopleTravelTicksBase"); }
        void peopleTravelTicksBase(int value) const { WriteField<int>("peopleTravelTicksBase", value); }
        float incomePerPop() const { return ReadField<float>("incomePerPop"); }
        void incomePerPop(float value) const { WriteField<float>("incomePerPop", value); }
        float incomePerTile() const { return ReadField<float>("incomePerTile"); }
        void incomePerTile(float value) const { WriteField<float>("incomePerTile", value); }
        float incomePerBuilding() const { return ReadField<float>("incomePerBuilding"); }
        void incomePerBuilding(float value) const { WriteField<float>("incomePerBuilding", value); }
        bool enableMonthlyPayday() const { return ReadField<bool>("enableMonthlyPayday"); }
        void enableMonthlyPayday(bool value) const { WriteField<bool>("enableMonthlyPayday", value); }
        bool enableIncomeCurve() const { return ReadField<bool>("enableIncomeCurve"); }
        void enableIncomeCurve(bool value) const { WriteField<bool>("enableIncomeCurve", value); }
        bool enableAdministration() const { return ReadField<bool>("enableAdministration"); }
        void enableAdministration(bool value) const { WriteField<bool>("enableAdministration", value); }
        float adminBasePerTick() const { return ReadField<float>("adminBasePerTick"); }
        void adminBasePerTick(float value) const { WriteField<float>("adminBasePerTick", value); }
        float adminCostPerTile() const { return ReadField<float>("adminCostPerTile"); }
        void adminCostPerTile(float value) const { WriteField<float>("adminCostPerTile", value); }
        float adminSoftCapWorldShare() const { return ReadField<float>("adminSoftCapWorldShare"); }
        void adminSoftCapWorldShare(float value) const { WriteField<float>("adminSoftCapWorldShare", value); }
        float adminSizeExponent() const { return ReadField<float>("adminSizeExponent"); }
        void adminSizeExponent(float value) const { WriteField<float>("adminSizeExponent", value); }
        int adminSoftCapFallbackTiles() const { return ReadField<int>("adminSoftCapFallbackTiles"); }
        void adminSoftCapFallbackTiles(int value) const { WriteField<int>("adminSoftCapFallbackTiles", value); }
        float uncoreMinTaxMul() const { return ReadField<float>("uncoreMinTaxMul"); }
        void uncoreMinTaxMul(float value) const { WriteField<float>("uncoreMinTaxMul", value); }
        float instabilityAdminSurcharge() const { return ReadField<float>("instabilityAdminSurcharge"); }
        void instabilityAdminSurcharge(float value) const { WriteField<float>("instabilityAdminSurcharge", value); }
        float occupationAdminMul() const { return ReadField<float>("occupationAdminMul"); }
        void occupationAdminMul(float value) const { WriteField<float>("occupationAdminMul", value); }
        float baseUncoreStability() const { return ReadField<float>("baseUncoreStability"); }
        void baseUncoreStability(float value) const { WriteField<float>("baseUncoreStability", value); }
        float occupiedStabilityTarget() const { return ReadField<float>("occupiedStabilityTarget"); }
        void occupiedStabilityTarget(float value) const { WriteField<float>("occupiedStabilityTarget", value); }
        float stabilityDriftPerTick() const { return ReadField<float>("stabilityDriftPerTick"); }
        void stabilityDriftPerTick(float value) const { WriteField<float>("stabilityDriftPerTick", value); }
        float instabilityHappinessFactor() const { return ReadField<float>("instabilityHappinessFactor"); }
        void instabilityHappinessFactor(float value) const { WriteField<float>("instabilityHappinessFactor", value); }
        int occupationFreshTicks() const { return ReadField<int>("occupationFreshTicks"); }
        void occupationFreshTicks(int value) const { WriteField<int>("occupationFreshTicks", value); }
        int integrationTicks() const { return ReadField<int>("integrationTicks"); }
        void integrationTicks(int value) const { WriteField<int>("integrationTicks", value); }
        float integrationCostPerTilePerTick() const { return ReadField<float>("integrationCostPerTilePerTick"); }
        void integrationCostPerTilePerTick(float value) const { WriteField<float>("integrationCostPerTilePerTick", value); }
        int aiMaxConcurrentIntegrations() const { return ReadField<int>("aiMaxConcurrentIntegrations"); }
        void aiMaxConcurrentIntegrations(int value) const { WriteField<int>("aiMaxConcurrentIntegrations", value); }
        float aiIntegrationIncomeMargin() const { return ReadField<float>("aiIntegrationIncomeMargin"); }
        void aiIntegrationIncomeMargin(float value) const { WriteField<float>("aiIntegrationIncomeMargin", value); }
        float warMinStabilityIndex() const { return ReadField<float>("warMinStabilityIndex"); }
        void warMinStabilityIndex(float value) const { WriteField<float>("warMinStabilityIndex", value); }
        float expansionSettlersPerPopPerTick() const { return ReadField<float>("expansionSettlersPerPopPerTick"); }
        void expansionSettlersPerPopPerTick(float value) const { WriteField<float>("expansionSettlersPerPopPerTick", value); }
        float expansionSettlersPerTile() const { return ReadField<float>("expansionSettlersPerTile"); }
        void expansionSettlersPerTile(float value) const { WriteField<float>("expansionSettlersPerTile", value); }
        float expansionSettlerBankTicks() const { return ReadField<float>("expansionSettlerBankTicks"); }
        void expansionSettlerBankTicks(float value) const { WriteField<float>("expansionSettlerBankTicks", value); }
        float expansionGoldPerTile() const { return ReadField<float>("expansionGoldPerTile"); }
        void expansionGoldPerTile(float value) const { WriteField<float>("expansionGoldPerTile", value); }
        float expansionSizeReferenceTiles() const { return ReadField<float>("expansionSizeReferenceTiles"); }
        void expansionSizeReferenceTiles(float value) const { WriteField<float>("expansionSizeReferenceTiles", value); }
        float expansionSizeExponent() const { return ReadField<float>("expansionSizeExponent"); }
        void expansionSizeExponent(float value) const { WriteField<float>("expansionSizeExponent", value); }
        float expansionSizeFloor() const { return ReadField<float>("expansionSizeFloor"); }
        void expansionSizeFloor(float value) const { WriteField<float>("expansionSizeFloor", value); }
        float expansionIncomeShare() const { return ReadField<float>("expansionIncomeShare"); }
        void expansionIncomeShare(float value) const { WriteField<float>("expansionIncomeShare", value); }
        float expansionFundBankTicks() const { return ReadField<float>("expansionFundBankTicks"); }
        void expansionFundBankTicks(float value) const { WriteField<float>("expansionFundBankTicks", value); }
        int expansionMaxTilesPerTick() const { return ReadField<int>("expansionMaxTilesPerTick"); }
        void expansionMaxTilesPerTick(int value) const { WriteField<int>("expansionMaxTilesPerTick", value); }
        float expansionMinThrottle() const { return ReadField<float>("expansionMinThrottle"); }
        void expansionMinThrottle(float value) const { WriteField<float>("expansionMinThrottle", value); }
        float expansionResistanceWeight() const { return ReadField<float>("expansionResistanceWeight"); }
        void expansionResistanceWeight(float value) const { WriteField<float>("expansionResistanceWeight", value); }
        float expansionResistanceSlowdown() const { return ReadField<float>("expansionResistanceSlowdown"); }
        void expansionResistanceSlowdown(float value) const { WriteField<float>("expansionResistanceSlowdown", value); }
        float expansionReliefWeight() const { return ReadField<float>("expansionReliefWeight"); }
        void expansionReliefWeight(float value) const { WriteField<float>("expansionReliefWeight", value); }
        float expansionDistanceWeight() const { return ReadField<float>("expansionDistanceWeight"); }
        void expansionDistanceWeight(float value) const { WriteField<float>("expansionDistanceWeight", value); }
        float expansionReachFloorTiles() const { return ReadField<float>("expansionReachFloorTiles"); }
        void expansionReachFloorTiles(float value) const { WriteField<float>("expansionReachFloorTiles", value); }
        float expansionFoundingSettlers() const { return ReadField<float>("expansionFoundingSettlers"); }
        void expansionFoundingSettlers(float value) const { WriteField<float>("expansionFoundingSettlers", value); }
        float expansionFoundingFund() const { return ReadField<float>("expansionFoundingFund"); }
        void expansionFoundingFund(float value) const { WriteField<float>("expansionFoundingFund", value); }
        int expansionFoundingMaxTiles() const { return ReadField<int>("expansionFoundingMaxTiles"); }
        void expansionFoundingMaxTiles(int value) const { WriteField<int>("expansionFoundingMaxTiles", value); }
        bool enableExpansionCeiling() const { return ReadField<bool>("enableExpansionCeiling"); }
        void enableExpansionCeiling(bool value) const { WriteField<bool>("enableExpansionCeiling", value); }
        float expansionCeilingMinShare() const { return ReadField<float>("expansionCeilingMinShare"); }
        void expansionCeilingMinShare(float value) const { WriteField<float>("expansionCeilingMinShare", value); }
        float expansionCeilingMaxShare() const { return ReadField<float>("expansionCeilingMaxShare"); }
        void expansionCeilingMaxShare(float value) const { WriteField<float>("expansionCeilingMaxShare", value); }
        float expansionCeilingUnstableMul() const { return ReadField<float>("expansionCeilingUnstableMul"); }
        void expansionCeilingUnstableMul(float value) const { WriteField<float>("expansionCeilingUnstableMul", value); }
        int expansionCeilingFloorTiles() const { return ReadField<int>("expansionCeilingFloorTiles"); }
        void expansionCeilingFloorTiles(int value) const { WriteField<int>("expansionCeilingFloorTiles", value); }
        float expansionCeilingFallbackTiles() const { return ReadField<float>("expansionCeilingFallbackTiles"); }
        void expansionCeilingFallbackTiles(float value) const { WriteField<float>("expansionCeilingFallbackTiles", value); }
        float taxRateMin() const { return ReadField<float>("taxRateMin"); }
        void taxRateMin(float value) const { WriteField<float>("taxRateMin", value); }
        float taxRateMax() const { return ReadField<float>("taxRateMax"); }
        void taxRateMax(float value) const { WriteField<float>("taxRateMax", value); }
        float taxHappinessFactor() const { return ReadField<float>("taxHappinessFactor"); }
        void taxHappinessFactor(float value) const { WriteField<float>("taxHappinessFactor", value); }
        int politicsIntervalTicks() const { return ReadField<int>("politicsIntervalTicks"); }
        void politicsIntervalTicks(int value) const { WriteField<int>("politicsIntervalTicks", value); }
        float treasuryHealthyDays() const { return ReadField<float>("treasuryHealthyDays"); }
        void treasuryHealthyDays(float value) const { WriteField<float>("treasuryHealthyDays", value); }
        float warInstabilityPerWar() const { return ReadField<float>("warInstabilityPerWar"); }
        void warInstabilityPerWar(float value) const { WriteField<float>("warInstabilityPerWar", value); }
        float warLengthInstabilitySlope() const { return ReadField<float>("warLengthInstabilitySlope"); }
        void warLengthInstabilitySlope(float value) const { WriteField<float>("warLengthInstabilitySlope", value); }
        float warLengthInstabilityMax() const { return ReadField<float>("warLengthInstabilityMax"); }
        void warLengthInstabilityMax(float value) const { WriteField<float>("warLengthInstabilityMax", value); }
        float consolidationPullWeight() const { return ReadField<float>("consolidationPullWeight"); }
        void consolidationPullWeight(float value) const { WriteField<float>("consolidationPullWeight", value); }
        float techBaseRate() const { return ReadField<float>("techBaseRate"); }
        void techBaseRate(float value) const { WriteField<float>("techBaseRate", value); }
        float techPopFactor() const { return ReadField<float>("techPopFactor"); }
        void techPopFactor(float value) const { WriteField<float>("techPopFactor", value); }
        float techPopScale() const { return ReadField<float>("techPopScale"); }
        void techPopScale(float value) const { WriteField<float>("techPopScale", value); }
        float techPopExponent() const { return ReadField<float>("techPopExponent"); }
        void techPopExponent(float value) const { WriteField<float>("techPopExponent", value); }
        float techBuildingFactor() const { return ReadField<float>("techBuildingFactor"); }
        void techBuildingFactor(float value) const { WriteField<float>("techBuildingFactor", value); }
        float techResearchBuildingFactor() const { return ReadField<float>("techResearchBuildingFactor"); }
        void techResearchBuildingFactor(float value) const { WriteField<float>("techResearchBuildingFactor", value); }
        void* eraThresholds() const { return ReadField<void*>("eraThresholds"); }
        void eraThresholds(void* value) const { WriteField<void*>("eraThresholds", value); }
        void* eraResearchedTechs() const { return ReadField<void*>("eraResearchedTechs"); }
        void eraResearchedTechs(void* value) const { WriteField<void*>("eraResearchedTechs", value); }
        void* eraNames() const { return ReadField<void*>("eraNames"); }
        void eraNames(void* value) const { WriteField<void*>("eraNames", value); }
        void* buildingNames() const { return ReadField<void*>("buildingNames"); }
        void buildingNames(void* value) const { WriteField<void*>("buildingNames", value); }
        bool enableResearch() const { return ReadField<bool>("enableResearch"); }
        void enableResearch(bool value) const { WriteField<bool>("enableResearch", value); }
        float researchRateMul() const { return ReadField<float>("researchRateMul"); }
        void researchRateMul(float value) const { WriteField<float>("researchRateMul", value); }
        float researchCostMul() const { return ReadField<float>("researchCostMul"); }
        void researchCostMul(float value) const { WriteField<float>("researchCostMul", value); }
        float researchAheadCostPerTier() const { return ReadField<float>("researchAheadCostPerTier"); }
        void researchAheadCostPerTier(float value) const { WriteField<float>("researchAheadCostPerTier", value); }
        float researchBehindCostPerTier() const { return ReadField<float>("researchBehindCostPerTier"); }
        void researchBehindCostPerTier(float value) const { WriteField<float>("researchBehindCostPerTier", value); }
        float researchBehindCostFloor() const { return ReadField<float>("researchBehindCostFloor"); }
        void researchBehindCostFloor(float value) const { WriteField<float>("researchBehindCostFloor", value); }
        float researchBankCap() const { return ReadField<float>("researchBankCap"); }
        void researchBankCap(float value) const { WriteField<float>("researchBankCap", value); }
        float researchAtWarMilBias() const { return ReadField<float>("researchAtWarMilBias"); }
        void researchAtWarMilBias(float value) const { WriteField<float>("researchAtWarMilBias", value); }
        float researchBrokeEcoBias() const { return ReadField<float>("researchBrokeEcoBias"); }
        void researchBrokeEcoBias(float value) const { WriteField<float>("researchBrokeEcoBias", value); }
        float researchCostNorm() const { return ReadField<float>("researchCostNorm"); }
        void researchCostNorm(float value) const { WriteField<float>("researchCostNorm", value); }
        float researchBudgetCostPerTick() const { return ReadField<float>("researchBudgetCostPerTick"); }
        void researchBudgetCostPerTick(float value) const { WriteField<float>("researchBudgetCostPerTick", value); }
        float researchFundingRateBonus() const { return ReadField<float>("researchFundingRateBonus"); }
        void researchFundingRateBonus(float value) const { WriteField<float>("researchFundingRateBonus", value); }
        float aiResearchSurplusFraction() const { return ReadField<float>("aiResearchSurplusFraction"); }
        void aiResearchSurplusFraction(float value) const { WriteField<float>("aiResearchSurplusFraction", value); }
        bool enableAiEconomicPolicy() const { return ReadField<bool>("enableAiEconomicPolicy"); }
        void enableAiEconomicPolicy(bool value) const { WriteField<bool>("enableAiEconomicPolicy", value); }
        float aiPolicyAdjustStep() const { return ReadField<float>("aiPolicyAdjustStep"); }
        void aiPolicyAdjustStep(float value) const { WriteField<float>("aiPolicyAdjustStep", value); }
        float aiWarTaxRate() const { return ReadField<float>("aiWarTaxRate"); }
        void aiWarTaxRate(float value) const { WriteField<float>("aiWarTaxRate", value); }
        float aiCrisisTaxRate() const { return ReadField<float>("aiCrisisTaxRate"); }
        void aiCrisisTaxRate(float value) const { WriteField<float>("aiCrisisTaxRate", value); }
        float aiPeaceTaxTarget() const { return ReadField<float>("aiPeaceTaxTarget"); }
        void aiPeaceTaxTarget(float value) const { WriteField<float>("aiPeaceTaxTarget", value); }
        float aiTariffBase() const { return ReadField<float>("aiTariffBase"); }
        void aiTariffBase(float value) const { WriteField<float>("aiTariffBase", value); }
        float aiSocialSpendingMaxShare() const { return ReadField<float>("aiSocialSpendingMaxShare"); }
        void aiSocialSpendingMaxShare(float value) const { WriteField<float>("aiSocialSpendingMaxShare", value); }
        float aiBudgetSurplusFraction() const { return ReadField<float>("aiBudgetSurplusFraction"); }
        void aiBudgetSurplusFraction(float value) const { WriteField<float>("aiBudgetSurplusFraction", value); }
        float aiBudgetWarMilBias() const { return ReadField<float>("aiBudgetWarMilBias"); }
        void aiBudgetWarMilBias(float value) const { WriteField<float>("aiBudgetWarMilBias", value); }
        float aiBudgetMinLevel() const { return ReadField<float>("aiBudgetMinLevel"); }
        void aiBudgetMinLevel(float value) const { WriteField<float>("aiBudgetMinLevel", value); }
        bool enablePlayerFiscalAutopilot() const { return ReadField<bool>("enablePlayerFiscalAutopilot"); }
        void enablePlayerFiscalAutopilot(bool value) const { WriteField<bool>("enablePlayerFiscalAutopilot", value); }
        bool enableAiCoercion() const { return ReadField<bool>("enableAiCoercion"); }
        void enableAiCoercion(bool value) const { WriteField<bool>("enableAiCoercion", value); }
        int aiCoercionCooldownTicks() const { return ReadField<int>("aiCoercionCooldownTicks"); }
        void aiCoercionCooldownTicks(int value) const { WriteField<int>("aiCoercionCooldownTicks", value); }
        float aiCoercionChance() const { return ReadField<float>("aiCoercionChance"); }
        void aiCoercionChance(float value) const { WriteField<float>("aiCoercionChance", value); }
        float aiUltimatumPowerRatio() const { return ReadField<float>("aiUltimatumPowerRatio"); }
        void aiUltimatumPowerRatio(float value) const { WriteField<float>("aiUltimatumPowerRatio", value); }
        float aiDemandPowerRatio() const { return ReadField<float>("aiDemandPowerRatio"); }
        void aiDemandPowerRatio(float value) const { WriteField<float>("aiDemandPowerRatio", value); }
        float aiUltimatumOpinionMax() const { return ReadField<float>("aiUltimatumOpinionMax"); }
        void aiUltimatumOpinionMax(float value) const { WriteField<float>("aiUltimatumOpinionMax", value); }
        bool aiUltimatumsTargetPlayer() const { return ReadField<bool>("aiUltimatumsTargetPlayer"); }
        void aiUltimatumsTargetPlayer(bool value) const { WriteField<bool>("aiUltimatumsTargetPlayer", value); }
        float aiFearPowerRatio() const { return ReadField<float>("aiFearPowerRatio"); }
        void aiFearPowerRatio(float value) const { WriteField<float>("aiFearPowerRatio", value); }
        float aiAllianceOpinionMin() const { return ReadField<float>("aiAllianceOpinionMin"); }
        void aiAllianceOpinionMin(float value) const { WriteField<float>("aiAllianceOpinionMin", value); }
        float aiPuppetWarScoreMin() const { return ReadField<float>("aiPuppetWarScoreMin"); }
        void aiPuppetWarScoreMin(float value) const { WriteField<float>("aiPuppetWarScoreMin", value); }
        float aiPuppetMaxSizeFraction() const { return ReadField<float>("aiPuppetMaxSizeFraction"); }
        void aiPuppetMaxSizeFraction(float value) const { WriteField<float>("aiPuppetMaxSizeFraction", value); }
        float aiAllyPowerWeight() const { return ReadField<float>("aiAllyPowerWeight"); }
        void aiAllyPowerWeight(float value) const { WriteField<float>("aiAllyPowerWeight", value); }
        float aiWarChestMin() const { return ReadField<float>("aiWarChestMin"); }
        void aiWarChestMin(float value) const { WriteField<float>("aiWarChestMin", value); }
        int diplomacyIntervalTicks() const { return ReadField<int>("diplomacyIntervalTicks"); }
        void diplomacyIntervalTicks(int value) const { WriteField<int>("diplomacyIntervalTicks", value); }
        float opinionMin() const { return ReadField<float>("opinionMin"); }
        void opinionMin(float value) const { WriteField<float>("opinionMin", value); }
        float opinionMax() const { return ReadField<float>("opinionMax"); }
        void opinionMax(float value) const { WriteField<float>("opinionMax", value); }
        float compatibilityWeight() const { return ReadField<float>("compatibilityWeight"); }
        void compatibilityWeight(float value) const { WriteField<float>("compatibilityWeight", value); }
        float frictionWeight() const { return ReadField<float>("frictionWeight"); }
        void frictionWeight(float value) const { WriteField<float>("frictionWeight", value); }
        float powerFearWeight() const { return ReadField<float>("powerFearWeight"); }
        void powerFearWeight(float value) const { WriteField<float>("powerFearWeight", value); }
        float sociabilityWeight() const { return ReadField<float>("sociabilityWeight"); }
        void sociabilityWeight(float value) const { WriteField<float>("sociabilityWeight", value); }
        float atWarPenalty() const { return ReadField<float>("atWarPenalty"); }
        void atWarPenalty(float value) const { WriteField<float>("atWarPenalty", value); }
        float contactSaturation() const { return ReadField<float>("contactSaturation"); }
        void contactSaturation(float value) const { WriteField<float>("contactSaturation", value); }
        float recentPressureWeight() const { return ReadField<float>("recentPressureWeight"); }
        void recentPressureWeight(float value) const { WriteField<float>("recentPressureWeight", value); }
        float recentPressureBump() const { return ReadField<float>("recentPressureBump"); }
        void recentPressureBump(float value) const { WriteField<float>("recentPressureBump", value); }
        float recentPressureDecay() const { return ReadField<float>("recentPressureDecay"); }
        void recentPressureDecay(float value) const { WriteField<float>("recentPressureDecay", value); }
        float opinionLerpPerPass() const { return ReadField<float>("opinionLerpPerPass"); }
        void opinionLerpPerPass(float value) const { WriteField<float>("opinionLerpPerPass", value); }
        float driftAmplitude() const { return ReadField<float>("driftAmplitude"); }
        void driftAmplitude(float value) const { WriteField<float>("driftAmplitude", value); }
        float shockChancePerPass() const { return ReadField<float>("shockChancePerPass"); }
        void shockChancePerPass(float value) const { WriteField<float>("shockChancePerPass", value); }
        float shockMagnitude() const { return ReadField<float>("shockMagnitude"); }
        void shockMagnitude(float value) const { WriteField<float>("shockMagnitude", value); }
        float popPowerWeight() const { return ReadField<float>("popPowerWeight"); }
        void popPowerWeight(float value) const { WriteField<float>("popPowerWeight", value); }
        float tilePowerWeight() const { return ReadField<float>("tilePowerWeight"); }
        void tilePowerWeight(float value) const { WriteField<float>("tilePowerWeight", value); }
        float buildingPowerWeight() const { return ReadField<float>("buildingPowerWeight"); }
        void buildingPowerWeight(float value) const { WriteField<float>("buildingPowerWeight", value); }
        bool enableSuccession() const { return ReadField<bool>("enableSuccession"); }
        void enableSuccession(bool value) const { WriteField<bool>("enableSuccession", value); }
        int successionCheckIntervalTicks() const { return ReadField<int>("successionCheckIntervalTicks"); }
        void successionCheckIntervalTicks(int value) const { WriteField<int>("successionCheckIntervalTicks", value); }
        float reignMinYears() const { return ReadField<float>("reignMinYears"); }
        void reignMinYears(float value) const { WriteField<float>("reignMinYears", value); }
        float reignMaxYears() const { return ReadField<float>("reignMaxYears"); }
        void reignMaxYears(float value) const { WriteField<float>("reignMaxYears", value); }
        float dynastyContinuityChance() const { return ReadField<float>("dynastyContinuityChance"); }
        void dynastyContinuityChance(float value) const { WriteField<float>("dynastyContinuityChance", value); }
        float coupChancePerCheck() const { return ReadField<float>("coupChancePerCheck"); }
        void coupChancePerCheck(float value) const { WriteField<float>("coupChancePerCheck", value); }
        float coupHappinessThreshold() const { return ReadField<float>("coupHappinessThreshold"); }
        void coupHappinessThreshold(float value) const { WriteField<float>("coupHappinessThreshold", value); }
        float coupLandLossShare() const { return ReadField<float>("coupLandLossShare"); }
        void coupLandLossShare(float value) const { WriteField<float>("coupLandLossShare", value); }
        float successionUnrest() const { return ReadField<float>("successionUnrest"); }
        void successionUnrest(float value) const { WriteField<float>("successionUnrest", value); }
        float coupUnrest() const { return ReadField<float>("coupUnrest"); }
        void coupUnrest(float value) const { WriteField<float>("coupUnrest", value); }
        int epithetMinBaselineTiles() const { return ReadField<int>("epithetMinBaselineTiles"); }
        void epithetMinBaselineTiles(int value) const { WriteField<int>("epithetMinBaselineTiles", value); }
        int epithetGreatMinTiles() const { return ReadField<int>("epithetGreatMinTiles"); }
        void epithetGreatMinTiles(int value) const { WriteField<int>("epithetGreatMinTiles", value); }
        int epithetBankruptTicks() const { return ReadField<int>("epithetBankruptTicks"); }
        void epithetBankruptTicks(int value) const { WriteField<int>("epithetBankruptTicks", value); }
        float epithetWiseMinYears() const { return ReadField<float>("epithetWiseMinYears"); }
        void epithetWiseMinYears(float value) const { WriteField<float>("epithetWiseMinYears", value); }
        float epithetOldMinYears() const { return ReadField<float>("epithetOldMinYears"); }
        void epithetOldMinYears(float value) const { WriteField<float>("epithetOldMinYears", value); }
        float leaderRivalryWeight() const { return ReadField<float>("leaderRivalryWeight"); }
        void leaderRivalryWeight(float value) const { WriteField<float>("leaderRivalryWeight", value); }
        bool logSuccession() const { return ReadField<bool>("logSuccession"); }
        void logSuccession(bool value) const { WriteField<bool>("logSuccession", value); }
        bool enableAging() const { return ReadField<bool>("enableAging"); }
        void enableAging(bool value) const { WriteField<bool>("enableAging", value); }
        int ageYoungFrom() const { return ReadField<int>("ageYoungFrom"); }
        void ageYoungFrom(int value) const { WriteField<int>("ageYoungFrom", value); }
        int agePrimeFrom() const { return ReadField<int>("agePrimeFrom"); }
        void agePrimeFrom(int value) const { WriteField<int>("agePrimeFrom", value); }
        int ageSeasonedFrom() const { return ReadField<int>("ageSeasonedFrom"); }
        void ageSeasonedFrom(int value) const { WriteField<int>("ageSeasonedFrom", value); }
        int ageElderFrom() const { return ReadField<int>("ageElderFrom"); }
        void ageElderFrom(int value) const { WriteField<int>("ageElderFrom", value); }
        float lifespanMinYears() const { return ReadField<float>("lifespanMinYears"); }
        void lifespanMinYears(float value) const { WriteField<float>("lifespanMinYears", value); }
        float lifespanMaxYears() const { return ReadField<float>("lifespanMaxYears"); }
        void lifespanMaxYears(float value) const { WriteField<float>("lifespanMaxYears", value); }
        float minReignYears() const { return ReadField<float>("minReignYears"); }
        void minReignYears(float value) const { WriteField<float>("minReignYears", value); }
        int accessionAgeMin() const { return ReadField<int>("accessionAgeMin"); }
        void accessionAgeMin(int value) const { WriteField<int>("accessionAgeMin", value); }
        int accessionAgeMax() const { return ReadField<int>("accessionAgeMax"); }
        void accessionAgeMax(int value) const { WriteField<int>("accessionAgeMax", value); }
        int heirAccessionAgeMin() const { return ReadField<int>("heirAccessionAgeMin"); }
        void heirAccessionAgeMin(int value) const { WriteField<int>("heirAccessionAgeMin", value); }
        int heirAccessionAgeMax() const { return ReadField<int>("heirAccessionAgeMax"); }
        void heirAccessionAgeMax(int value) const { WriteField<int>("heirAccessionAgeMax", value); }
        bool enableLeaderCreation() const { return ReadField<bool>("enableLeaderCreation"); }
        void enableLeaderCreation(bool value) const { WriteField<bool>("enableLeaderCreation", value); }
        int creationMinAge() const { return ReadField<int>("creationMinAge"); }
        void creationMinAge(int value) const { WriteField<int>("creationMinAge", value); }
        int creationMaxAge() const { return ReadField<int>("creationMaxAge"); }
        void creationMaxAge(int value) const { WriteField<int>("creationMaxAge", value); }
        int creationBasePoints() const { return ReadField<int>("creationBasePoints"); }
        void creationBasePoints(int value) const { WriteField<int>("creationBasePoints", value); }
        int creationAgePointSwing() const { return ReadField<int>("creationAgePointSwing"); }
        void creationAgePointSwing(int value) const { WriteField<int>("creationAgePointSwing", value); }
        int creationAgePointStep() const { return ReadField<int>("creationAgePointStep"); }
        void creationAgePointStep(int value) const { WriteField<int>("creationAgePointStep", value); }
        int creationMaxTraits() const { return ReadField<int>("creationMaxTraits"); }
        void creationMaxTraits(int value) const { WriteField<int>("creationMaxTraits", value); }
        void* leaderNamePrefixes() const { return ReadField<void*>("leaderNamePrefixes"); }
        void leaderNamePrefixes(void* value) const { WriteField<void*>("leaderNamePrefixes", value); }
        void* leaderNameSuffixes() const { return ReadField<void*>("leaderNameSuffixes"); }
        void leaderNameSuffixes(void* value) const { WriteField<void*>("leaderNameSuffixes", value); }
        int aiEvalIntervalTicks() const { return ReadField<int>("aiEvalIntervalTicks"); }
        void aiEvalIntervalTicks(int value) const { WriteField<int>("aiEvalIntervalTicks", value); }
        float ambitionRateMin() const { return ReadField<float>("ambitionRateMin"); }
        void ambitionRateMin(float value) const { WriteField<float>("ambitionRateMin", value); }
        float ambitionRateMax() const { return ReadField<float>("ambitionRateMax"); }
        void ambitionRateMax(float value) const { WriteField<float>("ambitionRateMax", value); }
        float steerStrengthMax() const { return ReadField<float>("steerStrengthMax"); }
        void steerStrengthMax(float value) const { WriteField<float>("steerStrengthMax", value); }
        int scoutRayLength() const { return ReadField<int>("scoutRayLength"); }
        void scoutRayLength(int value) const { WriteField<int>("scoutRayLength", value); }
        float friendAvoidPenalty() const { return ReadField<float>("friendAvoidPenalty"); }
        void friendAvoidPenalty(float value) const { WriteField<float>("friendAvoidPenalty", value); }
        float friendOpinionThreshold() const { return ReadField<float>("friendOpinionThreshold"); }
        void friendOpinionThreshold(float value) const { WriteField<float>("friendOpinionThreshold", value); }
        float warOpinionThreshold() const { return ReadField<float>("warOpinionThreshold"); }
        void warOpinionThreshold(float value) const { WriteField<float>("warOpinionThreshold", value); }
        float warPowerRatioMin() const { return ReadField<float>("warPowerRatioMin"); }
        void warPowerRatioMin(float value) const { WriteField<float>("warPowerRatioMin", value); }
        float aggressionPowerDiscount() const { return ReadField<float>("aggressionPowerDiscount"); }
        void aggressionPowerDiscount(float value) const { WriteField<float>("aggressionPowerDiscount", value); }
        float warRollChance() const { return ReadField<float>("warRollChance"); }
        void warRollChance(float value) const { WriteField<float>("warRollChance", value); }
        float warPowerRatioFloor() const { return ReadField<float>("warPowerRatioFloor"); }
        void warPowerRatioFloor(float value) const { WriteField<float>("warPowerRatioFloor", value); }
        float warCauseRatio() const { return ReadField<float>("warCauseRatio"); }
        void warCauseRatio(float value) const { WriteField<float>("warCauseRatio", value); }
        float warArmyRatioMin() const { return ReadField<float>("warArmyRatioMin"); }
        void warArmyRatioMin(float value) const { WriteField<float>("warArmyRatioMin", value); }
        int warEarliestTick() const { return ReadField<int>("warEarliestTick"); }
        void warEarliestTick(int value) const { WriteField<int>("warEarliestTick", value); }
        float warGoodwillShield() const { return ReadField<float>("warGoodwillShield"); }
        void warGoodwillShield(float value) const { WriteField<float>("warGoodwillShield", value); }
        int aiMaxConcurrentWars() const { return ReadField<int>("aiMaxConcurrentWars"); }
        void aiMaxConcurrentWars(int value) const { WriteField<int>("aiMaxConcurrentWars", value); }
        int aiWarDeclareCooldownTicks() const { return ReadField<int>("aiWarDeclareCooldownTicks"); }
        void aiWarDeclareCooldownTicks(int value) const { WriteField<int>("aiWarDeclareCooldownTicks", value); }
        int minWarDurationTicks() const { return ReadField<int>("minWarDurationTicks"); }
        void minWarDurationTicks(int value) const { WriteField<int>("minWarDurationTicks", value); }
        float warWearinessPerTick() const { return ReadField<float>("warWearinessPerTick"); }
        void warWearinessPerTick(float value) const { WriteField<float>("warWearinessPerTick", value); }
        float peaceThreshold() const { return ReadField<float>("peaceThreshold"); }
        void peaceThreshold(float value) const { WriteField<float>("peaceThreshold", value); }
        float winStubbornness() const { return ReadField<float>("winStubbornness"); }
        void winStubbornness(float value) const { WriteField<float>("winStubbornness", value); }
        int truceTicks() const { return ReadField<int>("truceTicks"); }
        void truceTicks(int value) const { WriteField<int>("truceTicks", value); }
        int independenceWarSettleTicks() const { return ReadField<int>("independenceWarSettleTicks"); }
        void independenceWarSettleTicks(int value) const { WriteField<int>("independenceWarSettleTicks", value); }
        float independenceInterventionChance() const { return ReadField<float>("independenceInterventionChance"); }
        void independenceInterventionChance(float value) const { WriteField<float>("independenceInterventionChance", value); }
        int warMinDivisions() const { return ReadField<int>("warMinDivisions"); }
        void warMinDivisions(int value) const { WriteField<int>("warMinDivisions", value); }
        float warMinArmyCapFraction() const { return ReadField<float>("warMinArmyCapFraction"); }
        void warMinArmyCapFraction(float value) const { WriteField<float>("warMinArmyCapFraction", value); }
        float warMinReserveDivisions() const { return ReadField<float>("warMinReserveDivisions"); }
        void warMinReserveDivisions(float value) const { WriteField<float>("warMinReserveDivisions", value); }
        int warMinBorderDivisions() const { return ReadField<int>("warMinBorderDivisions"); }
        void warMinBorderDivisions(int value) const { WriteField<int>("warMinBorderDivisions", value); }
        float warBorderStagingRadius() const { return ReadField<float>("warBorderStagingRadius"); }
        void warBorderStagingRadius(float value) const { WriteField<float>("warBorderStagingRadius", value); }
        float improveRelationsCost() const { return ReadField<float>("improveRelationsCost"); }
        void improveRelationsCost(float value) const { WriteField<float>("improveRelationsCost", value); }
        float improveRelationsBoost() const { return ReadField<float>("improveRelationsBoost"); }
        void improveRelationsBoost(float value) const { WriteField<float>("improveRelationsBoost", value); }
        int improveRelationsCooldownTicks() const { return ReadField<int>("improveRelationsCooldownTicks"); }
        void improveRelationsCooldownTicks(int value) const { WriteField<int>("improveRelationsCooldownTicks", value); }
        float goodwillMax() const { return ReadField<float>("goodwillMax"); }
        void goodwillMax(float value) const { WriteField<float>("goodwillMax", value); }
        float goodwillDecayPerPass() const { return ReadField<float>("goodwillDecayPerPass"); }
        void goodwillDecayPerPass(float value) const { WriteField<float>("goodwillDecayPerPass", value); }
        float grudgeWarDeclared() const { return ReadField<float>("grudgeWarDeclared"); }
        void grudgeWarDeclared(float value) const { WriteField<float>("grudgeWarDeclared", value); }
        float grudgeAllianceBroken() const { return ReadField<float>("grudgeAllianceBroken"); }
        void grudgeAllianceBroken(float value) const { WriteField<float>("grudgeAllianceBroken", value); }
        float grudgePactBroken() const { return ReadField<float>("grudgePactBroken"); }
        void grudgePactBroken(float value) const { WriteField<float>("grudgePactBroken", value); }
        float grudgeUltimatumAccepted() const { return ReadField<float>("grudgeUltimatumAccepted"); }
        void grudgeUltimatumAccepted(float value) const { WriteField<float>("grudgeUltimatumAccepted", value); }
        float grudgeUltimatumRefused() const { return ReadField<float>("grudgeUltimatumRefused"); }
        void grudgeUltimatumRefused(float value) const { WriteField<float>("grudgeUltimatumRefused", value); }
        float grudgeUltimatumDefied() const { return ReadField<float>("grudgeUltimatumDefied"); }
        void grudgeUltimatumDefied(float value) const { WriteField<float>("grudgeUltimatumDefied", value); }
        float grudgePerTileCeded() const { return ReadField<float>("grudgePerTileCeded"); }
        void grudgePerTileCeded(float value) const { WriteField<float>("grudgePerTileCeded", value); }
        float grudgeCarve() const { return ReadField<float>("grudgeCarve"); }
        void grudgeCarve(float value) const { WriteField<float>("grudgeCarve", value); }
        float grudgeHalfLifeYears() const { return ReadField<float>("grudgeHalfLifeYears"); }
        void grudgeHalfLifeYears(float value) const { WriteField<float>("grudgeHalfLifeYears", value); }
        float grudgeOpinionWeight() const { return ReadField<float>("grudgeOpinionWeight"); }
        void grudgeOpinionWeight(float value) const { WriteField<float>("grudgeOpinionWeight", value); }
        float grudgeMax() const { return ReadField<float>("grudgeMax"); }
        void grudgeMax(float value) const { WriteField<float>("grudgeMax", value); }
        float grudgeWarRollBoost() const { return ReadField<float>("grudgeWarRollBoost"); }
        void grudgeWarRollBoost(float value) const { WriteField<float>("grudgeWarRollBoost", value); }
        float wearinessBankruptMul() const { return ReadField<float>("wearinessBankruptMul"); }
        void wearinessBankruptMul(float value) const { WriteField<float>("wearinessBankruptMul", value); }
        float wearinessDeficitMul() const { return ReadField<float>("wearinessDeficitMul"); }
        void wearinessDeficitMul(float value) const { WriteField<float>("wearinessDeficitMul", value); }
        float strainWearinessWeight() const { return ReadField<float>("strainWearinessWeight"); }
        void strainWearinessWeight(float value) const { WriteField<float>("strainWearinessWeight", value); }
        float strainReplacementWeight() const { return ReadField<float>("strainReplacementWeight"); }
        void strainReplacementWeight(float value) const { WriteField<float>("strainReplacementWeight", value); }
        float warDeadHalfLifeYears() const { return ReadField<float>("warDeadHalfLifeYears"); }
        void warDeadHalfLifeYears(float value) const { WriteField<float>("warDeadHalfLifeYears", value); }
        float pacificationYears() const { return ReadField<float>("pacificationYears"); }
        void pacificationYears(float value) const { WriteField<float>("pacificationYears", value); }
        int roadFrictionRadiusTiles() const { return ReadField<int>("roadFrictionRadiusTiles"); }
        void roadFrictionRadiusTiles(int value) const { WriteField<int>("roadFrictionRadiusTiles", value); }
        float roadFrictionFriendOpinion() const { return ReadField<float>("roadFrictionFriendOpinion"); }
        void roadFrictionFriendOpinion(float value) const { WriteField<float>("roadFrictionFriendOpinion", value); }
        float roadFrictionSaturation() const { return ReadField<float>("roadFrictionSaturation"); }
        void roadFrictionSaturation(float value) const { WriteField<float>("roadFrictionSaturation", value); }
        float roadFrictionPressureBump() const { return ReadField<float>("roadFrictionPressureBump"); }
        void roadFrictionPressureBump(float value) const { WriteField<float>("roadFrictionPressureBump", value); }
        float roadFrictionBump() const { return ReadField<float>("roadFrictionBump"); }
        void roadFrictionBump(float value) const { WriteField<float>("roadFrictionBump", value); }
        float infraFrictionMax() const { return ReadField<float>("infraFrictionMax"); }
        void infraFrictionMax(float value) const { WriteField<float>("infraFrictionMax", value); }
        float infraFrictionHalfLifeYears() const { return ReadField<float>("infraFrictionHalfLifeYears"); }
        void infraFrictionHalfLifeYears(float value) const { WriteField<float>("infraFrictionHalfLifeYears", value); }
        float pactEnemyOfEnemyWeight() const { return ReadField<float>("pactEnemyOfEnemyWeight"); }
        void pactEnemyOfEnemyWeight(float value) const { WriteField<float>("pactEnemyOfEnemyWeight", value); }
        float pactGrudgeWeight() const { return ReadField<float>("pactGrudgeWeight"); }
        void pactGrudgeWeight(float value) const { WriteField<float>("pactGrudgeWeight", value); }
        float pactProtectorPowerWeight() const { return ReadField<float>("pactProtectorPowerWeight"); }
        void pactProtectorPowerWeight(float value) const { WriteField<float>("pactProtectorPowerWeight", value); }
        float pactAdjacencyBonus() const { return ReadField<float>("pactAdjacencyBonus"); }
        void pactAdjacencyBonus(float value) const { WriteField<float>("pactAdjacencyBonus", value); }
        float allianceBufferPowerRatio() const { return ReadField<float>("allianceBufferPowerRatio"); }
        void allianceBufferPowerRatio(float value) const { WriteField<float>("allianceBufferPowerRatio", value); }
        float allianceBufferBonus() const { return ReadField<float>("allianceBufferBonus"); }
        void allianceBufferBonus(float value) const { WriteField<float>("allianceBufferBonus", value); }
        float ultimatumBaseChance() const { return ReadField<float>("ultimatumBaseChance"); }
        void ultimatumBaseChance(float value) const { WriteField<float>("ultimatumBaseChance", value); }
        float ultimatumFearPerPowerRatio() const { return ReadField<float>("ultimatumFearPerPowerRatio"); }
        void ultimatumFearPerPowerRatio(float value) const { WriteField<float>("ultimatumFearPerPowerRatio", value); }
        float ultimatumOpinionWeight() const { return ReadField<float>("ultimatumOpinionWeight"); }
        void ultimatumOpinionWeight(float value) const { WriteField<float>("ultimatumOpinionWeight", value); }
        float ultimatumAggressionWeight() const { return ReadField<float>("ultimatumAggressionWeight"); }
        void ultimatumAggressionWeight(float value) const { WriteField<float>("ultimatumAggressionWeight", value); }
        float ultimatumLandSeverity() const { return ReadField<float>("ultimatumLandSeverity"); }
        void ultimatumLandSeverity(float value) const { WriteField<float>("ultimatumLandSeverity", value); }
        float ultimatumCapitalPenalty() const { return ReadField<float>("ultimatumCapitalPenalty"); }
        void ultimatumCapitalPenalty(float value) const { WriteField<float>("ultimatumCapitalPenalty", value); }
        float ultimatumMoneySeverity() const { return ReadField<float>("ultimatumMoneySeverity"); }
        void ultimatumMoneySeverity(float value) const { WriteField<float>("ultimatumMoneySeverity", value); }
        float ultimatumFactorySeverity() const { return ReadField<float>("ultimatumFactorySeverity"); }
        void ultimatumFactorySeverity(float value) const { WriteField<float>("ultimatumFactorySeverity", value); }
        float ultimatumVassalageSeverity() const { return ReadField<float>("ultimatumVassalageSeverity"); }
        void ultimatumVassalageSeverity(float value) const { WriteField<float>("ultimatumVassalageSeverity", value); }
        float ultimatumAnnexationSeverity() const { return ReadField<float>("ultimatumAnnexationSeverity"); }
        void ultimatumAnnexationSeverity(float value) const { WriteField<float>("ultimatumAnnexationSeverity", value); }
        float ultimatumSubmissionFearMax() const { return ReadField<float>("ultimatumSubmissionFearMax"); }
        void ultimatumSubmissionFearMax(float value) const { WriteField<float>("ultimatumSubmissionFearMax", value); }
        float ultimatumSeverityPerVassal() const { return ReadField<float>("ultimatumSeverityPerVassal"); }
        void ultimatumSeverityPerVassal(float value) const { WriteField<float>("ultimatumSeverityPerVassal", value); }
        float ultimatumIdentityRecognisedSeverity() const { return ReadField<float>("ultimatumIdentityRecognisedSeverity"); }
        void ultimatumIdentityRecognisedSeverity(float value) const { WriteField<float>("ultimatumIdentityRecognisedSeverity", value); }
        float ultimatumIdentityAlienSeverity() const { return ReadField<float>("ultimatumIdentityAlienSeverity"); }
        void ultimatumIdentityAlienSeverity(float value) const { WriteField<float>("ultimatumIdentityAlienSeverity", value); }
        float ultimatumArmyPowerWeight() const { return ReadField<float>("ultimatumArmyPowerWeight"); }
        void ultimatumArmyPowerWeight(float value) const { WriteField<float>("ultimatumArmyPowerWeight", value); }
        float ultimatumBrokenArmyFloor() const { return ReadField<float>("ultimatumBrokenArmyFloor"); }
        void ultimatumBrokenArmyFloor(float value) const { WriteField<float>("ultimatumBrokenArmyFloor", value); }
        int ultimatumCooldownTicks() const { return ReadField<int>("ultimatumCooldownTicks"); }
        void ultimatumCooldownTicks(int value) const { WriteField<int>("ultimatumCooldownTicks", value); }
        float ultimatumAcceptedPenalty() const { return ReadField<float>("ultimatumAcceptedPenalty"); }
        void ultimatumAcceptedPenalty(float value) const { WriteField<float>("ultimatumAcceptedPenalty", value); }
        float ultimatumRefusedPenalty() const { return ReadField<float>("ultimatumRefusedPenalty"); }
        void ultimatumRefusedPenalty(float value) const { WriteField<float>("ultimatumRefusedPenalty", value); }
        int ultimatumAnswerDeadlineDays() const { return ReadField<int>("ultimatumAnswerDeadlineDays"); }
        void ultimatumAnswerDeadlineDays(int value) const { WriteField<int>("ultimatumAnswerDeadlineDays", value); }
        int maxPendingUltimatums() const { return ReadField<int>("maxPendingUltimatums"); }
        void maxPendingUltimatums(int value) const { WriteField<int>("maxPendingUltimatums", value); }
        float allianceOpinionThreshold() const { return ReadField<float>("allianceOpinionThreshold"); }
        void allianceOpinionThreshold(float value) const { WriteField<float>("allianceOpinionThreshold", value); }
        float allianceOpinionBonus() const { return ReadField<float>("allianceOpinionBonus"); }
        void allianceOpinionBonus(float value) const { WriteField<float>("allianceOpinionBonus", value); }
        float allianceBreakOpinion() const { return ReadField<float>("allianceBreakOpinion"); }
        void allianceBreakOpinion(float value) const { WriteField<float>("allianceBreakOpinion", value); }
        float allianceBrokenPenalty() const { return ReadField<float>("allianceBrokenPenalty"); }
        void allianceBrokenPenalty(float value) const { WriteField<float>("allianceBrokenPenalty", value); }
        int allianceCooldownTicks() const { return ReadField<int>("allianceCooldownTicks"); }
        void allianceCooldownTicks(int value) const { WriteField<int>("allianceCooldownTicks", value); }
        bool alliesJoinDefensiveWars() const { return ReadField<bool>("alliesJoinDefensiveWars"); }
        void alliesJoinDefensiveWars(bool value) const { WriteField<bool>("alliesJoinDefensiveWars", value); }
        bool alliesJoinOffensiveWars() const { return ReadField<bool>("alliesJoinOffensiveWars"); }
        void alliesJoinOffensiveWars(bool value) const { WriteField<bool>("alliesJoinOffensiveWars", value); }
        float offensiveJoinOpinionMax() const { return ReadField<float>("offensiveJoinOpinionMax"); }
        void offensiveJoinOpinionMax(float value) const { WriteField<float>("offensiveJoinOpinionMax", value); }
        float offensiveJoinChanceBase() const { return ReadField<float>("offensiveJoinChanceBase"); }
        void offensiveJoinChanceBase(float value) const { WriteField<float>("offensiveJoinChanceBase", value); }
        int allianceOfferAnswerDeadlineDays() const { return ReadField<int>("allianceOfferAnswerDeadlineDays"); }
        void allianceOfferAnswerDeadlineDays(int value) const { WriteField<int>("allianceOfferAnswerDeadlineDays", value); }
        int maxPendingAllianceOffers() const { return ReadField<int>("maxPendingAllianceOffers"); }
        void maxPendingAllianceOffers(int value) const { WriteField<int>("maxPendingAllianceOffers", value); }
        int callToArmsAnswerDeadlineDays() const { return ReadField<int>("callToArmsAnswerDeadlineDays"); }
        void callToArmsAnswerDeadlineDays(int value) const { WriteField<int>("callToArmsAnswerDeadlineDays", value); }
        int maxPendingCallsToArms() const { return ReadField<int>("maxPendingCallsToArms"); }
        void maxPendingCallsToArms(int value) const { WriteField<int>("maxPendingCallsToArms", value); }
        bool callToArmsRefusalBreaksBond() const { return ReadField<bool>("callToArmsRefusalBreaksBond"); }
        void callToArmsRefusalBreaksBond(bool value) const { WriteField<bool>("callToArmsRefusalBreaksBond", value); }
        int petitionAnswerDeadlineDays() const { return ReadField<int>("petitionAnswerDeadlineDays"); }
        void petitionAnswerDeadlineDays(int value) const { WriteField<int>("petitionAnswerDeadlineDays", value); }
        int maxPendingPeoplePetitions() const { return ReadField<int>("maxPendingPeoplePetitions"); }
        void maxPendingPeoplePetitions(int value) const { WriteField<int>("maxPendingPeoplePetitions", value); }
        bool enableCapitulation() const { return ReadField<bool>("enableCapitulation"); }
        void enableCapitulation(bool value) const { WriteField<bool>("enableCapitulation", value); }
        float capitulationLandRatio() const { return ReadField<float>("capitulationLandRatio"); }
        void capitulationLandRatio(float value) const { WriteField<float>("capitulationLandRatio", value); }
        int capitulationMinSnapshotTiles() const { return ReadField<int>("capitulationMinSnapshotTiles"); }
        void capitulationMinSnapshotTiles(int value) const { WriteField<int>("capitulationMinSnapshotTiles", value); }
        bool capitulateOnCapitalLoss() const { return ReadField<bool>("capitulateOnCapitalLoss"); }
        void capitulateOnCapitalLoss(bool value) const { WriteField<bool>("capitulateOnCapitalLoss", value); }
        int rebelCapitulationGraceTicks() const { return ReadField<int>("rebelCapitulationGraceTicks"); }
        void rebelCapitulationGraceTicks(int value) const { WriteField<int>("rebelCapitulationGraceTicks", value); }
        int capitulationCheckIntervalTicks() const { return ReadField<int>("capitulationCheckIntervalTicks"); }
        void capitulationCheckIntervalTicks(int value) const { WriteField<int>("capitulationCheckIntervalTicks", value); }
        int capitulationMinWarTicks() const { return ReadField<int>("capitulationMinWarTicks"); }
        void capitulationMinWarTicks(int value) const { WriteField<int>("capitulationMinWarTicks", value); }
        float capitulationCedeFraction() const { return ReadField<float>("capitulationCedeFraction"); }
        void capitulationCedeFraction(float value) const { WriteField<float>("capitulationCedeFraction", value); }
        int capitulationMinRemainingTiles() const { return ReadField<int>("capitulationMinRemainingTiles"); }
        void capitulationMinRemainingTiles(int value) const { WriteField<int>("capitulationMinRemainingTiles", value); }
        int economicCollapseTicks() const { return ReadField<int>("economicCollapseTicks"); }
        void economicCollapseTicks(int value) const { WriteField<int>("economicCollapseTicks", value); }
        int capitulationBrokenTicks() const { return ReadField<int>("capitulationBrokenTicks"); }
        void capitulationBrokenTicks(int value) const { WriteField<int>("capitulationBrokenTicks", value); }
        float capitulationHoldRadiusTiles() const { return ReadField<float>("capitulationHoldRadiusTiles"); }
        void capitulationHoldRadiusTiles(float value) const { WriteField<float>("capitulationHoldRadiusTiles", value); }
        float capitulationStoresSeized() const { return ReadField<float>("capitulationStoresSeized"); }
        void capitulationStoresSeized(float value) const { WriteField<float>("capitulationStoresSeized", value); }
        bool peaceConferenceOnLoss() const { return ReadField<bool>("peaceConferenceOnLoss"); }
        void peaceConferenceOnLoss(bool value) const { WriteField<bool>("peaceConferenceOnLoss", value); }
        int peaceOfferLapseTicks() const { return ReadField<int>("peaceOfferLapseTicks"); }
        void peaceOfferLapseTicks(int value) const { WriteField<int>("peaceOfferLapseTicks", value); }
        bool peaceSandboxNoLimits() const { return ReadField<bool>("peaceSandboxNoLimits"); }
        void peaceSandboxNoLimits(bool value) const { WriteField<bool>("peaceSandboxNoLimits", value); }
        float peaceMaxPopulationFraction() const { return ReadField<float>("peaceMaxPopulationFraction"); }
        void peaceMaxPopulationFraction(float value) const { WriteField<float>("peaceMaxPopulationFraction", value); }
        float peaceDemandGreedBase() const { return ReadField<float>("peaceDemandGreedBase"); }
        void peaceDemandGreedBase(float value) const { WriteField<float>("peaceDemandGreedBase", value); }
        float peaceDemandGreedPerAggression() const { return ReadField<float>("peaceDemandGreedPerAggression"); }
        void peaceDemandGreedPerAggression(float value) const { WriteField<float>("peaceDemandGreedPerAggression", value); }
        float peaceCarveVassalValue() const { return ReadField<float>("peaceCarveVassalValue"); }
        void peaceCarveVassalValue(float value) const { WriteField<float>("peaceCarveVassalValue", value); }
        float peaceCarveFreedValue() const { return ReadField<float>("peaceCarveFreedValue"); }
        void peaceCarveFreedValue(float value) const { WriteField<float>("peaceCarveFreedValue", value); }
        float peaceVassalizeValueFactor() const { return ReadField<float>("peaceVassalizeValueFactor"); }
        void peaceVassalizeValueFactor(float value) const { WriteField<float>("peaceVassalizeValueFactor", value); }
        float peacePopulationValuePerPercent() const { return ReadField<float>("peacePopulationValuePerPercent"); }
        void peacePopulationValuePerPercent(float value) const { WriteField<float>("peacePopulationValuePerPercent", value); }
        float peaceFreeVassalsValue() const { return ReadField<float>("peaceFreeVassalsValue"); }
        void peaceFreeVassalsValue(float value) const { WriteField<float>("peaceFreeVassalsValue", value); }
        float peaceBreakAlliancesValue() const { return ReadField<float>("peaceBreakAlliancesValue"); }
        void peaceBreakAlliancesValue(float value) const { WriteField<float>("peaceBreakAlliancesValue", value); }
        float peaceSettlePriceBase() const { return ReadField<float>("peaceSettlePriceBase"); }
        void peaceSettlePriceBase(float value) const { WriteField<float>("peaceSettlePriceBase", value); }
        float peaceSettleOpinionDiscount() const { return ReadField<float>("peaceSettleOpinionDiscount"); }
        void peaceSettleOpinionDiscount(float value) const { WriteField<float>("peaceSettleOpinionDiscount", value); }
        float peaceSettleAggressionSurcharge() const { return ReadField<float>("peaceSettleAggressionSurcharge"); }
        void peaceSettleAggressionSurcharge(float value) const { WriteField<float>("peaceSettleAggressionSurcharge", value); }
        float peaceSettleDominanceSurcharge() const { return ReadField<float>("peaceSettleDominanceSurcharge"); }
        void peaceSettleDominanceSurcharge(float value) const { WriteField<float>("peaceSettleDominanceSurcharge", value); }
        float peaceSettlePriceMin() const { return ReadField<float>("peaceSettlePriceMin"); }
        void peaceSettlePriceMin(float value) const { WriteField<float>("peaceSettlePriceMin", value); }
        float peaceSettlePriceMax() const { return ReadField<float>("peaceSettlePriceMax"); }
        void peaceSettlePriceMax(float value) const { WriteField<float>("peaceSettlePriceMax", value); }
        float peaceDominanceScoreNorm() const { return ReadField<float>("peaceDominanceScoreNorm"); }
        void peaceDominanceScoreNorm(float value) const { WriteField<float>("peaceDominanceScoreNorm", value); }
        float peaceSueConcessionReach() const { return ReadField<float>("peaceSueConcessionReach"); }
        void peaceSueConcessionReach(float value) const { WriteField<float>("peaceSueConcessionReach", value); }
        float peaceSuitorLeniency() const { return ReadField<float>("peaceSuitorLeniency"); }
        void peaceSuitorLeniency(float value) const { WriteField<float>("peaceSuitorLeniency", value); }
        float peaceAnnexReachBase() const { return ReadField<float>("peaceAnnexReachBase"); }
        void peaceAnnexReachBase(float value) const { WriteField<float>("peaceAnnexReachBase", value); }
        float peaceAnnexReachPerSize() const { return ReadField<float>("peaceAnnexReachPerSize"); }
        void peaceAnnexReachPerSize(float value) const { WriteField<float>("peaceAnnexReachPerSize", value); }
        float peaceVassalReachBase() const { return ReadField<float>("peaceVassalReachBase"); }
        void peaceVassalReachBase(float value) const { WriteField<float>("peaceVassalReachBase", value); }
        float peaceVassalReachPerSize() const { return ReadField<float>("peaceVassalReachPerSize"); }
        void peaceVassalReachPerSize(float value) const { WriteField<float>("peaceVassalReachPerSize", value); }
        float peaceCoalitionMaxReach() const { return ReadField<float>("peaceCoalitionMaxReach"); }
        void peaceCoalitionMaxReach(float value) const { WriteField<float>("peaceCoalitionMaxReach", value); }
        float peaceCoalitionFullRatio() const { return ReadField<float>("peaceCoalitionFullRatio"); }
        void peaceCoalitionFullRatio(float value) const { WriteField<float>("peaceCoalitionFullRatio", value); }
        float peaceCosignerMinShare() const { return ReadField<float>("peaceCosignerMinShare"); }
        void peaceCosignerMinShare(float value) const { WriteField<float>("peaceCosignerMinShare", value); }
        int peaceAiSueCooldownTicks() const { return ReadField<int>("peaceAiSueCooldownTicks"); }
        void peaceAiSueCooldownTicks(int value) const { WriteField<int>("peaceAiSueCooldownTicks", value); }
        int peacePlayerRedraftTicks() const { return ReadField<int>("peacePlayerRedraftTicks"); }
        void peacePlayerRedraftTicks(int value) const { WriteField<int>("peacePlayerRedraftTicks", value); }
        float vassalTributeDefault() const { return ReadField<float>("vassalTributeDefault"); }
        void vassalTributeDefault(float value) const { WriteField<float>("vassalTributeDefault", value); }
        float vassalTributeMax() const { return ReadField<float>("vassalTributeMax"); }
        void vassalTributeMax(float value) const { WriteField<float>("vassalTributeMax", value); }
        float vassalTributeHappinessFactor() const { return ReadField<float>("vassalTributeHappinessFactor"); }
        void vassalTributeHappinessFactor(float value) const { WriteField<float>("vassalTributeHappinessFactor", value); }
        float vassalReleasedGratitude() const { return ReadField<float>("vassalReleasedGratitude"); }
        void vassalReleasedGratitude(float value) const { WriteField<float>("vassalReleasedGratitude", value); }
        float vassalIndependenceBaseChance() const { return ReadField<float>("vassalIndependenceBaseChance"); }
        void vassalIndependenceBaseChance(float value) const { WriteField<float>("vassalIndependenceBaseChance", value); }
        float vassalIndependenceOpinionWeight() const { return ReadField<float>("vassalIndependenceOpinionWeight"); }
        void vassalIndependenceOpinionWeight(float value) const { WriteField<float>("vassalIndependenceOpinionWeight", value); }
        float vassalTintStrength() const { return ReadField<float>("vassalTintStrength"); }
        void vassalTintStrength(float value) const { WriteField<float>("vassalTintStrength", value); }
        float vassalTintVariation() const { return ReadField<float>("vassalTintVariation"); }
        void vassalTintVariation(float value) const { WriteField<float>("vassalTintVariation", value); }
        int vassalReleaseMinTiles() const { return ReadField<int>("vassalReleaseMinTiles"); }
        void vassalReleaseMinTiles(int value) const { WriteField<int>("vassalReleaseMinTiles", value); }
        bool enableTrade() const { return ReadField<bool>("enableTrade"); }
        void enableTrade(bool value) const { WriteField<bool>("enableTrade", value); }
        int tradeLinkIntervalTicks() const { return ReadField<int>("tradeLinkIntervalTicks"); }
        void tradeLinkIntervalTicks(int value) const { WriteField<int>("tradeLinkIntervalTicks", value); }
        int tradeBorderRadius() const { return ReadField<int>("tradeBorderRadius"); }
        void tradeBorderRadius(int value) const { WriteField<int>("tradeBorderRadius", value); }
        int tradeSampleStride() const { return ReadField<int>("tradeSampleStride"); }
        void tradeSampleStride(int value) const { WriteField<int>("tradeSampleStride", value); }
        float tradeLinkCrossWeight() const { return ReadField<float>("tradeLinkCrossWeight"); }
        void tradeLinkCrossWeight(float value) const { WriteField<float>("tradeLinkCrossWeight", value); }
        float tradeLinkNearWeight() const { return ReadField<float>("tradeLinkNearWeight"); }
        void tradeLinkNearWeight(float value) const { WriteField<float>("tradeLinkNearWeight", value); }
        float tradeLinkMax() const { return ReadField<float>("tradeLinkMax"); }
        void tradeLinkMax(float value) const { WriteField<float>("tradeLinkMax", value); }
        float tradeLinkFull() const { return ReadField<float>("tradeLinkFull"); }
        void tradeLinkFull(float value) const { WriteField<float>("tradeLinkFull", value); }
        float tradeVolumeScale() const { return ReadField<float>("tradeVolumeScale"); }
        void tradeVolumeScale(float value) const { WriteField<float>("tradeVolumeScale", value); }
        float tradeOpinionWeight() const { return ReadField<float>("tradeOpinionWeight"); }
        void tradeOpinionWeight(float value) const { WriteField<float>("tradeOpinionWeight", value); }
        float tradeTaxMin() const { return ReadField<float>("tradeTaxMin"); }
        void tradeTaxMin(float value) const { WriteField<float>("tradeTaxMin", value); }
        float tradeTaxMax() const { return ReadField<float>("tradeTaxMax"); }
        void tradeTaxMax(float value) const { WriteField<float>("tradeTaxMax", value); }
        float tradeGrowthFactor() const { return ReadField<float>("tradeGrowthFactor"); }
        void tradeGrowthFactor(float value) const { WriteField<float>("tradeGrowthFactor", value); }
        float tradeCapacityFactor() const { return ReadField<float>("tradeCapacityFactor"); }
        void tradeCapacityFactor(float value) const { WriteField<float>("tradeCapacityFactor", value); }
        float tradeOpennessNorm() const { return ReadField<float>("tradeOpennessNorm"); }
        void tradeOpennessNorm(float value) const { WriteField<float>("tradeOpennessNorm", value); }
        bool enableTradeIdentityErosion() const { return ReadField<bool>("enableTradeIdentityErosion"); }
        void enableTradeIdentityErosion(bool value) const { WriteField<bool>("enableTradeIdentityErosion", value); }
        int tradeIdentityIntervalTicks() const { return ReadField<int>("tradeIdentityIntervalTicks"); }
        void tradeIdentityIntervalTicks(int value) const { WriteField<int>("tradeIdentityIntervalTicks", value); }
        float tradeIdentityPerVolume() const { return ReadField<float>("tradeIdentityPerVolume"); }
        void tradeIdentityPerVolume(float value) const { WriteField<float>("tradeIdentityPerVolume", value); }
        int tradeIdentityMaxPerPass() const { return ReadField<int>("tradeIdentityMaxPerPass"); }
        void tradeIdentityMaxPerPass(int value) const { WriteField<int>("tradeIdentityMaxPerPass", value); }
        int tradeIdentityRadius() const { return ReadField<int>("tradeIdentityRadius"); }
        void tradeIdentityRadius(int value) const { WriteField<int>("tradeIdentityRadius", value); }
        float tradeIdentityEthnicityScale() const { return ReadField<float>("tradeIdentityEthnicityScale"); }
        void tradeIdentityEthnicityScale(float value) const { WriteField<float>("tradeIdentityEthnicityScale", value); }
        float tradeIdentityReligionScale() const { return ReadField<float>("tradeIdentityReligionScale"); }
        void tradeIdentityReligionScale(float value) const { WriteField<float>("tradeIdentityReligionScale", value); }
        float tradeIdentityAlphabetScale() const { return ReadField<float>("tradeIdentityAlphabetScale"); }
        void tradeIdentityAlphabetScale(float value) const { WriteField<float>("tradeIdentityAlphabetScale", value); }
        bool enableAiRoadBuilding() const { return ReadField<bool>("enableAiRoadBuilding"); }
        void enableAiRoadBuilding(bool value) const { WriteField<bool>("enableAiRoadBuilding", value); }
        float aiRoadBuildChance() const { return ReadField<float>("aiRoadBuildChance"); }
        void aiRoadBuildChance(float value) const { WriteField<float>("aiRoadBuildChance", value); }
        int aiRoadCooldownTicks() const { return ReadField<int>("aiRoadCooldownTicks"); }
        void aiRoadCooldownTicks(int value) const { WriteField<int>("aiRoadCooldownTicks", value); }
        int aiRoadRetryTicks() const { return ReadField<int>("aiRoadRetryTicks"); }
        void aiRoadRetryTicks(int value) const { WriteField<int>("aiRoadRetryTicks", value); }
        int aiRoadMaxSearchesPerTick() const { return ReadField<int>("aiRoadMaxSearchesPerTick"); }
        void aiRoadMaxSearchesPerTick(int value) const { WriteField<int>("aiRoadMaxSearchesPerTick", value); }
        int aiRoadDelegatedCooldownTicks() const { return ReadField<int>("aiRoadDelegatedCooldownTicks"); }
        void aiRoadDelegatedCooldownTicks(int value) const { WriteField<int>("aiRoadDelegatedCooldownTicks", value); }
        int aiRoadPairRetryTicks() const { return ReadField<int>("aiRoadPairRetryTicks"); }
        void aiRoadPairRetryTicks(int value) const { WriteField<int>("aiRoadPairRetryTicks", value); }
        float aiRoadOwnLandShare() const { return ReadField<float>("aiRoadOwnLandShare"); }
        void aiRoadOwnLandShare(float value) const { WriteField<float>("aiRoadOwnLandShare", value); }
        float aiRoadTreasuryFloor() const { return ReadField<float>("aiRoadTreasuryFloor"); }
        void aiRoadTreasuryFloor(float value) const { WriteField<float>("aiRoadTreasuryFloor", value); }
        float aiRoadMaxLength() const { return ReadField<float>("aiRoadMaxLength"); }
        void aiRoadMaxLength(float value) const { WriteField<float>("aiRoadMaxLength", value); }
        float aiRoadMinOpinion() const { return ReadField<float>("aiRoadMinOpinion"); }
        void aiRoadMinOpinion(float value) const { WriteField<float>("aiRoadMinOpinion", value); }
        int aiRoadMaxTotal() const { return ReadField<int>("aiRoadMaxTotal"); }
        void aiRoadMaxTotal(int value) const { WriteField<int>("aiRoadMaxTotal", value); }
        float aiTradeRoadsPerCity() const { return ReadField<float>("aiTradeRoadsPerCity"); }
        void aiTradeRoadsPerCity(float value) const { WriteField<float>("aiTradeRoadsPerCity", value); }
        int aiDomesticRoadMax() const { return ReadField<int>("aiDomesticRoadMax"); }
        void aiDomesticRoadMax(int value) const { WriteField<int>("aiDomesticRoadMax", value); }
        float aiDomesticRoadsPerCity() const { return ReadField<float>("aiDomesticRoadsPerCity"); }
        void aiDomesticRoadsPerCity(float value) const { WriteField<float>("aiDomesticRoadsPerCity", value); }
        int aiRoadDomesticSamples() const { return ReadField<int>("aiRoadDomesticSamples"); }
        void aiRoadDomesticSamples(int value) const { WriteField<int>("aiRoadDomesticSamples", value); }
        float aiTradeRoadShare() const { return ReadField<float>("aiTradeRoadShare"); }
        void aiTradeRoadShare(float value) const { WriteField<float>("aiTradeRoadShare", value); }
        int aiRoadMaxConcurrent() const { return ReadField<int>("aiRoadMaxConcurrent"); }
        void aiRoadMaxConcurrent(int value) const { WriteField<int>("aiRoadMaxConcurrent", value); }
        float aiRoadUpgradeShare() const { return ReadField<float>("aiRoadUpgradeShare"); }
        void aiRoadUpgradeShare(float value) const { WriteField<float>("aiRoadUpgradeShare", value); }
        float pactOpinionBonus() const { return ReadField<float>("pactOpinionBonus"); }
        void pactOpinionBonus(float value) const { WriteField<float>("pactOpinionBonus", value); }
        float pactBreakOpinion() const { return ReadField<float>("pactBreakOpinion"); }
        void pactBreakOpinion(float value) const { WriteField<float>("pactBreakOpinion", value); }
        float pactBrokenPenalty() const { return ReadField<float>("pactBrokenPenalty"); }
        void pactBrokenPenalty(float value) const { WriteField<float>("pactBrokenPenalty", value); }
        bool enableTradeDeals() const { return ReadField<bool>("enableTradeDeals"); }
        void enableTradeDeals(bool value) const { WriteField<bool>("enableTradeDeals", value); }
        int tradeDealCooldownTicks() const { return ReadField<int>("tradeDealCooldownTicks"); }
        void tradeDealCooldownTicks(int value) const { WriteField<int>("tradeDealCooldownTicks", value); }
        float dealBaseChance() const { return ReadField<float>("dealBaseChance"); }
        void dealBaseChance(float value) const { WriteField<float>("dealBaseChance", value); }
        float dealValueNorm() const { return ReadField<float>("dealValueNorm"); }
        void dealValueNorm(float value) const { WriteField<float>("dealValueNorm", value); }
        float dealValueNormScaleShare() const { return ReadField<float>("dealValueNormScaleShare"); }
        void dealValueNormScaleShare(float value) const { WriteField<float>("dealValueNormScaleShare", value); }
        float dealOpinionWeight() const { return ReadField<float>("dealOpinionWeight"); }
        void dealOpinionWeight(float value) const { WriteField<float>("dealOpinionWeight", value); }
        float dealAggressionWeight() const { return ReadField<float>("dealAggressionWeight"); }
        void dealAggressionWeight(float value) const { WriteField<float>("dealAggressionWeight", value); }
        float dealRiskFactor() const { return ReadField<float>("dealRiskFactor"); }
        void dealRiskFactor(float value) const { WriteField<float>("dealRiskFactor", value); }
        float dealRefusalDepth() const { return ReadField<float>("dealRefusalDepth"); }
        void dealRefusalDepth(float value) const { WriteField<float>("dealRefusalDepth", value); }
        float dealLandValuePerTile() const { return ReadField<float>("dealLandValuePerTile"); }
        void dealLandValuePerTile(float value) const { WriteField<float>("dealLandValuePerTile", value); }
        float dealLandPaybackTicks() const { return ReadField<float>("dealLandPaybackTicks"); }
        void dealLandPaybackTicks(float value) const { WriteField<float>("dealLandPaybackTicks", value); }
        float dealLandScarcityWeight() const { return ReadField<float>("dealLandScarcityWeight"); }
        void dealLandScarcityWeight(float value) const { WriteField<float>("dealLandScarcityWeight", value); }
        float dealLandScarcityFloor() const { return ReadField<float>("dealLandScarcityFloor"); }
        void dealLandScarcityFloor(float value) const { WriteField<float>("dealLandScarcityFloor", value); }
        float dealLandHeartlandMul() const { return ReadField<float>("dealLandHeartlandMul"); }
        void dealLandHeartlandMul(float value) const { WriteField<float>("dealLandHeartlandMul", value); }
        float dealLandMemoryHalfLifeYears() const { return ReadField<float>("dealLandMemoryHalfLifeYears"); }
        void dealLandMemoryHalfLifeYears(float value) const { WriteField<float>("dealLandMemoryHalfLifeYears", value); }
        float dealCapitalValue() const { return ReadField<float>("dealCapitalValue"); }
        void dealCapitalValue(float value) const { WriteField<float>("dealCapitalValue", value); }
        float dealCapitalTiles() const { return ReadField<float>("dealCapitalTiles"); }
        void dealCapitalTiles(float value) const { WriteField<float>("dealCapitalTiles", value); }
        float dealGoldValueExponent() const { return ReadField<float>("dealGoldValueExponent"); }
        void dealGoldValueExponent(float value) const { WriteField<float>("dealGoldValueExponent", value); }
        float dealGoldMemoryHalfLifeYears() const { return ReadField<float>("dealGoldMemoryHalfLifeYears"); }
        void dealGoldMemoryHalfLifeYears(float value) const { WriteField<float>("dealGoldMemoryHalfLifeYears", value); }
        float dealGoldScaleBase() const { return ReadField<float>("dealGoldScaleBase"); }
        void dealGoldScaleBase(float value) const { WriteField<float>("dealGoldScaleBase", value); }
        float dealGoldScaleIncomeFactor() const { return ReadField<float>("dealGoldScaleIncomeFactor"); }
        void dealGoldScaleIncomeFactor(float value) const { WriteField<float>("dealGoldScaleIncomeFactor", value); }
        float dealGoldStrainWeight() const { return ReadField<float>("dealGoldStrainWeight"); }
        void dealGoldStrainWeight(float value) const { WriteField<float>("dealGoldStrainWeight", value); }
        float dealFactoryValue() const { return ReadField<float>("dealFactoryValue"); }
        void dealFactoryValue(float value) const { WriteField<float>("dealFactoryValue", value); }
        float dealFactoryValueMul() const { return ReadField<float>("dealFactoryValueMul"); }
        void dealFactoryValueMul(float value) const { WriteField<float>("dealFactoryValueMul", value); }
        float dealDivisionValue() const { return ReadField<float>("dealDivisionValue"); }
        void dealDivisionValue(float value) const { WriteField<float>("dealDivisionValue", value); }
        float dealDivisionValueMul() const { return ReadField<float>("dealDivisionValueMul"); }
        void dealDivisionValueMul(float value) const { WriteField<float>("dealDivisionValueMul", value); }
        float dealArmyScarcityWeight() const { return ReadField<float>("dealArmyScarcityWeight"); }
        void dealArmyScarcityWeight(float value) const { WriteField<float>("dealArmyScarcityWeight", value); }
        float dealArmyScarcityFloor() const { return ReadField<float>("dealArmyScarcityFloor"); }
        void dealArmyScarcityFloor(float value) const { WriteField<float>("dealArmyScarcityFloor", value); }
        float dealAnnexationPremium() const { return ReadField<float>("dealAnnexationPremium"); }
        void dealAnnexationPremium(float value) const { WriteField<float>("dealAnnexationPremium", value); }
        float dealAllianceValue() const { return ReadField<float>("dealAllianceValue"); }
        void dealAllianceValue(float value) const { WriteField<float>("dealAllianceValue", value); }
        float dealPactValue() const { return ReadField<float>("dealPactValue"); }
        void dealPactValue(float value) const { WriteField<float>("dealPactValue", value); }
        float dealWarCost() const { return ReadField<float>("dealWarCost"); }
        void dealWarCost(float value) const { WriteField<float>("dealWarCost", value); }
        float dealWarValue() const { return ReadField<float>("dealWarValue"); }
        void dealWarValue(float value) const { WriteField<float>("dealWarValue", value); }
        bool enableAiTradeDeals() const { return ReadField<bool>("enableAiTradeDeals"); }
        void enableAiTradeDeals(bool value) const { WriteField<bool>("enableAiTradeDeals", value); }
        float aiDealChance() const { return ReadField<float>("aiDealChance"); }
        void aiDealChance(float value) const { WriteField<float>("aiDealChance", value); }
        float aiDealAcceptThreshold() const { return ReadField<float>("aiDealAcceptThreshold"); }
        void aiDealAcceptThreshold(float value) const { WriteField<float>("aiDealAcceptThreshold", value); }
        int tradeOfferLifetimeTicks() const { return ReadField<int>("tradeOfferLifetimeTicks"); }
        void tradeOfferLifetimeTicks(int value) const { WriteField<int>("tradeOfferLifetimeTicks", value); }
        int maxPendingTradeOffers() const { return ReadField<int>("maxPendingTradeOffers"); }
        void maxPendingTradeOffers(int value) const { WriteField<int>("maxPendingTradeOffers", value); }
        float aiSellTreasuryTicks() const { return ReadField<float>("aiSellTreasuryTicks"); }
        void aiSellTreasuryTicks(float value) const { WriteField<float>("aiSellTreasuryTicks", value); }
        float aiSellDiscount() const { return ReadField<float>("aiSellDiscount"); }
        void aiSellDiscount(float value) const { WriteField<float>("aiSellDiscount", value); }
        int aiSellLandMaxTiles() const { return ReadField<int>("aiSellLandMaxTiles"); }
        void aiSellLandMaxTiles(int value) const { WriteField<int>("aiSellLandMaxTiles", value); }
        int aiSellLandMinStatesKept() const { return ReadField<int>("aiSellLandMinStatesKept"); }
        void aiSellLandMinStatesKept(int value) const { WriteField<int>("aiSellLandMinStatesKept", value); }
        float aiSellLandMaxSold() const { return ReadField<float>("aiSellLandMaxSold"); }
        void aiSellLandMaxSold(float value) const { WriteField<float>("aiSellLandMaxSold", value); }
        bool enableUnions() const { return ReadField<bool>("enableUnions"); }
        void enableUnions(bool value) const { WriteField<bool>("enableUnions", value); }
        int unionOfferCooldownTicks() const { return ReadField<int>("unionOfferCooldownTicks"); }
        void unionOfferCooldownTicks(int value) const { WriteField<int>("unionOfferCooldownTicks", value); }
        float unionBaseChance() const { return ReadField<float>("unionBaseChance"); }
        void unionBaseChance(float value) const { WriteField<float>("unionBaseChance", value); }
        float unionOpinionWeight() const { return ReadField<float>("unionOpinionWeight"); }
        void unionOpinionWeight(float value) const { WriteField<float>("unionOpinionWeight", value); }
        float unionPowerWeight() const { return ReadField<float>("unionPowerWeight"); }
        void unionPowerWeight(float value) const { WriteField<float>("unionPowerWeight", value); }
        float unionAggressionWeight() const { return ReadField<float>("unionAggressionWeight"); }
        void unionAggressionWeight(float value) const { WriteField<float>("unionAggressionWeight", value); }
        float unionCostComplete() const { return ReadField<float>("unionCostComplete"); }
        void unionCostComplete(float value) const { WriteField<float>("unionCostComplete", value); }
        float unionCostExternal() const { return ReadField<float>("unionCostExternal"); }
        void unionCostExternal(float value) const { WriteField<float>("unionCostExternal", value); }
        float unionCostStates() const { return ReadField<float>("unionCostStates"); }
        void unionCostStates(float value) const { WriteField<float>("unionCostStates", value); }
        float unionCrowdedPenaltyPerMember() const { return ReadField<float>("unionCrowdedPenaltyPerMember"); }
        void unionCrowdedPenaltyPerMember(float value) const { WriteField<float>("unionCrowdedPenaltyPerMember", value); }
        int unionMaxMembers() const { return ReadField<int>("unionMaxMembers"); }
        void unionMaxMembers(int value) const { WriteField<int>("unionMaxMembers", value); }
        bool enableAiUnions() const { return ReadField<bool>("enableAiUnions"); }
        void enableAiUnions(bool value) const { WriteField<bool>("enableAiUnions", value); }
        float aiUnionChance() const { return ReadField<float>("aiUnionChance"); }
        void aiUnionChance(float value) const { WriteField<float>("aiUnionChance", value); }
        float aiUnionAcceptThreshold() const { return ReadField<float>("aiUnionAcceptThreshold"); }
        void aiUnionAcceptThreshold(float value) const { WriteField<float>("aiUnionAcceptThreshold", value); }
        float aiUnionMinOpinion() const { return ReadField<float>("aiUnionMinOpinion"); }
        void aiUnionMinOpinion(float value) const { WriteField<float>("aiUnionMinOpinion", value); }
        int aiUnionMinBorderContacts() const { return ReadField<int>("aiUnionMinBorderContacts"); }
        void aiUnionMinBorderContacts(int value) const { WriteField<int>("aiUnionMinBorderContacts", value); }
        float aiUnionMaxPowerRatio() const { return ReadField<float>("aiUnionMaxPowerRatio"); }
        void aiUnionMaxPowerRatio(float value) const { WriteField<float>("aiUnionMaxPowerRatio", value); }
        float unionHueShift() const { return ReadField<float>("unionHueShift"); }
        void unionHueShift(float value) const { WriteField<float>("unionHueShift", value); }
        int unionMinAgeToLeaveTicks() const { return ReadField<int>("unionMinAgeToLeaveTicks"); }
        void unionMinAgeToLeaveTicks(int value) const { WriteField<int>("unionMinAgeToLeaveTicks", value); }
        int unionSecessionCheckTicks() const { return ReadField<int>("unionSecessionCheckTicks"); }
        void unionSecessionCheckTicks(int value) const { WriteField<int>("unionSecessionCheckTicks", value); }
        float unionRestlessOpinionMargin() const { return ReadField<float>("unionRestlessOpinionMargin"); }
        void unionRestlessOpinionMargin(float value) const { WriteField<float>("unionRestlessOpinionMargin", value); }
        float unionRestlessHappinessMargin() const { return ReadField<float>("unionRestlessHappinessMargin"); }
        void unionRestlessHappinessMargin(float value) const { WriteField<float>("unionRestlessHappinessMargin", value); }
        float unionSecessionHappiness() const { return ReadField<float>("unionSecessionHappiness"); }
        void unionSecessionHappiness(float value) const { WriteField<float>("unionSecessionHappiness", value); }
        float unionSecessionOpinion() const { return ReadField<float>("unionSecessionOpinion"); }
        void unionSecessionOpinion(float value) const { WriteField<float>("unionSecessionOpinion", value); }
        float unionStateTilesPerState() const { return ReadField<float>("unionStateTilesPerState"); }
        void unionStateTilesPerState(float value) const { WriteField<float>("unionStateTilesPerState", value); }
        int unionStateMaxStates() const { return ReadField<int>("unionStateMaxStates"); }
        void unionStateMaxStates(int value) const { WriteField<int>("unionStateMaxStates", value); }
        int unionStateMinTiles() const { return ReadField<int>("unionStateMinTiles"); }
        void unionStateMinTiles(int value) const { WriteField<int>("unionStateMinTiles", value); }
        int unionStateGarrison() const { return ReadField<int>("unionStateGarrison"); }
        void unionStateGarrison(int value) const { WriteField<int>("unionStateGarrison", value); }
        int unionExternalGarrison() const { return ReadField<int>("unionExternalGarrison"); }
        void unionExternalGarrison(int value) const { WriteField<int>("unionExternalGarrison", value); }
        float unionSubsidyCostBase() const { return ReadField<float>("unionSubsidyCostBase"); }
        void unionSubsidyCostBase(float value) const { WriteField<float>("unionSubsidyCostBase", value); }
        float unionSubsidyCostPerTile() const { return ReadField<float>("unionSubsidyCostPerTile"); }
        void unionSubsidyCostPerTile(float value) const { WriteField<float>("unionSubsidyCostPerTile", value); }
        float unionSubsidyGoodwill() const { return ReadField<float>("unionSubsidyGoodwill"); }
        void unionSubsidyGoodwill(float value) const { WriteField<float>("unionSubsidyGoodwill", value); }
        int unionSubsidyCooldownTicks() const { return ReadField<int>("unionSubsidyCooldownTicks"); }
        void unionSubsidyCooldownTicks(int value) const { WriteField<int>("unionSubsidyCooldownTicks", value); }
        float unionAutonomyOpinionBoost() const { return ReadField<float>("unionAutonomyOpinionBoost"); }
        void unionAutonomyOpinionBoost(float value) const { WriteField<float>("unionAutonomyOpinionBoost", value); }
        int unionAutonomyShieldTicks() const { return ReadField<int>("unionAutonomyShieldTicks"); }
        void unionAutonomyShieldTicks(int value) const { WriteField<int>("unionAutonomyShieldTicks", value); }
        int unionAutonomyCooldownTicks() const { return ReadField<int>("unionAutonomyCooldownTicks"); }
        void unionAutonomyCooldownTicks(int value) const { WriteField<int>("unionAutonomyCooldownTicks", value); }
        float unionExpelOpinionPenalty() const { return ReadField<float>("unionExpelOpinionPenalty"); }
        void unionExpelOpinionPenalty(float value) const { WriteField<float>("unionExpelOpinionPenalty", value); }
        float aiUnionSubsidyReserve() const { return ReadField<float>("aiUnionSubsidyReserve"); }
        void aiUnionSubsidyReserve(float value) const { WriteField<float>("aiUnionSubsidyReserve", value); }
        bool aiUnionGrantsAutonomy() const { return ReadField<bool>("aiUnionGrantsAutonomy"); }
        void aiUnionGrantsAutonomy(bool value) const { WriteField<bool>("aiUnionGrantsAutonomy", value); }
        int unionOfferLifetimeTicks() const { return ReadField<int>("unionOfferLifetimeTicks"); }
        void unionOfferLifetimeTicks(int value) const { WriteField<int>("unionOfferLifetimeTicks", value); }
        int maxPendingUnionOffers() const { return ReadField<int>("maxPendingUnionOffers"); }
        void maxPendingUnionOffers(int value) const { WriteField<int>("maxPendingUnionOffers", value); }
        bool enableAnnexationRequests() const { return ReadField<bool>("enableAnnexationRequests"); }
        void enableAnnexationRequests(bool value) const { WriteField<bool>("enableAnnexationRequests", value); }
        int annexRequestCooldownTicks() const { return ReadField<int>("annexRequestCooldownTicks"); }
        void annexRequestCooldownTicks(int value) const { WriteField<int>("annexRequestCooldownTicks", value); }
        float annexRequestBaseChance() const { return ReadField<float>("annexRequestBaseChance"); }
        void annexRequestBaseChance(float value) const { WriteField<float>("annexRequestBaseChance", value); }
        float annexRequestOpinionWeight() const { return ReadField<float>("annexRequestOpinionWeight"); }
        void annexRequestOpinionWeight(float value) const { WriteField<float>("annexRequestOpinionWeight", value); }
        float annexRequestFreeSizeRatio() const { return ReadField<float>("annexRequestFreeSizeRatio"); }
        void annexRequestFreeSizeRatio(float value) const { WriteField<float>("annexRequestFreeSizeRatio", value); }
        float annexRequestSizeSaturation() const { return ReadField<float>("annexRequestSizeSaturation"); }
        void annexRequestSizeSaturation(float value) const { WriteField<float>("annexRequestSizeSaturation", value); }
        float annexRequestSizeWeight() const { return ReadField<float>("annexRequestSizeWeight"); }
        void annexRequestSizeWeight(float value) const { WriteField<float>("annexRequestSizeWeight", value); }
        float annexRequestWarPenalty() const { return ReadField<float>("annexRequestWarPenalty"); }
        void annexRequestWarPenalty(float value) const { WriteField<float>("annexRequestWarPenalty", value); }
        float annexRequestWarPenaltyMax() const { return ReadField<float>("annexRequestWarPenaltyMax"); }
        void annexRequestWarPenaltyMax(float value) const { WriteField<float>("annexRequestWarPenaltyMax", value); }
        float annexRequestAggressionWeight() const { return ReadField<float>("annexRequestAggressionWeight"); }
        void annexRequestAggressionWeight(float value) const { WriteField<float>("annexRequestAggressionWeight", value); }
        bool enableVassalageRequests() const { return ReadField<bool>("enableVassalageRequests"); }
        void enableVassalageRequests(bool value) const { WriteField<bool>("enableVassalageRequests", value); }
        int vassalageRequestCooldownTicks() const { return ReadField<int>("vassalageRequestCooldownTicks"); }
        void vassalageRequestCooldownTicks(int value) const { WriteField<int>("vassalageRequestCooldownTicks", value); }
        float vassalageRequestBaseChance() const { return ReadField<float>("vassalageRequestBaseChance"); }
        void vassalageRequestBaseChance(float value) const { WriteField<float>("vassalageRequestBaseChance", value); }
        float vassalageRequestOpinionWeight() const { return ReadField<float>("vassalageRequestOpinionWeight"); }
        void vassalageRequestOpinionWeight(float value) const { WriteField<float>("vassalageRequestOpinionWeight", value); }
        float vassalageRequestSizeSaturation() const { return ReadField<float>("vassalageRequestSizeSaturation"); }
        void vassalageRequestSizeSaturation(float value) const { WriteField<float>("vassalageRequestSizeSaturation", value); }
        float vassalageRequestSizeWeight() const { return ReadField<float>("vassalageRequestSizeWeight"); }
        void vassalageRequestSizeWeight(float value) const { WriteField<float>("vassalageRequestSizeWeight", value); }
        float vassalageRequestWarPenalty() const { return ReadField<float>("vassalageRequestWarPenalty"); }
        void vassalageRequestWarPenalty(float value) const { WriteField<float>("vassalageRequestWarPenalty", value); }
        float vassalageRequestWarPenaltyMax() const { return ReadField<float>("vassalageRequestWarPenaltyMax"); }
        void vassalageRequestWarPenaltyMax(float value) const { WriteField<float>("vassalageRequestWarPenaltyMax", value); }
        float vassalageRequestAggressionWeight() const { return ReadField<float>("vassalageRequestAggressionWeight"); }
        void vassalageRequestAggressionWeight(float value) const { WriteField<float>("vassalageRequestAggressionWeight", value); }
        bool enableVassalAnnexDemands() const { return ReadField<bool>("enableVassalAnnexDemands"); }
        void enableVassalAnnexDemands(bool value) const { WriteField<bool>("enableVassalAnnexDemands", value); }
        int vassalAnnexDemandCooldownTicks() const { return ReadField<int>("vassalAnnexDemandCooldownTicks"); }
        void vassalAnnexDemandCooldownTicks(int value) const { WriteField<int>("vassalAnnexDemandCooldownTicks", value); }
        float vassalAnnexBaseChance() const { return ReadField<float>("vassalAnnexBaseChance"); }
        void vassalAnnexBaseChance(float value) const { WriteField<float>("vassalAnnexBaseChance", value); }
        float vassalAnnexLoyaltyWeight() const { return ReadField<float>("vassalAnnexLoyaltyWeight"); }
        void vassalAnnexLoyaltyWeight(float value) const { WriteField<float>("vassalAnnexLoyaltyWeight", value); }
        float vassalAnnexFreeSizeRatio() const { return ReadField<float>("vassalAnnexFreeSizeRatio"); }
        void vassalAnnexFreeSizeRatio(float value) const { WriteField<float>("vassalAnnexFreeSizeRatio", value); }
        float vassalAnnexSizeSaturation() const { return ReadField<float>("vassalAnnexSizeSaturation"); }
        void vassalAnnexSizeSaturation(float value) const { WriteField<float>("vassalAnnexSizeSaturation", value); }
        float vassalAnnexSizeWeight() const { return ReadField<float>("vassalAnnexSizeWeight"); }
        void vassalAnnexSizeWeight(float value) const { WriteField<float>("vassalAnnexSizeWeight", value); }
        float vassalAnnexTributeWeight() const { return ReadField<float>("vassalAnnexTributeWeight"); }
        void vassalAnnexTributeWeight(float value) const { WriteField<float>("vassalAnnexTributeWeight", value); }
        float vassalAnnexAggressionWeight() const { return ReadField<float>("vassalAnnexAggressionWeight"); }
        void vassalAnnexAggressionWeight(float value) const { WriteField<float>("vassalAnnexAggressionWeight", value); }
        float vassalAnnexRefusedPenalty() const { return ReadField<float>("vassalAnnexRefusedPenalty"); }
        void vassalAnnexRefusedPenalty(float value) const { WriteField<float>("vassalAnnexRefusedPenalty", value); }
        float settleBasePop() const { return ReadField<float>("settleBasePop"); }
        void settleBasePop(float value) const { WriteField<float>("settleBasePop", value); }
        float settlePopPerCity() const { return ReadField<float>("settlePopPerCity"); }
        void settlePopPerCity(float value) const { WriteField<float>("settlePopPerCity", value); }
        float settlerPopCostFraction() const { return ReadField<float>("settlerPopCostFraction"); }
        void settlerPopCostFraction(float value) const { WriteField<float>("settlerPopCostFraction", value); }
        float settlerPopCostMax() const { return ReadField<float>("settlerPopCostMax"); }
        void settlerPopCostMax(float value) const { WriteField<float>("settlerPopCostMax", value); }
        int settleCooldownTicks() const { return ReadField<int>("settleCooldownTicks"); }
        void settleCooldownTicks(int value) const { WriteField<int>("settleCooldownTicks", value); }
        float settleCoastalWeight() const { return ReadField<float>("settleCoastalWeight"); }
        void settleCoastalWeight(float value) const { WriteField<float>("settleCoastalWeight", value); }
        float settleFrontierWeight() const { return ReadField<float>("settleFrontierWeight"); }
        void settleFrontierWeight(float value) const { WriteField<float>("settleFrontierWeight", value); }
        float settleSpacingWeight() const { return ReadField<float>("settleSpacingWeight"); }
        void settleSpacingWeight(float value) const { WriteField<float>("settleSpacingWeight", value); }
        bool enableDelegatedSettlement() const { return ReadField<bool>("enableDelegatedSettlement"); }
        void enableDelegatedSettlement(bool value) const { WriteField<bool>("enableDelegatedSettlement", value); }
        bool enableIrredentism() const { return ReadField<bool>("enableIrredentism"); }
        void enableIrredentism(bool value) const { WriteField<bool>("enableIrredentism", value); }
        int irredentaIntervalDays() const { return ReadField<int>("irredentaIntervalDays"); }
        void irredentaIntervalDays(int value) const { WriteField<int>("irredentaIntervalDays", value); }
        float irredentaShareStart() const { return ReadField<float>("irredentaShareStart"); }
        void irredentaShareStart(float value) const { WriteField<float>("irredentaShareStart", value); }
        float irredentaShareStop() const { return ReadField<float>("irredentaShareStop"); }
        void irredentaShareStop(float value) const { WriteField<float>("irredentaShareStop", value); }
        int irredentaMinStateTiles() const { return ReadField<int>("irredentaMinStateTiles"); }
        void irredentaMinStateTiles(int value) const { WriteField<int>("irredentaMinStateTiles", value); }
        float irredentaOpinionMalus() const { return ReadField<float>("irredentaOpinionMalus"); }
        void irredentaOpinionMalus(float value) const { WriteField<float>("irredentaOpinionMalus", value); }
        int irredentaGraceDays() const { return ReadField<int>("irredentaGraceDays"); }
        void irredentaGraceDays(int value) const { WriteField<int>("irredentaGraceDays", value); }
        int irredentaOfferCount() const { return ReadField<int>("irredentaOfferCount"); }
        void irredentaOfferCount(int value) const { WriteField<int>("irredentaOfferCount", value); }
        int irredentaOfferSpacingDays() const { return ReadField<int>("irredentaOfferSpacingDays"); }
        void irredentaOfferSpacingDays(int value) const { WriteField<int>("irredentaOfferSpacingDays", value); }
        float irredentaOfferPremium() const { return ReadField<float>("irredentaOfferPremium"); }
        void irredentaOfferPremium(float value) const { WriteField<float>("irredentaOfferPremium", value); }
        int irredentaUltimatumDelayDays() const { return ReadField<int>("irredentaUltimatumDelayDays"); }
        void irredentaUltimatumDelayDays(int value) const { WriteField<int>("irredentaUltimatumDelayDays", value); }
        int irredentaUltimatumDeadlineDays() const { return ReadField<int>("irredentaUltimatumDeadlineDays"); }
        void irredentaUltimatumDeadlineDays(int value) const { WriteField<int>("irredentaUltimatumDeadlineDays", value); }
        int irredentaWarDelayDays() const { return ReadField<int>("irredentaWarDelayDays"); }
        void irredentaWarDelayDays(int value) const { WriteField<int>("irredentaWarDelayDays", value); }
        int irredentaWarPatienceDays() const { return ReadField<int>("irredentaWarPatienceDays"); }
        void irredentaWarPatienceDays(int value) const { WriteField<int>("irredentaWarPatienceDays", value); }
        float irredentaCessionGoodwill() const { return ReadField<float>("irredentaCessionGoodwill"); }
        void irredentaCessionGoodwill(float value) const { WriteField<float>("irredentaCessionGoodwill", value); }
        int maxPendingIrredentaDemands() const { return ReadField<int>("maxPendingIrredentaDemands"); }
        void maxPendingIrredentaDemands(int value) const { WriteField<int>("maxPendingIrredentaDemands", value); }
    };
}
