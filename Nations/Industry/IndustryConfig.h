#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class IndustryConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IndustryConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "IndustryConfig") {}
    public:
        bool enableIndustry() const { return ReadField<bool>("enableIndustry"); }
        void enableIndustry(bool value) const { WriteField<bool>("enableIndustry", value); }
        bool enableFortifications() const { return ReadField<bool>("enableFortifications"); }
        void enableFortifications(bool value) const { WriteField<bool>("enableFortifications", value); }
        float civFactoryCost() const { return ReadField<float>("civFactoryCost"); }
        void civFactoryCost(float value) const { WriteField<float>("civFactoryCost", value); }
        float milFactoryCost() const { return ReadField<float>("milFactoryCost"); }
        void milFactoryCost(float value) const { WriteField<float>("milFactoryCost", value); }
        int factoryBuildTicks() const { return ReadField<int>("factoryBuildTicks"); }
        void factoryBuildTicks(int value) const { WriteField<int>("factoryBuildTicks", value); }
        float factoryCaptureIntegrity() const { return ReadField<float>("factoryCaptureIntegrity"); }
        void factoryCaptureIntegrity(float value) const { WriteField<float>("factoryCaptureIntegrity", value); }
        int startMilFactoryPerStates() const { return ReadField<int>("startMilFactoryPerStates"); }
        void startMilFactoryPerStates(int value) const { WriteField<int>("startMilFactoryPerStates", value); }
        int startMilFactoryMax() const { return ReadField<int>("startMilFactoryMax"); }
        void startMilFactoryMax(int value) const { WriteField<int>("startMilFactoryMax", value); }
        float buildingCostMul() const { return ReadField<float>("buildingCostMul"); }
        void buildingCostMul(float value) const { WriteField<float>("buildingCostMul", value); }
        float buildingTicksMul() const { return ReadField<float>("buildingTicksMul"); }
        void buildingTicksMul(float value) const { WriteField<float>("buildingTicksMul", value); }
        float buildingCostScaleWeight() const { return ReadField<float>("buildingCostScaleWeight"); }
        void buildingCostScaleWeight(float value) const { WriteField<float>("buildingCostScaleWeight", value); }
        float buildingCostScaleExponent() const { return ReadField<float>("buildingCostScaleExponent"); }
        void buildingCostScaleExponent(float value) const { WriteField<float>("buildingCostScaleExponent", value); }
        float buildingCostScaleMax() const { return ReadField<float>("buildingCostScaleMax"); }
        void buildingCostScaleMax(float value) const { WriteField<float>("buildingCostScaleMax", value); }
        float aiBuildScoreJitter() const { return ReadField<float>("aiBuildScoreJitter"); }
        void aiBuildScoreJitter(float value) const { WriteField<float>("aiBuildScoreJitter", value); }
        float aiBuildingSaturation() const { return ReadField<float>("aiBuildingSaturation"); }
        void aiBuildingSaturation(float value) const { WriteField<float>("aiBuildingSaturation", value); }
        float cityRadiusPerCivFactory() const { return ReadField<float>("cityRadiusPerCivFactory"); }
        void cityRadiusPerCivFactory(float value) const { WriteField<float>("cityRadiusPerCivFactory", value); }
        int cityBuildingsPerCivFactory() const { return ReadField<int>("cityBuildingsPerCivFactory"); }
        void cityBuildingsPerCivFactory(int value) const { WriteField<int>("cityBuildingsPerCivFactory", value); }
        int trenchBuildTicks() const { return ReadField<int>("trenchBuildTicks"); }
        void trenchBuildTicks(int value) const { WriteField<int>("trenchBuildTicks", value); }
        float trenchSpeedPerMilFactory() const { return ReadField<float>("trenchSpeedPerMilFactory"); }
        void trenchSpeedPerMilFactory(float value) const { WriteField<float>("trenchSpeedPerMilFactory", value); }
        int bunkerBuildTicks() const { return ReadField<int>("bunkerBuildTicks"); }
        void bunkerBuildTicks(int value) const { WriteField<int>("bunkerBuildTicks", value); }
        float roadCostPerTile() const { return ReadField<float>("roadCostPerTile"); }
        void roadCostPerTile(float value) const { WriteField<float>("roadCostPerTile", value); }
        int industryAiIntervalTicks() const { return ReadField<int>("industryAiIntervalTicks"); }
        void industryAiIntervalTicks(int value) const { WriteField<int>("industryAiIntervalTicks", value); }
        float aiTreasuryBufferMul() const { return ReadField<float>("aiTreasuryBufferMul"); }
        void aiTreasuryBufferMul(float value) const { WriteField<float>("aiTreasuryBufferMul", value); }
        bool enableDelegatedIndustry() const { return ReadField<bool>("enableDelegatedIndustry"); }
        void enableDelegatedIndustry(bool value) const { WriteField<bool>("enableDelegatedIndustry", value); }
        float industryBudgetMax() const { return ReadField<float>("industryBudgetMax"); }
        void industryBudgetMax(float value) const { WriteField<float>("industryBudgetMax", value); }
        int delegatedAttemptIntervalTicks() const { return ReadField<int>("delegatedAttemptIntervalTicks"); }
        void delegatedAttemptIntervalTicks(int value) const { WriteField<int>("delegatedAttemptIntervalTicks", value); }
        float delegatedTreasuryBufferMul() const { return ReadField<float>("delegatedTreasuryBufferMul"); }
        void delegatedTreasuryBufferMul(float value) const { WriteField<float>("delegatedTreasuryBufferMul", value); }
        int slotsBase() const { return ReadField<int>("slotsBase"); }
        void slotsBase(int value) const { WriteField<int>("slotsBase", value); }
        int slotsFromSizeMax() const { return ReadField<int>("slotsFromSizeMax"); }
        void slotsFromSizeMax(int value) const { WriteField<int>("slotsFromSizeMax", value); }
        int slotsFromCitiesMax() const { return ReadField<int>("slotsFromCitiesMax"); }
        void slotsFromCitiesMax(int value) const { WriteField<int>("slotsFromCitiesMax", value); }
        int slotsFromTechMax() const { return ReadField<int>("slotsFromTechMax"); }
        void slotsFromTechMax(int value) const { WriteField<int>("slotsFromTechMax", value); }
        int techsPerSlot() const { return ReadField<int>("techsPerSlot"); }
        void techsPerSlot(int value) const { WriteField<int>("techsPerSlot", value); }
        int slotsCapitalBonus() const { return ReadField<int>("slotsCapitalBonus"); }
        void slotsCapitalBonus(int value) const { WriteField<int>("slotsCapitalBonus", value); }
        int slotsMax() const { return ReadField<int>("slotsMax"); }
        void slotsMax(int value) const { WriteField<int>("slotsMax", value); }
        float disloyalOutputFloor() const { return ReadField<float>("disloyalOutputFloor"); }
        void disloyalOutputFloor(float value) const { WriteField<float>("disloyalOutputFloor", value); }
        int stateFortLevelMax() const { return ReadField<int>("stateFortLevelMax"); }
        void stateFortLevelMax(int value) const { WriteField<int>("stateFortLevelMax", value); }
        int fortsPerLevel() const { return ReadField<int>("fortsPerLevel"); }
        void fortsPerLevel(int value) const { WriteField<int>("fortsPerLevel", value); }
    };
}
