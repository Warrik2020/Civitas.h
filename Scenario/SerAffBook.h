#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAffBook : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAffBook(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAffBook") {}
    public:
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        int born() const { return ReadField<int>("born"); }
        void born(int value) const { WriteField<int>("born", value); }
        int lastHardTick() const { return ReadField<int>("lastHardTick"); }
        void lastHardTick(int value) const { WriteField<int>("lastHardTick", value); }
        int lastUpkeepYear() const { return ReadField<int>("lastUpkeepYear"); }
        void lastUpkeepYear(int value) const { WriteField<int>("lastUpkeepYear", value); }
        void* cooldownStory() const { return ReadField<void*>("cooldownStory"); }
        void cooldownStory(void* value) const { WriteField<void*>("cooldownStory", value); }
        void* cooldownUntil() const { return ReadField<void*>("cooldownUntil"); }
        void cooldownUntil(void* value) const { WriteField<void*>("cooldownUntil", value); }
        void* recentKind() const { return ReadField<void*>("recentKind"); }
        void recentKind(void* value) const { WriteField<void*>("recentKind", value); }
        void* recentTick() const { return ReadField<void*>("recentTick"); }
        void recentTick(void* value) const { WriteField<void*>("recentTick", value); }
        void* recentOther() const { return ReadField<void*>("recentOther"); }
        void recentOther(void* value) const { WriteField<void*>("recentOther", value); }
        void* realmYear() const { return ReadField<void*>("realmYear"); }
        void realmYear(void* value) const { WriteField<void*>("realmYear", value); }
        void* realmHappiness() const { return ReadField<void*>("realmHappiness"); }
        void realmHappiness(void* value) const { WriteField<void*>("realmHappiness", value); }
        void* realmTreasury() const { return ReadField<void*>("realmTreasury"); }
        void realmTreasury(void* value) const { WriteField<void*>("realmTreasury", value); }
        void* realmPopulation() const { return ReadField<void*>("realmPopulation"); }
        void realmPopulation(void* value) const { WriteField<void*>("realmPopulation", value); }
        void* realmTiles() const { return ReadField<void*>("realmTiles"); }
        void realmTiles(void* value) const { WriteField<void*>("realmTiles", value); }
        void* shareKey() const { return ReadField<void*>("shareKey"); }
        void shareKey(void* value) const { WriteField<void*>("shareKey", value); }
        void* shareYear() const { return ReadField<void*>("shareYear"); }
        void shareYear(void* value) const { WriteField<void*>("shareYear", value); }
        void* shareValue() const { return ReadField<void*>("shareValue"); }
        void shareValue(void* value) const { WriteField<void*>("shareValue", value); }
        void* loyaltyState() const { return ReadField<void*>("loyaltyState"); }
        void loyaltyState(void* value) const { WriteField<void*>("loyaltyState", value); }
        void* loyaltyYear() const { return ReadField<void*>("loyaltyYear"); }
        void loyaltyYear(void* value) const { WriteField<void*>("loyaltyYear", value); }
        void* loyaltyValue() const { return ReadField<void*>("loyaltyValue"); }
        void loyaltyValue(void* value) const { WriteField<void*>("loyaltyValue", value); }
    };
}
