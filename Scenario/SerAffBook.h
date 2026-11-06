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
        void SetNation(int value) const { WriteField<int>("nation", value); }
        int born() const { return ReadField<int>("born"); }
        void SetBorn(int value) const { WriteField<int>("born", value); }
        int lastHardTick() const { return ReadField<int>("lastHardTick"); }
        void SetLastHardTick(int value) const { WriteField<int>("lastHardTick", value); }
        int lastUpkeepYear() const { return ReadField<int>("lastUpkeepYear"); }
        void SetLastUpkeepYear(int value) const { WriteField<int>("lastUpkeepYear", value); }
        void* cooldownStory() const { return ReadField<void*>("cooldownStory"); }
        void SetCooldownStory(void* value) const { WriteField<void*>("cooldownStory", value); }
        void* cooldownUntil() const { return ReadField<void*>("cooldownUntil"); }
        void SetCooldownUntil(void* value) const { WriteField<void*>("cooldownUntil", value); }
        void* recentKind() const { return ReadField<void*>("recentKind"); }
        void SetRecentKind(void* value) const { WriteField<void*>("recentKind", value); }
        void* recentTick() const { return ReadField<void*>("recentTick"); }
        void SetRecentTick(void* value) const { WriteField<void*>("recentTick", value); }
        void* recentOther() const { return ReadField<void*>("recentOther"); }
        void SetRecentOther(void* value) const { WriteField<void*>("recentOther", value); }
        void* realmYear() const { return ReadField<void*>("realmYear"); }
        void SetRealmYear(void* value) const { WriteField<void*>("realmYear", value); }
        void* realmHappiness() const { return ReadField<void*>("realmHappiness"); }
        void SetRealmHappiness(void* value) const { WriteField<void*>("realmHappiness", value); }
        void* realmTreasury() const { return ReadField<void*>("realmTreasury"); }
        void SetRealmTreasury(void* value) const { WriteField<void*>("realmTreasury", value); }
        void* realmPopulation() const { return ReadField<void*>("realmPopulation"); }
        void SetRealmPopulation(void* value) const { WriteField<void*>("realmPopulation", value); }
        void* realmTiles() const { return ReadField<void*>("realmTiles"); }
        void SetRealmTiles(void* value) const { WriteField<void*>("realmTiles", value); }
        void* shareKey() const { return ReadField<void*>("shareKey"); }
        void SetShareKey(void* value) const { WriteField<void*>("shareKey", value); }
        void* shareYear() const { return ReadField<void*>("shareYear"); }
        void SetShareYear(void* value) const { WriteField<void*>("shareYear", value); }
        void* shareValue() const { return ReadField<void*>("shareValue"); }
        void SetShareValue(void* value) const { WriteField<void*>("shareValue", value); }
        void* loyaltyState() const { return ReadField<void*>("loyaltyState"); }
        void SetLoyaltyState(void* value) const { WriteField<void*>("loyaltyState", value); }
        void* loyaltyYear() const { return ReadField<void*>("loyaltyYear"); }
        void SetLoyaltyYear(void* value) const { WriteField<void*>("loyaltyYear", value); }
        void* loyaltyValue() const { return ReadField<void*>("loyaltyValue"); }
        void SetLoyaltyValue(void* value) const { WriteField<void*>("loyaltyValue", value); }
    };
}
