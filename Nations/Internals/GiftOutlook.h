#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class GiftOutlook : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GiftOutlook(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "GiftOutlook") {}
    public:
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        float goodwill() const { return ReadField<float>("goodwill"); }
        void SetGoodwill(float value) const { WriteField<float>("goodwill", value); }
        float grudgeEased() const { return ReadField<float>("grudgeEased"); }
        void SetGrudgeEased(float value) const { WriteField<float>("grudgeEased", value); }
        float goodwillCap() const { return ReadField<float>("goodwillCap"); }
        void SetGoodwillCap(float value) const { WriteField<float>("goodwillCap", value); }
        float goodwillNow() const { return ReadField<float>("goodwillNow"); }
        void SetGoodwillNow(float value) const { WriteField<float>("goodwillNow", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
    };
}
