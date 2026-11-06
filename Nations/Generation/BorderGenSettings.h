#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Generation
{
    class BorderGenSettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderGenSettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Generation", "BorderGenSettings") {}
    public:
        int era() const { return ReadField<int>("era"); }
        void SetEra(int value) const { WriteField<int>("era", value); }
        int nationCount() const { return ReadField<int>("nationCount"); }
        void SetNationCount(int value) const { WriteField<int>("nationCount", value); }
        float roughness() const { return ReadField<float>("roughness"); }
        void SetRoughness(float value) const { WriteField<float>("roughness", value); }
        float coverage() const { return ReadField<float>("coverage"); }
        void SetCoverage(float value) const { WriteField<float>("coverage", value); }
        float sizeVariety() const { return ReadField<float>("sizeVariety"); }
        void SetSizeVariety(float value) const { WriteField<float>("sizeVariety", value); }
        int seed() const { return ReadField<int>("seed"); }
        void SetSeed(int value) const { WriteField<int>("seed", value); }
    };
}
