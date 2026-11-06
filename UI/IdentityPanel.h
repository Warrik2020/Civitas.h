#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class IdentityPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "IdentityPanel") {}
    public:
        void Dismiss() const { CallStatic("Dismiss", nullptr, 0); }
    };
}
