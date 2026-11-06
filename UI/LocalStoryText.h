#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LocalStoryText : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalStoryText(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LocalStoryText") {}
    public:
        void* ArcTitle(void* a) const { void* __callArgs[] = { a }; return CallStatic("ArcTitle", __callArgs, 1); }
        void* ArcHeading(void* a) const { void* __callArgs[] = { a }; return CallStatic("ArcHeading", __callArgs, 1); }
        int Tier(void* b) const { void* __callArgs[] = { &b }; return CallStaticValue<int>("Tier", __callArgs, 1); }
        void* Beat(void* a, void* b, void* tag) const { void* __callArgs[] = { a, &b, tag }; return CallStatic("Beat", __callArgs, 3); }
        void* Template_(void* a, void* b) const { void* __callArgs[] = { a, &b }; return CallStatic("Template", __callArgs, 2); }
        void* Default_(int k) const { void* __callArgs[] = { &k }; return CallStatic("Default", __callArgs, 1); }
        void* CastTag(void* a, int id) const { void* __callArgs[] = { a, &id }; return CallStatic("CastTag", __callArgs, 2); }
        void* CastName(void* a, int id) const { void* __callArgs[] = { a, &id }; return CallStatic("CastName", __callArgs, 2); }
        void* MemberList(void* a, void* tag, int max_) const { void* __callArgs[] = { a, tag, &max_ }; return CallStatic("MemberList", __callArgs, 3); }
        void* JoinNames(void* a, void* ids, void* tag, int max_) const { void* __callArgs[] = { a, ids, tag, &max_ }; return CallStatic("JoinNames", __callArgs, 4); }
        void* RoleWord(int r) const { void* __callArgs[] = { &r }; return CallStatic("RoleWord", __callArgs, 1); }
        void* KindWord(int k) const { void* __callArgs[] = { &k }; return CallStatic("KindWord", __callArgs, 1); }
        void* KindTint(int k) const { void* __callArgs[] = { &k }; return CallStatic("KindTint", __callArgs, 1); }
        void* ReasonCaption(void* r, void* plainName) const { void* __callArgs[] = { &r, plainName }; return CallStatic("ReasonCaption", __callArgs, 2); }
        void* ReasonTip(void* r) const { void* __callArgs[] = { &r }; return CallStatic("ReasonTip", __callArgs, 1); }
        void* CapitalizeFirst(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("CapitalizeFirst", __callArgs, 1); }
        void* Safe(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Safe", __callArgs, 1); }
    };
}
