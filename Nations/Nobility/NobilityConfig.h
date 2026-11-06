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
        void enabled(bool value) const { WriteField<bool>("enabled", value); }
        int baroniesPerState() const { return ReadField<int>("baroniesPerState"); }
        void baroniesPerState(int value) const { WriteField<int>("baroniesPerState", value); }
        float singleBaronyBelow() const { return ReadField<float>("singleBaronyBelow"); }
        void singleBaronyBelow(float value) const { WriteField<float>("singleBaronyBelow", value); }
        void* baronyBorder() const { return ReadField<void*>("baronyBorder"); }
        void baronyBorder(void* value) const { WriteField<void*>("baronyBorder", value); }
        float seedShareMin() const { return ReadField<float>("seedShareMin"); }
        void seedShareMin(float value) const { WriteField<float>("seedShareMin", value); }
        float seedShareMax() const { return ReadField<float>("seedShareMax"); }
        void seedShareMax(float value) const { WriteField<float>("seedShareMax", value); }
        float opinionHalfLifeYears() const { return ReadField<float>("opinionHalfLifeYears"); }
        void opinionHalfLifeYears(float value) const { WriteField<float>("opinionHalfLifeYears", value); }
        float landWeight() const { return ReadField<float>("landWeight"); }
        void landWeight(float value) const { WriteField<float>("landWeight", value); }
        float demesneLimit() const { return ReadField<float>("demesneLimit"); }
        void demesneLimit(float value) const { WriteField<float>("demesneLimit", value); }
        float demesneWeight() const { return ReadField<float>("demesneWeight"); }
        void demesneWeight(float value) const { WriteField<float>("demesneWeight", value); }
        float taxWeight() const { return ReadField<float>("taxWeight"); }
        void taxWeight(float value) const { WriteField<float>("taxWeight", value); }
        float ambitionWeight() const { return ReadField<float>("ambitionWeight"); }
        void ambitionWeight(float value) const { WriteField<float>("ambitionWeight", value); }
        float rulerTraitWeight() const { return ReadField<float>("rulerTraitWeight"); }
        void rulerTraitWeight(float value) const { WriteField<float>("rulerTraitWeight", value); }
        float warWearinessWeight() const { return ReadField<float>("warWearinessWeight"); }
        void warWearinessWeight(float value) const { WriteField<float>("warWearinessWeight", value); }
        float revokeGrudge() const { return ReadField<float>("revokeGrudge"); }
        void revokeGrudge(float value) const { WriteField<float>("revokeGrudge", value); }
        float revokeSeatGrudge() const { return ReadField<float>("revokeSeatGrudge"); }
        void revokeSeatGrudge(float value) const { WriteField<float>("revokeSeatGrudge", value); }
        float grudgeHalfLifeYears() const { return ReadField<float>("grudgeHalfLifeYears"); }
        void grudgeHalfLifeYears(float value) const { WriteField<float>("grudgeHalfLifeYears", value); }
        float revokeAlarm() const { return ReadField<float>("revokeAlarm"); }
        void revokeAlarm(float value) const { WriteField<float>("revokeAlarm", value); }
        float alarmHalfLifeYears() const { return ReadField<float>("alarmHalfLifeYears"); }
        void alarmHalfLifeYears(float value) const { WriteField<float>("alarmHalfLifeYears", value); }
        float landlessYears() const { return ReadField<float>("landlessYears"); }
        void landlessYears(float value) const { WriteField<float>("landlessYears", value); }
        float giftCostPerTile() const { return ReadField<float>("giftCostPerTile"); }
        void giftCostPerTile(float value) const { WriteField<float>("giftCostPerTile", value); }
        float giftCostMin() const { return ReadField<float>("giftCostMin"); }
        void giftCostMin(float value) const { WriteField<float>("giftCostMin", value); }
        float giftBoost() const { return ReadField<float>("giftBoost"); }
        void giftBoost(float value) const { WriteField<float>("giftBoost", value); }
        float giftBoostCap() const { return ReadField<float>("giftBoostCap"); }
        void giftBoostCap(float value) const { WriteField<float>("giftBoostCap", value); }
        float giftHalfLifeYears() const { return ReadField<float>("giftHalfLifeYears"); }
        void giftHalfLifeYears(float value) const { WriteField<float>("giftHalfLifeYears", value); }
        float giftCooldownYears() const { return ReadField<float>("giftCooldownYears"); }
        void giftCooldownYears(float value) const { WriteField<float>("giftCooldownYears", value); }
        float honourCost() const { return ReadField<float>("honourCost"); }
        void honourCost(float value) const { WriteField<float>("honourCost", value); }
        float honourWeight() const { return ReadField<float>("honourWeight"); }
        void honourWeight(float value) const { WriteField<float>("honourWeight", value); }
        int maxHonours() const { return ReadField<int>("maxHonours"); }
        void maxHonours(int value) const { WriteField<int>("maxHonours", value); }
        float honourCooldownYears() const { return ReadField<float>("honourCooldownYears"); }
        void honourCooldownYears(float value) const { WriteField<float>("honourCooldownYears", value); }
        float demandCooldownYears() const { return ReadField<float>("demandCooldownYears"); }
        void demandCooldownYears(float value) const { WriteField<float>("demandCooldownYears", value); }
        float demandSpacingMonths() const { return ReadField<float>("demandSpacingMonths"); }
        void demandSpacingMonths(float value) const { WriteField<float>("demandSpacingMonths", value); }
        int maxOpenDemands() const { return ReadField<int>("maxOpenDemands"); }
        void maxOpenDemands(int value) const { WriteField<int>("maxOpenDemands", value); }
        int demandAnswerDays() const { return ReadField<int>("demandAnswerDays"); }
        void demandAnswerDays(int value) const { WriteField<int>("demandAnswerDays", value); }
        float demandMetBoost() const { return ReadField<float>("demandMetBoost"); }
        void demandMetBoost(float value) const { WriteField<float>("demandMetBoost", value); }
        float demandMetCap() const { return ReadField<float>("demandMetCap"); }
        void demandMetCap(float value) const { WriteField<float>("demandMetCap", value); }
        float refusedPenalty() const { return ReadField<float>("refusedPenalty"); }
        void refusedPenalty(float value) const { WriteField<float>("refusedPenalty", value); }
        float refusedCap() const { return ReadField<float>("refusedCap"); }
        void refusedCap(float value) const { WriteField<float>("refusedCap", value); }
        float refusedHalfLifeYears() const { return ReadField<float>("refusedHalfLifeYears"); }
        void refusedHalfLifeYears(float value) const { WriteField<float>("refusedHalfLifeYears", value); }
        float refusedUnrest() const { return ReadField<float>("refusedUnrest"); }
        void refusedUnrest(float value) const { WriteField<float>("refusedUnrest", value); }
        float taxAtWorst() const { return ReadField<float>("taxAtWorst"); }
        void taxAtWorst(float value) const { WriteField<float>("taxAtWorst", value); }
        float taxAtBest() const { return ReadField<float>("taxAtBest"); }
        void taxAtBest(float value) const { WriteField<float>("taxAtBest", value); }
        float demesneTaxBonus() const { return ReadField<float>("demesneTaxBonus"); }
        void demesneTaxBonus(float value) const { WriteField<float>("demesneTaxBonus", value); }
        float manpowerAtWorst() const { return ReadField<float>("manpowerAtWorst"); }
        void manpowerAtWorst(float value) const { WriteField<float>("manpowerAtWorst", value); }
        float manpowerAtBest() const { return ReadField<float>("manpowerAtBest"); }
        void manpowerAtBest(float value) const { WriteField<float>("manpowerAtBest", value); }
        float demesneManpower() const { return ReadField<float>("demesneManpower"); }
        void demesneManpower(float value) const { WriteField<float>("demesneManpower", value); }
        float loyaltyWeight() const { return ReadField<float>("loyaltyWeight"); }
        void loyaltyWeight(float value) const { WriteField<float>("loyaltyWeight", value); }
        float riseThreshold() const { return ReadField<float>("riseThreshold"); }
        void riseThreshold(float value) const { WriteField<float>("riseThreshold", value); }
        float riseYears() const { return ReadField<float>("riseYears"); }
        void riseYears(float value) const { WriteField<float>("riseYears", value); }
        float joinThreshold() const { return ReadField<float>("joinThreshold"); }
        void joinThreshold(float value) const { WriteField<float>("joinThreshold", value); }
        float dormantYears() const { return ReadField<float>("dormantYears"); }
        void dormantYears(float value) const { WriteField<float>("dormantYears", value); }
    };
}
