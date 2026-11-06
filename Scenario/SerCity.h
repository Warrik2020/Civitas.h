#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerCity : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerCity(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerCity") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        bool isCapital() const { return ReadField<bool>("isCapital"); }
        void SetIsCapital(bool value) const { WriteField<bool>("isCapital", value); }
        float currentRadius() const { return ReadField<float>("currentRadius"); }
        void SetCurrentRadius(float value) const { WriteField<float>("currentRadius", value); }
        float targetRadius() const { return ReadField<float>("targetRadius"); }
        void SetTargetRadius(float value) const { WriteField<float>("targetRadius", value); }
        int maxBuildings() const { return ReadField<int>("maxBuildings"); }
        void SetMaxBuildings(int value) const { WriteField<int>("maxBuildings", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float population() const { return ReadField<float>("population"); }
        void SetPopulation(float value) const { WriteField<float>("population", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void SetTraits(int64_t value) const { WriteField<int64_t>("traits", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        int timesTransferred() const { return ReadField<int>("timesTransferred"); }
        void SetTimesTransferred(int value) const { WriteField<int>("timesTransferred", value); }
    };
}
