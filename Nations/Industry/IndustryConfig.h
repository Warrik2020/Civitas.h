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
        void SetEnableIndustry(bool value) const { WriteField<bool>("enableIndustry", value); }
        bool enableFortifications() const { return ReadField<bool>("enableFortifications"); }
        void SetEnableFortifications(bool value) const { WriteField<bool>("enableFortifications", value); }
        float civFactoryCost() const { return ReadField<float>("civFactoryCost"); }
        void SetCivFactoryCost(float value) const { WriteField<float>("civFactoryCost", value); }
        float milFactoryCost() const { return ReadField<float>("milFactoryCost"); }
        void SetMilFactoryCost(float value) const { WriteField<float>("milFactoryCost", value); }
        int factoryBuildTicks() const { return ReadField<int>("factoryBuildTicks"); }
        void SetFactoryBuildTicks(int value) const { WriteField<int>("factoryBuildTicks", value); }
        float factoryCaptureIntegrity() const { return ReadField<float>("factoryCaptureIntegrity"); }
        void SetFactoryCaptureIntegrity(float value) const { WriteField<float>("factoryCaptureIntegrity", value); }
        int startMilFactoryPerStates() const { return ReadField<int>("startMilFactoryPerStates"); }
        void SetStartMilFactoryPerStates(int value) const { WriteField<int>("startMilFactoryPerStates", value); }
        int startMilFactoryMax() const { return ReadField<int>("startMilFactoryMax"); }
        void SetStartMilFactoryMax(int value) const { WriteField<int>("startMilFactoryMax", value); }
        float buildingCostMul() const { return ReadField<float>("buildingCostMul"); }
        void SetBuildingCostMul(float value) const { WriteField<float>("buildingCostMul", value); }
        float buildingTicksMul() const { return ReadField<float>("buildingTicksMul"); }
        void SetBuildingTicksMul(float value) const { WriteField<float>("buildingTicksMul", value); }
        float buildingCostScaleWeight() const { return ReadField<float>("buildingCostScaleWeight"); }
        void SetBuildingCostScaleWeight(float value) const { WriteField<float>("buildingCostScaleWeight", value); }
        float buildingCostScaleExponent() const { return ReadField<float>("buildingCostScaleExponent"); }
        void SetBuildingCostScaleExponent(float value) const { WriteField<float>("buildingCostScaleExponent", value); }
        float buildingCostScaleMax() const { return ReadField<float>("buildingCostScaleMax"); }
        void SetBuildingCostScaleMax(float value) const { WriteField<float>("buildingCostScaleMax", value); }
        float aiBuildScoreJitter() const { return ReadField<float>("aiBuildScoreJitter"); }
        void SetAiBuildScoreJitter(float value) const { WriteField<float>("aiBuildScoreJitter", value); }
        float aiBuildingSaturation() const { return ReadField<float>("aiBuildingSaturation"); }
        void SetAiBuildingSaturation(float value) const { WriteField<float>("aiBuildingSaturation", value); }
        float cityRadiusPerCivFactory() const { return ReadField<float>("cityRadiusPerCivFactory"); }
        void SetCityRadiusPerCivFactory(float value) const { WriteField<float>("cityRadiusPerCivFactory", value); }
        int cityBuildingsPerCivFactory() const { return ReadField<int>("cityBuildingsPerCivFactory"); }
        void SetCityBuildingsPerCivFactory(int value) const { WriteField<int>("cityBuildingsPerCivFactory", value); }
        int trenchBuildTicks() const { return ReadField<int>("trenchBuildTicks"); }
        void SetTrenchBuildTicks(int value) const { WriteField<int>("trenchBuildTicks", value); }
        float trenchSpeedPerMilFactory() const { return ReadField<float>("trenchSpeedPerMilFactory"); }
        void SetTrenchSpeedPerMilFactory(float value) const { WriteField<float>("trenchSpeedPerMilFactory", value); }
        int bunkerBuildTicks() const { return ReadField<int>("bunkerBuildTicks"); }
        void SetBunkerBuildTicks(int value) const { WriteField<int>("bunkerBuildTicks", value); }
        float roadCostPerTile() const { return ReadField<float>("roadCostPerTile"); }
        void SetRoadCostPerTile(float value) const { WriteField<float>("roadCostPerTile", value); }
        int industryAiIntervalTicks() const { return ReadField<int>("industryAiIntervalTicks"); }
        void SetIndustryAiIntervalTicks(int value) const { WriteField<int>("industryAiIntervalTicks", value); }
        float aiTreasuryBufferMul() const { return ReadField<float>("aiTreasuryBufferMul"); }
        void SetAiTreasuryBufferMul(float value) const { WriteField<float>("aiTreasuryBufferMul", value); }
        bool enableDelegatedIndustry() const { return ReadField<bool>("enableDelegatedIndustry"); }
        void SetEnableDelegatedIndustry(bool value) const { WriteField<bool>("enableDelegatedIndustry", value); }
        float industryBudgetMax() const { return ReadField<float>("industryBudgetMax"); }
        void SetIndustryBudgetMax(float value) const { WriteField<float>("industryBudgetMax", value); }
        int delegatedAttemptIntervalTicks() const { return ReadField<int>("delegatedAttemptIntervalTicks"); }
        void SetDelegatedAttemptIntervalTicks(int value) const { WriteField<int>("delegatedAttemptIntervalTicks", value); }
        float delegatedTreasuryBufferMul() const { return ReadField<float>("delegatedTreasuryBufferMul"); }
        void SetDelegatedTreasuryBufferMul(float value) const { WriteField<float>("delegatedTreasuryBufferMul", value); }
        int slotsBase() const { return ReadField<int>("slotsBase"); }
        void SetSlotsBase(int value) const { WriteField<int>("slotsBase", value); }
        int slotsFromSizeMax() const { return ReadField<int>("slotsFromSizeMax"); }
        void SetSlotsFromSizeMax(int value) const { WriteField<int>("slotsFromSizeMax", value); }
        int slotsFromCitiesMax() const { return ReadField<int>("slotsFromCitiesMax"); }
        void SetSlotsFromCitiesMax(int value) const { WriteField<int>("slotsFromCitiesMax", value); }
        int slotsFromTechMax() const { return ReadField<int>("slotsFromTechMax"); }
        void SetSlotsFromTechMax(int value) const { WriteField<int>("slotsFromTechMax", value); }
        int techsPerSlot() const { return ReadField<int>("techsPerSlot"); }
        void SetTechsPerSlot(int value) const { WriteField<int>("techsPerSlot", value); }
        int slotsCapitalBonus() const { return ReadField<int>("slotsCapitalBonus"); }
        void SetSlotsCapitalBonus(int value) const { WriteField<int>("slotsCapitalBonus", value); }
        int slotsMax() const { return ReadField<int>("slotsMax"); }
        void SetSlotsMax(int value) const { WriteField<int>("slotsMax", value); }
        float disloyalOutputFloor() const { return ReadField<float>("disloyalOutputFloor"); }
        void SetDisloyalOutputFloor(float value) const { WriteField<float>("disloyalOutputFloor", value); }
        int stateFortLevelMax() const { return ReadField<int>("stateFortLevelMax"); }
        void SetStateFortLevelMax(int value) const { WriteField<int>("stateFortLevelMax", value); }
        int fortsPerLevel() const { return ReadField<int>("fortsPerLevel"); }
        void SetFortsPerLevel(int value) const { WriteField<int>("fortsPerLevel", value); }
    };
}
