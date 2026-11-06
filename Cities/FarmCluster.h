#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class FarmCluster : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FarmCluster(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "FarmCluster") {}
    public:
        bool Full(int attemptBudget) const { void* __callArgs[] = { &attemptBudget }; return CallValue<bool>("Full", __callArgs, 1); }
        int64_t CityKey(int cityId) const { void* __callArgs[] = { &cityId }; return CallStaticValue<int64_t>("CityKey", __callArgs, 1); }
        int64_t RoadKey(int cityA, int cityB) const { void* __callArgs[] = { &cityA, &cityB }; return CallStaticValue<int64_t>("RoadKey", __callArgs, 2); }
        int64_t key() const { return ReadField<int64_t>("key"); }
        void key(int64_t value) const { WriteField<int64_t>("key", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int maxBlocks() const { return ReadField<int>("maxBlocks"); }
        void maxBlocks(int value) const { WriteField<int>("maxBlocks", value); }
        int blocks() const { return ReadField<int>("blocks"); }
        void blocks(int value) const { WriteField<int>("blocks", value); }
        int attempts() const { return ReadField<int>("attempts"); }
        void attempts(int value) const { WriteField<int>("attempts", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
        void* fields() const { return ReadField<void*>("fields"); }
    };
}
