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
        void SetStartingPopulation(float value) const { WriteField<float>("startingPopulation", value); }
        float popPerTile() const { return ReadField<float>("popPerTile"); }
        void SetPopPerTile(float value) const { WriteField<float>("popPerTile", value); }
        float popGrowthRate() const { return ReadField<float>("popGrowthRate"); }
        void SetPopGrowthRate(float value) const { WriteField<float>("popGrowthRate", value); }
        float eraCapacityBonus() const { return ReadField<float>("eraCapacityBonus"); }
        void SetEraCapacityBonus(float value) const { WriteField<float>("eraCapacityBonus", value); }
        float popCapacityFloor() const { return ReadField<float>("popCapacityFloor"); }
        void SetPopCapacityFloor(float value) const { WriteField<float>("popCapacityFloor", value); }
        float popGrowthSeed() const { return ReadField<float>("popGrowthSeed"); }
        void SetPopGrowthSeed(float value) const { WriteField<float>("popGrowthSeed", value); }
        float popOvershootTolerance() const { return ReadField<float>("popOvershootTolerance"); }
        void SetPopOvershootTolerance(float value) const { WriteField<float>("popOvershootTolerance", value); }
        float socialSpendingMax() const { return ReadField<float>("socialSpendingMax"); }
        void SetSocialSpendingMax(float value) const { WriteField<float>("socialSpendingMax", value); }
        float socialSpendingCostPerPop() const { return ReadField<float>("socialSpendingCostPerPop"); }
        void SetSocialSpendingCostPerPop(float value) const { WriteField<float>("socialSpendingCostPerPop", value); }
        float socialFedLevel() const { return ReadField<float>("socialFedLevel"); }
        void SetSocialFedLevel(float value) const { WriteField<float>("socialFedLevel", value); }
        float socialGrowthLevel() const { return ReadField<float>("socialGrowthLevel"); }
        void SetSocialGrowthLevel(float value) const { WriteField<float>("socialGrowthLevel", value); }
        float welfarePerCapitaFedLevel() const { return ReadField<float>("welfarePerCapitaFedLevel"); }
        void SetWelfarePerCapitaFedLevel(float value) const { WriteField<float>("welfarePerCapitaFedLevel", value); }
        float welfarePerCapitaGrowthLevel() const { return ReadField<float>("welfarePerCapitaGrowthLevel"); }
        void SetWelfarePerCapitaGrowthLevel(float value) const { WriteField<float>("welfarePerCapitaGrowthLevel", value); }
        float welfareGrowthShareLevel() const { return ReadField<float>("welfareGrowthShareLevel"); }
        void SetWelfareGrowthShareLevel(float value) const { WriteField<float>("welfareGrowthShareLevel", value); }
        float socialPlateauFullLevel() const { return ReadField<float>("socialPlateauFullLevel"); }
        void SetSocialPlateauFullLevel(float value) const { WriteField<float>("socialPlateauFullLevel", value); }
        float socialGrowthPerYear() const { return ReadField<float>("socialGrowthPerYear"); }
        void SetSocialGrowthPerYear(float value) const { WriteField<float>("socialGrowthPerYear", value); }
        float socialGrowthMaxPerYear() const { return ReadField<float>("socialGrowthMaxPerYear"); }
        void SetSocialGrowthMaxPerYear(float value) const { WriteField<float>("socialGrowthMaxPerYear", value); }
        float socialGrowthFactor() const { return ReadField<float>("socialGrowthFactor"); }
        void SetSocialGrowthFactor(float value) const { WriteField<float>("socialGrowthFactor", value); }
        float socialHappinessFactor() const { return ReadField<float>("socialHappinessFactor"); }
        void SetSocialHappinessFactor(float value) const { WriteField<float>("socialHappinessFactor", value); }
        float civBudgetCostPerTick() const { return ReadField<float>("civBudgetCostPerTick"); }
        void SetCivBudgetCostPerTick(float value) const { WriteField<float>("civBudgetCostPerTick", value); }
        float milBudgetCostPerTick() const { return ReadField<float>("milBudgetCostPerTick"); }
        void SetMilBudgetCostPerTick(float value) const { WriteField<float>("milBudgetCostPerTick", value); }
        float infraBudgetCostPerTick() const { return ReadField<float>("infraBudgetCostPerTick"); }
        void SetInfraBudgetCostPerTick(float value) const { WriteField<float>("infraBudgetCostPerTick", value); }
        float budgetIncomeShare() const { return ReadField<float>("budgetIncomeShare"); }
        void SetBudgetIncomeShare(float value) const { WriteField<float>("budgetIncomeShare", value); }
        int budgetFundCapTicks() const { return ReadField<int>("budgetFundCapTicks"); }
        void SetBudgetFundCapTicks(int value) const { WriteField<int>("budgetFundCapTicks", value); }
        float budgetFundPriceMargin() const { return ReadField<float>("budgetFundPriceMargin"); }
        void SetBudgetFundPriceMargin(float value) const { WriteField<float>("budgetFundPriceMargin", value); }
        float popPerBuilding() const { return ReadField<float>("popPerBuilding"); }
        void SetPopPerBuilding(float value) const { WriteField<float>("popPerBuilding", value); }
        float incomePerCivFactory() const { return ReadField<float>("incomePerCivFactory"); }
        void SetIncomePerCivFactory(float value) const { WriteField<float>("incomePerCivFactory", value); }
        float popCapacityPerCivFactory() const { return ReadField<float>("popCapacityPerCivFactory"); }
        void SetPopCapacityPerCivFactory(float value) const { WriteField<float>("popCapacityPerCivFactory", value); }
        float civFactoryUpkeepPerTick() const { return ReadField<float>("civFactoryUpkeepPerTick"); }
        void SetCivFactoryUpkeepPerTick(float value) const { WriteField<float>("civFactoryUpkeepPerTick", value); }
        float milFactoryUpkeepPerTick() const { return ReadField<float>("milFactoryUpkeepPerTick"); }
        void SetMilFactoryUpkeepPerTick(float value) const { WriteField<float>("milFactoryUpkeepPerTick", value); }
        float popCapacityPerHousing() const { return ReadField<float>("popCapacityPerHousing"); }
        void SetPopCapacityPerHousing(float value) const { WriteField<float>("popCapacityPerHousing", value); }
        float popGrowthPerHousing() const { return ReadField<float>("popGrowthPerHousing"); }
        void SetPopGrowthPerHousing(float value) const { WriteField<float>("popGrowthPerHousing", value); }
        float statePopGrowthPerHousing() const { return ReadField<float>("statePopGrowthPerHousing"); }
        void SetStatePopGrowthPerHousing(float value) const { WriteField<float>("statePopGrowthPerHousing", value); }
        float popGrowthHousingMax() const { return ReadField<float>("popGrowthHousingMax"); }
        void SetPopGrowthHousingMax(float value) const { WriteField<float>("popGrowthHousingMax", value); }
        float buildingUpkeepPerPower() const { return ReadField<float>("buildingUpkeepPerPower"); }
        void SetBuildingUpkeepPerPower(float value) const { WriteField<float>("buildingUpkeepPerPower", value); }
        float stateBuildingUpkeepMul() const { return ReadField<float>("stateBuildingUpkeepMul"); }
        void SetStateBuildingUpkeepMul(float value) const { WriteField<float>("stateBuildingUpkeepMul", value); }
        bool enableArmyUpkeep() const { return ReadField<bool>("enableArmyUpkeep"); }
        void SetEnableArmyUpkeep(bool value) const { WriteField<bool>("enableArmyUpkeep", value); }
        float divisionUpkeepPerTick() const { return ReadField<float>("divisionUpkeepPerTick"); }
        void SetDivisionUpkeepPerTick(float value) const { WriteField<float>("divisionUpkeepPerTick", value); }
        float wartimeUpkeepMul() const { return ReadField<float>("wartimeUpkeepMul"); }
        void SetWartimeUpkeepMul(float value) const { WriteField<float>("wartimeUpkeepMul", value); }
        float milFactoryUpkeepOffset() const { return ReadField<float>("milFactoryUpkeepOffset"); }
        void SetMilFactoryUpkeepOffset(float value) const { WriteField<float>("milFactoryUpkeepOffset", value); }
        float armsStartStock() const { return ReadField<float>("armsStartStock"); }
        void SetArmsStartStock(float value) const { WriteField<float>("armsStartStock", value); }
        float armsBasePerTick() const { return ReadField<float>("armsBasePerTick"); }
        void SetArmsBasePerTick(float value) const { WriteField<float>("armsBasePerTick", value); }
        float armsPerMilFactoryPerTick() const { return ReadField<float>("armsPerMilFactoryPerTick"); }
        void SetArmsPerMilFactoryPerTick(float value) const { WriteField<float>("armsPerMilFactoryPerTick", value); }
        float armsStockCapBase() const { return ReadField<float>("armsStockCapBase"); }
        void SetArmsStockCapBase(float value) const { WriteField<float>("armsStockCapBase", value); }
        float armsStockCapPerMilFactory() const { return ReadField<float>("armsStockCapPerMilFactory"); }
        void SetArmsStockCapPerMilFactory(float value) const { WriteField<float>("armsStockCapPerMilFactory", value); }
        float armsBudgetCostPerTick() const { return ReadField<float>("armsBudgetCostPerTick"); }
        void SetArmsBudgetCostPerTick(float value) const { WriteField<float>("armsBudgetCostPerTick", value); }
        float armsPerFundingPerTick() const { return ReadField<float>("armsPerFundingPerTick"); }
        void SetArmsPerFundingPerTick(float value) const { WriteField<float>("armsPerFundingPerTick", value); }
        float aiArmsSurplusFraction() const { return ReadField<float>("aiArmsSurplusFraction"); }
        void SetAiArmsSurplusFraction(float value) const { WriteField<float>("aiArmsSurplusFraction", value); }
        int workshopSlots() const { return ReadField<int>("workshopSlots"); }
        void SetWorkshopSlots(int value) const { WriteField<int>("workshopSlots", value); }
        float workshopOutputMul() const { return ReadField<float>("workshopOutputMul"); }
        void SetWorkshopOutputMul(float value) const { WriteField<float>("workshopOutputMul", value); }
        void* meleePool() const { return ReadField<void*>("meleePool"); }
        void SetMeleePool(void* value) const { WriteField<void*>("meleePool", value); }
        void* armourPool() const { return ReadField<void*>("armourPool"); }
        void SetArmourPool(void* value) const { WriteField<void*>("armourPool", value); }
        void* vehiclesPool() const { return ReadField<void*>("vehiclesPool"); }
        void SetVehiclesPool(void* value) const { WriteField<void*>("vehiclesPool", value); }
        void* artilleryPool() const { return ReadField<void*>("artilleryPool"); }
        void SetArtilleryPool(void* value) const { WriteField<void*>("artilleryPool", value); }
        bool enableUpkeepScaleEconomy() const { return ReadField<bool>("enableUpkeepScaleEconomy"); }
        void SetEnableUpkeepScaleEconomy(bool value) const { WriteField<bool>("enableUpkeepScaleEconomy", value); }
        float upkeepScaleFullWorldShare() const { return ReadField<float>("upkeepScaleFullWorldShare"); }
        void SetUpkeepScaleFullWorldShare(float value) const { WriteField<float>("upkeepScaleFullWorldShare", value); }
        float upkeepScaleMinFactor() const { return ReadField<float>("upkeepScaleMinFactor"); }
        void SetUpkeepScaleMinFactor(float value) const { WriteField<float>("upkeepScaleMinFactor", value); }
        float wartimeUpkeepLongWarSlope() const { return ReadField<float>("wartimeUpkeepLongWarSlope"); }
        void SetWartimeUpkeepLongWarSlope(float value) const { WriteField<float>("wartimeUpkeepLongWarSlope", value); }
        float wartimeUpkeepLongWarMax() const { return ReadField<float>("wartimeUpkeepLongWarMax"); }
        void SetWartimeUpkeepLongWarMax(float value) const { WriteField<float>("wartimeUpkeepLongWarMax", value); }
        float manpowerCapShare() const { return ReadField<float>("manpowerCapShare"); }
        void SetManpowerCapShare(float value) const { WriteField<float>("manpowerCapShare", value); }
        float manpowerCapBase() const { return ReadField<float>("manpowerCapBase"); }
        void SetManpowerCapBase(float value) const { WriteField<float>("manpowerCapBase", value); }
        float manpowerCapMaxShare() const { return ReadField<float>("manpowerCapMaxShare"); }
        void SetManpowerCapMaxShare(float value) const { WriteField<float>("manpowerCapMaxShare", value); }
        float manpowerIntakeSharePerTick() const { return ReadField<float>("manpowerIntakeSharePerTick"); }
        void SetManpowerIntakeSharePerTick(float value) const { WriteField<float>("manpowerIntakeSharePerTick", value); }
        float manpowerIntakeBasePerTick() const { return ReadField<float>("manpowerIntakeBasePerTick"); }
        void SetManpowerIntakeBasePerTick(float value) const { WriteField<float>("manpowerIntakeBasePerTick", value); }
        float manpowerStartFraction() const { return ReadField<float>("manpowerStartFraction"); }
        void SetManpowerStartFraction(float value) const { WriteField<float>("manpowerStartFraction", value); }
        float strainManpowerWeight() const { return ReadField<float>("strainManpowerWeight"); }
        void SetStrainManpowerWeight(float value) const { WriteField<float>("strainManpowerWeight", value); }
        float identityMismatchWeight() const { return ReadField<float>("identityMismatchWeight"); }
        void SetIdentityMismatchWeight(float value) const { WriteField<float>("identityMismatchWeight", value); }
        float assimilationPushUpkeepPerTick() const { return ReadField<float>("assimilationPushUpkeepPerTick"); }
        void SetAssimilationPushUpkeepPerTick(float value) const { WriteField<float>("assimilationPushUpkeepPerTick", value); }
        float assimilationPushCostPerTilePerTick() const { return ReadField<float>("assimilationPushCostPerTilePerTick"); }
        void SetAssimilationPushCostPerTilePerTick(float value) const { WriteField<float>("assimilationPushCostPerTilePerTick", value); }
        float borderGuardUpkeepPerTick() const { return ReadField<float>("borderGuardUpkeepPerTick"); }
        void SetBorderGuardUpkeepPerTick(float value) const { WriteField<float>("borderGuardUpkeepPerTick", value); }
        float borderGuardCostPerTilePerTick() const { return ReadField<float>("borderGuardCostPerTilePerTick"); }
        void SetBorderGuardCostPerTilePerTick(float value) const { WriteField<float>("borderGuardCostPerTilePerTick", value); }
        float aiIdentityIncomeMargin() const { return ReadField<float>("aiIdentityIncomeMargin"); }
        void SetAiIdentityIncomeMargin(float value) const { WriteField<float>("aiIdentityIncomeMargin", value); }
        float promotionCostPerTilePerTick() const { return ReadField<float>("promotionCostPerTilePerTick"); }
        void SetPromotionCostPerTilePerTick(float value) const { WriteField<float>("promotionCostPerTilePerTick", value); }
        int expulsionTilesPerTick() const { return ReadField<int>("expulsionTilesPerTick"); }
        void SetExpulsionTilesPerTick(int value) const { WriteField<int>("expulsionTilesPerTick", value); }
        int expulsionQuantaPerVisit() const { return ReadField<int>("expulsionQuantaPerVisit"); }
        void SetExpulsionQuantaPerVisit(int value) const { WriteField<int>("expulsionQuantaPerVisit", value); }
        float expulsionPopulationFactor() const { return ReadField<float>("expulsionPopulationFactor"); }
        void SetExpulsionPopulationFactor(float value) const { WriteField<float>("expulsionPopulationFactor", value); }
        float expulsionArrivalShare() const { return ReadField<float>("expulsionArrivalShare"); }
        void SetExpulsionArrivalShare(float value) const { WriteField<float>("expulsionArrivalShare", value); }
        float expulsionGrievancePerTile() const { return ReadField<float>("expulsionGrievancePerTile"); }
        void SetExpulsionGrievancePerTile(float value) const { WriteField<float>("expulsionGrievancePerTile", value); }
        float expulsionOpinionPerTile() const { return ReadField<float>("expulsionOpinionPerTile"); }
        void SetExpulsionOpinionPerTile(float value) const { WriteField<float>("expulsionOpinionPerTile", value); }
        float expulsionUnrest() const { return ReadField<float>("expulsionUnrest"); }
        void SetExpulsionUnrest(float value) const { WriteField<float>("expulsionUnrest", value); }
        float expulsionUnrestStepPerTick() const { return ReadField<float>("expulsionUnrestStepPerTick"); }
        void SetExpulsionUnrestStepPerTick(float value) const { WriteField<float>("expulsionUnrestStepPerTick", value); }
        float expulsionUpkeepPerTick() const { return ReadField<float>("expulsionUpkeepPerTick"); }
        void SetExpulsionUpkeepPerTick(float value) const { WriteField<float>("expulsionUpkeepPerTick", value); }
        float exterminationPopulationMul() const { return ReadField<float>("exterminationPopulationMul"); }
        void SetExterminationPopulationMul(float value) const { WriteField<float>("exterminationPopulationMul", value); }
        float exterminationOutrageMul() const { return ReadField<float>("exterminationOutrageMul"); }
        void SetExterminationOutrageMul(float value) const { WriteField<float>("exterminationOutrageMul", value); }
        int treatyExpulsionTilesPerTick() const { return ReadField<int>("treatyExpulsionTilesPerTick"); }
        void SetTreatyExpulsionTilesPerTick(int value) const { WriteField<int>("treatyExpulsionTilesPerTick", value); }
        int treatyExpulsionQuantaPerVisit() const { return ReadField<int>("treatyExpulsionQuantaPerVisit"); }
        void SetTreatyExpulsionQuantaPerVisit(int value) const { WriteField<int>("treatyExpulsionQuantaPerVisit", value); }
        float treatyExpulsionArrivalShare() const { return ReadField<float>("treatyExpulsionArrivalShare"); }
        void SetTreatyExpulsionArrivalShare(float value) const { WriteField<float>("treatyExpulsionArrivalShare", value); }
        float treatyExpulsionYears() const { return ReadField<float>("treatyExpulsionYears"); }
        void SetTreatyExpulsionYears(float value) const { WriteField<float>("treatyExpulsionYears", value); }
        float peaceExpulsionValueShare() const { return ReadField<float>("peaceExpulsionValueShare"); }
        void SetPeaceExpulsionValueShare(float value) const { WriteField<float>("peaceExpulsionValueShare", value); }
        float peopleStatelessCapacityShare() const { return ReadField<float>("peopleStatelessCapacityShare"); }
        void SetPeopleStatelessCapacityShare(float value) const { WriteField<float>("peopleStatelessCapacityShare", value); }
        float peopleSpreadPerMonth() const { return ReadField<float>("peopleSpreadPerMonth"); }
        void SetPeopleSpreadPerMonth(float value) const { WriteField<float>("peopleSpreadPerMonth", value); }
        float peopleSpreadUnownedMul() const { return ReadField<float>("peopleSpreadUnownedMul"); }
        void SetPeopleSpreadUnownedMul(float value) const { WriteField<float>("peopleSpreadUnownedMul", value); }
        float peopleSpreadAcrossBordersMul() const { return ReadField<float>("peopleSpreadAcrossBordersMul"); }
        void SetPeopleSpreadAcrossBordersMul(float value) const { WriteField<float>("peopleSpreadAcrossBordersMul", value); }
        float peopleTownTileWeight() const { return ReadField<float>("peopleTownTileWeight"); }
        void SetPeopleTownTileWeight(float value) const { WriteField<float>("peopleTownTileWeight", value); }
        float peoplePioneers() const { return ReadField<float>("peoplePioneers"); }
        void SetPeoplePioneers(float value) const { WriteField<float>("peoplePioneers", value); }
        float peopleRefugeeTownShare() const { return ReadField<float>("peopleRefugeeTownShare"); }
        void SetPeopleRefugeeTownShare(float value) const { WriteField<float>("peopleRefugeeTownShare", value); }
        float peopleResettleShare() const { return ReadField<float>("peopleResettleShare"); }
        void SetPeopleResettleShare(float value) const { WriteField<float>("peopleResettleShare", value); }
        int peopleTravelTicksBase() const { return ReadField<int>("peopleTravelTicksBase"); }
        void SetPeopleTravelTicksBase(int value) const { WriteField<int>("peopleTravelTicksBase", value); }
        float incomePerPop() const { return ReadField<float>("incomePerPop"); }
        void SetIncomePerPop(float value) const { WriteField<float>("incomePerPop", value); }
        float incomePerTile() const { return ReadField<float>("incomePerTile"); }
        void SetIncomePerTile(float value) const { WriteField<float>("incomePerTile", value); }
        float incomePerBuilding() const { return ReadField<float>("incomePerBuilding"); }
        void SetIncomePerBuilding(float value) const { WriteField<float>("incomePerBuilding", value); }
        bool enableMonthlyPayday() const { return ReadField<bool>("enableMonthlyPayday"); }
        void SetEnableMonthlyPayday(bool value) const { WriteField<bool>("enableMonthlyPayday", value); }
        bool enableIncomeCurve() const { return ReadField<bool>("enableIncomeCurve"); }
        void SetEnableIncomeCurve(bool value) const { WriteField<bool>("enableIncomeCurve", value); }
        bool enableAdministration() const { return ReadField<bool>("enableAdministration"); }
        void SetEnableAdministration(bool value) const { WriteField<bool>("enableAdministration", value); }
        float adminBasePerTick() const { return ReadField<float>("adminBasePerTick"); }
        void SetAdminBasePerTick(float value) const { WriteField<float>("adminBasePerTick", value); }
        float adminCostPerTile() const { return ReadField<float>("adminCostPerTile"); }
        void SetAdminCostPerTile(float value) const { WriteField<float>("adminCostPerTile", value); }
        float adminSoftCapWorldShare() const { return ReadField<float>("adminSoftCapWorldShare"); }
        void SetAdminSoftCapWorldShare(float value) const { WriteField<float>("adminSoftCapWorldShare", value); }
        float adminSizeExponent() const { return ReadField<float>("adminSizeExponent"); }
        void SetAdminSizeExponent(float value) const { WriteField<float>("adminSizeExponent", value); }
        int adminSoftCapFallbackTiles() const { return ReadField<int>("adminSoftCapFallbackTiles"); }
        void SetAdminSoftCapFallbackTiles(int value) const { WriteField<int>("adminSoftCapFallbackTiles", value); }
        float uncoreMinTaxMul() const { return ReadField<float>("uncoreMinTaxMul"); }
        void SetUncoreMinTaxMul(float value) const { WriteField<float>("uncoreMinTaxMul", value); }
        float instabilityAdminSurcharge() const { return ReadField<float>("instabilityAdminSurcharge"); }
        void SetInstabilityAdminSurcharge(float value) const { WriteField<float>("instabilityAdminSurcharge", value); }
        float occupationAdminMul() const { return ReadField<float>("occupationAdminMul"); }
        void SetOccupationAdminMul(float value) const { WriteField<float>("occupationAdminMul", value); }
        float baseUncoreStability() const { return ReadField<float>("baseUncoreStability"); }
        void SetBaseUncoreStability(float value) const { WriteField<float>("baseUncoreStability", value); }
        float occupiedStabilityTarget() const { return ReadField<float>("occupiedStabilityTarget"); }
        void SetOccupiedStabilityTarget(float value) const { WriteField<float>("occupiedStabilityTarget", value); }
        float stabilityDriftPerTick() const { return ReadField<float>("stabilityDriftPerTick"); }
        void SetStabilityDriftPerTick(float value) const { WriteField<float>("stabilityDriftPerTick", value); }
        float instabilityHappinessFactor() const { return ReadField<float>("instabilityHappinessFactor"); }
        void SetInstabilityHappinessFactor(float value) const { WriteField<float>("instabilityHappinessFactor", value); }
        int occupationFreshTicks() const { return ReadField<int>("occupationFreshTicks"); }
        void SetOccupationFreshTicks(int value) const { WriteField<int>("occupationFreshTicks", value); }
        int integrationTicks() const { return ReadField<int>("integrationTicks"); }
        void SetIntegrationTicks(int value) const { WriteField<int>("integrationTicks", value); }
        float integrationCostPerTilePerTick() const { return ReadField<float>("integrationCostPerTilePerTick"); }
        void SetIntegrationCostPerTilePerTick(float value) const { WriteField<float>("integrationCostPerTilePerTick", value); }
        int aiMaxConcurrentIntegrations() const { return ReadField<int>("aiMaxConcurrentIntegrations"); }
        void SetAiMaxConcurrentIntegrations(int value) const { WriteField<int>("aiMaxConcurrentIntegrations", value); }
        float aiIntegrationIncomeMargin() const { return ReadField<float>("aiIntegrationIncomeMargin"); }
        void SetAiIntegrationIncomeMargin(float value) const { WriteField<float>("aiIntegrationIncomeMargin", value); }
        float warMinStabilityIndex() const { return ReadField<float>("warMinStabilityIndex"); }
        void SetWarMinStabilityIndex(float value) const { WriteField<float>("warMinStabilityIndex", value); }
        float expansionSettlersPerPopPerTick() const { return ReadField<float>("expansionSettlersPerPopPerTick"); }
        void SetExpansionSettlersPerPopPerTick(float value) const { WriteField<float>("expansionSettlersPerPopPerTick", value); }
        float expansionSettlersPerTile() const { return ReadField<float>("expansionSettlersPerTile"); }
        void SetExpansionSettlersPerTile(float value) const { WriteField<float>("expansionSettlersPerTile", value); }
        float expansionSettlerBankTicks() const { return ReadField<float>("expansionSettlerBankTicks"); }
        void SetExpansionSettlerBankTicks(float value) const { WriteField<float>("expansionSettlerBankTicks", value); }
        float expansionGoldPerTile() const { return ReadField<float>("expansionGoldPerTile"); }
        void SetExpansionGoldPerTile(float value) const { WriteField<float>("expansionGoldPerTile", value); }
        float expansionSizeReferenceTiles() const { return ReadField<float>("expansionSizeReferenceTiles"); }
        void SetExpansionSizeReferenceTiles(float value) const { WriteField<float>("expansionSizeReferenceTiles", value); }
        float expansionSizeExponent() const { return ReadField<float>("expansionSizeExponent"); }
        void SetExpansionSizeExponent(float value) const { WriteField<float>("expansionSizeExponent", value); }
        float expansionSizeFloor() const { return ReadField<float>("expansionSizeFloor"); }
        void SetExpansionSizeFloor(float value) const { WriteField<float>("expansionSizeFloor", value); }
        float expansionIncomeShare() const { return ReadField<float>("expansionIncomeShare"); }
        void SetExpansionIncomeShare(float value) const { WriteField<float>("expansionIncomeShare", value); }
        float expansionFundBankTicks() const { return ReadField<float>("expansionFundBankTicks"); }
        void SetExpansionFundBankTicks(float value) const { WriteField<float>("expansionFundBankTicks", value); }
        int expansionMaxTilesPerTick() const { return ReadField<int>("expansionMaxTilesPerTick"); }
        void SetExpansionMaxTilesPerTick(int value) const { WriteField<int>("expansionMaxTilesPerTick", value); }
        float expansionMinThrottle() const { return ReadField<float>("expansionMinThrottle"); }
        void SetExpansionMinThrottle(float value) const { WriteField<float>("expansionMinThrottle", value); }
        float expansionResistanceWeight() const { return ReadField<float>("expansionResistanceWeight"); }
        void SetExpansionResistanceWeight(float value) const { WriteField<float>("expansionResistanceWeight", value); }
        float expansionResistanceSlowdown() const { return ReadField<float>("expansionResistanceSlowdown"); }
        void SetExpansionResistanceSlowdown(float value) const { WriteField<float>("expansionResistanceSlowdown", value); }
        float expansionReliefWeight() const { return ReadField<float>("expansionReliefWeight"); }
        void SetExpansionReliefWeight(float value) const { WriteField<float>("expansionReliefWeight", value); }
        float expansionDistanceWeight() const { return ReadField<float>("expansionDistanceWeight"); }
        void SetExpansionDistanceWeight(float value) const { WriteField<float>("expansionDistanceWeight", value); }
        float expansionReachFloorTiles() const { return ReadField<float>("expansionReachFloorTiles"); }
        void SetExpansionReachFloorTiles(float value) const { WriteField<float>("expansionReachFloorTiles", value); }
        float expansionFoundingSettlers() const { return ReadField<float>("expansionFoundingSettlers"); }
        void SetExpansionFoundingSettlers(float value) const { WriteField<float>("expansionFoundingSettlers", value); }
        float expansionFoundingFund() const { return ReadField<float>("expansionFoundingFund"); }
        void SetExpansionFoundingFund(float value) const { WriteField<float>("expansionFoundingFund", value); }
        int expansionFoundingMaxTiles() const { return ReadField<int>("expansionFoundingMaxTiles"); }
        void SetExpansionFoundingMaxTiles(int value) const { WriteField<int>("expansionFoundingMaxTiles", value); }
        bool enableExpansionCeiling() const { return ReadField<bool>("enableExpansionCeiling"); }
        void SetEnableExpansionCeiling(bool value) const { WriteField<bool>("enableExpansionCeiling", value); }
        float expansionCeilingMinShare() const { return ReadField<float>("expansionCeilingMinShare"); }
        void SetExpansionCeilingMinShare(float value) const { WriteField<float>("expansionCeilingMinShare", value); }
        float expansionCeilingMaxShare() const { return ReadField<float>("expansionCeilingMaxShare"); }
        void SetExpansionCeilingMaxShare(float value) const { WriteField<float>("expansionCeilingMaxShare", value); }
        float expansionCeilingUnstableMul() const { return ReadField<float>("expansionCeilingUnstableMul"); }
        void SetExpansionCeilingUnstableMul(float value) const { WriteField<float>("expansionCeilingUnstableMul", value); }
        int expansionCeilingFloorTiles() const { return ReadField<int>("expansionCeilingFloorTiles"); }
        void SetExpansionCeilingFloorTiles(int value) const { WriteField<int>("expansionCeilingFloorTiles", value); }
        float expansionCeilingFallbackTiles() const { return ReadField<float>("expansionCeilingFallbackTiles"); }
        void SetExpansionCeilingFallbackTiles(float value) const { WriteField<float>("expansionCeilingFallbackTiles", value); }
        float taxRateMin() const { return ReadField<float>("taxRateMin"); }
        void SetTaxRateMin(float value) const { WriteField<float>("taxRateMin", value); }
        float taxRateMax() const { return ReadField<float>("taxRateMax"); }
        void SetTaxRateMax(float value) const { WriteField<float>("taxRateMax", value); }
        float taxHappinessFactor() const { return ReadField<float>("taxHappinessFactor"); }
        void SetTaxHappinessFactor(float value) const { WriteField<float>("taxHappinessFactor", value); }
        int politicsIntervalTicks() const { return ReadField<int>("politicsIntervalTicks"); }
        void SetPoliticsIntervalTicks(int value) const { WriteField<int>("politicsIntervalTicks", value); }
        float treasuryHealthyDays() const { return ReadField<float>("treasuryHealthyDays"); }
        void SetTreasuryHealthyDays(float value) const { WriteField<float>("treasuryHealthyDays", value); }
        float warInstabilityPerWar() const { return ReadField<float>("warInstabilityPerWar"); }
        void SetWarInstabilityPerWar(float value) const { WriteField<float>("warInstabilityPerWar", value); }
        float warLengthInstabilitySlope() const { return ReadField<float>("warLengthInstabilitySlope"); }
        void SetWarLengthInstabilitySlope(float value) const { WriteField<float>("warLengthInstabilitySlope", value); }
        float warLengthInstabilityMax() const { return ReadField<float>("warLengthInstabilityMax"); }
        void SetWarLengthInstabilityMax(float value) const { WriteField<float>("warLengthInstabilityMax", value); }
        float consolidationPullWeight() const { return ReadField<float>("consolidationPullWeight"); }
        void SetConsolidationPullWeight(float value) const { WriteField<float>("consolidationPullWeight", value); }
        float techBaseRate() const { return ReadField<float>("techBaseRate"); }
        void SetTechBaseRate(float value) const { WriteField<float>("techBaseRate", value); }
        float techPopFactor() const { return ReadField<float>("techPopFactor"); }
        void SetTechPopFactor(float value) const { WriteField<float>("techPopFactor", value); }
        float techPopScale() const { return ReadField<float>("techPopScale"); }
        void SetTechPopScale(float value) const { WriteField<float>("techPopScale", value); }
        float techPopExponent() const { return ReadField<float>("techPopExponent"); }
        void SetTechPopExponent(float value) const { WriteField<float>("techPopExponent", value); }
        float techBuildingFactor() const { return ReadField<float>("techBuildingFactor"); }
        void SetTechBuildingFactor(float value) const { WriteField<float>("techBuildingFactor", value); }
        float techResearchBuildingFactor() const { return ReadField<float>("techResearchBuildingFactor"); }
        void SetTechResearchBuildingFactor(float value) const { WriteField<float>("techResearchBuildingFactor", value); }
        void* eraThresholds() const { return ReadField<void*>("eraThresholds"); }
        void SetEraThresholds(void* value) const { WriteField<void*>("eraThresholds", value); }
        void* eraResearchedTechs() const { return ReadField<void*>("eraResearchedTechs"); }
        void SetEraResearchedTechs(void* value) const { WriteField<void*>("eraResearchedTechs", value); }
        void* eraNames() const { return ReadField<void*>("eraNames"); }
        void SetEraNames(void* value) const { WriteField<void*>("eraNames", value); }
        void* buildingNames() const { return ReadField<void*>("buildingNames"); }
        void SetBuildingNames(void* value) const { WriteField<void*>("buildingNames", value); }
        bool enableResearch() const { return ReadField<bool>("enableResearch"); }
        void SetEnableResearch(bool value) const { WriteField<bool>("enableResearch", value); }
        float researchRateMul() const { return ReadField<float>("researchRateMul"); }
        void SetResearchRateMul(float value) const { WriteField<float>("researchRateMul", value); }
        float researchCostMul() const { return ReadField<float>("researchCostMul"); }
        void SetResearchCostMul(float value) const { WriteField<float>("researchCostMul", value); }
        float researchAheadCostPerTier() const { return ReadField<float>("researchAheadCostPerTier"); }
        void SetResearchAheadCostPerTier(float value) const { WriteField<float>("researchAheadCostPerTier", value); }
        float researchBehindCostPerTier() const { return ReadField<float>("researchBehindCostPerTier"); }
        void SetResearchBehindCostPerTier(float value) const { WriteField<float>("researchBehindCostPerTier", value); }
        float researchBehindCostFloor() const { return ReadField<float>("researchBehindCostFloor"); }
        void SetResearchBehindCostFloor(float value) const { WriteField<float>("researchBehindCostFloor", value); }
        float researchBankCap() const { return ReadField<float>("researchBankCap"); }
        void SetResearchBankCap(float value) const { WriteField<float>("researchBankCap", value); }
        float researchAtWarMilBias() const { return ReadField<float>("researchAtWarMilBias"); }
        void SetResearchAtWarMilBias(float value) const { WriteField<float>("researchAtWarMilBias", value); }
        float researchBrokeEcoBias() const { return ReadField<float>("researchBrokeEcoBias"); }
        void SetResearchBrokeEcoBias(float value) const { WriteField<float>("researchBrokeEcoBias", value); }
        float researchCostNorm() const { return ReadField<float>("researchCostNorm"); }
        void SetResearchCostNorm(float value) const { WriteField<float>("researchCostNorm", value); }
        float researchBudgetCostPerTick() const { return ReadField<float>("researchBudgetCostPerTick"); }
        void SetResearchBudgetCostPerTick(float value) const { WriteField<float>("researchBudgetCostPerTick", value); }
        float researchFundingRateBonus() const { return ReadField<float>("researchFundingRateBonus"); }
        void SetResearchFundingRateBonus(float value) const { WriteField<float>("researchFundingRateBonus", value); }
        float aiResearchSurplusFraction() const { return ReadField<float>("aiResearchSurplusFraction"); }
        void SetAiResearchSurplusFraction(float value) const { WriteField<float>("aiResearchSurplusFraction", value); }
        bool enableAiEconomicPolicy() const { return ReadField<bool>("enableAiEconomicPolicy"); }
        void SetEnableAiEconomicPolicy(bool value) const { WriteField<bool>("enableAiEconomicPolicy", value); }
        float aiPolicyAdjustStep() const { return ReadField<float>("aiPolicyAdjustStep"); }
        void SetAiPolicyAdjustStep(float value) const { WriteField<float>("aiPolicyAdjustStep", value); }
        float aiWarTaxRate() const { return ReadField<float>("aiWarTaxRate"); }
        void SetAiWarTaxRate(float value) const { WriteField<float>("aiWarTaxRate", value); }
        float aiCrisisTaxRate() const { return ReadField<float>("aiCrisisTaxRate"); }
        void SetAiCrisisTaxRate(float value) const { WriteField<float>("aiCrisisTaxRate", value); }
        float aiPeaceTaxTarget() const { return ReadField<float>("aiPeaceTaxTarget"); }
        void SetAiPeaceTaxTarget(float value) const { WriteField<float>("aiPeaceTaxTarget", value); }
        float aiTariffBase() const { return ReadField<float>("aiTariffBase"); }
        void SetAiTariffBase(float value) const { WriteField<float>("aiTariffBase", value); }
        float aiSocialSpendingMaxShare() const { return ReadField<float>("aiSocialSpendingMaxShare"); }
        void SetAiSocialSpendingMaxShare(float value) const { WriteField<float>("aiSocialSpendingMaxShare", value); }
        float aiBudgetSurplusFraction() const { return ReadField<float>("aiBudgetSurplusFraction"); }
        void SetAiBudgetSurplusFraction(float value) const { WriteField<float>("aiBudgetSurplusFraction", value); }
        float aiBudgetWarMilBias() const { return ReadField<float>("aiBudgetWarMilBias"); }
        void SetAiBudgetWarMilBias(float value) const { WriteField<float>("aiBudgetWarMilBias", value); }
        float aiBudgetMinLevel() const { return ReadField<float>("aiBudgetMinLevel"); }
        void SetAiBudgetMinLevel(float value) const { WriteField<float>("aiBudgetMinLevel", value); }
        bool enablePlayerFiscalAutopilot() const { return ReadField<bool>("enablePlayerFiscalAutopilot"); }
        void SetEnablePlayerFiscalAutopilot(bool value) const { WriteField<bool>("enablePlayerFiscalAutopilot", value); }
        bool enableAiCoercion() const { return ReadField<bool>("enableAiCoercion"); }
        void SetEnableAiCoercion(bool value) const { WriteField<bool>("enableAiCoercion", value); }
        int aiCoercionCooldownTicks() const { return ReadField<int>("aiCoercionCooldownTicks"); }
        void SetAiCoercionCooldownTicks(int value) const { WriteField<int>("aiCoercionCooldownTicks", value); }
        float aiCoercionChance() const { return ReadField<float>("aiCoercionChance"); }
        void SetAiCoercionChance(float value) const { WriteField<float>("aiCoercionChance", value); }
        float aiUltimatumPowerRatio() const { return ReadField<float>("aiUltimatumPowerRatio"); }
        void SetAiUltimatumPowerRatio(float value) const { WriteField<float>("aiUltimatumPowerRatio", value); }
        float aiDemandPowerRatio() const { return ReadField<float>("aiDemandPowerRatio"); }
        void SetAiDemandPowerRatio(float value) const { WriteField<float>("aiDemandPowerRatio", value); }
        float aiUltimatumOpinionMax() const { return ReadField<float>("aiUltimatumOpinionMax"); }
        void SetAiUltimatumOpinionMax(float value) const { WriteField<float>("aiUltimatumOpinionMax", value); }
        bool aiUltimatumsTargetPlayer() const { return ReadField<bool>("aiUltimatumsTargetPlayer"); }
        void SetAiUltimatumsTargetPlayer(bool value) const { WriteField<bool>("aiUltimatumsTargetPlayer", value); }
        float aiFearPowerRatio() const { return ReadField<float>("aiFearPowerRatio"); }
        void SetAiFearPowerRatio(float value) const { WriteField<float>("aiFearPowerRatio", value); }
        float aiAllianceOpinionMin() const { return ReadField<float>("aiAllianceOpinionMin"); }
        void SetAiAllianceOpinionMin(float value) const { WriteField<float>("aiAllianceOpinionMin", value); }
        float aiPuppetWarScoreMin() const { return ReadField<float>("aiPuppetWarScoreMin"); }
        void SetAiPuppetWarScoreMin(float value) const { WriteField<float>("aiPuppetWarScoreMin", value); }
        float aiPuppetMaxSizeFraction() const { return ReadField<float>("aiPuppetMaxSizeFraction"); }
        void SetAiPuppetMaxSizeFraction(float value) const { WriteField<float>("aiPuppetMaxSizeFraction", value); }
        float aiAllyPowerWeight() const { return ReadField<float>("aiAllyPowerWeight"); }
        void SetAiAllyPowerWeight(float value) const { WriteField<float>("aiAllyPowerWeight", value); }
        float aiWarChestMin() const { return ReadField<float>("aiWarChestMin"); }
        void SetAiWarChestMin(float value) const { WriteField<float>("aiWarChestMin", value); }
        int diplomacyIntervalTicks() const { return ReadField<int>("diplomacyIntervalTicks"); }
        void SetDiplomacyIntervalTicks(int value) const { WriteField<int>("diplomacyIntervalTicks", value); }
        float opinionMin() const { return ReadField<float>("opinionMin"); }
        void SetOpinionMin(float value) const { WriteField<float>("opinionMin", value); }
        float opinionMax() const { return ReadField<float>("opinionMax"); }
        void SetOpinionMax(float value) const { WriteField<float>("opinionMax", value); }
        float compatibilityWeight() const { return ReadField<float>("compatibilityWeight"); }
        void SetCompatibilityWeight(float value) const { WriteField<float>("compatibilityWeight", value); }
        float frictionWeight() const { return ReadField<float>("frictionWeight"); }
        void SetFrictionWeight(float value) const { WriteField<float>("frictionWeight", value); }
        float powerFearWeight() const { return ReadField<float>("powerFearWeight"); }
        void SetPowerFearWeight(float value) const { WriteField<float>("powerFearWeight", value); }
        float sociabilityWeight() const { return ReadField<float>("sociabilityWeight"); }
        void SetSociabilityWeight(float value) const { WriteField<float>("sociabilityWeight", value); }
        float atWarPenalty() const { return ReadField<float>("atWarPenalty"); }
        void SetAtWarPenalty(float value) const { WriteField<float>("atWarPenalty", value); }
        float contactSaturation() const { return ReadField<float>("contactSaturation"); }
        void SetContactSaturation(float value) const { WriteField<float>("contactSaturation", value); }
        float recentPressureWeight() const { return ReadField<float>("recentPressureWeight"); }
        void SetRecentPressureWeight(float value) const { WriteField<float>("recentPressureWeight", value); }
        float recentPressureBump() const { return ReadField<float>("recentPressureBump"); }
        void SetRecentPressureBump(float value) const { WriteField<float>("recentPressureBump", value); }
        float recentPressureDecay() const { return ReadField<float>("recentPressureDecay"); }
        void SetRecentPressureDecay(float value) const { WriteField<float>("recentPressureDecay", value); }
        float opinionLerpPerPass() const { return ReadField<float>("opinionLerpPerPass"); }
        void SetOpinionLerpPerPass(float value) const { WriteField<float>("opinionLerpPerPass", value); }
        float driftAmplitude() const { return ReadField<float>("driftAmplitude"); }
        void SetDriftAmplitude(float value) const { WriteField<float>("driftAmplitude", value); }
        float shockChancePerPass() const { return ReadField<float>("shockChancePerPass"); }
        void SetShockChancePerPass(float value) const { WriteField<float>("shockChancePerPass", value); }
        float shockMagnitude() const { return ReadField<float>("shockMagnitude"); }
        void SetShockMagnitude(float value) const { WriteField<float>("shockMagnitude", value); }
        float popPowerWeight() const { return ReadField<float>("popPowerWeight"); }
        void SetPopPowerWeight(float value) const { WriteField<float>("popPowerWeight", value); }
        float tilePowerWeight() const { return ReadField<float>("tilePowerWeight"); }
        void SetTilePowerWeight(float value) const { WriteField<float>("tilePowerWeight", value); }
        float buildingPowerWeight() const { return ReadField<float>("buildingPowerWeight"); }
        void SetBuildingPowerWeight(float value) const { WriteField<float>("buildingPowerWeight", value); }
        bool enableSuccession() const { return ReadField<bool>("enableSuccession"); }
        void SetEnableSuccession(bool value) const { WriteField<bool>("enableSuccession", value); }
        int successionCheckIntervalTicks() const { return ReadField<int>("successionCheckIntervalTicks"); }
        void SetSuccessionCheckIntervalTicks(int value) const { WriteField<int>("successionCheckIntervalTicks", value); }
        float reignMinYears() const { return ReadField<float>("reignMinYears"); }
        void SetReignMinYears(float value) const { WriteField<float>("reignMinYears", value); }
        float reignMaxYears() const { return ReadField<float>("reignMaxYears"); }
        void SetReignMaxYears(float value) const { WriteField<float>("reignMaxYears", value); }
        float dynastyContinuityChance() const { return ReadField<float>("dynastyContinuityChance"); }
        void SetDynastyContinuityChance(float value) const { WriteField<float>("dynastyContinuityChance", value); }
        float coupChancePerCheck() const { return ReadField<float>("coupChancePerCheck"); }
        void SetCoupChancePerCheck(float value) const { WriteField<float>("coupChancePerCheck", value); }
        float coupHappinessThreshold() const { return ReadField<float>("coupHappinessThreshold"); }
        void SetCoupHappinessThreshold(float value) const { WriteField<float>("coupHappinessThreshold", value); }
        float coupLandLossShare() const { return ReadField<float>("coupLandLossShare"); }
        void SetCoupLandLossShare(float value) const { WriteField<float>("coupLandLossShare", value); }
        float successionUnrest() const { return ReadField<float>("successionUnrest"); }
        void SetSuccessionUnrest(float value) const { WriteField<float>("successionUnrest", value); }
        float coupUnrest() const { return ReadField<float>("coupUnrest"); }
        void SetCoupUnrest(float value) const { WriteField<float>("coupUnrest", value); }
        int epithetMinBaselineTiles() const { return ReadField<int>("epithetMinBaselineTiles"); }
        void SetEpithetMinBaselineTiles(int value) const { WriteField<int>("epithetMinBaselineTiles", value); }
        int epithetGreatMinTiles() const { return ReadField<int>("epithetGreatMinTiles"); }
        void SetEpithetGreatMinTiles(int value) const { WriteField<int>("epithetGreatMinTiles", value); }
        int epithetBankruptTicks() const { return ReadField<int>("epithetBankruptTicks"); }
        void SetEpithetBankruptTicks(int value) const { WriteField<int>("epithetBankruptTicks", value); }
        float epithetWiseMinYears() const { return ReadField<float>("epithetWiseMinYears"); }
        void SetEpithetWiseMinYears(float value) const { WriteField<float>("epithetWiseMinYears", value); }
        float epithetOldMinYears() const { return ReadField<float>("epithetOldMinYears"); }
        void SetEpithetOldMinYears(float value) const { WriteField<float>("epithetOldMinYears", value); }
        float leaderRivalryWeight() const { return ReadField<float>("leaderRivalryWeight"); }
        void SetLeaderRivalryWeight(float value) const { WriteField<float>("leaderRivalryWeight", value); }
        bool logSuccession() const { return ReadField<bool>("logSuccession"); }
        void SetLogSuccession(bool value) const { WriteField<bool>("logSuccession", value); }
        bool enableAging() const { return ReadField<bool>("enableAging"); }
        void SetEnableAging(bool value) const { WriteField<bool>("enableAging", value); }
        int ageYoungFrom() const { return ReadField<int>("ageYoungFrom"); }
        void SetAgeYoungFrom(int value) const { WriteField<int>("ageYoungFrom", value); }
        int agePrimeFrom() const { return ReadField<int>("agePrimeFrom"); }
        void SetAgePrimeFrom(int value) const { WriteField<int>("agePrimeFrom", value); }
        int ageSeasonedFrom() const { return ReadField<int>("ageSeasonedFrom"); }
        void SetAgeSeasonedFrom(int value) const { WriteField<int>("ageSeasonedFrom", value); }
        int ageElderFrom() const { return ReadField<int>("ageElderFrom"); }
        void SetAgeElderFrom(int value) const { WriteField<int>("ageElderFrom", value); }
        float lifespanMinYears() const { return ReadField<float>("lifespanMinYears"); }
        void SetLifespanMinYears(float value) const { WriteField<float>("lifespanMinYears", value); }
        float lifespanMaxYears() const { return ReadField<float>("lifespanMaxYears"); }
        void SetLifespanMaxYears(float value) const { WriteField<float>("lifespanMaxYears", value); }
        float minReignYears() const { return ReadField<float>("minReignYears"); }
        void SetMinReignYears(float value) const { WriteField<float>("minReignYears", value); }
        int accessionAgeMin() const { return ReadField<int>("accessionAgeMin"); }
        void SetAccessionAgeMin(int value) const { WriteField<int>("accessionAgeMin", value); }
        int accessionAgeMax() const { return ReadField<int>("accessionAgeMax"); }
        void SetAccessionAgeMax(int value) const { WriteField<int>("accessionAgeMax", value); }
        int heirAccessionAgeMin() const { return ReadField<int>("heirAccessionAgeMin"); }
        void SetHeirAccessionAgeMin(int value) const { WriteField<int>("heirAccessionAgeMin", value); }
        int heirAccessionAgeMax() const { return ReadField<int>("heirAccessionAgeMax"); }
        void SetHeirAccessionAgeMax(int value) const { WriteField<int>("heirAccessionAgeMax", value); }
        bool enableLeaderCreation() const { return ReadField<bool>("enableLeaderCreation"); }
        void SetEnableLeaderCreation(bool value) const { WriteField<bool>("enableLeaderCreation", value); }
        int creationMinAge() const { return ReadField<int>("creationMinAge"); }
        void SetCreationMinAge(int value) const { WriteField<int>("creationMinAge", value); }
        int creationMaxAge() const { return ReadField<int>("creationMaxAge"); }
        void SetCreationMaxAge(int value) const { WriteField<int>("creationMaxAge", value); }
        int creationBasePoints() const { return ReadField<int>("creationBasePoints"); }
        void SetCreationBasePoints(int value) const { WriteField<int>("creationBasePoints", value); }
        int creationAgePointSwing() const { return ReadField<int>("creationAgePointSwing"); }
        void SetCreationAgePointSwing(int value) const { WriteField<int>("creationAgePointSwing", value); }
        int creationAgePointStep() const { return ReadField<int>("creationAgePointStep"); }
        void SetCreationAgePointStep(int value) const { WriteField<int>("creationAgePointStep", value); }
        int creationMaxTraits() const { return ReadField<int>("creationMaxTraits"); }
        void SetCreationMaxTraits(int value) const { WriteField<int>("creationMaxTraits", value); }
        void* leaderNamePrefixes() const { return ReadField<void*>("leaderNamePrefixes"); }
        void SetLeaderNamePrefixes(void* value) const { WriteField<void*>("leaderNamePrefixes", value); }
        void* leaderNameSuffixes() const { return ReadField<void*>("leaderNameSuffixes"); }
        void SetLeaderNameSuffixes(void* value) const { WriteField<void*>("leaderNameSuffixes", value); }
        int aiEvalIntervalTicks() const { return ReadField<int>("aiEvalIntervalTicks"); }
        void SetAiEvalIntervalTicks(int value) const { WriteField<int>("aiEvalIntervalTicks", value); }
        float ambitionRateMin() const { return ReadField<float>("ambitionRateMin"); }
        void SetAmbitionRateMin(float value) const { WriteField<float>("ambitionRateMin", value); }
        float ambitionRateMax() const { return ReadField<float>("ambitionRateMax"); }
        void SetAmbitionRateMax(float value) const { WriteField<float>("ambitionRateMax", value); }
        float steerStrengthMax() const { return ReadField<float>("steerStrengthMax"); }
        void SetSteerStrengthMax(float value) const { WriteField<float>("steerStrengthMax", value); }
        int scoutRayLength() const { return ReadField<int>("scoutRayLength"); }
        void SetScoutRayLength(int value) const { WriteField<int>("scoutRayLength", value); }
        float friendAvoidPenalty() const { return ReadField<float>("friendAvoidPenalty"); }
        void SetFriendAvoidPenalty(float value) const { WriteField<float>("friendAvoidPenalty", value); }
        float friendOpinionThreshold() const { return ReadField<float>("friendOpinionThreshold"); }
        void SetFriendOpinionThreshold(float value) const { WriteField<float>("friendOpinionThreshold", value); }
        float warOpinionThreshold() const { return ReadField<float>("warOpinionThreshold"); }
        void SetWarOpinionThreshold(float value) const { WriteField<float>("warOpinionThreshold", value); }
        float warPowerRatioMin() const { return ReadField<float>("warPowerRatioMin"); }
        void SetWarPowerRatioMin(float value) const { WriteField<float>("warPowerRatioMin", value); }
        float aggressionPowerDiscount() const { return ReadField<float>("aggressionPowerDiscount"); }
        void SetAggressionPowerDiscount(float value) const { WriteField<float>("aggressionPowerDiscount", value); }
        float warRollChance() const { return ReadField<float>("warRollChance"); }
        void SetWarRollChance(float value) const { WriteField<float>("warRollChance", value); }
        float warPowerRatioFloor() const { return ReadField<float>("warPowerRatioFloor"); }
        void SetWarPowerRatioFloor(float value) const { WriteField<float>("warPowerRatioFloor", value); }
        float warCauseRatio() const { return ReadField<float>("warCauseRatio"); }
        void SetWarCauseRatio(float value) const { WriteField<float>("warCauseRatio", value); }
        float warArmyRatioMin() const { return ReadField<float>("warArmyRatioMin"); }
        void SetWarArmyRatioMin(float value) const { WriteField<float>("warArmyRatioMin", value); }
        int warEarliestTick() const { return ReadField<int>("warEarliestTick"); }
        void SetWarEarliestTick(int value) const { WriteField<int>("warEarliestTick", value); }
        float warGoodwillShield() const { return ReadField<float>("warGoodwillShield"); }
        void SetWarGoodwillShield(float value) const { WriteField<float>("warGoodwillShield", value); }
        int aiMaxConcurrentWars() const { return ReadField<int>("aiMaxConcurrentWars"); }
        void SetAiMaxConcurrentWars(int value) const { WriteField<int>("aiMaxConcurrentWars", value); }
        int aiWarDeclareCooldownTicks() const { return ReadField<int>("aiWarDeclareCooldownTicks"); }
        void SetAiWarDeclareCooldownTicks(int value) const { WriteField<int>("aiWarDeclareCooldownTicks", value); }
        int minWarDurationTicks() const { return ReadField<int>("minWarDurationTicks"); }
        void SetMinWarDurationTicks(int value) const { WriteField<int>("minWarDurationTicks", value); }
        float warWearinessPerTick() const { return ReadField<float>("warWearinessPerTick"); }
        void SetWarWearinessPerTick(float value) const { WriteField<float>("warWearinessPerTick", value); }
        float peaceThreshold() const { return ReadField<float>("peaceThreshold"); }
        void SetPeaceThreshold(float value) const { WriteField<float>("peaceThreshold", value); }
        float winStubbornness() const { return ReadField<float>("winStubbornness"); }
        void SetWinStubbornness(float value) const { WriteField<float>("winStubbornness", value); }
        int truceTicks() const { return ReadField<int>("truceTicks"); }
        void SetTruceTicks(int value) const { WriteField<int>("truceTicks", value); }
        int independenceWarSettleTicks() const { return ReadField<int>("independenceWarSettleTicks"); }
        void SetIndependenceWarSettleTicks(int value) const { WriteField<int>("independenceWarSettleTicks", value); }
        float independenceInterventionChance() const { return ReadField<float>("independenceInterventionChance"); }
        void SetIndependenceInterventionChance(float value) const { WriteField<float>("independenceInterventionChance", value); }
        int warMinDivisions() const { return ReadField<int>("warMinDivisions"); }
        void SetWarMinDivisions(int value) const { WriteField<int>("warMinDivisions", value); }
        float warMinArmyCapFraction() const { return ReadField<float>("warMinArmyCapFraction"); }
        void SetWarMinArmyCapFraction(float value) const { WriteField<float>("warMinArmyCapFraction", value); }
        float warMinReserveDivisions() const { return ReadField<float>("warMinReserveDivisions"); }
        void SetWarMinReserveDivisions(float value) const { WriteField<float>("warMinReserveDivisions", value); }
        int warMinBorderDivisions() const { return ReadField<int>("warMinBorderDivisions"); }
        void SetWarMinBorderDivisions(int value) const { WriteField<int>("warMinBorderDivisions", value); }
        float warBorderStagingRadius() const { return ReadField<float>("warBorderStagingRadius"); }
        void SetWarBorderStagingRadius(float value) const { WriteField<float>("warBorderStagingRadius", value); }
        float improveRelationsCost() const { return ReadField<float>("improveRelationsCost"); }
        void SetImproveRelationsCost(float value) const { WriteField<float>("improveRelationsCost", value); }
        float improveRelationsBoost() const { return ReadField<float>("improveRelationsBoost"); }
        void SetImproveRelationsBoost(float value) const { WriteField<float>("improveRelationsBoost", value); }
        int improveRelationsCooldownTicks() const { return ReadField<int>("improveRelationsCooldownTicks"); }
        void SetImproveRelationsCooldownTicks(int value) const { WriteField<int>("improveRelationsCooldownTicks", value); }
        float goodwillMax() const { return ReadField<float>("goodwillMax"); }
        void SetGoodwillMax(float value) const { WriteField<float>("goodwillMax", value); }
        float goodwillDecayPerPass() const { return ReadField<float>("goodwillDecayPerPass"); }
        void SetGoodwillDecayPerPass(float value) const { WriteField<float>("goodwillDecayPerPass", value); }
        float grudgeWarDeclared() const { return ReadField<float>("grudgeWarDeclared"); }
        void SetGrudgeWarDeclared(float value) const { WriteField<float>("grudgeWarDeclared", value); }
        float grudgeAllianceBroken() const { return ReadField<float>("grudgeAllianceBroken"); }
        void SetGrudgeAllianceBroken(float value) const { WriteField<float>("grudgeAllianceBroken", value); }
        float grudgePactBroken() const { return ReadField<float>("grudgePactBroken"); }
        void SetGrudgePactBroken(float value) const { WriteField<float>("grudgePactBroken", value); }
        float grudgeUltimatumAccepted() const { return ReadField<float>("grudgeUltimatumAccepted"); }
        void SetGrudgeUltimatumAccepted(float value) const { WriteField<float>("grudgeUltimatumAccepted", value); }
        float grudgeUltimatumRefused() const { return ReadField<float>("grudgeUltimatumRefused"); }
        void SetGrudgeUltimatumRefused(float value) const { WriteField<float>("grudgeUltimatumRefused", value); }
        float grudgeUltimatumDefied() const { return ReadField<float>("grudgeUltimatumDefied"); }
        void SetGrudgeUltimatumDefied(float value) const { WriteField<float>("grudgeUltimatumDefied", value); }
        float grudgePerTileCeded() const { return ReadField<float>("grudgePerTileCeded"); }
        void SetGrudgePerTileCeded(float value) const { WriteField<float>("grudgePerTileCeded", value); }
        float grudgeCarve() const { return ReadField<float>("grudgeCarve"); }
        void SetGrudgeCarve(float value) const { WriteField<float>("grudgeCarve", value); }
        float grudgeHalfLifeYears() const { return ReadField<float>("grudgeHalfLifeYears"); }
        void SetGrudgeHalfLifeYears(float value) const { WriteField<float>("grudgeHalfLifeYears", value); }
        float grudgeOpinionWeight() const { return ReadField<float>("grudgeOpinionWeight"); }
        void SetGrudgeOpinionWeight(float value) const { WriteField<float>("grudgeOpinionWeight", value); }
        float grudgeMax() const { return ReadField<float>("grudgeMax"); }
        void SetGrudgeMax(float value) const { WriteField<float>("grudgeMax", value); }
        float grudgeWarRollBoost() const { return ReadField<float>("grudgeWarRollBoost"); }
        void SetGrudgeWarRollBoost(float value) const { WriteField<float>("grudgeWarRollBoost", value); }
        float wearinessBankruptMul() const { return ReadField<float>("wearinessBankruptMul"); }
        void SetWearinessBankruptMul(float value) const { WriteField<float>("wearinessBankruptMul", value); }
        float wearinessDeficitMul() const { return ReadField<float>("wearinessDeficitMul"); }
        void SetWearinessDeficitMul(float value) const { WriteField<float>("wearinessDeficitMul", value); }
        float strainWearinessWeight() const { return ReadField<float>("strainWearinessWeight"); }
        void SetStrainWearinessWeight(float value) const { WriteField<float>("strainWearinessWeight", value); }
        float strainReplacementWeight() const { return ReadField<float>("strainReplacementWeight"); }
        void SetStrainReplacementWeight(float value) const { WriteField<float>("strainReplacementWeight", value); }
        float warDeadHalfLifeYears() const { return ReadField<float>("warDeadHalfLifeYears"); }
        void SetWarDeadHalfLifeYears(float value) const { WriteField<float>("warDeadHalfLifeYears", value); }
        float pacificationYears() const { return ReadField<float>("pacificationYears"); }
        void SetPacificationYears(float value) const { WriteField<float>("pacificationYears", value); }
        int roadFrictionRadiusTiles() const { return ReadField<int>("roadFrictionRadiusTiles"); }
        void SetRoadFrictionRadiusTiles(int value) const { WriteField<int>("roadFrictionRadiusTiles", value); }
        float roadFrictionFriendOpinion() const { return ReadField<float>("roadFrictionFriendOpinion"); }
        void SetRoadFrictionFriendOpinion(float value) const { WriteField<float>("roadFrictionFriendOpinion", value); }
        float roadFrictionSaturation() const { return ReadField<float>("roadFrictionSaturation"); }
        void SetRoadFrictionSaturation(float value) const { WriteField<float>("roadFrictionSaturation", value); }
        float roadFrictionPressureBump() const { return ReadField<float>("roadFrictionPressureBump"); }
        void SetRoadFrictionPressureBump(float value) const { WriteField<float>("roadFrictionPressureBump", value); }
        float roadFrictionBump() const { return ReadField<float>("roadFrictionBump"); }
        void SetRoadFrictionBump(float value) const { WriteField<float>("roadFrictionBump", value); }
        float infraFrictionMax() const { return ReadField<float>("infraFrictionMax"); }
        void SetInfraFrictionMax(float value) const { WriteField<float>("infraFrictionMax", value); }
        float infraFrictionHalfLifeYears() const { return ReadField<float>("infraFrictionHalfLifeYears"); }
        void SetInfraFrictionHalfLifeYears(float value) const { WriteField<float>("infraFrictionHalfLifeYears", value); }
        float pactEnemyOfEnemyWeight() const { return ReadField<float>("pactEnemyOfEnemyWeight"); }
        void SetPactEnemyOfEnemyWeight(float value) const { WriteField<float>("pactEnemyOfEnemyWeight", value); }
        float pactGrudgeWeight() const { return ReadField<float>("pactGrudgeWeight"); }
        void SetPactGrudgeWeight(float value) const { WriteField<float>("pactGrudgeWeight", value); }
        float pactProtectorPowerWeight() const { return ReadField<float>("pactProtectorPowerWeight"); }
        void SetPactProtectorPowerWeight(float value) const { WriteField<float>("pactProtectorPowerWeight", value); }
        float pactAdjacencyBonus() const { return ReadField<float>("pactAdjacencyBonus"); }
        void SetPactAdjacencyBonus(float value) const { WriteField<float>("pactAdjacencyBonus", value); }
        float allianceBufferPowerRatio() const { return ReadField<float>("allianceBufferPowerRatio"); }
        void SetAllianceBufferPowerRatio(float value) const { WriteField<float>("allianceBufferPowerRatio", value); }
        float allianceBufferBonus() const { return ReadField<float>("allianceBufferBonus"); }
        void SetAllianceBufferBonus(float value) const { WriteField<float>("allianceBufferBonus", value); }
        float ultimatumBaseChance() const { return ReadField<float>("ultimatumBaseChance"); }
        void SetUltimatumBaseChance(float value) const { WriteField<float>("ultimatumBaseChance", value); }
        float ultimatumFearPerPowerRatio() const { return ReadField<float>("ultimatumFearPerPowerRatio"); }
        void SetUltimatumFearPerPowerRatio(float value) const { WriteField<float>("ultimatumFearPerPowerRatio", value); }
        float ultimatumOpinionWeight() const { return ReadField<float>("ultimatumOpinionWeight"); }
        void SetUltimatumOpinionWeight(float value) const { WriteField<float>("ultimatumOpinionWeight", value); }
        float ultimatumAggressionWeight() const { return ReadField<float>("ultimatumAggressionWeight"); }
        void SetUltimatumAggressionWeight(float value) const { WriteField<float>("ultimatumAggressionWeight", value); }
        float ultimatumLandSeverity() const { return ReadField<float>("ultimatumLandSeverity"); }
        void SetUltimatumLandSeverity(float value) const { WriteField<float>("ultimatumLandSeverity", value); }
        float ultimatumCapitalPenalty() const { return ReadField<float>("ultimatumCapitalPenalty"); }
        void SetUltimatumCapitalPenalty(float value) const { WriteField<float>("ultimatumCapitalPenalty", value); }
        float ultimatumMoneySeverity() const { return ReadField<float>("ultimatumMoneySeverity"); }
        void SetUltimatumMoneySeverity(float value) const { WriteField<float>("ultimatumMoneySeverity", value); }
        float ultimatumFactorySeverity() const { return ReadField<float>("ultimatumFactorySeverity"); }
        void SetUltimatumFactorySeverity(float value) const { WriteField<float>("ultimatumFactorySeverity", value); }
        float ultimatumVassalageSeverity() const { return ReadField<float>("ultimatumVassalageSeverity"); }
        void SetUltimatumVassalageSeverity(float value) const { WriteField<float>("ultimatumVassalageSeverity", value); }
        float ultimatumAnnexationSeverity() const { return ReadField<float>("ultimatumAnnexationSeverity"); }
        void SetUltimatumAnnexationSeverity(float value) const { WriteField<float>("ultimatumAnnexationSeverity", value); }
        float ultimatumSubmissionFearMax() const { return ReadField<float>("ultimatumSubmissionFearMax"); }
        void SetUltimatumSubmissionFearMax(float value) const { WriteField<float>("ultimatumSubmissionFearMax", value); }
        float ultimatumSeverityPerVassal() const { return ReadField<float>("ultimatumSeverityPerVassal"); }
        void SetUltimatumSeverityPerVassal(float value) const { WriteField<float>("ultimatumSeverityPerVassal", value); }
        float ultimatumIdentityRecognisedSeverity() const { return ReadField<float>("ultimatumIdentityRecognisedSeverity"); }
        void SetUltimatumIdentityRecognisedSeverity(float value) const { WriteField<float>("ultimatumIdentityRecognisedSeverity", value); }
        float ultimatumIdentityAlienSeverity() const { return ReadField<float>("ultimatumIdentityAlienSeverity"); }
        void SetUltimatumIdentityAlienSeverity(float value) const { WriteField<float>("ultimatumIdentityAlienSeverity", value); }
        float ultimatumArmyPowerWeight() const { return ReadField<float>("ultimatumArmyPowerWeight"); }
        void SetUltimatumArmyPowerWeight(float value) const { WriteField<float>("ultimatumArmyPowerWeight", value); }
        float ultimatumBrokenArmyFloor() const { return ReadField<float>("ultimatumBrokenArmyFloor"); }
        void SetUltimatumBrokenArmyFloor(float value) const { WriteField<float>("ultimatumBrokenArmyFloor", value); }
        int ultimatumCooldownTicks() const { return ReadField<int>("ultimatumCooldownTicks"); }
        void SetUltimatumCooldownTicks(int value) const { WriteField<int>("ultimatumCooldownTicks", value); }
        float ultimatumAcceptedPenalty() const { return ReadField<float>("ultimatumAcceptedPenalty"); }
        void SetUltimatumAcceptedPenalty(float value) const { WriteField<float>("ultimatumAcceptedPenalty", value); }
        float ultimatumRefusedPenalty() const { return ReadField<float>("ultimatumRefusedPenalty"); }
        void SetUltimatumRefusedPenalty(float value) const { WriteField<float>("ultimatumRefusedPenalty", value); }
        int ultimatumAnswerDeadlineDays() const { return ReadField<int>("ultimatumAnswerDeadlineDays"); }
        void SetUltimatumAnswerDeadlineDays(int value) const { WriteField<int>("ultimatumAnswerDeadlineDays", value); }
        int maxPendingUltimatums() const { return ReadField<int>("maxPendingUltimatums"); }
        void SetMaxPendingUltimatums(int value) const { WriteField<int>("maxPendingUltimatums", value); }
        float allianceOpinionThreshold() const { return ReadField<float>("allianceOpinionThreshold"); }
        void SetAllianceOpinionThreshold(float value) const { WriteField<float>("allianceOpinionThreshold", value); }
        float allianceOpinionBonus() const { return ReadField<float>("allianceOpinionBonus"); }
        void SetAllianceOpinionBonus(float value) const { WriteField<float>("allianceOpinionBonus", value); }
        float allianceBreakOpinion() const { return ReadField<float>("allianceBreakOpinion"); }
        void SetAllianceBreakOpinion(float value) const { WriteField<float>("allianceBreakOpinion", value); }
        float allianceBrokenPenalty() const { return ReadField<float>("allianceBrokenPenalty"); }
        void SetAllianceBrokenPenalty(float value) const { WriteField<float>("allianceBrokenPenalty", value); }
        int allianceCooldownTicks() const { return ReadField<int>("allianceCooldownTicks"); }
        void SetAllianceCooldownTicks(int value) const { WriteField<int>("allianceCooldownTicks", value); }
        bool alliesJoinDefensiveWars() const { return ReadField<bool>("alliesJoinDefensiveWars"); }
        void SetAlliesJoinDefensiveWars(bool value) const { WriteField<bool>("alliesJoinDefensiveWars", value); }
        bool alliesJoinOffensiveWars() const { return ReadField<bool>("alliesJoinOffensiveWars"); }
        void SetAlliesJoinOffensiveWars(bool value) const { WriteField<bool>("alliesJoinOffensiveWars", value); }
        float offensiveJoinOpinionMax() const { return ReadField<float>("offensiveJoinOpinionMax"); }
        void SetOffensiveJoinOpinionMax(float value) const { WriteField<float>("offensiveJoinOpinionMax", value); }
        float offensiveJoinChanceBase() const { return ReadField<float>("offensiveJoinChanceBase"); }
        void SetOffensiveJoinChanceBase(float value) const { WriteField<float>("offensiveJoinChanceBase", value); }
        int allianceOfferAnswerDeadlineDays() const { return ReadField<int>("allianceOfferAnswerDeadlineDays"); }
        void SetAllianceOfferAnswerDeadlineDays(int value) const { WriteField<int>("allianceOfferAnswerDeadlineDays", value); }
        int maxPendingAllianceOffers() const { return ReadField<int>("maxPendingAllianceOffers"); }
        void SetMaxPendingAllianceOffers(int value) const { WriteField<int>("maxPendingAllianceOffers", value); }
        int callToArmsAnswerDeadlineDays() const { return ReadField<int>("callToArmsAnswerDeadlineDays"); }
        void SetCallToArmsAnswerDeadlineDays(int value) const { WriteField<int>("callToArmsAnswerDeadlineDays", value); }
        int maxPendingCallsToArms() const { return ReadField<int>("maxPendingCallsToArms"); }
        void SetMaxPendingCallsToArms(int value) const { WriteField<int>("maxPendingCallsToArms", value); }
        bool callToArmsRefusalBreaksBond() const { return ReadField<bool>("callToArmsRefusalBreaksBond"); }
        void SetCallToArmsRefusalBreaksBond(bool value) const { WriteField<bool>("callToArmsRefusalBreaksBond", value); }
        int petitionAnswerDeadlineDays() const { return ReadField<int>("petitionAnswerDeadlineDays"); }
        void SetPetitionAnswerDeadlineDays(int value) const { WriteField<int>("petitionAnswerDeadlineDays", value); }
        int maxPendingPeoplePetitions() const { return ReadField<int>("maxPendingPeoplePetitions"); }
        void SetMaxPendingPeoplePetitions(int value) const { WriteField<int>("maxPendingPeoplePetitions", value); }
        bool enableCapitulation() const { return ReadField<bool>("enableCapitulation"); }
        void SetEnableCapitulation(bool value) const { WriteField<bool>("enableCapitulation", value); }
        float capitulationLandRatio() const { return ReadField<float>("capitulationLandRatio"); }
        void SetCapitulationLandRatio(float value) const { WriteField<float>("capitulationLandRatio", value); }
        int capitulationMinSnapshotTiles() const { return ReadField<int>("capitulationMinSnapshotTiles"); }
        void SetCapitulationMinSnapshotTiles(int value) const { WriteField<int>("capitulationMinSnapshotTiles", value); }
        bool capitulateOnCapitalLoss() const { return ReadField<bool>("capitulateOnCapitalLoss"); }
        void SetCapitulateOnCapitalLoss(bool value) const { WriteField<bool>("capitulateOnCapitalLoss", value); }
        int rebelCapitulationGraceTicks() const { return ReadField<int>("rebelCapitulationGraceTicks"); }
        void SetRebelCapitulationGraceTicks(int value) const { WriteField<int>("rebelCapitulationGraceTicks", value); }
        int capitulationCheckIntervalTicks() const { return ReadField<int>("capitulationCheckIntervalTicks"); }
        void SetCapitulationCheckIntervalTicks(int value) const { WriteField<int>("capitulationCheckIntervalTicks", value); }
        int capitulationMinWarTicks() const { return ReadField<int>("capitulationMinWarTicks"); }
        void SetCapitulationMinWarTicks(int value) const { WriteField<int>("capitulationMinWarTicks", value); }
        float capitulationCedeFraction() const { return ReadField<float>("capitulationCedeFraction"); }
        void SetCapitulationCedeFraction(float value) const { WriteField<float>("capitulationCedeFraction", value); }
        int capitulationMinRemainingTiles() const { return ReadField<int>("capitulationMinRemainingTiles"); }
        void SetCapitulationMinRemainingTiles(int value) const { WriteField<int>("capitulationMinRemainingTiles", value); }
        int economicCollapseTicks() const { return ReadField<int>("economicCollapseTicks"); }
        void SetEconomicCollapseTicks(int value) const { WriteField<int>("economicCollapseTicks", value); }
        int capitulationBrokenTicks() const { return ReadField<int>("capitulationBrokenTicks"); }
        void SetCapitulationBrokenTicks(int value) const { WriteField<int>("capitulationBrokenTicks", value); }
        float capitulationHoldRadiusTiles() const { return ReadField<float>("capitulationHoldRadiusTiles"); }
        void SetCapitulationHoldRadiusTiles(float value) const { WriteField<float>("capitulationHoldRadiusTiles", value); }
        float capitulationStoresSeized() const { return ReadField<float>("capitulationStoresSeized"); }
        void SetCapitulationStoresSeized(float value) const { WriteField<float>("capitulationStoresSeized", value); }
        bool peaceConferenceOnLoss() const { return ReadField<bool>("peaceConferenceOnLoss"); }
        void SetPeaceConferenceOnLoss(bool value) const { WriteField<bool>("peaceConferenceOnLoss", value); }
        int peaceOfferLapseTicks() const { return ReadField<int>("peaceOfferLapseTicks"); }
        void SetPeaceOfferLapseTicks(int value) const { WriteField<int>("peaceOfferLapseTicks", value); }
        bool peaceSandboxNoLimits() const { return ReadField<bool>("peaceSandboxNoLimits"); }
        void SetPeaceSandboxNoLimits(bool value) const { WriteField<bool>("peaceSandboxNoLimits", value); }
        float peaceMaxPopulationFraction() const { return ReadField<float>("peaceMaxPopulationFraction"); }
        void SetPeaceMaxPopulationFraction(float value) const { WriteField<float>("peaceMaxPopulationFraction", value); }
        float peaceDemandGreedBase() const { return ReadField<float>("peaceDemandGreedBase"); }
        void SetPeaceDemandGreedBase(float value) const { WriteField<float>("peaceDemandGreedBase", value); }
        float peaceDemandGreedPerAggression() const { return ReadField<float>("peaceDemandGreedPerAggression"); }
        void SetPeaceDemandGreedPerAggression(float value) const { WriteField<float>("peaceDemandGreedPerAggression", value); }
        float peaceCarveVassalValue() const { return ReadField<float>("peaceCarveVassalValue"); }
        void SetPeaceCarveVassalValue(float value) const { WriteField<float>("peaceCarveVassalValue", value); }
        float peaceCarveFreedValue() const { return ReadField<float>("peaceCarveFreedValue"); }
        void SetPeaceCarveFreedValue(float value) const { WriteField<float>("peaceCarveFreedValue", value); }
        float peaceVassalizeValueFactor() const { return ReadField<float>("peaceVassalizeValueFactor"); }
        void SetPeaceVassalizeValueFactor(float value) const { WriteField<float>("peaceVassalizeValueFactor", value); }
        float peacePopulationValuePerPercent() const { return ReadField<float>("peacePopulationValuePerPercent"); }
        void SetPeacePopulationValuePerPercent(float value) const { WriteField<float>("peacePopulationValuePerPercent", value); }
        float peaceFreeVassalsValue() const { return ReadField<float>("peaceFreeVassalsValue"); }
        void SetPeaceFreeVassalsValue(float value) const { WriteField<float>("peaceFreeVassalsValue", value); }
        float peaceBreakAlliancesValue() const { return ReadField<float>("peaceBreakAlliancesValue"); }
        void SetPeaceBreakAlliancesValue(float value) const { WriteField<float>("peaceBreakAlliancesValue", value); }
        float peaceSettlePriceBase() const { return ReadField<float>("peaceSettlePriceBase"); }
        void SetPeaceSettlePriceBase(float value) const { WriteField<float>("peaceSettlePriceBase", value); }
        float peaceSettleOpinionDiscount() const { return ReadField<float>("peaceSettleOpinionDiscount"); }
        void SetPeaceSettleOpinionDiscount(float value) const { WriteField<float>("peaceSettleOpinionDiscount", value); }
        float peaceSettleAggressionSurcharge() const { return ReadField<float>("peaceSettleAggressionSurcharge"); }
        void SetPeaceSettleAggressionSurcharge(float value) const { WriteField<float>("peaceSettleAggressionSurcharge", value); }
        float peaceSettleDominanceSurcharge() const { return ReadField<float>("peaceSettleDominanceSurcharge"); }
        void SetPeaceSettleDominanceSurcharge(float value) const { WriteField<float>("peaceSettleDominanceSurcharge", value); }
        float peaceSettlePriceMin() const { return ReadField<float>("peaceSettlePriceMin"); }
        void SetPeaceSettlePriceMin(float value) const { WriteField<float>("peaceSettlePriceMin", value); }
        float peaceSettlePriceMax() const { return ReadField<float>("peaceSettlePriceMax"); }
        void SetPeaceSettlePriceMax(float value) const { WriteField<float>("peaceSettlePriceMax", value); }
        float peaceDominanceScoreNorm() const { return ReadField<float>("peaceDominanceScoreNorm"); }
        void SetPeaceDominanceScoreNorm(float value) const { WriteField<float>("peaceDominanceScoreNorm", value); }
        float peaceSueConcessionReach() const { return ReadField<float>("peaceSueConcessionReach"); }
        void SetPeaceSueConcessionReach(float value) const { WriteField<float>("peaceSueConcessionReach", value); }
        float peaceSuitorLeniency() const { return ReadField<float>("peaceSuitorLeniency"); }
        void SetPeaceSuitorLeniency(float value) const { WriteField<float>("peaceSuitorLeniency", value); }
        float peaceAnnexReachBase() const { return ReadField<float>("peaceAnnexReachBase"); }
        void SetPeaceAnnexReachBase(float value) const { WriteField<float>("peaceAnnexReachBase", value); }
        float peaceAnnexReachPerSize() const { return ReadField<float>("peaceAnnexReachPerSize"); }
        void SetPeaceAnnexReachPerSize(float value) const { WriteField<float>("peaceAnnexReachPerSize", value); }
        float peaceVassalReachBase() const { return ReadField<float>("peaceVassalReachBase"); }
        void SetPeaceVassalReachBase(float value) const { WriteField<float>("peaceVassalReachBase", value); }
        float peaceVassalReachPerSize() const { return ReadField<float>("peaceVassalReachPerSize"); }
        void SetPeaceVassalReachPerSize(float value) const { WriteField<float>("peaceVassalReachPerSize", value); }
        float peaceCoalitionMaxReach() const { return ReadField<float>("peaceCoalitionMaxReach"); }
        void SetPeaceCoalitionMaxReach(float value) const { WriteField<float>("peaceCoalitionMaxReach", value); }
        float peaceCoalitionFullRatio() const { return ReadField<float>("peaceCoalitionFullRatio"); }
        void SetPeaceCoalitionFullRatio(float value) const { WriteField<float>("peaceCoalitionFullRatio", value); }
        float peaceCosignerMinShare() const { return ReadField<float>("peaceCosignerMinShare"); }
        void SetPeaceCosignerMinShare(float value) const { WriteField<float>("peaceCosignerMinShare", value); }
        int peaceAiSueCooldownTicks() const { return ReadField<int>("peaceAiSueCooldownTicks"); }
        void SetPeaceAiSueCooldownTicks(int value) const { WriteField<int>("peaceAiSueCooldownTicks", value); }
        int peacePlayerRedraftTicks() const { return ReadField<int>("peacePlayerRedraftTicks"); }
        void SetPeacePlayerRedraftTicks(int value) const { WriteField<int>("peacePlayerRedraftTicks", value); }
        float vassalTributeDefault() const { return ReadField<float>("vassalTributeDefault"); }
        void SetVassalTributeDefault(float value) const { WriteField<float>("vassalTributeDefault", value); }
        float vassalTributeMax() const { return ReadField<float>("vassalTributeMax"); }
        void SetVassalTributeMax(float value) const { WriteField<float>("vassalTributeMax", value); }
        float vassalTributeHappinessFactor() const { return ReadField<float>("vassalTributeHappinessFactor"); }
        void SetVassalTributeHappinessFactor(float value) const { WriteField<float>("vassalTributeHappinessFactor", value); }
        float vassalReleasedGratitude() const { return ReadField<float>("vassalReleasedGratitude"); }
        void SetVassalReleasedGratitude(float value) const { WriteField<float>("vassalReleasedGratitude", value); }
        float vassalIndependenceBaseChance() const { return ReadField<float>("vassalIndependenceBaseChance"); }
        void SetVassalIndependenceBaseChance(float value) const { WriteField<float>("vassalIndependenceBaseChance", value); }
        float vassalIndependenceOpinionWeight() const { return ReadField<float>("vassalIndependenceOpinionWeight"); }
        void SetVassalIndependenceOpinionWeight(float value) const { WriteField<float>("vassalIndependenceOpinionWeight", value); }
        float vassalTintStrength() const { return ReadField<float>("vassalTintStrength"); }
        void SetVassalTintStrength(float value) const { WriteField<float>("vassalTintStrength", value); }
        float vassalTintVariation() const { return ReadField<float>("vassalTintVariation"); }
        void SetVassalTintVariation(float value) const { WriteField<float>("vassalTintVariation", value); }
        int vassalReleaseMinTiles() const { return ReadField<int>("vassalReleaseMinTiles"); }
        void SetVassalReleaseMinTiles(int value) const { WriteField<int>("vassalReleaseMinTiles", value); }
        bool enableTrade() const { return ReadField<bool>("enableTrade"); }
        void SetEnableTrade(bool value) const { WriteField<bool>("enableTrade", value); }
        int tradeLinkIntervalTicks() const { return ReadField<int>("tradeLinkIntervalTicks"); }
        void SetTradeLinkIntervalTicks(int value) const { WriteField<int>("tradeLinkIntervalTicks", value); }
        int tradeBorderRadius() const { return ReadField<int>("tradeBorderRadius"); }
        void SetTradeBorderRadius(int value) const { WriteField<int>("tradeBorderRadius", value); }
        int tradeSampleStride() const { return ReadField<int>("tradeSampleStride"); }
        void SetTradeSampleStride(int value) const { WriteField<int>("tradeSampleStride", value); }
        float tradeLinkCrossWeight() const { return ReadField<float>("tradeLinkCrossWeight"); }
        void SetTradeLinkCrossWeight(float value) const { WriteField<float>("tradeLinkCrossWeight", value); }
        float tradeLinkNearWeight() const { return ReadField<float>("tradeLinkNearWeight"); }
        void SetTradeLinkNearWeight(float value) const { WriteField<float>("tradeLinkNearWeight", value); }
        float tradeLinkMax() const { return ReadField<float>("tradeLinkMax"); }
        void SetTradeLinkMax(float value) const { WriteField<float>("tradeLinkMax", value); }
        float tradeLinkFull() const { return ReadField<float>("tradeLinkFull"); }
        void SetTradeLinkFull(float value) const { WriteField<float>("tradeLinkFull", value); }
        float tradeVolumeScale() const { return ReadField<float>("tradeVolumeScale"); }
        void SetTradeVolumeScale(float value) const { WriteField<float>("tradeVolumeScale", value); }
        float tradeOpinionWeight() const { return ReadField<float>("tradeOpinionWeight"); }
        void SetTradeOpinionWeight(float value) const { WriteField<float>("tradeOpinionWeight", value); }
        float tradeTaxMin() const { return ReadField<float>("tradeTaxMin"); }
        void SetTradeTaxMin(float value) const { WriteField<float>("tradeTaxMin", value); }
        float tradeTaxMax() const { return ReadField<float>("tradeTaxMax"); }
        void SetTradeTaxMax(float value) const { WriteField<float>("tradeTaxMax", value); }
        float tradeGrowthFactor() const { return ReadField<float>("tradeGrowthFactor"); }
        void SetTradeGrowthFactor(float value) const { WriteField<float>("tradeGrowthFactor", value); }
        float tradeCapacityFactor() const { return ReadField<float>("tradeCapacityFactor"); }
        void SetTradeCapacityFactor(float value) const { WriteField<float>("tradeCapacityFactor", value); }
        float tradeOpennessNorm() const { return ReadField<float>("tradeOpennessNorm"); }
        void SetTradeOpennessNorm(float value) const { WriteField<float>("tradeOpennessNorm", value); }
        bool enableTradeIdentityErosion() const { return ReadField<bool>("enableTradeIdentityErosion"); }
        void SetEnableTradeIdentityErosion(bool value) const { WriteField<bool>("enableTradeIdentityErosion", value); }
        int tradeIdentityIntervalTicks() const { return ReadField<int>("tradeIdentityIntervalTicks"); }
        void SetTradeIdentityIntervalTicks(int value) const { WriteField<int>("tradeIdentityIntervalTicks", value); }
        float tradeIdentityPerVolume() const { return ReadField<float>("tradeIdentityPerVolume"); }
        void SetTradeIdentityPerVolume(float value) const { WriteField<float>("tradeIdentityPerVolume", value); }
        int tradeIdentityMaxPerPass() const { return ReadField<int>("tradeIdentityMaxPerPass"); }
        void SetTradeIdentityMaxPerPass(int value) const { WriteField<int>("tradeIdentityMaxPerPass", value); }
        int tradeIdentityRadius() const { return ReadField<int>("tradeIdentityRadius"); }
        void SetTradeIdentityRadius(int value) const { WriteField<int>("tradeIdentityRadius", value); }
        float tradeIdentityEthnicityScale() const { return ReadField<float>("tradeIdentityEthnicityScale"); }
        void SetTradeIdentityEthnicityScale(float value) const { WriteField<float>("tradeIdentityEthnicityScale", value); }
        float tradeIdentityReligionScale() const { return ReadField<float>("tradeIdentityReligionScale"); }
        void SetTradeIdentityReligionScale(float value) const { WriteField<float>("tradeIdentityReligionScale", value); }
        float tradeIdentityAlphabetScale() const { return ReadField<float>("tradeIdentityAlphabetScale"); }
        void SetTradeIdentityAlphabetScale(float value) const { WriteField<float>("tradeIdentityAlphabetScale", value); }
        bool enableAiRoadBuilding() const { return ReadField<bool>("enableAiRoadBuilding"); }
        void SetEnableAiRoadBuilding(bool value) const { WriteField<bool>("enableAiRoadBuilding", value); }
        float aiRoadBuildChance() const { return ReadField<float>("aiRoadBuildChance"); }
        void SetAiRoadBuildChance(float value) const { WriteField<float>("aiRoadBuildChance", value); }
        int aiRoadCooldownTicks() const { return ReadField<int>("aiRoadCooldownTicks"); }
        void SetAiRoadCooldownTicks(int value) const { WriteField<int>("aiRoadCooldownTicks", value); }
        int aiRoadRetryTicks() const { return ReadField<int>("aiRoadRetryTicks"); }
        void SetAiRoadRetryTicks(int value) const { WriteField<int>("aiRoadRetryTicks", value); }
        int aiRoadMaxSearchesPerTick() const { return ReadField<int>("aiRoadMaxSearchesPerTick"); }
        void SetAiRoadMaxSearchesPerTick(int value) const { WriteField<int>("aiRoadMaxSearchesPerTick", value); }
        int aiRoadDelegatedCooldownTicks() const { return ReadField<int>("aiRoadDelegatedCooldownTicks"); }
        void SetAiRoadDelegatedCooldownTicks(int value) const { WriteField<int>("aiRoadDelegatedCooldownTicks", value); }
        int aiRoadPairRetryTicks() const { return ReadField<int>("aiRoadPairRetryTicks"); }
        void SetAiRoadPairRetryTicks(int value) const { WriteField<int>("aiRoadPairRetryTicks", value); }
        float aiRoadOwnLandShare() const { return ReadField<float>("aiRoadOwnLandShare"); }
        void SetAiRoadOwnLandShare(float value) const { WriteField<float>("aiRoadOwnLandShare", value); }
        float aiRoadTreasuryFloor() const { return ReadField<float>("aiRoadTreasuryFloor"); }
        void SetAiRoadTreasuryFloor(float value) const { WriteField<float>("aiRoadTreasuryFloor", value); }
        float aiRoadMaxLength() const { return ReadField<float>("aiRoadMaxLength"); }
        void SetAiRoadMaxLength(float value) const { WriteField<float>("aiRoadMaxLength", value); }
        float aiRoadMinOpinion() const { return ReadField<float>("aiRoadMinOpinion"); }
        void SetAiRoadMinOpinion(float value) const { WriteField<float>("aiRoadMinOpinion", value); }
        int aiRoadMaxTotal() const { return ReadField<int>("aiRoadMaxTotal"); }
        void SetAiRoadMaxTotal(int value) const { WriteField<int>("aiRoadMaxTotal", value); }
        float aiTradeRoadsPerCity() const { return ReadField<float>("aiTradeRoadsPerCity"); }
        void SetAiTradeRoadsPerCity(float value) const { WriteField<float>("aiTradeRoadsPerCity", value); }
        int aiDomesticRoadMax() const { return ReadField<int>("aiDomesticRoadMax"); }
        void SetAiDomesticRoadMax(int value) const { WriteField<int>("aiDomesticRoadMax", value); }
        float aiDomesticRoadsPerCity() const { return ReadField<float>("aiDomesticRoadsPerCity"); }
        void SetAiDomesticRoadsPerCity(float value) const { WriteField<float>("aiDomesticRoadsPerCity", value); }
        int aiRoadDomesticSamples() const { return ReadField<int>("aiRoadDomesticSamples"); }
        void SetAiRoadDomesticSamples(int value) const { WriteField<int>("aiRoadDomesticSamples", value); }
        float aiTradeRoadShare() const { return ReadField<float>("aiTradeRoadShare"); }
        void SetAiTradeRoadShare(float value) const { WriteField<float>("aiTradeRoadShare", value); }
        int aiRoadMaxConcurrent() const { return ReadField<int>("aiRoadMaxConcurrent"); }
        void SetAiRoadMaxConcurrent(int value) const { WriteField<int>("aiRoadMaxConcurrent", value); }
        float aiRoadUpgradeShare() const { return ReadField<float>("aiRoadUpgradeShare"); }
        void SetAiRoadUpgradeShare(float value) const { WriteField<float>("aiRoadUpgradeShare", value); }
        float pactOpinionBonus() const { return ReadField<float>("pactOpinionBonus"); }
        void SetPactOpinionBonus(float value) const { WriteField<float>("pactOpinionBonus", value); }
        float pactBreakOpinion() const { return ReadField<float>("pactBreakOpinion"); }
        void SetPactBreakOpinion(float value) const { WriteField<float>("pactBreakOpinion", value); }
        float pactBrokenPenalty() const { return ReadField<float>("pactBrokenPenalty"); }
        void SetPactBrokenPenalty(float value) const { WriteField<float>("pactBrokenPenalty", value); }
        bool enableTradeDeals() const { return ReadField<bool>("enableTradeDeals"); }
        void SetEnableTradeDeals(bool value) const { WriteField<bool>("enableTradeDeals", value); }
        int tradeDealCooldownTicks() const { return ReadField<int>("tradeDealCooldownTicks"); }
        void SetTradeDealCooldownTicks(int value) const { WriteField<int>("tradeDealCooldownTicks", value); }
        float dealBaseChance() const { return ReadField<float>("dealBaseChance"); }
        void SetDealBaseChance(float value) const { WriteField<float>("dealBaseChance", value); }
        float dealValueNorm() const { return ReadField<float>("dealValueNorm"); }
        void SetDealValueNorm(float value) const { WriteField<float>("dealValueNorm", value); }
        float dealValueNormScaleShare() const { return ReadField<float>("dealValueNormScaleShare"); }
        void SetDealValueNormScaleShare(float value) const { WriteField<float>("dealValueNormScaleShare", value); }
        float dealOpinionWeight() const { return ReadField<float>("dealOpinionWeight"); }
        void SetDealOpinionWeight(float value) const { WriteField<float>("dealOpinionWeight", value); }
        float dealAggressionWeight() const { return ReadField<float>("dealAggressionWeight"); }
        void SetDealAggressionWeight(float value) const { WriteField<float>("dealAggressionWeight", value); }
        float dealRiskFactor() const { return ReadField<float>("dealRiskFactor"); }
        void SetDealRiskFactor(float value) const { WriteField<float>("dealRiskFactor", value); }
        float dealRefusalDepth() const { return ReadField<float>("dealRefusalDepth"); }
        void SetDealRefusalDepth(float value) const { WriteField<float>("dealRefusalDepth", value); }
        float dealLandValuePerTile() const { return ReadField<float>("dealLandValuePerTile"); }
        void SetDealLandValuePerTile(float value) const { WriteField<float>("dealLandValuePerTile", value); }
        float dealLandPaybackTicks() const { return ReadField<float>("dealLandPaybackTicks"); }
        void SetDealLandPaybackTicks(float value) const { WriteField<float>("dealLandPaybackTicks", value); }
        float dealLandScarcityWeight() const { return ReadField<float>("dealLandScarcityWeight"); }
        void SetDealLandScarcityWeight(float value) const { WriteField<float>("dealLandScarcityWeight", value); }
        float dealLandScarcityFloor() const { return ReadField<float>("dealLandScarcityFloor"); }
        void SetDealLandScarcityFloor(float value) const { WriteField<float>("dealLandScarcityFloor", value); }
        float dealLandHeartlandMul() const { return ReadField<float>("dealLandHeartlandMul"); }
        void SetDealLandHeartlandMul(float value) const { WriteField<float>("dealLandHeartlandMul", value); }
        float dealLandMemoryHalfLifeYears() const { return ReadField<float>("dealLandMemoryHalfLifeYears"); }
        void SetDealLandMemoryHalfLifeYears(float value) const { WriteField<float>("dealLandMemoryHalfLifeYears", value); }
        float dealCapitalValue() const { return ReadField<float>("dealCapitalValue"); }
        void SetDealCapitalValue(float value) const { WriteField<float>("dealCapitalValue", value); }
        float dealCapitalTiles() const { return ReadField<float>("dealCapitalTiles"); }
        void SetDealCapitalTiles(float value) const { WriteField<float>("dealCapitalTiles", value); }
        float dealGoldValueExponent() const { return ReadField<float>("dealGoldValueExponent"); }
        void SetDealGoldValueExponent(float value) const { WriteField<float>("dealGoldValueExponent", value); }
        float dealGoldMemoryHalfLifeYears() const { return ReadField<float>("dealGoldMemoryHalfLifeYears"); }
        void SetDealGoldMemoryHalfLifeYears(float value) const { WriteField<float>("dealGoldMemoryHalfLifeYears", value); }
        float dealGoldScaleBase() const { return ReadField<float>("dealGoldScaleBase"); }
        void SetDealGoldScaleBase(float value) const { WriteField<float>("dealGoldScaleBase", value); }
        float dealGoldScaleIncomeFactor() const { return ReadField<float>("dealGoldScaleIncomeFactor"); }
        void SetDealGoldScaleIncomeFactor(float value) const { WriteField<float>("dealGoldScaleIncomeFactor", value); }
        float dealGoldStrainWeight() const { return ReadField<float>("dealGoldStrainWeight"); }
        void SetDealGoldStrainWeight(float value) const { WriteField<float>("dealGoldStrainWeight", value); }
        float dealFactoryValue() const { return ReadField<float>("dealFactoryValue"); }
        void SetDealFactoryValue(float value) const { WriteField<float>("dealFactoryValue", value); }
        float dealFactoryValueMul() const { return ReadField<float>("dealFactoryValueMul"); }
        void SetDealFactoryValueMul(float value) const { WriteField<float>("dealFactoryValueMul", value); }
        float dealDivisionValue() const { return ReadField<float>("dealDivisionValue"); }
        void SetDealDivisionValue(float value) const { WriteField<float>("dealDivisionValue", value); }
        float dealDivisionValueMul() const { return ReadField<float>("dealDivisionValueMul"); }
        void SetDealDivisionValueMul(float value) const { WriteField<float>("dealDivisionValueMul", value); }
        float dealArmyScarcityWeight() const { return ReadField<float>("dealArmyScarcityWeight"); }
        void SetDealArmyScarcityWeight(float value) const { WriteField<float>("dealArmyScarcityWeight", value); }
        float dealArmyScarcityFloor() const { return ReadField<float>("dealArmyScarcityFloor"); }
        void SetDealArmyScarcityFloor(float value) const { WriteField<float>("dealArmyScarcityFloor", value); }
        float dealAnnexationPremium() const { return ReadField<float>("dealAnnexationPremium"); }
        void SetDealAnnexationPremium(float value) const { WriteField<float>("dealAnnexationPremium", value); }
        float dealAllianceValue() const { return ReadField<float>("dealAllianceValue"); }
        void SetDealAllianceValue(float value) const { WriteField<float>("dealAllianceValue", value); }
        float dealPactValue() const { return ReadField<float>("dealPactValue"); }
        void SetDealPactValue(float value) const { WriteField<float>("dealPactValue", value); }
        float dealWarCost() const { return ReadField<float>("dealWarCost"); }
        void SetDealWarCost(float value) const { WriteField<float>("dealWarCost", value); }
        float dealWarValue() const { return ReadField<float>("dealWarValue"); }
        void SetDealWarValue(float value) const { WriteField<float>("dealWarValue", value); }
        bool enableAiTradeDeals() const { return ReadField<bool>("enableAiTradeDeals"); }
        void SetEnableAiTradeDeals(bool value) const { WriteField<bool>("enableAiTradeDeals", value); }
        float aiDealChance() const { return ReadField<float>("aiDealChance"); }
        void SetAiDealChance(float value) const { WriteField<float>("aiDealChance", value); }
        float aiDealAcceptThreshold() const { return ReadField<float>("aiDealAcceptThreshold"); }
        void SetAiDealAcceptThreshold(float value) const { WriteField<float>("aiDealAcceptThreshold", value); }
        int tradeOfferLifetimeTicks() const { return ReadField<int>("tradeOfferLifetimeTicks"); }
        void SetTradeOfferLifetimeTicks(int value) const { WriteField<int>("tradeOfferLifetimeTicks", value); }
        int maxPendingTradeOffers() const { return ReadField<int>("maxPendingTradeOffers"); }
        void SetMaxPendingTradeOffers(int value) const { WriteField<int>("maxPendingTradeOffers", value); }
        float aiSellTreasuryTicks() const { return ReadField<float>("aiSellTreasuryTicks"); }
        void SetAiSellTreasuryTicks(float value) const { WriteField<float>("aiSellTreasuryTicks", value); }
        float aiSellDiscount() const { return ReadField<float>("aiSellDiscount"); }
        void SetAiSellDiscount(float value) const { WriteField<float>("aiSellDiscount", value); }
        int aiSellLandMaxTiles() const { return ReadField<int>("aiSellLandMaxTiles"); }
        void SetAiSellLandMaxTiles(int value) const { WriteField<int>("aiSellLandMaxTiles", value); }
        int aiSellLandMinStatesKept() const { return ReadField<int>("aiSellLandMinStatesKept"); }
        void SetAiSellLandMinStatesKept(int value) const { WriteField<int>("aiSellLandMinStatesKept", value); }
        float aiSellLandMaxSold() const { return ReadField<float>("aiSellLandMaxSold"); }
        void SetAiSellLandMaxSold(float value) const { WriteField<float>("aiSellLandMaxSold", value); }
        bool enableUnions() const { return ReadField<bool>("enableUnions"); }
        void SetEnableUnions(bool value) const { WriteField<bool>("enableUnions", value); }
        int unionOfferCooldownTicks() const { return ReadField<int>("unionOfferCooldownTicks"); }
        void SetUnionOfferCooldownTicks(int value) const { WriteField<int>("unionOfferCooldownTicks", value); }
        float unionBaseChance() const { return ReadField<float>("unionBaseChance"); }
        void SetUnionBaseChance(float value) const { WriteField<float>("unionBaseChance", value); }
        float unionOpinionWeight() const { return ReadField<float>("unionOpinionWeight"); }
        void SetUnionOpinionWeight(float value) const { WriteField<float>("unionOpinionWeight", value); }
        float unionPowerWeight() const { return ReadField<float>("unionPowerWeight"); }
        void SetUnionPowerWeight(float value) const { WriteField<float>("unionPowerWeight", value); }
        float unionAggressionWeight() const { return ReadField<float>("unionAggressionWeight"); }
        void SetUnionAggressionWeight(float value) const { WriteField<float>("unionAggressionWeight", value); }
        float unionCostComplete() const { return ReadField<float>("unionCostComplete"); }
        void SetUnionCostComplete(float value) const { WriteField<float>("unionCostComplete", value); }
        float unionCostExternal() const { return ReadField<float>("unionCostExternal"); }
        void SetUnionCostExternal(float value) const { WriteField<float>("unionCostExternal", value); }
        float unionCostStates() const { return ReadField<float>("unionCostStates"); }
        void SetUnionCostStates(float value) const { WriteField<float>("unionCostStates", value); }
        float unionCrowdedPenaltyPerMember() const { return ReadField<float>("unionCrowdedPenaltyPerMember"); }
        void SetUnionCrowdedPenaltyPerMember(float value) const { WriteField<float>("unionCrowdedPenaltyPerMember", value); }
        int unionMaxMembers() const { return ReadField<int>("unionMaxMembers"); }
        void SetUnionMaxMembers(int value) const { WriteField<int>("unionMaxMembers", value); }
        bool enableAiUnions() const { return ReadField<bool>("enableAiUnions"); }
        void SetEnableAiUnions(bool value) const { WriteField<bool>("enableAiUnions", value); }
        float aiUnionChance() const { return ReadField<float>("aiUnionChance"); }
        void SetAiUnionChance(float value) const { WriteField<float>("aiUnionChance", value); }
        float aiUnionAcceptThreshold() const { return ReadField<float>("aiUnionAcceptThreshold"); }
        void SetAiUnionAcceptThreshold(float value) const { WriteField<float>("aiUnionAcceptThreshold", value); }
        float aiUnionMinOpinion() const { return ReadField<float>("aiUnionMinOpinion"); }
        void SetAiUnionMinOpinion(float value) const { WriteField<float>("aiUnionMinOpinion", value); }
        int aiUnionMinBorderContacts() const { return ReadField<int>("aiUnionMinBorderContacts"); }
        void SetAiUnionMinBorderContacts(int value) const { WriteField<int>("aiUnionMinBorderContacts", value); }
        float aiUnionMaxPowerRatio() const { return ReadField<float>("aiUnionMaxPowerRatio"); }
        void SetAiUnionMaxPowerRatio(float value) const { WriteField<float>("aiUnionMaxPowerRatio", value); }
        float unionHueShift() const { return ReadField<float>("unionHueShift"); }
        void SetUnionHueShift(float value) const { WriteField<float>("unionHueShift", value); }
        int unionMinAgeToLeaveTicks() const { return ReadField<int>("unionMinAgeToLeaveTicks"); }
        void SetUnionMinAgeToLeaveTicks(int value) const { WriteField<int>("unionMinAgeToLeaveTicks", value); }
        int unionSecessionCheckTicks() const { return ReadField<int>("unionSecessionCheckTicks"); }
        void SetUnionSecessionCheckTicks(int value) const { WriteField<int>("unionSecessionCheckTicks", value); }
        float unionRestlessOpinionMargin() const { return ReadField<float>("unionRestlessOpinionMargin"); }
        void SetUnionRestlessOpinionMargin(float value) const { WriteField<float>("unionRestlessOpinionMargin", value); }
        float unionRestlessHappinessMargin() const { return ReadField<float>("unionRestlessHappinessMargin"); }
        void SetUnionRestlessHappinessMargin(float value) const { WriteField<float>("unionRestlessHappinessMargin", value); }
        float unionSecessionHappiness() const { return ReadField<float>("unionSecessionHappiness"); }
        void SetUnionSecessionHappiness(float value) const { WriteField<float>("unionSecessionHappiness", value); }
        float unionSecessionOpinion() const { return ReadField<float>("unionSecessionOpinion"); }
        void SetUnionSecessionOpinion(float value) const { WriteField<float>("unionSecessionOpinion", value); }
        float unionStateTilesPerState() const { return ReadField<float>("unionStateTilesPerState"); }
        void SetUnionStateTilesPerState(float value) const { WriteField<float>("unionStateTilesPerState", value); }
        int unionStateMaxStates() const { return ReadField<int>("unionStateMaxStates"); }
        void SetUnionStateMaxStates(int value) const { WriteField<int>("unionStateMaxStates", value); }
        int unionStateMinTiles() const { return ReadField<int>("unionStateMinTiles"); }
        void SetUnionStateMinTiles(int value) const { WriteField<int>("unionStateMinTiles", value); }
        int unionStateGarrison() const { return ReadField<int>("unionStateGarrison"); }
        void SetUnionStateGarrison(int value) const { WriteField<int>("unionStateGarrison", value); }
        int unionExternalGarrison() const { return ReadField<int>("unionExternalGarrison"); }
        void SetUnionExternalGarrison(int value) const { WriteField<int>("unionExternalGarrison", value); }
        float unionSubsidyCostBase() const { return ReadField<float>("unionSubsidyCostBase"); }
        void SetUnionSubsidyCostBase(float value) const { WriteField<float>("unionSubsidyCostBase", value); }
        float unionSubsidyCostPerTile() const { return ReadField<float>("unionSubsidyCostPerTile"); }
        void SetUnionSubsidyCostPerTile(float value) const { WriteField<float>("unionSubsidyCostPerTile", value); }
        float unionSubsidyGoodwill() const { return ReadField<float>("unionSubsidyGoodwill"); }
        void SetUnionSubsidyGoodwill(float value) const { WriteField<float>("unionSubsidyGoodwill", value); }
        int unionSubsidyCooldownTicks() const { return ReadField<int>("unionSubsidyCooldownTicks"); }
        void SetUnionSubsidyCooldownTicks(int value) const { WriteField<int>("unionSubsidyCooldownTicks", value); }
        float unionAutonomyOpinionBoost() const { return ReadField<float>("unionAutonomyOpinionBoost"); }
        void SetUnionAutonomyOpinionBoost(float value) const { WriteField<float>("unionAutonomyOpinionBoost", value); }
        int unionAutonomyShieldTicks() const { return ReadField<int>("unionAutonomyShieldTicks"); }
        void SetUnionAutonomyShieldTicks(int value) const { WriteField<int>("unionAutonomyShieldTicks", value); }
        int unionAutonomyCooldownTicks() const { return ReadField<int>("unionAutonomyCooldownTicks"); }
        void SetUnionAutonomyCooldownTicks(int value) const { WriteField<int>("unionAutonomyCooldownTicks", value); }
        float unionExpelOpinionPenalty() const { return ReadField<float>("unionExpelOpinionPenalty"); }
        void SetUnionExpelOpinionPenalty(float value) const { WriteField<float>("unionExpelOpinionPenalty", value); }
        float aiUnionSubsidyReserve() const { return ReadField<float>("aiUnionSubsidyReserve"); }
        void SetAiUnionSubsidyReserve(float value) const { WriteField<float>("aiUnionSubsidyReserve", value); }
        bool aiUnionGrantsAutonomy() const { return ReadField<bool>("aiUnionGrantsAutonomy"); }
        void SetAiUnionGrantsAutonomy(bool value) const { WriteField<bool>("aiUnionGrantsAutonomy", value); }
        int unionOfferLifetimeTicks() const { return ReadField<int>("unionOfferLifetimeTicks"); }
        void SetUnionOfferLifetimeTicks(int value) const { WriteField<int>("unionOfferLifetimeTicks", value); }
        int maxPendingUnionOffers() const { return ReadField<int>("maxPendingUnionOffers"); }
        void SetMaxPendingUnionOffers(int value) const { WriteField<int>("maxPendingUnionOffers", value); }
        bool enableAnnexationRequests() const { return ReadField<bool>("enableAnnexationRequests"); }
        void SetEnableAnnexationRequests(bool value) const { WriteField<bool>("enableAnnexationRequests", value); }
        int annexRequestCooldownTicks() const { return ReadField<int>("annexRequestCooldownTicks"); }
        void SetAnnexRequestCooldownTicks(int value) const { WriteField<int>("annexRequestCooldownTicks", value); }
        float annexRequestBaseChance() const { return ReadField<float>("annexRequestBaseChance"); }
        void SetAnnexRequestBaseChance(float value) const { WriteField<float>("annexRequestBaseChance", value); }
        float annexRequestOpinionWeight() const { return ReadField<float>("annexRequestOpinionWeight"); }
        void SetAnnexRequestOpinionWeight(float value) const { WriteField<float>("annexRequestOpinionWeight", value); }
        float annexRequestFreeSizeRatio() const { return ReadField<float>("annexRequestFreeSizeRatio"); }
        void SetAnnexRequestFreeSizeRatio(float value) const { WriteField<float>("annexRequestFreeSizeRatio", value); }
        float annexRequestSizeSaturation() const { return ReadField<float>("annexRequestSizeSaturation"); }
        void SetAnnexRequestSizeSaturation(float value) const { WriteField<float>("annexRequestSizeSaturation", value); }
        float annexRequestSizeWeight() const { return ReadField<float>("annexRequestSizeWeight"); }
        void SetAnnexRequestSizeWeight(float value) const { WriteField<float>("annexRequestSizeWeight", value); }
        float annexRequestWarPenalty() const { return ReadField<float>("annexRequestWarPenalty"); }
        void SetAnnexRequestWarPenalty(float value) const { WriteField<float>("annexRequestWarPenalty", value); }
        float annexRequestWarPenaltyMax() const { return ReadField<float>("annexRequestWarPenaltyMax"); }
        void SetAnnexRequestWarPenaltyMax(float value) const { WriteField<float>("annexRequestWarPenaltyMax", value); }
        float annexRequestAggressionWeight() const { return ReadField<float>("annexRequestAggressionWeight"); }
        void SetAnnexRequestAggressionWeight(float value) const { WriteField<float>("annexRequestAggressionWeight", value); }
        bool enableVassalageRequests() const { return ReadField<bool>("enableVassalageRequests"); }
        void SetEnableVassalageRequests(bool value) const { WriteField<bool>("enableVassalageRequests", value); }
        int vassalageRequestCooldownTicks() const { return ReadField<int>("vassalageRequestCooldownTicks"); }
        void SetVassalageRequestCooldownTicks(int value) const { WriteField<int>("vassalageRequestCooldownTicks", value); }
        float vassalageRequestBaseChance() const { return ReadField<float>("vassalageRequestBaseChance"); }
        void SetVassalageRequestBaseChance(float value) const { WriteField<float>("vassalageRequestBaseChance", value); }
        float vassalageRequestOpinionWeight() const { return ReadField<float>("vassalageRequestOpinionWeight"); }
        void SetVassalageRequestOpinionWeight(float value) const { WriteField<float>("vassalageRequestOpinionWeight", value); }
        float vassalageRequestSizeSaturation() const { return ReadField<float>("vassalageRequestSizeSaturation"); }
        void SetVassalageRequestSizeSaturation(float value) const { WriteField<float>("vassalageRequestSizeSaturation", value); }
        float vassalageRequestSizeWeight() const { return ReadField<float>("vassalageRequestSizeWeight"); }
        void SetVassalageRequestSizeWeight(float value) const { WriteField<float>("vassalageRequestSizeWeight", value); }
        float vassalageRequestWarPenalty() const { return ReadField<float>("vassalageRequestWarPenalty"); }
        void SetVassalageRequestWarPenalty(float value) const { WriteField<float>("vassalageRequestWarPenalty", value); }
        float vassalageRequestWarPenaltyMax() const { return ReadField<float>("vassalageRequestWarPenaltyMax"); }
        void SetVassalageRequestWarPenaltyMax(float value) const { WriteField<float>("vassalageRequestWarPenaltyMax", value); }
        float vassalageRequestAggressionWeight() const { return ReadField<float>("vassalageRequestAggressionWeight"); }
        void SetVassalageRequestAggressionWeight(float value) const { WriteField<float>("vassalageRequestAggressionWeight", value); }
        bool enableVassalAnnexDemands() const { return ReadField<bool>("enableVassalAnnexDemands"); }
        void SetEnableVassalAnnexDemands(bool value) const { WriteField<bool>("enableVassalAnnexDemands", value); }
        int vassalAnnexDemandCooldownTicks() const { return ReadField<int>("vassalAnnexDemandCooldownTicks"); }
        void SetVassalAnnexDemandCooldownTicks(int value) const { WriteField<int>("vassalAnnexDemandCooldownTicks", value); }
        float vassalAnnexBaseChance() const { return ReadField<float>("vassalAnnexBaseChance"); }
        void SetVassalAnnexBaseChance(float value) const { WriteField<float>("vassalAnnexBaseChance", value); }
        float vassalAnnexLoyaltyWeight() const { return ReadField<float>("vassalAnnexLoyaltyWeight"); }
        void SetVassalAnnexLoyaltyWeight(float value) const { WriteField<float>("vassalAnnexLoyaltyWeight", value); }
        float vassalAnnexFreeSizeRatio() const { return ReadField<float>("vassalAnnexFreeSizeRatio"); }
        void SetVassalAnnexFreeSizeRatio(float value) const { WriteField<float>("vassalAnnexFreeSizeRatio", value); }
        float vassalAnnexSizeSaturation() const { return ReadField<float>("vassalAnnexSizeSaturation"); }
        void SetVassalAnnexSizeSaturation(float value) const { WriteField<float>("vassalAnnexSizeSaturation", value); }
        float vassalAnnexSizeWeight() const { return ReadField<float>("vassalAnnexSizeWeight"); }
        void SetVassalAnnexSizeWeight(float value) const { WriteField<float>("vassalAnnexSizeWeight", value); }
        float vassalAnnexTributeWeight() const { return ReadField<float>("vassalAnnexTributeWeight"); }
        void SetVassalAnnexTributeWeight(float value) const { WriteField<float>("vassalAnnexTributeWeight", value); }
        float vassalAnnexAggressionWeight() const { return ReadField<float>("vassalAnnexAggressionWeight"); }
        void SetVassalAnnexAggressionWeight(float value) const { WriteField<float>("vassalAnnexAggressionWeight", value); }
        float vassalAnnexRefusedPenalty() const { return ReadField<float>("vassalAnnexRefusedPenalty"); }
        void SetVassalAnnexRefusedPenalty(float value) const { WriteField<float>("vassalAnnexRefusedPenalty", value); }
        float settleBasePop() const { return ReadField<float>("settleBasePop"); }
        void SetSettleBasePop(float value) const { WriteField<float>("settleBasePop", value); }
        float settlePopPerCity() const { return ReadField<float>("settlePopPerCity"); }
        void SetSettlePopPerCity(float value) const { WriteField<float>("settlePopPerCity", value); }
        float settlerPopCostFraction() const { return ReadField<float>("settlerPopCostFraction"); }
        void SetSettlerPopCostFraction(float value) const { WriteField<float>("settlerPopCostFraction", value); }
        float settlerPopCostMax() const { return ReadField<float>("settlerPopCostMax"); }
        void SetSettlerPopCostMax(float value) const { WriteField<float>("settlerPopCostMax", value); }
        int settleCooldownTicks() const { return ReadField<int>("settleCooldownTicks"); }
        void SetSettleCooldownTicks(int value) const { WriteField<int>("settleCooldownTicks", value); }
        float settleCoastalWeight() const { return ReadField<float>("settleCoastalWeight"); }
        void SetSettleCoastalWeight(float value) const { WriteField<float>("settleCoastalWeight", value); }
        float settleFrontierWeight() const { return ReadField<float>("settleFrontierWeight"); }
        void SetSettleFrontierWeight(float value) const { WriteField<float>("settleFrontierWeight", value); }
        float settleSpacingWeight() const { return ReadField<float>("settleSpacingWeight"); }
        void SetSettleSpacingWeight(float value) const { WriteField<float>("settleSpacingWeight", value); }
        bool enableDelegatedSettlement() const { return ReadField<bool>("enableDelegatedSettlement"); }
        void SetEnableDelegatedSettlement(bool value) const { WriteField<bool>("enableDelegatedSettlement", value); }
        bool enableIrredentism() const { return ReadField<bool>("enableIrredentism"); }
        void SetEnableIrredentism(bool value) const { WriteField<bool>("enableIrredentism", value); }
        int irredentaIntervalDays() const { return ReadField<int>("irredentaIntervalDays"); }
        void SetIrredentaIntervalDays(int value) const { WriteField<int>("irredentaIntervalDays", value); }
        float irredentaShareStart() const { return ReadField<float>("irredentaShareStart"); }
        void SetIrredentaShareStart(float value) const { WriteField<float>("irredentaShareStart", value); }
        float irredentaShareStop() const { return ReadField<float>("irredentaShareStop"); }
        void SetIrredentaShareStop(float value) const { WriteField<float>("irredentaShareStop", value); }
        int irredentaMinStateTiles() const { return ReadField<int>("irredentaMinStateTiles"); }
        void SetIrredentaMinStateTiles(int value) const { WriteField<int>("irredentaMinStateTiles", value); }
        float irredentaOpinionMalus() const { return ReadField<float>("irredentaOpinionMalus"); }
        void SetIrredentaOpinionMalus(float value) const { WriteField<float>("irredentaOpinionMalus", value); }
        int irredentaGraceDays() const { return ReadField<int>("irredentaGraceDays"); }
        void SetIrredentaGraceDays(int value) const { WriteField<int>("irredentaGraceDays", value); }
        int irredentaOfferCount() const { return ReadField<int>("irredentaOfferCount"); }
        void SetIrredentaOfferCount(int value) const { WriteField<int>("irredentaOfferCount", value); }
        int irredentaOfferSpacingDays() const { return ReadField<int>("irredentaOfferSpacingDays"); }
        void SetIrredentaOfferSpacingDays(int value) const { WriteField<int>("irredentaOfferSpacingDays", value); }
        float irredentaOfferPremium() const { return ReadField<float>("irredentaOfferPremium"); }
        void SetIrredentaOfferPremium(float value) const { WriteField<float>("irredentaOfferPremium", value); }
        int irredentaUltimatumDelayDays() const { return ReadField<int>("irredentaUltimatumDelayDays"); }
        void SetIrredentaUltimatumDelayDays(int value) const { WriteField<int>("irredentaUltimatumDelayDays", value); }
        int irredentaUltimatumDeadlineDays() const { return ReadField<int>("irredentaUltimatumDeadlineDays"); }
        void SetIrredentaUltimatumDeadlineDays(int value) const { WriteField<int>("irredentaUltimatumDeadlineDays", value); }
        int irredentaWarDelayDays() const { return ReadField<int>("irredentaWarDelayDays"); }
        void SetIrredentaWarDelayDays(int value) const { WriteField<int>("irredentaWarDelayDays", value); }
        int irredentaWarPatienceDays() const { return ReadField<int>("irredentaWarPatienceDays"); }
        void SetIrredentaWarPatienceDays(int value) const { WriteField<int>("irredentaWarPatienceDays", value); }
        float irredentaCessionGoodwill() const { return ReadField<float>("irredentaCessionGoodwill"); }
        void SetIrredentaCessionGoodwill(float value) const { WriteField<float>("irredentaCessionGoodwill", value); }
        int maxPendingIrredentaDemands() const { return ReadField<int>("maxPendingIrredentaDemands"); }
        void SetMaxPendingIrredentaDemands(int value) const { WriteField<int>("maxPendingIrredentaDemands", value); }
    };
}
