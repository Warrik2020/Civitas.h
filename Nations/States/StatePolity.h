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
        bool OrderHeld(int tick) const { void* args[] = { &tick }; return CallValue<bool>("OrderHeld", args, 1); }
        float PeopleShareOf(int peopleKey) const { void* args[] = { &peopleKey }; return CallValue<float>("PeopleShareOf", args, 1); }
        void* LoyaltyWord(float loyalty) const { void* args[] = { &loyalty }; return CallStatic("LoyaltyWord", args, 1); }
        void* StandingWord(int s, bool fiefGovernment) const { void* args[] = { &s, &fiefGovernment }; return CallStatic("StandingWord", args, 2); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int heldTiles() const { return ReadField<int>("heldTiles"); }
        void SetHeldTiles(int value) const { WriteField<int>("heldTiles", value); }
        int totalTiles() const { return ReadField<int>("totalTiles"); }
        void SetTotalTiles(int value) const { WriteField<int>("totalTiles", value); }
        int tier() const { return ReadField<int>("tier"); }
        void SetTier(int value) const { WriteField<int>("tier", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        float loyalty() const { return ReadField<float>("loyalty"); }
        void SetLoyalty(float value) const { WriteField<float>("loyalty", value); }
        float loyaltyTarget() const { return ReadField<float>("loyaltyTarget"); }
        void SetLoyaltyTarget(float value) const { WriteField<float>("loyaltyTarget", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void SetLevyStrain(float value) const { WriteField<float>("levyStrain", value); }
        float lapsedShare() const { return ReadField<float>("lapsedShare"); }
        void SetLapsedShare(float value) const { WriteField<float>("lapsedShare", value); }
        bool nobleLive() const { return ReadField<bool>("nobleLive"); }
        void SetNobleLive(bool value) const { WriteField<bool>("nobleLive", value); }
        float nobleTaxMul() const { return ReadField<float>("nobleTaxMul"); }
        void SetNobleTaxMul(float value) const { WriteField<float>("nobleTaxMul", value); }
        float nobleManpowerMul() const { return ReadField<float>("nobleManpowerMul"); }
        void SetNobleManpowerMul(float value) const { WriteField<float>("nobleManpowerMul", value); }
        float nobleMood() const { return ReadField<float>("nobleMood"); }
        void SetNobleMood(float value) const { WriteField<float>("nobleMood", value); }
        int orderUntilTick() const { return ReadField<int>("orderUntilTick"); }
        void SetOrderUntilTick(int value) const { WriteField<int>("orderUntilTick", value); }
        int orderNationId() const { return ReadField<int>("orderNationId"); }
        void SetOrderNationId(int value) const { WriteField<int>("orderNationId", value); }
        float foreignShare() const { return ReadField<float>("foreignShare"); }
        void SetForeignShare(float value) const { WriteField<float>("foreignShare", value); }
        int foreignNationId() const { return ReadField<int>("foreignNationId"); }
        void SetForeignNationId(int value) const { WriteField<int>("foreignNationId", value); }
        int PeopleSlots() const { return ReadStaticField<int>("PeopleSlots"); }
        void* peopleKeys() const { return ReadField<void*>("peopleKeys"); }
        void* peopleShares() const { return ReadField<void*>("peopleShares"); }
        int wants() const { return ReadField<int>("wants"); }
        void SetWants(int value) const { WriteField<int>("wants", value); }
        int claimantId() const { return ReadField<int>("claimantId"); }
        void SetClaimantId(int value) const { WriteField<int>("claimantId", value); }
        int claimStage() const { return ReadField<int>("claimStage"); }
        void SetClaimStage(int value) const { WriteField<int>("claimStage", value); }
        int claimStageTick() const { return ReadField<int>("claimStageTick"); }
        void SetClaimStageTick(int value) const { WriteField<int>("claimStageTick", value); }
        int claimOffers() const { return ReadField<int>("claimOffers"); }
        void SetClaimOffers(int value) const { WriteField<int>("claimOffers", value); }
        float settled() const { return ReadField<float>("settled"); }
        void SetSettled(float value) const { WriteField<float>("settled", value); }
        bool integrating() const { return ReadField<bool>("integrating"); }
        void SetIntegrating(bool value) const { WriteField<bool>("integrating", value); }
        bool occupied() const { return ReadField<bool>("occupied"); }
        void SetOccupied(bool value) const { WriteField<bool>("occupied", value); }
        bool reclaimed() const { return ReadField<bool>("reclaimed"); }
        void SetReclaimed(bool value) const { WriteField<bool>("reclaimed", value); }
        int homelandId() const { return ReadField<int>("homelandId"); }
        void SetHomelandId(int value) const { WriteField<int>("homelandId", value); }
        bool tightening() const { return ReadField<bool>("tightening"); }
        void SetTightening(bool value) const { WriteField<bool>("tightening", value); }
        float tightenProgress() const { return ReadField<float>("tightenProgress"); }
        void SetTightenProgress(float value) const { WriteField<float>("tightenProgress", value); }
        int lordIndulgedUntilTick() const { return ReadField<int>("lordIndulgedUntilTick"); }
        void SetLordIndulgedUntilTick(int value) const { WriteField<int>("lordIndulgedUntilTick", value); }
        int sealUntilTick() const { return ReadField<int>("sealUntilTick"); }
        void SetSealUntilTick(int value) const { WriteField<int>("sealUntilTick", value); }
        int nextDirectRuleTick() const { return ReadField<int>("nextDirectRuleTick"); }
        void SetNextDirectRuleTick(int value) const { WriteField<int>("nextDirectRuleTick", value); }
        int homeRulePeople() const { return ReadField<int>("homeRulePeople"); }
        void SetHomeRulePeople(int value) const { WriteField<int>("homeRulePeople", value); }
        int homeRuleSinceTick() const { return ReadField<int>("homeRuleSinceTick"); }
        void SetHomeRuleSinceTick(int value) const { WriteField<int>("homeRuleSinceTick", value); }
        int heldSinceTick() const { return ReadField<int>("heldSinceTick"); }
        void SetHeldSinceTick(int value) const { WriteField<int>("heldSinceTick", value); }
        float standingTaxMul() const { return ReadField<float>("standingTaxMul"); }
        void SetStandingTaxMul(float value) const { WriteField<float>("standingTaxMul", value); }
        int cityCount() const { return ReadField<int>("cityCount"); }
        void SetCityCount(int value) const { WriteField<int>("cityCount", value); }
        float population() const { return ReadField<float>("population"); }
        void SetPopulation(float value) const { WriteField<float>("population", value); }
        float townPopulation() const { return ReadField<float>("townPopulation"); }
        void SetTownPopulation(float value) const { WriteField<float>("townPopulation", value); }
        void* loyaltyTerms() const { return ReadField<void*>("loyaltyTerms"); }
        void SetLoyaltyTerms(void* value) const { WriteField<void*>("loyaltyTerms", value); }
        float garrisonPoints() const { return ReadField<float>("garrisonPoints"); }
        void SetGarrisonPoints(float value) const { WriteField<float>("garrisonPoints", value); }
        float garrisonCoverage() const { return ReadField<float>("garrisonCoverage"); }
        void SetGarrisonCoverage(float value) const { WriteField<float>("garrisonCoverage", value); }
        bool unfunded() const { return ReadField<bool>("unfunded"); }
        void SetUnfunded(bool value) const { WriteField<bool>("unfunded", value); }
        int lastAuditTick() const { return ReadField<int>("lastAuditTick"); }
        void SetLastAuditTick(int value) const { WriteField<int>("lastAuditTick", value); }
        void* lord() const { return ReadField<void*>("lord"); }
        void SetLord(void* value) const { WriteField<void*>("lord", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
