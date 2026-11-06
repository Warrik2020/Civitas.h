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
        void minLength(float value) const { WriteField<float>("minLength", value); }
        float maxLength() const { return ReadField<float>("maxLength"); }
        void maxLength(float value) const { WriteField<float>("maxLength", value); }
        float minStrike() const { return ReadField<float>("minStrike"); }
        void minStrike(float value) const { WriteField<float>("minStrike", value); }
        float maxStrike() const { return ReadField<float>("maxStrike"); }
        void maxStrike(float value) const { WriteField<float>("maxStrike", value); }
        float minKg() const { return ReadField<float>("minKg"); }
        void minKg(float value) const { WriteField<float>("minKg", value); }
        float maxKg() const { return ReadField<float>("maxKg"); }
        void maxKg(float value) const { WriteField<float>("maxKg", value); }
        float idealBalanceMm() const { return ReadField<float>("idealBalanceMm"); }
        void idealBalanceMm(float value) const { WriteField<float>("idealBalanceMm", value); }
        bool twoHanded() const { return ReadField<bool>("twoHanded"); }
        void twoHanded(bool value) const { WriteField<bool>("twoHanded", value); }
        void* weights() const { return ReadField<void*>("weights"); }
        void weights(void* value) const { WriteField<void*>("weights", value); }
        void* required() const { return ReadField<void*>("required"); }
        void required(void* value) const { WriteField<void*>("required", value); }
        void* anyOf() const { return ReadField<void*>("anyOf"); }
        void anyOf(void* value) const { WriteField<void*>("anyOf", value); }
    };
}
