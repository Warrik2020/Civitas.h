#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateLoyaltyInputs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLoyaltyInputs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateLoyaltyInputs") {}
    public:
        int tier() const { return ReadField<int>("tier"); }
        void tier(int value) const { WriteField<int>("tier", value); }
        int standing() const { return ReadField<int>("standing"); }
        void standing(int value) const { WriteField<int>("standing", value); }
        float foreignShare() const { return ReadField<float>("foreignShare"); }
        void foreignShare(float value) const { WriteField<float>("foreignShare", value); }
        float foreignLawWeight() const { return ReadField<float>("foreignLawWeight"); }
        void foreignLawWeight(float value) const { WriteField<float>("foreignLawWeight", value); }
        float settled() const { return ReadField<float>("settled"); }
        void settled(float value) const { WriteField<float>("settled", value); }
        bool occupied() const { return ReadField<bool>("occupied"); }
        void occupied(bool value) const { WriteField<bool>("occupied", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void taxRate(float value) const { WriteField<float>("taxRate", value); }
        float effectiveAmbition() const { return ReadField<float>("effectiveAmbition"); }
        void effectiveAmbition(float value) const { WriteField<float>("effectiveAmbition", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void happiness(float value) const { WriteField<float>("happiness", value); }
        float faithMismatch() const { return ReadField<float>("faithMismatch"); }
        void faithMismatch(float value) const { WriteField<float>("faithMismatch", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void levyStrain(float value) const { WriteField<float>("levyStrain", value); }
        float loyaltyDriftAdd() const { return ReadField<float>("loyaltyDriftAdd"); }
        void loyaltyDriftAdd(float value) const { WriteField<float>("loyaltyDriftAdd", value); }
        float treasuryDepth() const { return ReadField<float>("treasuryDepth"); }
        void treasuryDepth(float value) const { WriteField<float>("treasuryDepth", value); }
        float welfareDepth() const { return ReadField<float>("welfareDepth"); }
        void welfareDepth(float value) const { WriteField<float>("welfareDepth", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void warWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float nobleMood() const { return ReadField<float>("nobleMood"); }
        void nobleMood(float value) const { WriteField<float>("nobleMood", value); }
        bool homeRuleOverForeign() const { return ReadField<bool>("homeRuleOverForeign"); }
        void homeRuleOverForeign(bool value) const { WriteField<bool>("homeRuleOverForeign", value); }
        bool tightening() const { return ReadField<bool>("tightening"); }
        void tightening(bool value) const { WriteField<bool>("tightening", value); }
        bool borderWar() const { return ReadField<bool>("borderWar"); }
        void borderWar(bool value) const { WriteField<bool>("borderWar", value); }
    };
}
