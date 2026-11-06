#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsStepDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsStepDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsStepDef") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* story() const { return ReadField<void*>("story"); }
        void SetStory(void* value) const { WriteField<void*>("story", value); }
        void* evt() const { return ReadField<void*>("evt"); }
        void SetEvt(void* value) const { WriteField<void*>("evt", value); }
        void* reports() const { return ReadField<void*>("reports"); }
        float minWaitDays() const { return ReadField<float>("minWaitDays"); }
        void SetMinWaitDays(float value) const { WriteField<float>("minWaitDays", value); }
        float maxWaitDays() const { return ReadField<float>("maxWaitDays"); }
        void SetMaxWaitDays(float value) const { WriteField<float>("maxWaitDays", value); }
        int severity() const { return ReadField<int>("severity"); }
        void SetSeverity(int value) const { WriteField<int>("severity", value); }
        bool severitySet() const { return ReadField<bool>("severitySet"); }
        void SetSeveritySet(bool value) const { WriteField<bool>("severitySet", value); }
        bool silent() const { return ReadField<bool>("silent"); }
        void SetSilent(bool value) const { WriteField<bool>("silent", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void SetFallback(void* value) const { WriteField<void*>("fallback", value); }
        void* endOutcome() const { return ReadField<void*>("endOutcome"); }
        void SetEndOutcome(void* value) const { WriteField<void*>("endOutcome", value); }
        void* choice() const { return ReadField<void*>("choice"); }
        void SetChoice(void* value) const { WriteField<void*>("choice", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void* next() const { return ReadField<void*>("next"); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
