#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerState") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        bool pinned() const { return ReadField<bool>("pinned"); }
        void SetPinned(bool value) const { WriteField<bool>("pinned", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int tier() const { return ReadField<int>("tier"); }
        void SetTier(int value) const { WriteField<int>("tier", value); }
        bool unified() const { return ReadField<bool>("unified"); }
        void SetUnified(bool value) const { WriteField<bool>("unified", value); }
        float loyalty() const { return ReadField<float>("loyalty"); }
        void SetLoyalty(float value) const { WriteField<float>("loyalty", value); }
        bool unifying() const { return ReadField<bool>("unifying"); }
        void SetUnifying(bool value) const { WriteField<bool>("unifying", value); }
        float unifyProgress() const { return ReadField<float>("unifyProgress"); }
        void SetUnifyProgress(float value) const { WriteField<float>("unifyProgress", value); }
        int heldSinceTick() const { return ReadField<int>("heldSinceTick"); }
        void SetHeldSinceTick(int value) const { WriteField<int>("heldSinceTick", value); }
        void* lordGiven() const { return ReadField<void*>("lordGiven"); }
        void SetLordGiven(void* value) const { WriteField<void*>("lordGiven", value); }
        void* lordHouse() const { return ReadField<void*>("lordHouse"); }
        void SetLordHouse(void* value) const { WriteField<void*>("lordHouse", value); }
        bool lordFemale() const { return ReadField<bool>("lordFemale"); }
        void SetLordFemale(bool value) const { WriteField<bool>("lordFemale", value); }
        float lordAmbition() const { return ReadField<float>("lordAmbition"); }
        void SetLordAmbition(float value) const { WriteField<float>("lordAmbition", value); }
        int lordSeatedTick() const { return ReadField<int>("lordSeatedTick"); }
        void SetLordSeatedTick(int value) const { WriteField<int>("lordSeatedTick", value); }
        int claimantId() const { return ReadField<int>("claimantId"); }
        void SetClaimantId(int value) const { WriteField<int>("claimantId", value); }
        int claimStage() const { return ReadField<int>("claimStage"); }
        void SetClaimStage(int value) const { WriteField<int>("claimStage", value); }
        int claimStageTick() const { return ReadField<int>("claimStageTick"); }
        void SetClaimStageTick(int value) const { WriteField<int>("claimStageTick", value); }
        int claimStageAgeTicks() const { return ReadField<int>("claimStageAgeTicks"); }
        void SetClaimStageAgeTicks(int value) const { WriteField<int>("claimStageAgeTicks", value); }
        int claimOffers() const { return ReadField<int>("claimOffers"); }
        void SetClaimOffers(int value) const { WriteField<int>("claimOffers", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        float settled() const { return ReadField<float>("settled"); }
        void SetSettled(float value) const { WriteField<float>("settled", value); }
        bool integrating() const { return ReadField<bool>("integrating"); }
        void SetIntegrating(bool value) const { WriteField<bool>("integrating", value); }
        float autonomy() const { return ReadField<float>("autonomy"); }
        void SetAutonomy(float value) const { WriteField<float>("autonomy", value); }
        bool charter() const { return ReadField<bool>("charter"); }
        void SetCharter(bool value) const { WriteField<bool>("charter", value); }
        bool curtailing() const { return ReadField<bool>("curtailing"); }
        void SetCurtailing(bool value) const { WriteField<bool>("curtailing", value); }
        bool homeRule() const { return ReadField<bool>("homeRule"); }
        void SetHomeRule(bool value) const { WriteField<bool>("homeRule", value); }
        int lordIndulgedUntilTick() const { return ReadField<int>("lordIndulgedUntilTick"); }
        void SetLordIndulgedUntilTick(int value) const { WriteField<int>("lordIndulgedUntilTick", value); }
        int charterSoldUntilTick() const { return ReadField<int>("charterSoldUntilTick"); }
        void SetCharterSoldUntilTick(int value) const { WriteField<int>("charterSoldUntilTick", value); }
        int nextDirectRuleTick() const { return ReadField<int>("nextDirectRuleTick"); }
        void SetNextDirectRuleTick(int value) const { WriteField<int>("nextDirectRuleTick", value); }
        int homeRulePeople() const { return ReadField<int>("homeRulePeople"); }
        void SetHomeRulePeople(int value) const { WriteField<int>("homeRulePeople", value); }
        int homeRuleSinceTick() const { return ReadField<int>("homeRuleSinceTick"); }
        void SetHomeRuleSinceTick(int value) const { WriteField<int>("homeRuleSinceTick", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void SetLevyStrain(float value) const { WriteField<float>("levyStrain", value); }
        int orderUntilTick() const { return ReadField<int>("orderUntilTick"); }
        void SetOrderUntilTick(int value) const { WriteField<int>("orderUntilTick", value); }
        int orderNationId() const { return ReadField<int>("orderNationId"); }
        void SetOrderNationId(int value) const { WriteField<int>("orderNationId", value); }
    };
}
