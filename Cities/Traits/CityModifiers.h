#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Traits
{
    class CityModifiers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityModifiers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Traits", "CityModifiers") {}
    public:
        void Combine(void* o) const { void* args[] = { &o }; Call("Combine", args, 1); }
        bool AllowsType(int typeIndex) const { void* args[] = { &typeIndex }; return CallValue<bool>("AllowsType", args, 1); }
        float trainSpeedMul() const { return ReadField<float>("trainSpeedMul"); }
        void SetTrainSpeedMul(float value) const { WriteField<float>("trainSpeedMul", value); }
        float unitCostMul() const { return ReadField<float>("unitCostMul"); }
        void SetUnitCostMul(float value) const { WriteField<float>("unitCostMul", value); }
        float recruitPopCostMul() const { return ReadField<float>("recruitPopCostMul"); }
        void SetRecruitPopCostMul(float value) const { WriteField<float>("recruitPopCostMul", value); }
        int recruitSlotsAdd() const { return ReadField<int>("recruitSlotsAdd"); }
        void SetRecruitSlotsAdd(int value) const { WriteField<int>("recruitSlotsAdd", value); }
        int allowedTypeMask() const { return ReadField<int>("allowedTypeMask"); }
        void SetAllowedTypeMask(int value) const { WriteField<int>("allowedTypeMask", value); }
        float growthMul() const { return ReadField<float>("growthMul"); }
        void SetGrowthMul(float value) const { WriteField<float>("growthMul", value); }
        float popWeightMul() const { return ReadField<float>("popWeightMul"); }
        void SetPopWeightMul(float value) const { WriteField<float>("popWeightMul", value); }
        float popGrowthMul() const { return ReadField<float>("popGrowthMul"); }
        void SetPopGrowthMul(float value) const { WriteField<float>("popGrowthMul", value); }
        float supplyOutputMul() const { return ReadField<float>("supplyOutputMul"); }
        void SetSupplyOutputMul(float value) const { WriteField<float>("supplyOutputMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
