#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class SurrenderStatus : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SurrenderStatus(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "SurrenderStatus") {}
    public:
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
        float limit() const { return ReadField<float>("limit"); }
        void limit(float value) const { WriteField<float>("limit", value); }
        float vpTerm() const { return ReadField<float>("vpTerm"); }
        void vpTerm(float value) const { WriteField<float>("vpTerm", value); }
        float landTerm() const { return ReadField<float>("landTerm"); }
        void landTerm(float value) const { WriteField<float>("landTerm", value); }
        float econTerm() const { return ReadField<float>("econTerm"); }
        void econTerm(float value) const { WriteField<float>("econTerm", value); }
        int vpTotal() const { return ReadField<int>("vpTotal"); }
        void vpTotal(int value) const { WriteField<int>("vpTotal", value); }
        int vpLost() const { return ReadField<int>("vpLost"); }
        void vpLost(int value) const { WriteField<int>("vpLost", value); }
        bool broken() const { return ReadField<bool>("broken"); }
        void broken(bool value) const { WriteField<bool>("broken", value); }
        bool vpRule() const { return ReadField<bool>("vpRule"); }
        void vpRule(bool value) const { WriteField<bool>("vpRule", value); }
        bool rising() const { return ReadField<bool>("rising"); }
        void rising(bool value) const { WriteField<bool>("rising", value); }
    };
}
