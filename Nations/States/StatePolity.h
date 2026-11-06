#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StatePolity : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StatePolity(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StatePolity") {}
    public:
        bool OrderHeld(int tick) const { void* __callArgs[] = { &tick }; return CallValue<bool>("OrderHeld", __callArgs, 1); }
        float PeopleShareOf(int peopleKey) const { void* __callArgs[] = { &peopleKey }; return CallValue<float>("PeopleShareOf", __callArgs, 1); }
        void* LoyaltyWord(float loyalty) const { void* __callArgs[] = { &loyalty }; return CallStatic("LoyaltyWord", __callArgs, 1); }
        void* StandingWord(int s, bool fiefGovernment) const { void* __callArgs[] = { &s, &fiefGovernment }; return CallStatic("StandingWord", __callArgs, 2); }
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void ownerId(int value) const { WriteField<int>("ownerId", value); }
        int heldTiles() const { return ReadField<int>("heldTiles"); }
        void heldTiles(int value) const { WriteField<int>("heldTiles", value); }
        int totalTiles() const { return ReadField<int>("totalTiles"); }
        void totalTiles(int value) const { WriteField<int>("totalTiles", value); }
        int tier() const { return ReadField<int>("tier"); }
        void tier(int value) const { WriteField<int>("tier", value); }
        int standing() const { return ReadField<int>("standing"); }
        void standing(int value) const { WriteField<int>("standing", value); }
        float loyalty() const { return ReadField<float>("loyalty"); }
        void loyalty(float value) const { WriteField<float>("loyalty", value); }
        float loyaltyTarget() const { return ReadField<float>("loyaltyTarget"); }
        void loyaltyTarget(float value) const { WriteField<float>("loyaltyTarget", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void levyStrain(float value) const { WriteField<float>("levyStrain", value); }
        float lapsedShare() const { return ReadField<float>("lapsedShare"); }
        void lapsedShare(float value) const { WriteField<float>("lapsedShare", value); }
        bool nobleLive() const { return ReadField<bool>("nobleLive"); }
        void nobleLive(bool value) const { WriteField<bool>("nobleLive", value); }
        float nobleTaxMul() const { return ReadField<float>("nobleTaxMul"); }
        void nobleTaxMul(float value) const { WriteField<float>("nobleTaxMul", value); }
        float nobleManpowerMul() const { return ReadField<float>("nobleManpowerMul"); }
        void nobleManpowerMul(float value) const { WriteField<float>("nobleManpowerMul", value); }
        float nobleMood() const { return ReadField<float>("nobleMood"); }
        void nobleMood(float value) const { WriteField<float>("nobleMood", value); }
        int orderUntilTick() const { return ReadField<int>("orderUntilTick"); }
        void orderUntilTick(int value) const { WriteField<int>("orderUntilTick", value); }
        int orderNationId() const { return ReadField<int>("orderNationId"); }
        void orderNationId(int value) const { WriteField<int>("orderNationId", value); }
        float foreignShare() const { return ReadField<float>("foreignShare"); }
        void foreignShare(float value) const { WriteField<float>("foreignShare", value); }
        int foreignNationId() const { return ReadField<int>("foreignNationId"); }
        void foreignNationId(int value) const { WriteField<int>("foreignNationId", value); }
        int PeopleSlots() const { return ReadStaticField<int>("PeopleSlots"); }
        void* peopleKeys() const { return ReadField<void*>("peopleKeys"); }
        void* peopleShares() const { return ReadField<void*>("peopleShares"); }
        int wants() const { return ReadField<int>("wants"); }
        void wants(int value) const { WriteField<int>("wants", value); }
        int claimantId() const { return ReadField<int>("claimantId"); }
        void claimantId(int value) const { WriteField<int>("claimantId", value); }
        int claimStage() const { return ReadField<int>("claimStage"); }
        void claimStage(int value) const { WriteField<int>("claimStage", value); }
        int claimStageTick() const { return ReadField<int>("claimStageTick"); }
        void claimStageTick(int value) const { WriteField<int>("claimStageTick", value); }
        int claimOffers() const { return ReadField<int>("claimOffers"); }
        void claimOffers(int value) const { WriteField<int>("claimOffers", value); }
        float settled() const { return ReadField<float>("settled"); }
        void settled(float value) const { WriteField<float>("settled", value); }
        bool integrating() const { return ReadField<bool>("integrating"); }
        void integrating(bool value) const { WriteField<bool>("integrating", value); }
        bool occupied() const { return ReadField<bool>("occupied"); }
        void occupied(bool value) const { WriteField<bool>("occupied", value); }
        bool reclaimed() const { return ReadField<bool>("reclaimed"); }
        void reclaimed(bool value) const { WriteField<bool>("reclaimed", value); }
        int homelandId() const { return ReadField<int>("homelandId"); }
        void homelandId(int value) const { WriteField<int>("homelandId", value); }
        bool tightening() const { return ReadField<bool>("tightening"); }
        void tightening(bool value) const { WriteField<bool>("tightening", value); }
        float tightenProgress() const { return ReadField<float>("tightenProgress"); }
        void tightenProgress(float value) const { WriteField<float>("tightenProgress", value); }
        int lordIndulgedUntilTick() const { return ReadField<int>("lordIndulgedUntilTick"); }
        void lordIndulgedUntilTick(int value) const { WriteField<int>("lordIndulgedUntilTick", value); }
        int sealUntilTick() const { return ReadField<int>("sealUntilTick"); }
        void sealUntilTick(int value) const { WriteField<int>("sealUntilTick", value); }
        int nextDirectRuleTick() const { return ReadField<int>("nextDirectRuleTick"); }
        void nextDirectRuleTick(int value) const { WriteField<int>("nextDirectRuleTick", value); }
        int homeRulePeople() const { return ReadField<int>("homeRulePeople"); }
        void homeRulePeople(int value) const { WriteField<int>("homeRulePeople", value); }
        int homeRuleSinceTick() const { return ReadField<int>("homeRuleSinceTick"); }
        void homeRuleSinceTick(int value) const { WriteField<int>("homeRuleSinceTick", value); }
        int heldSinceTick() const { return ReadField<int>("heldSinceTick"); }
        void heldSinceTick(int value) const { WriteField<int>("heldSinceTick", value); }
        float standingTaxMul() const { return ReadField<float>("standingTaxMul"); }
        void standingTaxMul(float value) const { WriteField<float>("standingTaxMul", value); }
        int cityCount() const { return ReadField<int>("cityCount"); }
        void cityCount(int value) const { WriteField<int>("cityCount", value); }
        float population() const { return ReadField<float>("population"); }
        void population(float value) const { WriteField<float>("population", value); }
        float townPopulation() const { return ReadField<float>("townPopulation"); }
        void townPopulation(float value) const { WriteField<float>("townPopulation", value); }
        void* loyaltyTerms() const { return ReadField<void*>("loyaltyTerms"); }
        void loyaltyTerms(void* value) const { WriteField<void*>("loyaltyTerms", value); }
        float garrisonPoints() const { return ReadField<float>("garrisonPoints"); }
        void garrisonPoints(float value) const { WriteField<float>("garrisonPoints", value); }
        float garrisonCoverage() const { return ReadField<float>("garrisonCoverage"); }
        void garrisonCoverage(float value) const { WriteField<float>("garrisonCoverage", value); }
        bool unfunded() const { return ReadField<bool>("unfunded"); }
        void unfunded(bool value) const { WriteField<bool>("unfunded", value); }
        int lastAuditTick() const { return ReadField<int>("lastAuditTick"); }
        void lastAuditTick(int value) const { WriteField<int>("lastAuditTick", value); }
        void* lord() const { return ReadField<void*>("lord"); }
        void lord(void* value) const { WriteField<void*>("lord", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
