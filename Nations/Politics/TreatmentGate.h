#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class TreatmentGate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreatmentGate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "TreatmentGate") {}
    public:
        int block() const { return ReadField<int>("block"); }
        void SetBlock(int value) const { WriteField<int>("block", value); }
        bool harsher() const { return ReadField<bool>("harsher"); }
        void SetHarsher(bool value) const { WriteField<bool>("harsher", value); }
        int effectiveAfter() const { return ReadField<int>("effectiveAfter"); }
        void SetEffectiveAfter(int value) const { WriteField<int>("effectiveAfter", value); }
        float cooldownYears() const { return ReadField<float>("cooldownYears"); }
        void SetCooldownYears(float value) const { WriteField<float>("cooldownYears", value); }
        float restsYearsLeft() const { return ReadField<float>("restsYearsLeft"); }
        void SetRestsYearsLeft(float value) const { WriteField<float>("restsYearsLeft", value); }
    };
}
