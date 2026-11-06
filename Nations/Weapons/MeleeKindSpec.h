#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleeKindSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleeKindSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleeKindSpec") {}
    public:
        float minLength() const { return ReadField<float>("minLength"); }
        void SetMinLength(float value) const { WriteField<float>("minLength", value); }
        float maxLength() const { return ReadField<float>("maxLength"); }
        void SetMaxLength(float value) const { WriteField<float>("maxLength", value); }
        float minStrike() const { return ReadField<float>("minStrike"); }
        void SetMinStrike(float value) const { WriteField<float>("minStrike", value); }
        float maxStrike() const { return ReadField<float>("maxStrike"); }
        void SetMaxStrike(float value) const { WriteField<float>("maxStrike", value); }
        float minKg() const { return ReadField<float>("minKg"); }
        void SetMinKg(float value) const { WriteField<float>("minKg", value); }
        float maxKg() const { return ReadField<float>("maxKg"); }
        void SetMaxKg(float value) const { WriteField<float>("maxKg", value); }
        float idealBalanceMm() const { return ReadField<float>("idealBalanceMm"); }
        void SetIdealBalanceMm(float value) const { WriteField<float>("idealBalanceMm", value); }
        bool twoHanded() const { return ReadField<bool>("twoHanded"); }
        void SetTwoHanded(bool value) const { WriteField<bool>("twoHanded", value); }
        void* weights() const { return ReadField<void*>("weights"); }
        void SetWeights(void* value) const { WriteField<void*>("weights", value); }
        void* required() const { return ReadField<void*>("required"); }
        void SetRequired(void* value) const { WriteField<void*>("required", value); }
        void* anyOf() const { return ReadField<void*>("anyOf"); }
        void SetAnyOf(void* value) const { WriteField<void*>("anyOf", value); }
    };
}
