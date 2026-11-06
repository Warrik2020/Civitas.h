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
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
        bool isCapital() const { return ReadField<bool>("isCapital"); }
        void isCapital(bool value) const { WriteField<bool>("isCapital", value); }
        float currentRadius() const { return ReadField<float>("currentRadius"); }
        void currentRadius(float value) const { WriteField<float>("currentRadius", value); }
        float targetRadius() const { return ReadField<float>("targetRadius"); }
        void targetRadius(float value) const { WriteField<float>("targetRadius", value); }
        int maxBuildings() const { return ReadField<int>("maxBuildings"); }
        void maxBuildings(int value) const { WriteField<int>("maxBuildings", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float population() const { return ReadField<float>("population"); }
        void population(float value) const { WriteField<float>("population", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void traits(int64_t value) const { WriteField<int64_t>("traits", value); }
        int age() const { return ReadField<int>("age"); }
        void age(int value) const { WriteField<int>("age", value); }
        int timesTransferred() const { return ReadField<int>("timesTransferred"); }
        void timesTransferred(int value) const { WriteField<int>("timesTransferred", value); }
    };
}
