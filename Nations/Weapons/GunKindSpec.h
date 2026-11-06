#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class GunKindSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GunKindSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "GunKindSpec") {}
    public:
        float minLength() const { return ReadField<float>("minLength"); }
        void SetMinLength(float value) const { WriteField<float>("minLength", value); }
        float maxLength() const { return ReadField<float>("maxLength"); }
        void SetMaxLength(float value) const { WriteField<float>("maxLength", value); }
        float minKg() const { return ReadField<float>("minKg"); }
        void SetMinKg(float value) const { WriteField<float>("minKg", value); }
        float maxKg() const { return ReadField<float>("maxKg"); }
        void SetMaxKg(float value) const { WriteField<float>("maxKg", value); }
        float minCalibre() const { return ReadField<float>("minCalibre"); }
        void SetMinCalibre(float value) const { WriteField<float>("minCalibre", value); }
        float maxCalibre() const { return ReadField<float>("maxCalibre"); }
        void SetMaxCalibre(float value) const { WriteField<float>("maxCalibre", value); }
        bool shoulder() const { return ReadField<bool>("shoulder"); }
        void SetShoulder(bool value) const { WriteField<bool>("shoulder", value); }
        bool oneHand() const { return ReadField<bool>("oneHand"); }
        void SetOneHand(bool value) const { WriteField<bool>("oneHand", value); }
        bool shot() const { return ReadField<bool>("shot"); }
        void SetShot(bool value) const { WriteField<bool>("shot", value); }
        bool sustained() const { return ReadField<bool>("sustained"); }
        void SetSustained(bool value) const { WriteField<bool>("sustained", value); }
        float lethalityExp() const { return ReadField<float>("lethalityExp"); }
        void SetLethalityExp(float value) const { WriteField<float>("lethalityExp", value); }
        float rofExp() const { return ReadField<float>("rofExp"); }
        void SetRofExp(float value) const { WriteField<float>("rofExp", value); }
        float rangeExp() const { return ReadField<float>("rangeExp"); }
        void SetRangeExp(float value) const { WriteField<float>("rangeExp", value); }
        float accuracyExp() const { return ReadField<float>("accuracyExp"); }
        void SetAccuracyExp(float value) const { WriteField<float>("accuracyExp", value); }
        float handlingExp() const { return ReadField<float>("handlingExp"); }
        void SetHandlingExp(float value) const { WriteField<float>("handlingExp", value); }
        float noStockAccuracy() const { return ReadField<float>("noStockAccuracy"); }
        void SetNoStockAccuracy(float value) const { WriteField<float>("noStockAccuracy", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void SetParts(void* value) const { WriteField<void*>("parts", value); }
        void* required() const { return ReadField<void*>("required"); }
        void SetRequired(void* value) const { WriteField<void*>("required", value); }
    };
}
