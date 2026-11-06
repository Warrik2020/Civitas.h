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
        void Combine(void* o) const { void* __callArgs[] = { &o }; Call("Combine", __callArgs, 1); }
        bool AllowsType(int typeIndex) const { void* __callArgs[] = { &typeIndex }; return CallValue<bool>("AllowsType", __callArgs, 1); }
        float trainSpeedMul() const { return ReadField<float>("trainSpeedMul"); }
        void trainSpeedMul(float value) const { WriteField<float>("trainSpeedMul", value); }
        float unitCostMul() const { return ReadField<float>("unitCostMul"); }
        void unitCostMul(float value) const { WriteField<float>("unitCostMul", value); }
        float recruitPopCostMul() const { return ReadField<float>("recruitPopCostMul"); }
        void recruitPopCostMul(float value) const { WriteField<float>("recruitPopCostMul", value); }
        int recruitSlotsAdd() const { return ReadField<int>("recruitSlotsAdd"); }
        void recruitSlotsAdd(int value) const { WriteField<int>("recruitSlotsAdd", value); }
        int allowedTypeMask() const { return ReadField<int>("allowedTypeMask"); }
        void allowedTypeMask(int value) const { WriteField<int>("allowedTypeMask", value); }
        float growthMul() const { return ReadField<float>("growthMul"); }
        void growthMul(float value) const { WriteField<float>("growthMul", value); }
        float popWeightMul() const { return ReadField<float>("popWeightMul"); }
        void popWeightMul(float value) const { WriteField<float>("popWeightMul", value); }
        float popGrowthMul() const { return ReadField<float>("popGrowthMul"); }
        void popGrowthMul(float value) const { WriteField<float>("popGrowthMul", value); }
        float supplyOutputMul() const { return ReadField<float>("supplyOutputMul"); }
        void supplyOutputMul(float value) const { WriteField<float>("supplyOutputMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
