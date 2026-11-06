#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class AffairsUiText : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsUiText(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "AffairsUiText") {}
    public:
        void* ThemeWord(int t) const { void* __callArgs[] = { &t }; return CallStatic("ThemeWord", __callArgs, 1); }
        void* ThemeTint(int t) const { void* __callArgs[] = { &t }; return CallStatic("ThemeTint", __callArgs, 1); }
        void* Outcome(const char* outcome) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(outcome ? outcome : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Outcome", __callArgs, 1); }
        void* Date(int worldTick, void* nations) const { void* __callArgs[] = { &worldTick, nations }; return CallStatic("Date", __callArgs, 2); }
        void* Year(int worldTick, void* nations) const { void* __callArgs[] = { &worldTick, nations }; return CallStatic("Year", __callArgs, 2); }
        void* CostLine(void* c, void* o) const { void* __callArgs[] = { c, o }; return CallStatic("CostLine", __callArgs, 2); }
        void* OptionDetail(void* c, void* o, bool affordable, const char* why) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* __callArgs[] = { c, o, &affordable, managed_3 }; return CallStatic("OptionDetail", __callArgs, 4); }
        void* TreeLine(void* c, void* o) const { void* __callArgs[] = { c, o }; return CallStatic("TreeLine", __callArgs, 2); }
        void* StatusWord(int s) const { void* __callArgs[] = { &s }; return CallStatic("StatusWord", __callArgs, 1); }
        void* Safe(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Safe", __callArgs, 1); }
    };
}
