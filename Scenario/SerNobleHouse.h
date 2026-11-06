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
        void id(int value) const { WriteField<int>("id", value); }
        int culture() const { return ReadField<int>("culture"); }
        void culture(int value) const { WriteField<int>("culture", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* headGiven() const { return ReadField<void*>("headGiven"); }
        void headGiven(void* value) const { WriteField<void*>("headGiven", value); }
        bool headFemale() const { return ReadField<bool>("headFemale"); }
        void headFemale(bool value) const { WriteField<bool>("headFemale", value); }
        int headSeatedTick() const { return ReadField<int>("headSeatedTick"); }
        void headSeatedTick(int value) const { WriteField<int>("headSeatedTick", value); }
        int honours() const { return ReadField<int>("honours"); }
        void honours(int value) const { WriteField<int>("honours", value); }
        int nextGiftTick() const { return ReadField<int>("nextGiftTick"); }
        void nextGiftTick(int value) const { WriteField<int>("nextGiftTick", value); }
        int landlessSinceTick() const { return ReadField<int>("landlessSinceTick"); }
        void landlessSinceTick(int value) const { WriteField<int>("landlessSinceTick", value); }
        int dormantSinceTick() const { return ReadField<int>("dormantSinceTick"); }
        void dormantSinceTick(int value) const { WriteField<int>("dormantSinceTick", value); }
        int seatDeed() const { return ReadField<int>("seatDeed"); }
        void seatDeed(int value) const { WriteField<int>("seatDeed", value); }
        float ambition() const { return ReadField<float>("ambition"); }
        void ambition(float value) const { WriteField<float>("ambition", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void opinion(float value) const { WriteField<float>("opinion", value); }
        float opinionTarget() const { return ReadField<float>("opinionTarget"); }
        void opinionTarget(float value) const { WriteField<float>("opinionTarget", value); }
        float giftBoost() const { return ReadField<float>("giftBoost"); }
        void giftBoost(float value) const { WriteField<float>("giftBoost", value); }
        float revokeGrudge() const { return ReadField<float>("revokeGrudge"); }
        void revokeGrudge(float value) const { WriteField<float>("revokeGrudge", value); }
        float unrest() const { return ReadField<float>("unrest"); }
        void unrest(float value) const { WriteField<float>("unrest", value); }
        int foundedTick() const { return ReadField<int>("foundedTick"); }
        void foundedTick(int value) const { WriteField<int>("foundedTick", value); }
        int demand() const { return ReadField<int>("demand"); }
        void demand(int value) const { WriteField<int>("demand", value); }
        int demandDeed() const { return ReadField<int>("demandDeed"); }
        void demandDeed(int value) const { WriteField<int>("demandDeed", value); }
        int demandDeadlineTick() const { return ReadField<int>("demandDeadlineTick"); }
        void demandDeadlineTick(int value) const { WriteField<int>("demandDeadlineTick", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void nextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        float demandGold() const { return ReadField<float>("demandGold"); }
        void demandGold(float value) const { WriteField<float>("demandGold", value); }
        float demandMet() const { return ReadField<float>("demandMet"); }
        void demandMet(float value) const { WriteField<float>("demandMet", value); }
        float refused() const { return ReadField<float>("refused"); }
        void refused(float value) const { WriteField<float>("refused", value); }
    };
}
