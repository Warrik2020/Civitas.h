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
        void* ArcTitle(void* a) const { void* args[] = { a }; return CallStatic("ArcTitle", args, 1); }
        void* ArcHeading(void* a) const { void* args[] = { a }; return CallStatic("ArcHeading", args, 1); }
        int Tier(void* b) const { void* args[] = { &b }; return CallStaticValue<int>("Tier", args, 1); }
        void* Beat(void* a, void* b, void* tag) const { void* args[] = { a, &b, tag }; return CallStatic("Beat", args, 3); }
        void* Template_(void* a, void* b) const { void* args[] = { a, &b }; return CallStatic("Template", args, 2); }
        void* Default_(int k) const { void* args[] = { &k }; return CallStatic("Default", args, 1); }
        void* CastTag(void* a, int id) const { void* args[] = { a, &id }; return CallStatic("CastTag", args, 2); }
        void* CastName(void* a, int id) const { void* args[] = { a, &id }; return CallStatic("CastName", args, 2); }
        void* MemberList(void* a, void* tag, int max) const { void* args[] = { a, tag, &max }; return CallStatic("MemberList", args, 3); }
        void* JoinNames(void* a, void* ids, void* tag, int max) const { void* args[] = { a, ids, tag, &max }; return CallStatic("JoinNames", args, 4); }
        void* RoleWord(int r) const { void* args[] = { &r }; return CallStatic("RoleWord", args, 1); }
        void* KindWord(int k) const { void* args[] = { &k }; return CallStatic("KindWord", args, 1); }
        void* KindTint(int k) const { void* args[] = { &k }; return CallStatic("KindTint", args, 1); }
        void* ReasonCaption(void* r, void* plainName) const { void* args[] = { &r, plainName }; return CallStatic("ReasonCaption", args, 2); }
        void* ReasonTip(void* r) const { void* args[] = { &r }; return CallStatic("ReasonTip", args, 1); }
        void* CapitalizeFirst(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("CapitalizeFirst", args, 1); }
        void* Safe(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Safe", args, 1); }
    };
}
