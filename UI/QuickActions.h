#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickActions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickActions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickActions") {}
    public:
        void Build(void* into, void* ctx) const { void* args[] = { into, &ctx }; CallStatic("Build", args, 2); }
        void BuildMenu(int menu, void* ctx, void* into) const { void* args[] = { &menu, &ctx, into }; CallStatic("BuildMenu", args, 3); }
        void Invoke(int kind, int arg, void* ctx, void* report) const { void* args[] = { &kind, &arg, &ctx, report }; CallStatic("Invoke", args, 4); }
    };
}
