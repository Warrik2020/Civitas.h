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
        int TargetTiles(int landTileCount) const { void* __callArgs[] = { &landTileCount }; return CallValue<int>("TargetTiles", __callArgs, 1); }
        int MinTiles(int landTileCount) const { void* __callArgs[] = { &landTileCount }; return CallValue<int>("MinTiles", __callArgs, 1); }
        float FormYears(int tiles, int landTileCount) const { void* __callArgs[] = { &tiles, &landTileCount }; return CallValue<float>("FormYears", __callArgs, 2); }
        float FormUpfront(int tiles) const { void* __callArgs[] = { &tiles }; return CallValue<float>("FormUpfront", __callArgs, 1); }
        float ForeignWeightOf(int law) const { void* __callArgs[] = { &law }; return CallValue<float>("ForeignWeightOf", __callArgs, 1); }
        float TaxShareOf(int s) const { void* __callArgs[] = { &s }; return CallValue<float>("TaxShareOf", __callArgs, 1); }
        float RecruitMulOf(int s) const { void* __callArgs[] = { &s }; return CallValue<float>("RecruitMulOf", __callArgs, 1); }
        float LoyaltyOf(int s) const { void* __callArgs[] = { &s }; return CallValue<float>("LoyaltyOf", __callArgs, 1); }
        float TightenYearsFrom(int s) const { void* __callArgs[] = { &s }; return CallValue<float>("TightenYearsFrom", __callArgs, 1); }
        int MosaicKey() const { return CallValue<int>("MosaicKey", nullptr, 0); }
        int statesPerWorld() const { return ReadField<int>("statesPerWorld"); }
        void statesPerWorld(int value) const { WriteField<int>("statesPerWorld", value); }
        float minStateFraction() const { return ReadField<float>("minStateFraction"); }
        void minStateFraction(float value) const { WriteField<float>("minStateFraction", value); }
        float reliefWeight() const { return ReadField<float>("reliefWeight"); }
        void reliefWeight(float value) const { WriteField<float>("reliefWeight", value); }
        float noiseWeight() const { return ReadField<float>("noiseWeight"); }
        void noiseWeight(float value) const { WriteField<float>("noiseWeight", value); }
        float coastWeight() const { return ReadField<float>("coastWeight"); }
        void coastWeight(float value) const { WriteField<float>("coastWeight", value); }
        float rebuildIntervalSeconds() const { return ReadField<float>("rebuildIntervalSeconds"); }
        void rebuildIntervalSeconds(float value) const { WriteField<float>("rebuildIntervalSeconds", value); }
        float formYears() const { return ReadField<float>("formYears"); }
        void formYears(float value) const { WriteField<float>("formYears", value); }
        float formUpfrontPerTile() const { return ReadField<float>("formUpfrontPerTile"); }
        void formUpfrontPerTile(float value) const { WriteField<float>("formUpfrontPerTile", value); }
        float formCostPerTilePerTick() const { return ReadField<float>("formCostPerTilePerTick"); }
        void formCostPerTilePerTick(float value) const { WriteField<float>("formCostPerTilePerTick", value); }
        float unorganizedTaxShare() const { return ReadField<float>("unorganizedTaxShare"); }
        void unorganizedTaxShare(float value) const { WriteField<float>("unorganizedTaxShare", value); }
        int concurrentFormations() const { return ReadField<int>("concurrentFormations"); }
        void concurrentFormations(int value) const { WriteField<int>("concurrentFormations", value); }
        bool enablePolitics() const { return ReadField<bool>("enablePolitics"); }
        void enablePolitics(bool value) const { WriteField<bool>("enablePolitics", value); }
        float loyaltyHalfLifeYears() const { return ReadField<float>("loyaltyHalfLifeYears"); }
        void loyaltyHalfLifeYears(float value) const { WriteField<float>("loyaltyHalfLifeYears", value); }
        float levyStrainHalfLifeYears() const { return ReadField<float>("levyStrainHalfLifeYears"); }
        void levyStrainHalfLifeYears(float value) const { WriteField<float>("levyStrainHalfLifeYears", value); }
        float foreignWeightEqual() const { return ReadField<float>("foreignWeightEqual"); }
        void foreignWeightEqual(float value) const { WriteField<float>("foreignWeightEqual", value); }
        float foreignWeightTolerated() const { return ReadField<float>("foreignWeightTolerated"); }
        void foreignWeightTolerated(float value) const { WriteField<float>("foreignWeightTolerated", value); }
        float foreignWeightPersecuted() const { return ReadField<float>("foreignWeightPersecuted"); }
        void foreignWeightPersecuted(float value) const { WriteField<float>("foreignWeightPersecuted", value); }
        float taxPressureWeight() const { return ReadField<float>("taxPressureWeight"); }
        void taxPressureWeight(float value) const { WriteField<float>("taxPressureWeight", value); }
        float lordAmbitionWeight() const { return ReadField<float>("lordAmbitionWeight"); }
        void lordAmbitionWeight(float value) const { WriteField<float>("lordAmbitionWeight", value); }
        float tighteningStrain() const { return ReadField<float>("tighteningStrain"); }
        void tighteningStrain(float value) const { WriteField<float>("tighteningStrain", value); }
        float revoltLoyaltyThreshold() const { return ReadField<float>("revoltLoyaltyThreshold"); }
        void revoltLoyaltyThreshold(float value) const { WriteField<float>("revoltLoyaltyThreshold", value); }
        float disloyalTaxFloor() const { return ReadField<float>("disloyalTaxFloor"); }
        void disloyalTaxFloor(float value) const { WriteField<float>("disloyalTaxFloor", value); }
        float faithMismatchWeight() const { return ReadField<float>("faithMismatchWeight"); }
        void faithMismatchWeight(float value) const { WriteField<float>("faithMismatchWeight", value); }
        float treasuryLoyaltyWeight() const { return ReadField<float>("treasuryLoyaltyWeight"); }
        void treasuryLoyaltyWeight(float value) const { WriteField<float>("treasuryLoyaltyWeight", value); }
        float welfareLoyaltyWeight() const { return ReadField<float>("welfareLoyaltyWeight"); }
        void welfareLoyaltyWeight(float value) const { WriteField<float>("welfareLoyaltyWeight", value); }
        float crownLandTaxShare() const { return ReadField<float>("crownLandTaxShare"); }
        void crownLandTaxShare(float value) const { WriteField<float>("crownLandTaxShare", value); }
        float fiefTaxShare() const { return ReadField<float>("fiefTaxShare"); }
        void fiefTaxShare(float value) const { WriteField<float>("fiefTaxShare", value); }
        float charteredTaxShare() const { return ReadField<float>("charteredTaxShare"); }
        void charteredTaxShare(float value) const { WriteField<float>("charteredTaxShare", value); }
        float homeRuleTaxShare() const { return ReadField<float>("homeRuleTaxShare"); }
        void homeRuleTaxShare(float value) const { WriteField<float>("homeRuleTaxShare", value); }
        float crownLandRecruitMul() const { return ReadField<float>("crownLandRecruitMul"); }
        void crownLandRecruitMul(float value) const { WriteField<float>("crownLandRecruitMul", value); }
        float fiefRecruitMul() const { return ReadField<float>("fiefRecruitMul"); }
        void fiefRecruitMul(float value) const { WriteField<float>("fiefRecruitMul", value); }
        float charteredRecruitMul() const { return ReadField<float>("charteredRecruitMul"); }
        void charteredRecruitMul(float value) const { WriteField<float>("charteredRecruitMul", value); }
        float homeRuleRecruitMul() const { return ReadField<float>("homeRuleRecruitMul"); }
        void homeRuleRecruitMul(float value) const { WriteField<float>("homeRuleRecruitMul", value); }
        float crownLandLoyalty() const { return ReadField<float>("crownLandLoyalty"); }
        void crownLandLoyalty(float value) const { WriteField<float>("crownLandLoyalty", value); }
        float charterLoyaltyBoost() const { return ReadField<float>("charterLoyaltyBoost"); }
        void charterLoyaltyBoost(float value) const { WriteField<float>("charterLoyaltyBoost", value); }
        float homeRuleLoyaltyBoost() const { return ReadField<float>("homeRuleLoyaltyBoost"); }
        void homeRuleLoyaltyBoost(float value) const { WriteField<float>("homeRuleLoyaltyBoost", value); }
        float homeRuleForeignWeightShare() const { return ReadField<float>("homeRuleForeignWeightShare"); }
        void homeRuleForeignWeightShare(float value) const { WriteField<float>("homeRuleForeignWeightShare", value); }
        float tightenCharterYears() const { return ReadField<float>("tightenCharterYears"); }
        void tightenCharterYears(float value) const { WriteField<float>("tightenCharterYears", value); }
        float tightenFiefYears() const { return ReadField<float>("tightenFiefYears"); }
        void tightenFiefYears(float value) const { WriteField<float>("tightenFiefYears", value); }
        float tightenCostPerTilePerTick() const { return ReadField<float>("tightenCostPerTilePerTick"); }
        void tightenCostPerTilePerTick(float value) const { WriteField<float>("tightenCostPerTilePerTick", value); }
        float settleYears() const { return ReadField<float>("settleYears"); }
        void settleYears(float value) const { WriteField<float>("settleYears", value); }
        float integrateSpeedMul() const { return ReadField<float>("integrateSpeedMul"); }
        void integrateSpeedMul(float value) const { WriteField<float>("integrateSpeedMul", value); }
        float unsettledLoyaltyWeight() const { return ReadField<float>("unsettledLoyaltyWeight"); }
        void unsettledLoyaltyWeight(float value) const { WriteField<float>("unsettledLoyaltyWeight", value); }
        float occupiedLoyaltyCap() const { return ReadField<float>("occupiedLoyaltyCap"); }
        void occupiedLoyaltyCap(float value) const { WriteField<float>("occupiedLoyaltyCap", value); }
        float reclaimedSettled() const { return ReadField<float>("reclaimedSettled"); }
        void reclaimedSettled(float value) const { WriteField<float>("reclaimedSettled", value); }
        float unsettledAdminSurcharge() const { return ReadField<float>("unsettledAdminSurcharge"); }
        void unsettledAdminSurcharge(float value) const { WriteField<float>("unsettledAdminSurcharge", value); }
        float replaceLordMinYears() const { return ReadField<float>("replaceLordMinYears"); }
        void replaceLordMinYears(float value) const { WriteField<float>("replaceLordMinYears", value); }
        float replaceLordLoyaltyDip() const { return ReadField<float>("replaceLordLoyaltyDip"); }
        void replaceLordLoyaltyDip(float value) const { WriteField<float>("replaceLordLoyaltyDip", value); }
        float replaceLordCostPerTile() const { return ReadField<float>("replaceLordCostPerTile"); }
        void replaceLordCostPerTile(float value) const { WriteField<float>("replaceLordCostPerTile", value); }
        float replaceLordCostMin() const { return ReadField<float>("replaceLordCostMin"); }
        void replaceLordCostMin(float value) const { WriteField<float>("replaceLordCostMin", value); }
        float indulgeYears() const { return ReadField<float>("indulgeYears"); }
        void indulgeYears(float value) const { WriteField<float>("indulgeYears", value); }
        float indulgeAmbitionMul() const { return ReadField<float>("indulgeAmbitionMul"); }
        void indulgeAmbitionMul(float value) const { WriteField<float>("indulgeAmbitionMul", value); }
        float indulgeCostPerTile() const { return ReadField<float>("indulgeCostPerTile"); }
        void indulgeCostPerTile(float value) const { WriteField<float>("indulgeCostPerTile", value); }
        float indulgeCostMin() const { return ReadField<float>("indulgeCostMin"); }
        void indulgeCostMin(float value) const { WriteField<float>("indulgeCostMin", value); }
        int politicsIntervalDays() const { return ReadField<int>("politicsIntervalDays"); }
        void politicsIntervalDays(int value) const { WriteField<int>("politicsIntervalDays", value); }
    };
}
