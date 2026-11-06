#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DesignBureau : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignBureau(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DesignBureau") {}
    public:
        void* Best(void* it, int slot) const { void* args[] = { it, &slot }; return CallStatic("Best", args, 2); }
        bool IsBureau(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("IsBureau", args, 1); }
        float Value(void* d, int slot, int year) const { void* args[] = { d, &slot, &year }; return CallStaticValue<float>("Value", args, 3); }
        void Work(void* it, void* diff, void* seeds) const { void* args[] = { it, diff, seeds }; CallStatic("Work", args, 3); }
        int SlotCount() const { return ReadStaticField<int>("SlotCount"); }
        int SlotRanged() const { return ReadStaticField<int>("SlotRanged"); }
        int SlotMelee() const { return ReadStaticField<int>("SlotMelee"); }
        int SlotArmour() const { return ReadStaticField<int>("SlotArmour"); }
        int SlotTank() const { return ReadStaticField<int>("SlotTank"); }
        int SlotArtillery() const { return ReadStaticField<int>("SlotArtillery"); }
        void* KeyPrefix() const { return ReadStaticField<void*>("KeyPrefix"); }
        void* seedKey() const { return ReadField<void*>("seedKey"); }
        void SetSeedKey(void* value) const { WriteField<void*>("seedKey", value); }
        void* best() const { return ReadField<void*>("best"); }
        void SetBest(void* value) const { WriteField<void*>("best", value); }
        float bestValue() const { return ReadField<float>("bestValue"); }
        void SetBestValue(float value) const { WriteField<float>("bestValue", value); }
        float refValue() const { return ReadField<float>("refValue"); }
        void SetRefValue(float value) const { WriteField<float>("refValue", value); }
        float capValue() const { return ReadField<float>("capValue"); }
        void SetCapValue(float value) const { WriteField<float>("capValue", value); }
        int spent() const { return ReadField<int>("spent"); }
        void SetSpent(int value) const { WriteField<int>("spent", value); }
        int budget() const { return ReadField<int>("budget"); }
        void SetBudget(int value) const { WriteField<int>("budget", value); }
        uint32_t rng() const { return ReadField<uint32_t>("rng"); }
        void SetRng(uint32_t value) const { WriteField<uint32_t>("rng", value); }
        int nextYear() const { return ReadField<int>("nextYear"); }
        void SetNextYear(int value) const { WriteField<int>("nextYear", value); }
        bool running() const { return ReadField<bool>("running"); }
        void SetRunning(bool value) const { WriteField<bool>("running", value); }
        int publishedId() const { return ReadField<int>("publishedId"); }
        void SetPublishedId(int value) const { WriteField<int>("publishedId", value); }
    };
}
