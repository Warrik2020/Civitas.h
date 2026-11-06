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
        void SetTier(int value) const { WriteField<int>("tier", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        float foreignShare() const { return ReadField<float>("foreignShare"); }
        void SetForeignShare(float value) const { WriteField<float>("foreignShare", value); }
        float foreignLawWeight() const { return ReadField<float>("foreignLawWeight"); }
        void SetForeignLawWeight(float value) const { WriteField<float>("foreignLawWeight", value); }
        float settled() const { return ReadField<float>("settled"); }
        void SetSettled(float value) const { WriteField<float>("settled", value); }
        bool occupied() const { return ReadField<bool>("occupied"); }
        void SetOccupied(bool value) const { WriteField<bool>("occupied", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void SetTaxRate(float value) const { WriteField<float>("taxRate", value); }
        float effectiveAmbition() const { return ReadField<float>("effectiveAmbition"); }
        void SetEffectiveAmbition(float value) const { WriteField<float>("effectiveAmbition", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void SetHappiness(float value) const { WriteField<float>("happiness", value); }
        float faithMismatch() const { return ReadField<float>("faithMismatch"); }
        void SetFaithMismatch(float value) const { WriteField<float>("faithMismatch", value); }
        float levyStrain() const { return ReadField<float>("levyStrain"); }
        void SetLevyStrain(float value) const { WriteField<float>("levyStrain", value); }
        float loyaltyDriftAdd() const { return ReadField<float>("loyaltyDriftAdd"); }
        void SetLoyaltyDriftAdd(float value) const { WriteField<float>("loyaltyDriftAdd", value); }
        float treasuryDepth() const { return ReadField<float>("treasuryDepth"); }
        void SetTreasuryDepth(float value) const { WriteField<float>("treasuryDepth", value); }
        float welfareDepth() const { return ReadField<float>("welfareDepth"); }
        void SetWelfareDepth(float value) const { WriteField<float>("welfareDepth", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void SetWarWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float nobleMood() const { return ReadField<float>("nobleMood"); }
        void SetNobleMood(float value) const { WriteField<float>("nobleMood", value); }
        bool homeRuleOverForeign() const { return ReadField<bool>("homeRuleOverForeign"); }
        void SetHomeRuleOverForeign(bool value) const { WriteField<bool>("homeRuleOverForeign", value); }
        bool tightening() const { return ReadField<bool>("tightening"); }
        void SetTightening(bool value) const { WriteField<bool>("tightening", value); }
        bool borderWar() const { return ReadField<bool>("borderWar"); }
        void SetBorderWar(bool value) const { WriteField<bool>("borderWar", value); }
    };
}
