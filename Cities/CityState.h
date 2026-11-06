#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityState") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        bool isCapital() const { return ReadField<bool>("isCapital"); }
        void isCapital(bool value) const { WriteField<bool>("isCapital", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float cx() const { return ReadField<float>("cx"); }
        void cx(float value) const { WriteField<float>("cx", value); }
        float cy() const { return ReadField<float>("cy"); }
        void cy(float value) const { WriteField<float>("cy", value); }
        float currentRadius() const { return ReadField<float>("currentRadius"); }
        void currentRadius(float value) const { WriteField<float>("currentRadius", value); }
        float targetRadius() const { return ReadField<float>("targetRadius"); }
        void targetRadius(float value) const { WriteField<float>("targetRadius", value); }
        int maxBuildings() const { return ReadField<int>("maxBuildings"); }
        void maxBuildings(int value) const { WriteField<int>("maxBuildings", value); }
        int age() const { return ReadField<int>("age"); }
        void age(int value) const { WriteField<int>("age", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void traits(int64_t value) const { WriteField<int64_t>("traits", value); }
        void* mods() const { return ReadField<void*>("mods"); }
        void mods(void* value) const { WriteField<void*>("mods", value); }
        int stateHint() const { return ReadField<int>("stateHint"); }
        void stateHint(int value) const { WriteField<int>("stateHint", value); }
        float population() const { return ReadField<float>("population"); }
        void population(float value) const { WriteField<float>("population", value); }
        float popCapacity() const { return ReadField<float>("popCapacity"); }
        void popCapacity(float value) const { WriteField<float>("popCapacity", value); }
        int timesTransferred() const { return ReadField<int>("timesTransferred"); }
        void timesTransferred(int value) const { WriteField<int>("timesTransferred", value); }
        int ticksSinceTransfer() const { return ReadField<int>("ticksSinceTransfer"); }
        void ticksSinceTransfer(int value) const { WriteField<int>("ticksSinceTransfer", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void* streets() const { return ReadField<void*>("streets"); }
        bool streetsBuilt() const { return ReadField<bool>("streetsBuilt"); }
        void streetsBuilt(bool value) const { WriteField<bool>("streetsBuilt", value); }
        void* roofColor() const { return ReadField<void*>("roofColor"); }
        void roofColor(void* value) const { WriteField<void*>("roofColor", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void outlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
    };
}
