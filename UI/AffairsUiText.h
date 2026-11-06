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
        void* ThemeWord(int t) const { void* args[] = { &t }; return CallStatic("ThemeWord", args, 1); }
        void* ThemeTint(int t) const { void* args[] = { &t }; return CallStatic("ThemeTint", args, 1); }
        void* Outcome(const char* outcome) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(outcome ? outcome : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Outcome", args, 1); }
        void* Date(int worldTick, void* nations) const { void* args[] = { &worldTick, nations }; return CallStatic("Date", args, 2); }
        void* Year(int worldTick, void* nations) const { void* args[] = { &worldTick, nations }; return CallStatic("Year", args, 2); }
        void* CostLine(void* c, void* o) const { void* args[] = { c, o }; return CallStatic("CostLine", args, 2); }
        void* OptionDetail(void* c, void* o, bool affordable, const char* why) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* args[] = { c, o, &affordable, managed_3 }; return CallStatic("OptionDetail", args, 4); }
        void* TreeLine(void* c, void* o) const { void* args[] = { c, o }; return CallStatic("TreeLine", args, 2); }
        void* StatusWord(int s) const { void* args[] = { &s }; return CallStatic("StatusWord", args, 1); }
        void* Safe(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Safe", args, 1); }
    };
}
