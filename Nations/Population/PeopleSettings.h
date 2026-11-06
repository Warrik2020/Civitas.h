#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleSettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleSettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleSettings") {}
    public:
        float ticksPerMonth() const { return ReadField<float>("ticksPerMonth"); }
        void ticksPerMonth(float value) const { WriteField<float>("ticksPerMonth", value); }
        float popPerTile() const { return ReadField<float>("popPerTile"); }
        void popPerTile(float value) const { WriteField<float>("popPerTile", value); }
        float popGrowthRatePerTick() const { return ReadField<float>("popGrowthRatePerTick"); }
        void popGrowthRatePerTick(float value) const { WriteField<float>("popGrowthRatePerTick", value); }
        float statelessCapacityShare() const { return ReadField<float>("statelessCapacityShare"); }
        void statelessCapacityShare(float value) const { WriteField<float>("statelessCapacityShare", value); }
        float spreadPerMonth() const { return ReadField<float>("spreadPerMonth"); }
        void spreadPerMonth(float value) const { WriteField<float>("spreadPerMonth", value); }
        float spreadUnownedMul() const { return ReadField<float>("spreadUnownedMul"); }
        void spreadUnownedMul(float value) const { WriteField<float>("spreadUnownedMul", value); }
        float spreadAcrossBordersMul() const { return ReadField<float>("spreadAcrossBordersMul"); }
        void spreadAcrossBordersMul(float value) const { WriteField<float>("spreadAcrossBordersMul", value); }
        float spreadMinPeople() const { return ReadField<float>("spreadMinPeople"); }
        void spreadMinPeople(float value) const { WriteField<float>("spreadMinPeople", value); }
        float pioneerPeople() const { return ReadField<float>("pioneerPeople"); }
        void pioneerPeople(float value) const { WriteField<float>("pioneerPeople", value); }
        float refugeeTownShare() const { return ReadField<float>("refugeeTownShare"); }
        void refugeeTownShare(float value) const { WriteField<float>("refugeeTownShare", value); }
        float resettleShare() const { return ReadField<float>("resettleShare"); }
        void resettleShare(float value) const { WriteField<float>("resettleShare", value); }
    };
}
