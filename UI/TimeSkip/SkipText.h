#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class SkipText : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipText(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "SkipText") {}
    public:
        void* Name(void* w, int id, bool startOfSentence) const { void* args[] = { w, &id, &startOfSentence }; return CallStatic("Name", args, 3); }
        void* Name(void* n, bool startOfSentence) const { void* args[] = { n, &startOfSentence }; return CallStatic("Name", args, 2); }
        void* Short_(void* n) const { void* args[] = { n }; return CallStatic("Short", args, 1); }
        void* Cap(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Cap", args, 1); }
        void* Money(float value) const { void* args[] = { &value }; return CallStatic("Money", args, 1); }
        void* Signed_(float value) const { void* args[] = { &value }; return CallStatic("Signed", args, 1); }
        void* SignedInt(int value) const { void* args[] = { &value }; return CallStatic("SignedInt", args, 1); }
        void* Months(int months) const { void* args[] = { &months }; return CallStatic("Months", args, 1); }
        int MonthsBetween(int from, int to, void* cfg) const { void* args[] = { &from, &to, cfg }; return CallStaticValue<int>("MonthsBetween", args, 3); }
    };
}
