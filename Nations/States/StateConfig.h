#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateConfig") {}
    public:
        int TargetTiles(int landTileCount) const { void* args[] = { &landTileCount }; return CallValue<int>("TargetTiles", args, 1); }
        int MinTiles(int landTileCount) const { void* args[] = { &landTileCount }; return CallValue<int>("MinTiles", args, 1); }
        float FormYears(int tiles, int landTileCount) const { void* args[] = { &tiles, &landTileCount }; return CallValue<float>("FormYears", args, 2); }
        float FormUpfront(int tiles) const { void* args[] = { &tiles }; return CallValue<float>("FormUpfront", args, 1); }
        float ForeignWeightOf(int law) const { void* args[] = { &law }; return CallValue<float>("ForeignWeightOf", args, 1); }
        float TaxShareOf(int s) const { void* args[] = { &s }; return CallValue<float>("TaxShareOf", args, 1); }
        float RecruitMulOf(int s) const { void* args[] = { &s }; return CallValue<float>("RecruitMulOf", args, 1); }
        float LoyaltyOf(int s) const { void* args[] = { &s }; return CallValue<float>("LoyaltyOf", args, 1); }
        float TightenYearsFrom(int s) const { void* args[] = { &s }; return CallValue<float>("TightenYearsFrom", args, 1); }
        int MosaicKey() const { return CallValue<int>("MosaicKey", nullptr, 0); }
        int statesPerWorld() const { return ReadField<int>("statesPerWorld"); }
        void SetStatesPerWorld(int value) const { WriteField<int>("statesPerWorld", value); }
        float minStateFraction() const { return ReadField<float>("minStateFraction"); }
        void SetMinStateFraction(float value) const { WriteField<float>("minStateFraction", value); }
        float reliefWeight() const { return ReadField<float>("reliefWeight"); }
        void SetReliefWeight(float value) const { WriteField<float>("reliefWeight", value); }
        float noiseWeight() const { return ReadField<float>("noiseWeight"); }
        void SetNoiseWeight(float value) const { WriteField<float>("noiseWeight", value); }
        float coastWeight() const { return ReadField<float>("coastWeight"); }
        void SetCoastWeight(float value) const { WriteField<float>("coastWeight", value); }
        float rebuildIntervalSeconds() const { return ReadField<float>("rebuildIntervalSeconds"); }
        void SetRebuildIntervalSeconds(float value) const { WriteField<float>("rebuildIntervalSeconds", value); }
        float formYears() const { return ReadField<float>("formYears"); }
        void SetFormYears(float value) const { WriteField<float>("formYears", value); }
        float formUpfrontPerTile() const { return ReadField<float>("formUpfrontPerTile"); }
        void SetFormUpfrontPerTile(float value) const { WriteField<float>("formUpfrontPerTile", value); }
        float formCostPerTilePerTick() const { return ReadField<float>("formCostPerTilePerTick"); }
        void SetFormCostPerTilePerTick(float value) const { WriteField<float>("formCostPerTilePerTick", value); }
        float unorganizedTaxShare() const { return ReadField<float>("unorganizedTaxShare"); }
        void SetUnorganizedTaxShare(float value) const { WriteField<float>("unorganizedTaxShare", value); }
        int concurrentFormations() const { return ReadField<int>("concurrentFormations"); }
        void SetConcurrentFormations(int value) const { WriteField<int>("concurrentFormations", value); }
        bool enablePolitics() const { return ReadField<bool>("enablePolitics"); }
        void SetEnablePolitics(bool value) const { WriteField<bool>("enablePolitics", value); }
        float loyaltyHalfLifeYears() const { return ReadField<float>("loyaltyHalfLifeYears"); }
        void SetLoyaltyHalfLifeYears(float value) const { WriteField<float>("loyaltyHalfLifeYears", value); }
        float levyStrainHalfLifeYears() const { return ReadField<float>("levyStrainHalfLifeYears"); }
        void SetLevyStrainHalfLifeYears(float value) const { WriteField<float>("levyStrainHalfLifeYears", value); }
        float foreignWeightEqual() const { return ReadField<float>("foreignWeightEqual"); }
        void SetForeignWeightEqual(float value) const { WriteField<float>("foreignWeightEqual", value); }
        float foreignWeightTolerated() const { return ReadField<float>("foreignWeightTolerated"); }
        void SetForeignWeightTolerated(float value) const { WriteField<float>("foreignWeightTolerated", value); }
        float foreignWeightPersecuted() const { return ReadField<float>("foreignWeightPersecuted"); }
        void SetForeignWeightPersecuted(float value) const { WriteField<float>("foreignWeightPersecuted", value); }
        float taxPressureWeight() const { return ReadField<float>("taxPressureWeight"); }
        void SetTaxPressureWeight(float value) const { WriteField<float>("taxPressureWeight", value); }
        float lordAmbitionWeight() const { return ReadField<float>("lordAmbitionWeight"); }
        void SetLordAmbitionWeight(float value) const { WriteField<float>("lordAmbitionWeight", value); }
        float tighteningStrain() const { return ReadField<float>("tighteningStrain"); }
        void SetTighteningStrain(float value) const { WriteField<float>("tighteningStrain", value); }
        float revoltLoyaltyThreshold() const { return ReadField<float>("revoltLoyaltyThreshold"); }
        void SetRevoltLoyaltyThreshold(float value) const { WriteField<float>("revoltLoyaltyThreshold", value); }
        float disloyalTaxFloor() const { return ReadField<float>("disloyalTaxFloor"); }
        void SetDisloyalTaxFloor(float value) const { WriteField<float>("disloyalTaxFloor", value); }
        float faithMismatchWeight() const { return ReadField<float>("faithMismatchWeight"); }
        void SetFaithMismatchWeight(float value) const { WriteField<float>("faithMismatchWeight", value); }
        float treasuryLoyaltyWeight() const { return ReadField<float>("treasuryLoyaltyWeight"); }
        void SetTreasuryLoyaltyWeight(float value) const { WriteField<float>("treasuryLoyaltyWeight", value); }
        float welfareLoyaltyWeight() const { return ReadField<float>("welfareLoyaltyWeight"); }
        void SetWelfareLoyaltyWeight(float value) const { WriteField<float>("welfareLoyaltyWeight", value); }
        float crownLandTaxShare() const { return ReadField<float>("crownLandTaxShare"); }
        void SetCrownLandTaxShare(float value) const { WriteField<float>("crownLandTaxShare", value); }
        float fiefTaxShare() const { return ReadField<float>("fiefTaxShare"); }
        void SetFiefTaxShare(float value) const { WriteField<float>("fiefTaxShare", value); }
        float charteredTaxShare() const { return ReadField<float>("charteredTaxShare"); }
        void SetCharteredTaxShare(float value) const { WriteField<float>("charteredTaxShare", value); }
        float homeRuleTaxShare() const { return ReadField<float>("homeRuleTaxShare"); }
        void SetHomeRuleTaxShare(float value) const { WriteField<float>("homeRuleTaxShare", value); }
        float crownLandRecruitMul() const { return ReadField<float>("crownLandRecruitMul"); }
        void SetCrownLandRecruitMul(float value) const { WriteField<float>("crownLandRecruitMul", value); }
        float fiefRecruitMul() const { return ReadField<float>("fiefRecruitMul"); }
        void SetFiefRecruitMul(float value) const { WriteField<float>("fiefRecruitMul", value); }
        float charteredRecruitMul() const { return ReadField<float>("charteredRecruitMul"); }
        void SetCharteredRecruitMul(float value) const { WriteField<float>("charteredRecruitMul", value); }
        float homeRuleRecruitMul() const { return ReadField<float>("homeRuleRecruitMul"); }
        void SetHomeRuleRecruitMul(float value) const { WriteField<float>("homeRuleRecruitMul", value); }
        float crownLandLoyalty() const { return ReadField<float>("crownLandLoyalty"); }
        void SetCrownLandLoyalty(float value) const { WriteField<float>("crownLandLoyalty", value); }
        float charterLoyaltyBoost() const { return ReadField<float>("charterLoyaltyBoost"); }
        void SetCharterLoyaltyBoost(float value) const { WriteField<float>("charterLoyaltyBoost", value); }
        float homeRuleLoyaltyBoost() const { return ReadField<float>("homeRuleLoyaltyBoost"); }
        void SetHomeRuleLoyaltyBoost(float value) const { WriteField<float>("homeRuleLoyaltyBoost", value); }
        float homeRuleForeignWeightShare() const { return ReadField<float>("homeRuleForeignWeightShare"); }
        void SetHomeRuleForeignWeightShare(float value) const { WriteField<float>("homeRuleForeignWeightShare", value); }
        float tightenCharterYears() const { return ReadField<float>("tightenCharterYears"); }
        void SetTightenCharterYears(float value) const { WriteField<float>("tightenCharterYears", value); }
        float tightenFiefYears() const { return ReadField<float>("tightenFiefYears"); }
        void SetTightenFiefYears(float value) const { WriteField<float>("tightenFiefYears", value); }
        float tightenCostPerTilePerTick() const { return ReadField<float>("tightenCostPerTilePerTick"); }
        void SetTightenCostPerTilePerTick(float value) const { WriteField<float>("tightenCostPerTilePerTick", value); }
        float settleYears() const { return ReadField<float>("settleYears"); }
        void SetSettleYears(float value) const { WriteField<float>("settleYears", value); }
        float integrateSpeedMul() const { return ReadField<float>("integrateSpeedMul"); }
        void SetIntegrateSpeedMul(float value) const { WriteField<float>("integrateSpeedMul", value); }
        float unsettledLoyaltyWeight() const { return ReadField<float>("unsettledLoyaltyWeight"); }
        void SetUnsettledLoyaltyWeight(float value) const { WriteField<float>("unsettledLoyaltyWeight", value); }
        float occupiedLoyaltyCap() const { return ReadField<float>("occupiedLoyaltyCap"); }
        void SetOccupiedLoyaltyCap(float value) const { WriteField<float>("occupiedLoyaltyCap", value); }
        float reclaimedSettled() const { return ReadField<float>("reclaimedSettled"); }
        void SetReclaimedSettled(float value) const { WriteField<float>("reclaimedSettled", value); }
        float unsettledAdminSurcharge() const { return ReadField<float>("unsettledAdminSurcharge"); }
        void SetUnsettledAdminSurcharge(float value) const { WriteField<float>("unsettledAdminSurcharge", value); }
        float replaceLordMinYears() const { return ReadField<float>("replaceLordMinYears"); }
        void SetReplaceLordMinYears(float value) const { WriteField<float>("replaceLordMinYears", value); }
        float replaceLordLoyaltyDip() const { return ReadField<float>("replaceLordLoyaltyDip"); }
        void SetReplaceLordLoyaltyDip(float value) const { WriteField<float>("replaceLordLoyaltyDip", value); }
        float replaceLordCostPerTile() const { return ReadField<float>("replaceLordCostPerTile"); }
        void SetReplaceLordCostPerTile(float value) const { WriteField<float>("replaceLordCostPerTile", value); }
        float replaceLordCostMin() const { return ReadField<float>("replaceLordCostMin"); }
        void SetReplaceLordCostMin(float value) const { WriteField<float>("replaceLordCostMin", value); }
        float indulgeYears() const { return ReadField<float>("indulgeYears"); }
        void SetIndulgeYears(float value) const { WriteField<float>("indulgeYears", value); }
        float indulgeAmbitionMul() const { return ReadField<float>("indulgeAmbitionMul"); }
        void SetIndulgeAmbitionMul(float value) const { WriteField<float>("indulgeAmbitionMul", value); }
        float indulgeCostPerTile() const { return ReadField<float>("indulgeCostPerTile"); }
        void SetIndulgeCostPerTile(float value) const { WriteField<float>("indulgeCostPerTile", value); }
        float indulgeCostMin() const { return ReadField<float>("indulgeCostMin"); }
        void SetIndulgeCostMin(float value) const { WriteField<float>("indulgeCostMin", value); }
        int politicsIntervalDays() const { return ReadField<int>("politicsIntervalDays"); }
        void SetPoliticsIntervalDays(int value) const { WriteField<int>("politicsIntervalDays", value); }
    };
}
