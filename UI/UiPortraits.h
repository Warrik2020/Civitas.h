#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPortraits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPortraits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPortraits") {}
    public:
        void* For_(void* leader, int ideology, void* realm) const { void* args[] = { leader, &ideology, realm }; return CallStatic("For", args, 3); }
        bool Shown() const { return ReadStaticField<bool>("Shown"); }
    };
}
