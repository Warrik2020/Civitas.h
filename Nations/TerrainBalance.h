#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TerrainBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TerrainBalance") {}
    public:
        void* CoverMarch() const { return ReadStaticField<void*>("CoverMarch"); }
        void* CoverDefence() const { return ReadStaticField<void*>("CoverDefence"); }
        void* CoverRtsSpeed() const { return ReadStaticField<void*>("CoverRtsSpeed"); }
        void* CoverFertility() const { return ReadStaticField<void*>("CoverFertility"); }
        void* ReliefFertility() const { return ReadStaticField<void*>("ReliefFertility"); }
        float MarchFloor() const { return ReadStaticField<float>("MarchFloor"); }
        float DefenceStackCap() const { return ReadStaticField<float>("DefenceStackCap"); }
        float UrbanDefence() const { return ReadStaticField<float>("UrbanDefence"); }
        float RingWoodsKeep() const { return ReadStaticField<float>("RingWoodsKeep"); }
        void* RoadSoften() const { return ReadStaticField<void*>("RoadSoften"); }
        void* TypeMarchExponent() const { return ReadStaticField<void*>("TypeMarchExponent"); }
        float LosCostCeiling() const { return ReadStaticField<float>("LosCostCeiling"); }
        float CoastFertility() const { return ReadStaticField<float>("CoastFertility"); }
        float FertilityStrength() const { return ReadStaticField<float>("FertilityStrength"); }
        float FertilityMin() const { return ReadStaticField<float>("FertilityMin"); }
        float FertilityMax() const { return ReadStaticField<float>("FertilityMax"); }
        float CityFertilityMin() const { return ReadStaticField<float>("CityFertilityMin"); }
        float CityFertilityMax() const { return ReadStaticField<float>("CityFertilityMax"); }
        float HighlandMetres() const { return ReadStaticField<float>("HighlandMetres"); }
    };
}
