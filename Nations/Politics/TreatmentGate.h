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
        void block(int value) const { WriteField<int>("block", value); }
        bool harsher() const { return ReadField<bool>("harsher"); }
        void harsher(bool value) const { WriteField<bool>("harsher", value); }
        int effectiveAfter() const { return ReadField<int>("effectiveAfter"); }
        void effectiveAfter(int value) const { WriteField<int>("effectiveAfter", value); }
        float cooldownYears() const { return ReadField<float>("cooldownYears"); }
        void cooldownYears(float value) const { WriteField<float>("cooldownYears", value); }
        float restsYearsLeft() const { return ReadField<float>("restsYearsLeft"); }
        void restsYearsLeft(float value) const { WriteField<float>("restsYearsLeft", value); }
    };
}
