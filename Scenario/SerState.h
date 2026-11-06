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
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        bool pinned() const { return ReadField<bool>("pinned"); }
        void pinned(bool value) const { WriteField<bool>("pinned", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void ownerId(int value) const { WriteField<int>("ownerId", value); }
        int tier() const { return ReadField<int>("tier"); }
        void tier(int value) const { WriteField<int>("tier", value); }
        bool unified() const { return ReadField<bool>("unified"); }
        void unified(bool value) const { WriteField<bool>("unified", value); }
        float loyalty() const { return ReadField<float>("loyalty"); }
        void loyalty(float value) const { WriteField<float>("loyalty", value); }
        bool unifying() const { return ReadField<bool>("unifying"); }
        void unifying(bool value) const { WriteField<bool>("unifying", value); }
        float unifyProgress() const { return ReadField<float>("unifyProgress"); }
        void unifyProgress(float value) const { WriteField<float>("unifyProgress", value); }
        int heldSinceTick() const { return ReadField<int>("heldSinceTick"); }
        void heldSinceTick(int value) const { WriteField<int>("heldSinceTick", value); }
        void* lordGiven() const { return ReadField<void*>("lordGiven"); }
        void lordGiven(void* value) const { WriteField<void*>("lordGiven", value); }
        void* lordHouse() const { return ReadField<void*>("lordHouse"); }
        void lordHouse(void* value) const { WriteField<void*>("lordHouse", value); }
        bool lordFemale() const { return ReadField<bool>("lordFemale"); }
        void lordFemale(bool value) const { WriteField<bool>("lordFemale", value); }
        float lordAmbition() const { return ReadField<float>("lordAmbition"); }
        void lordAmbition(float value) const { WriteField<float>("lordAmbition", value); }
        int lordSeatedTick() const { return ReadField<int>("lordSeatedTick"); }
        void lordSeatedTick(int value) const { WriteField<int>("lordSeatedTick", value); }
        int claimantId() const { return ReadField<int>("claimantId"); }
        void claimantId(int value) const { WriteField<int>("claimantId", value); }
        int claimStage() const { return ReadField<int>("claimStage"); }
        void claimStage(int value) const { WriteField<int>("claimStage", value); }
        int claimStageTick() const { return ReadField<int>("claimStageTick"); }
        void claimStageTick(int value) const { WriteField<int>("claimStageTick", value); }
        int claimStageAgeTicks() const { return ReadField<int>("claimStageAgeTicks"); }
        void claimStageAgeTicks(int value) const { WriteField<int>("claimStageAgeTicks", value); }
        int claimOffers() const { return ReadField<int>("claimOffers"); }
        void claimOffers(int value) const { WriteField<int>("claimOffers", value); }
        int standing() const { return ReadField<int>("standing"); }
        void standing(int value) const { WriteField<int>("standing", value); }
        float settled() const { return ReadField<float>("settled"); }
        void settled(float value) const { WriteField<float>("settled", value); }
        bool integrating() const { return ReadField<bool>("integrating"); }
        void integrating(bool value) const { WriteField<bool>("integrating", value); }
        float autonomy() const { return ReadField<float>("autonomy"); }
        void autonomy(float value) const { WriteField<float>("autonomy", value); }
        bool charter() const { return ReadField<bool>("charter"); }
        void charter(bool value) const { WriteField<bool>("charter", value); }
        bool curtailing() const { return ReadField<bool>("curtailing"); }
        void curtailing(bool value) const { WriteField<bool>("curtailing", value); }
        bool homeRule() const { return ReadField<bool>("homeRule"); }
        void homeRule(bool value) const { WriteField<bool>("homeRule", value); }
        int lordIndulgedUntilTick() const { return ReadField<int>("lordIndulgedUntilTick"); }
        void lordIndulgedUntilTick(int value) const { WriteField<int>("lordIndulgedUntilTick", value); }
        int charterSoldUntilTick() const { return ReadField<int>("charterSoldUntilTick"); }
        void charterSoldUntilTick(int value) const { WriteField<int>("charterSoldUntilTick", value); }
        int nextDirectRuleTick() const { return ReadField<int>("nextDirectRuleTick"); }
        void nextDirectRuleTick(int value) const { WriteField<int>("nextDirectRuleTick", value); }
        int homeRulePeople() const { return ReadField<int>("homeRulePeople"); }
        void homeRulePeople(int value) const { WriteField<int>("homeRulePeople", value); }
        int homeRuleSinceTick() const { return ReadField<int>("homeRuleSinceTick"); }
        void homeRuleSinceTick(int value) const { WriteField<int>("homeRuleSinceTick", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void levyStrain(float value) const { WriteField<float>("levyStrain", value); }
        int orderUntilTick() const { return ReadField<int>("orderUntilTick"); }
        void orderUntilTick(int value) const { WriteField<int>("orderUntilTick", value); }
        int orderNationId() const { return ReadField<int>("orderNationId"); }
        void orderNationId(int value) const { WriteField<int>("orderNationId", value); }
    };
}
