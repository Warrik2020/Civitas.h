#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class NobilityConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobilityConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "NobilityConfig") {}
    public:
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
        int baroniesPerState() const { return ReadField<int>("baroniesPerState"); }
        void SetBaroniesPerState(int value) const { WriteField<int>("baroniesPerState", value); }
        float singleBaronyBelow() const { return ReadField<float>("singleBaronyBelow"); }
        void SetSingleBaronyBelow(float value) const { WriteField<float>("singleBaronyBelow", value); }
        void* baronyBorder() const { return ReadField<void*>("baronyBorder"); }
        void SetBaronyBorder(void* value) const { WriteField<void*>("baronyBorder", value); }
        float seedShareMin() const { return ReadField<float>("seedShareMin"); }
        void SetSeedShareMin(float value) const { WriteField<float>("seedShareMin", value); }
        float seedShareMax() const { return ReadField<float>("seedShareMax"); }
        void SetSeedShareMax(float value) const { WriteField<float>("seedShareMax", value); }
        float opinionHalfLifeYears() const { return ReadField<float>("opinionHalfLifeYears"); }
        void SetOpinionHalfLifeYears(float value) const { WriteField<float>("opinionHalfLifeYears", value); }
        float landWeight() const { return ReadField<float>("landWeight"); }
        void SetLandWeight(float value) const { WriteField<float>("landWeight", value); }
        float demesneLimit() const { return ReadField<float>("demesneLimit"); }
        void SetDemesneLimit(float value) const { WriteField<float>("demesneLimit", value); }
        float demesneWeight() const { return ReadField<float>("demesneWeight"); }
        void SetDemesneWeight(float value) const { WriteField<float>("demesneWeight", value); }
        float taxWeight() const { return ReadField<float>("taxWeight"); }
        void SetTaxWeight(float value) const { WriteField<float>("taxWeight", value); }
        float ambitionWeight() const { return ReadField<float>("ambitionWeight"); }
        void SetAmbitionWeight(float value) const { WriteField<float>("ambitionWeight", value); }
        float rulerTraitWeight() const { return ReadField<float>("rulerTraitWeight"); }
        void SetRulerTraitWeight(float value) const { WriteField<float>("rulerTraitWeight", value); }
        float warWearinessWeight() const { return ReadField<float>("warWearinessWeight"); }
        void SetWarWearinessWeight(float value) const { WriteField<float>("warWearinessWeight", value); }
        float revokeGrudge() const { return ReadField<float>("revokeGrudge"); }
        void SetRevokeGrudge(float value) const { WriteField<float>("revokeGrudge", value); }
        float revokeSeatGrudge() const { return ReadField<float>("revokeSeatGrudge"); }
        void SetRevokeSeatGrudge(float value) const { WriteField<float>("revokeSeatGrudge", value); }
        float grudgeHalfLifeYears() const { return ReadField<float>("grudgeHalfLifeYears"); }
        void SetGrudgeHalfLifeYears(float value) const { WriteField<float>("grudgeHalfLifeYears", value); }
        float revokeAlarm() const { return ReadField<float>("revokeAlarm"); }
        void SetRevokeAlarm(float value) const { WriteField<float>("revokeAlarm", value); }
        float alarmHalfLifeYears() const { return ReadField<float>("alarmHalfLifeYears"); }
        void SetAlarmHalfLifeYears(float value) const { WriteField<float>("alarmHalfLifeYears", value); }
        float landlessYears() const { return ReadField<float>("landlessYears"); }
        void SetLandlessYears(float value) const { WriteField<float>("landlessYears", value); }
        float giftCostPerTile() const { return ReadField<float>("giftCostPerTile"); }
        void SetGiftCostPerTile(float value) const { WriteField<float>("giftCostPerTile", value); }
        float giftCostMin() const { return ReadField<float>("giftCostMin"); }
        void SetGiftCostMin(float value) const { WriteField<float>("giftCostMin", value); }
        float giftBoost() const { return ReadField<float>("giftBoost"); }
        void SetGiftBoost(float value) const { WriteField<float>("giftBoost", value); }
        float giftBoostCap() const { return ReadField<float>("giftBoostCap"); }
        void SetGiftBoostCap(float value) const { WriteField<float>("giftBoostCap", value); }
        float giftHalfLifeYears() const { return ReadField<float>("giftHalfLifeYears"); }
        void SetGiftHalfLifeYears(float value) const { WriteField<float>("giftHalfLifeYears", value); }
        float giftCooldownYears() const { return ReadField<float>("giftCooldownYears"); }
        void SetGiftCooldownYears(float value) const { WriteField<float>("giftCooldownYears", value); }
        float honourCost() const { return ReadField<float>("honourCost"); }
        void SetHonourCost(float value) const { WriteField<float>("honourCost", value); }
        float honourWeight() const { return ReadField<float>("honourWeight"); }
        void SetHonourWeight(float value) const { WriteField<float>("honourWeight", value); }
        int maxHonours() const { return ReadField<int>("maxHonours"); }
        void SetMaxHonours(int value) const { WriteField<int>("maxHonours", value); }
        float honourCooldownYears() const { return ReadField<float>("honourCooldownYears"); }
        void SetHonourCooldownYears(float value) const { WriteField<float>("honourCooldownYears", value); }
        float demandCooldownYears() const { return ReadField<float>("demandCooldownYears"); }
        void SetDemandCooldownYears(float value) const { WriteField<float>("demandCooldownYears", value); }
        float demandSpacingMonths() const { return ReadField<float>("demandSpacingMonths"); }
        void SetDemandSpacingMonths(float value) const { WriteField<float>("demandSpacingMonths", value); }
        int maxOpenDemands() const { return ReadField<int>("maxOpenDemands"); }
        void SetMaxOpenDemands(int value) const { WriteField<int>("maxOpenDemands", value); }
        int demandAnswerDays() const { return ReadField<int>("demandAnswerDays"); }
        void SetDemandAnswerDays(int value) const { WriteField<int>("demandAnswerDays", value); }
        float demandMetBoost() const { return ReadField<float>("demandMetBoost"); }
        void SetDemandMetBoost(float value) const { WriteField<float>("demandMetBoost", value); }
        float demandMetCap() const { return ReadField<float>("demandMetCap"); }
        void SetDemandMetCap(float value) const { WriteField<float>("demandMetCap", value); }
        float refusedPenalty() const { return ReadField<float>("refusedPenalty"); }
        void SetRefusedPenalty(float value) const { WriteField<float>("refusedPenalty", value); }
        float refusedCap() const { return ReadField<float>("refusedCap"); }
        void SetRefusedCap(float value) const { WriteField<float>("refusedCap", value); }
        float refusedHalfLifeYears() const { return ReadField<float>("refusedHalfLifeYears"); }
        void SetRefusedHalfLifeYears(float value) const { WriteField<float>("refusedHalfLifeYears", value); }
        float refusedUnrest() const { return ReadField<float>("refusedUnrest"); }
        void SetRefusedUnrest(float value) const { WriteField<float>("refusedUnrest", value); }
        float taxAtWorst() const { return ReadField<float>("taxAtWorst"); }
        void SetTaxAtWorst(float value) const { WriteField<float>("taxAtWorst", value); }
        float taxAtBest() const { return ReadField<float>("taxAtBest"); }
        void SetTaxAtBest(float value) const { WriteField<float>("taxAtBest", value); }
        float demesneTaxBonus() const { return ReadField<float>("demesneTaxBonus"); }
        void SetDemesneTaxBonus(float value) const { WriteField<float>("demesneTaxBonus", value); }
        float manpowerAtWorst() const { return ReadField<float>("manpowerAtWorst"); }
        void SetManpowerAtWorst(float value) const { WriteField<float>("manpowerAtWorst", value); }
        float manpowerAtBest() const { return ReadField<float>("manpowerAtBest"); }
        void SetManpowerAtBest(float value) const { WriteField<float>("manpowerAtBest", value); }
        float demesneManpower() const { return ReadField<float>("demesneManpower"); }
        void SetDemesneManpower(float value) const { WriteField<float>("demesneManpower", value); }
        float loyaltyWeight() const { return ReadField<float>("loyaltyWeight"); }
        void SetLoyaltyWeight(float value) const { WriteField<float>("loyaltyWeight", value); }
        float riseThreshold() const { return ReadField<float>("riseThreshold"); }
        void SetRiseThreshold(float value) const { WriteField<float>("riseThreshold", value); }
        float riseYears() const { return ReadField<float>("riseYears"); }
        void SetRiseYears(float value) const { WriteField<float>("riseYears", value); }
        float joinThreshold() const { return ReadField<float>("joinThreshold"); }
        void SetJoinThreshold(float value) const { WriteField<float>("joinThreshold", value); }
        float dormantYears() const { return ReadField<float>("dormantYears"); }
        void SetDormantYears(float value) const { WriteField<float>("dormantYears", value); }
    };
}
