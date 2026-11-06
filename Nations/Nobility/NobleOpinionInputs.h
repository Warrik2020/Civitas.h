#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class NobleOpinionInputs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobleOpinionInputs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "NobleOpinionInputs") {}
    public:
        int baronies() const { return ReadField<int>("baronies"); }
        void SetBaronies(int value) const { WriteField<int>("baronies", value); }
        float ambition() const { return ReadField<float>("ambition"); }
        void SetAmbition(float value) const { WriteField<float>("ambition", value); }
        float demesneShare() const { return ReadField<float>("demesneShare"); }
        void SetDemesneShare(float value) const { WriteField<float>("demesneShare", value); }
        float demesneLimit() const { return ReadField<float>("demesneLimit"); }
        void SetDemesneLimit(float value) const { WriteField<float>("demesneLimit", value); }
        float revokeGrudge() const { return ReadField<float>("revokeGrudge"); }
        void SetRevokeGrudge(float value) const { WriteField<float>("revokeGrudge", value); }
        float alarm() const { return ReadField<float>("alarm"); }
        void SetAlarm(float value) const { WriteField<float>("alarm", value); }
        float giftBoost() const { return ReadField<float>("giftBoost"); }
        void SetGiftBoost(float value) const { WriteField<float>("giftBoost", value); }
        int honours() const { return ReadField<int>("honours"); }
        void SetHonours(int value) const { WriteField<int>("honours", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void SetTaxRate(float value) const { WriteField<float>("taxRate", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void SetLevyStrain(float value) const { WriteField<float>("levyStrain", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void SetWarWeariness(float value) const { WriteField<float>("warWeariness", value); }
        int rulerTraits() const { return ReadField<int>("rulerTraits"); }
        void SetRulerTraits(int value) const { WriteField<int>("rulerTraits", value); }
        float demandMet() const { return ReadField<float>("demandMet"); }
        void SetDemandMet(float value) const { WriteField<float>("demandMet", value); }
        float refused() const { return ReadField<float>("refused"); }
        void SetRefused(float value) const { WriteField<float>("refused", value); }
    };
}
