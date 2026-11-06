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
        void id(void* value) const { WriteField<void*>("id", value); }
        void* story() const { return ReadField<void*>("story"); }
        void story(void* value) const { WriteField<void*>("story", value); }
        void* evt() const { return ReadField<void*>("evt"); }
        void evt(void* value) const { WriteField<void*>("evt", value); }
        void* reports() const { return ReadField<void*>("reports"); }
        float minWaitDays() const { return ReadField<float>("minWaitDays"); }
        void minWaitDays(float value) const { WriteField<float>("minWaitDays", value); }
        float maxWaitDays() const { return ReadField<float>("maxWaitDays"); }
        void maxWaitDays(float value) const { WriteField<float>("maxWaitDays", value); }
        int severity() const { return ReadField<int>("severity"); }
        void severity(int value) const { WriteField<int>("severity", value); }
        bool severitySet() const { return ReadField<bool>("severitySet"); }
        void severitySet(bool value) const { WriteField<bool>("severitySet", value); }
        bool silent() const { return ReadField<bool>("silent"); }
        void silent(bool value) const { WriteField<bool>("silent", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void fallback(void* value) const { WriteField<void*>("fallback", value); }
        void* endOutcome() const { return ReadField<void*>("endOutcome"); }
        void endOutcome(void* value) const { WriteField<void*>("endOutcome", value); }
        void* choice() const { return ReadField<void*>("choice"); }
        void choice(void* value) const { WriteField<void*>("choice", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void* next() const { return ReadField<void*>("next"); }
        int line() const { return ReadField<int>("line"); }
        void line(int value) const { WriteField<int>("line", value); }
    };
}
