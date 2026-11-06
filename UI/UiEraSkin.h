#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiEraSkin : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiEraSkin(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiEraSkin") {}
    public:
        void Bind(void* img, int slot) const { void* __callArgs[] = { img, &slot }; CallStatic("Bind", __callArgs, 2); }
    };
}
