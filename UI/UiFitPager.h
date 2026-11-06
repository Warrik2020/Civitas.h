#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiFitPager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiFitPager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiFitPager") {}
    public:
        void* Attach(void* scroll, void* barParent) const { void* args[] = { scroll, barParent }; return CallStatic("Attach", args, 2); }
        void ResetPage() const { Call("ResetPage", nullptr, 0); }
    };
}
