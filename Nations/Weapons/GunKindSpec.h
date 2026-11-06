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
        void minLength(float value) const { WriteField<float>("minLength", value); }
        float maxLength() const { return ReadField<float>("maxLength"); }
        void maxLength(float value) const { WriteField<float>("maxLength", value); }
        float minKg() const { return ReadField<float>("minKg"); }
        void minKg(float value) const { WriteField<float>("minKg", value); }
        float maxKg() const { return ReadField<float>("maxKg"); }
        void maxKg(float value) const { WriteField<float>("maxKg", value); }
        float minCalibre() const { return ReadField<float>("minCalibre"); }
        void minCalibre(float value) const { WriteField<float>("minCalibre", value); }
        float maxCalibre() const { return ReadField<float>("maxCalibre"); }
        void maxCalibre(float value) const { WriteField<float>("maxCalibre", value); }
        bool shoulder() const { return ReadField<bool>("shoulder"); }
        void shoulder(bool value) const { WriteField<bool>("shoulder", value); }
        bool oneHand() const { return ReadField<bool>("oneHand"); }
        void oneHand(bool value) const { WriteField<bool>("oneHand", value); }
        bool shot() const { return ReadField<bool>("shot"); }
        void shot(bool value) const { WriteField<bool>("shot", value); }
        bool sustained() const { return ReadField<bool>("sustained"); }
        void sustained(bool value) const { WriteField<bool>("sustained", value); }
        float lethalityExp() const { return ReadField<float>("lethalityExp"); }
        void lethalityExp(float value) const { WriteField<float>("lethalityExp", value); }
        float rofExp() const { return ReadField<float>("rofExp"); }
        void rofExp(float value) const { WriteField<float>("rofExp", value); }
        float rangeExp() const { return ReadField<float>("rangeExp"); }
        void rangeExp(float value) const { WriteField<float>("rangeExp", value); }
        float accuracyExp() const { return ReadField<float>("accuracyExp"); }
        void accuracyExp(float value) const { WriteField<float>("accuracyExp", value); }
        float handlingExp() const { return ReadField<float>("handlingExp"); }
        void handlingExp(float value) const { WriteField<float>("handlingExp", value); }
        float noStockAccuracy() const { return ReadField<float>("noStockAccuracy"); }
        void noStockAccuracy(float value) const { WriteField<float>("noStockAccuracy", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void parts(void* value) const { WriteField<void*>("parts", value); }
        void* required() const { return ReadField<void*>("required"); }
        void required(void* value) const { WriteField<void*>("required", value); }
    };
}
