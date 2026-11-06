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
        void Build(void* into, void* ctx) const { void* __callArgs[] = { into, &ctx }; CallStatic("Build", __callArgs, 2); }
        void BuildMenu(int menu, void* ctx, void* into) const { void* __callArgs[] = { &menu, &ctx, into }; CallStatic("BuildMenu", __callArgs, 3); }
        void Invoke(int kind, int arg, void* ctx, void* report) const { void* __callArgs[] = { &kind, &arg, &ctx, report }; CallStatic("Invoke", __callArgs, 4); }
    };
}
