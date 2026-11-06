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
        void SetTicksPerMonth(float value) const { WriteField<float>("ticksPerMonth", value); }
        float popPerTile() const { return ReadField<float>("popPerTile"); }
        void SetPopPerTile(float value) const { WriteField<float>("popPerTile", value); }
        float popGrowthRatePerTick() const { return ReadField<float>("popGrowthRatePerTick"); }
        void SetPopGrowthRatePerTick(float value) const { WriteField<float>("popGrowthRatePerTick", value); }
        float statelessCapacityShare() const { return ReadField<float>("statelessCapacityShare"); }
        void SetStatelessCapacityShare(float value) const { WriteField<float>("statelessCapacityShare", value); }
        float spreadPerMonth() const { return ReadField<float>("spreadPerMonth"); }
        void SetSpreadPerMonth(float value) const { WriteField<float>("spreadPerMonth", value); }
        float spreadUnownedMul() const { return ReadField<float>("spreadUnownedMul"); }
        void SetSpreadUnownedMul(float value) const { WriteField<float>("spreadUnownedMul", value); }
        float spreadAcrossBordersMul() const { return ReadField<float>("spreadAcrossBordersMul"); }
        void SetSpreadAcrossBordersMul(float value) const { WriteField<float>("spreadAcrossBordersMul", value); }
        float spreadMinPeople() const { return ReadField<float>("spreadMinPeople"); }
        void SetSpreadMinPeople(float value) const { WriteField<float>("spreadMinPeople", value); }
        float pioneerPeople() const { return ReadField<float>("pioneerPeople"); }
        void SetPioneerPeople(float value) const { WriteField<float>("pioneerPeople", value); }
        float refugeeTownShare() const { return ReadField<float>("refugeeTownShare"); }
        void SetRefugeeTownShare(float value) const { WriteField<float>("refugeeTownShare", value); }
        float resettleShare() const { return ReadField<float>("resettleShare"); }
        void SetResettleShare(float value) const { WriteField<float>("resettleShare", value); }
    };
}
