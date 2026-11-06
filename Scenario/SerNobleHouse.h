#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerNobleHouse : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerNobleHouse(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerNobleHouse") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int culture() const { return ReadField<int>("culture"); }
        void SetCulture(int value) const { WriteField<int>("culture", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* headGiven() const { return ReadField<void*>("headGiven"); }
        void SetHeadGiven(void* value) const { WriteField<void*>("headGiven", value); }
        bool headFemale() const { return ReadField<bool>("headFemale"); }
        void SetHeadFemale(bool value) const { WriteField<bool>("headFemale", value); }
        int headSeatedTick() const { return ReadField<int>("headSeatedTick"); }
        void SetHeadSeatedTick(int value) const { WriteField<int>("headSeatedTick", value); }
        int honours() const { return ReadField<int>("honours"); }
        void SetHonours(int value) const { WriteField<int>("honours", value); }
        int nextGiftTick() const { return ReadField<int>("nextGiftTick"); }
        void SetNextGiftTick(int value) const { WriteField<int>("nextGiftTick", value); }
        int landlessSinceTick() const { return ReadField<int>("landlessSinceTick"); }
        void SetLandlessSinceTick(int value) const { WriteField<int>("landlessSinceTick", value); }
        int dormantSinceTick() const { return ReadField<int>("dormantSinceTick"); }
        void SetDormantSinceTick(int value) const { WriteField<int>("dormantSinceTick", value); }
        int seatDeed() const { return ReadField<int>("seatDeed"); }
        void SetSeatDeed(int value) const { WriteField<int>("seatDeed", value); }
        float ambition() const { return ReadField<float>("ambition"); }
        void SetAmbition(float value) const { WriteField<float>("ambition", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void SetOpinion(float value) const { WriteField<float>("opinion", value); }
        float opinionTarget() const { return ReadField<float>("opinionTarget"); }
        void SetOpinionTarget(float value) const { WriteField<float>("opinionTarget", value); }
        float giftBoost() const { return ReadField<float>("giftBoost"); }
        void SetGiftBoost(float value) const { WriteField<float>("giftBoost", value); }
        float revokeGrudge() const { return ReadField<float>("revokeGrudge"); }
        void SetRevokeGrudge(float value) const { WriteField<float>("revokeGrudge", value); }
        float unrest() const { return ReadField<float>("unrest"); }
        void SetUnrest(float value) const { WriteField<float>("unrest", value); }
        int foundedTick() const { return ReadField<int>("foundedTick"); }
        void SetFoundedTick(int value) const { WriteField<int>("foundedTick", value); }
        int demand() const { return ReadField<int>("demand"); }
        void SetDemand(int value) const { WriteField<int>("demand", value); }
        int demandDeed() const { return ReadField<int>("demandDeed"); }
        void SetDemandDeed(int value) const { WriteField<int>("demandDeed", value); }
        int demandDeadlineTick() const { return ReadField<int>("demandDeadlineTick"); }
        void SetDemandDeadlineTick(int value) const { WriteField<int>("demandDeadlineTick", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void SetNextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        float demandGold() const { return ReadField<float>("demandGold"); }
        void SetDemandGold(float value) const { WriteField<float>("demandGold", value); }
        float demandMet() const { return ReadField<float>("demandMet"); }
        void SetDemandMet(float value) const { WriteField<float>("demandMet", value); }
        float refused() const { return ReadField<float>("refused"); }
        void SetRefused(float value) const { WriteField<float>("refused", value); }
    };
}
