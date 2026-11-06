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
        void* Name(void* w, int id, bool startOfSentence) const { void* __callArgs[] = { w, &id, &startOfSentence }; return CallStatic("Name", __callArgs, 3); }
        void* Name(void* n, bool startOfSentence) const { void* __callArgs[] = { n, &startOfSentence }; return CallStatic("Name", __callArgs, 2); }
        void* Short_(void* n) const { void* __callArgs[] = { n }; return CallStatic("Short", __callArgs, 1); }
        void* Cap(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Cap", __callArgs, 1); }
        void* Money(float value) const { void* __callArgs[] = { &value }; return CallStatic("Money", __callArgs, 1); }
        void* Signed_(float value) const { void* __callArgs[] = { &value }; return CallStatic("Signed", __callArgs, 1); }
        void* SignedInt(int value) const { void* __callArgs[] = { &value }; return CallStatic("SignedInt", __callArgs, 1); }
        void* Months(int months) const { void* __callArgs[] = { &months }; return CallStatic("Months", __callArgs, 1); }
        int MonthsBetween(int from, int to, void* cfg) const { void* __callArgs[] = { &from, &to, cfg }; return CallStaticValue<int>("MonthsBetween", __callArgs, 3); }
    };
}
