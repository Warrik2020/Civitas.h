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
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        bool isCapital() const { return ReadField<bool>("isCapital"); }
        void SetIsCapital(bool value) const { WriteField<bool>("isCapital", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float cx() const { return ReadField<float>("cx"); }
        void SetCx(float value) const { WriteField<float>("cx", value); }
        float cy() const { return ReadField<float>("cy"); }
        void SetCy(float value) const { WriteField<float>("cy", value); }
        float currentRadius() const { return ReadField<float>("currentRadius"); }
        void SetCurrentRadius(float value) const { WriteField<float>("currentRadius", value); }
        float targetRadius() const { return ReadField<float>("targetRadius"); }
        void SetTargetRadius(float value) const { WriteField<float>("targetRadius", value); }
        int maxBuildings() const { return ReadField<int>("maxBuildings"); }
        void SetMaxBuildings(int value) const { WriteField<int>("maxBuildings", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void SetTraits(int64_t value) const { WriteField<int64_t>("traits", value); }
        void* mods() const { return ReadField<void*>("mods"); }
        void SetMods(void* value) const { WriteField<void*>("mods", value); }
        int stateHint() const { return ReadField<int>("stateHint"); }
        void SetStateHint(int value) const { WriteField<int>("stateHint", value); }
        float population() const { return ReadField<float>("population"); }
        void SetPopulation(float value) const { WriteField<float>("population", value); }
        float popCapacity() const { return ReadField<float>("popCapacity"); }
        void SetPopCapacity(float value) const { WriteField<float>("popCapacity", value); }
        int timesTransferred() const { return ReadField<int>("timesTransferred"); }
        void SetTimesTransferred(int value) const { WriteField<int>("timesTransferred", value); }
        int ticksSinceTransfer() const { return ReadField<int>("ticksSinceTransfer"); }
        void SetTicksSinceTransfer(int value) const { WriteField<int>("ticksSinceTransfer", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void* streets() const { return ReadField<void*>("streets"); }
        bool streetsBuilt() const { return ReadField<bool>("streetsBuilt"); }
        void SetStreetsBuilt(bool value) const { WriteField<bool>("streetsBuilt", value); }
        void* roofColor() const { return ReadField<void*>("roofColor"); }
        void SetRoofColor(void* value) const { WriteField<void*>("roofColor", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void SetOutlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void SetDirty(bool value) const { WriteField<bool>("dirty", value); }
    };
}
