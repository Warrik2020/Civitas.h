#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiSfxHook : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiSfxHook(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiSfxHook") {}
    public:
        void OnPointerEnter(void* e) const { void* args[] = { e }; Call("OnPointerEnter", args, 1); }
        void OnPointerDown(void* e) const { void* args[] = { e }; Call("OnPointerDown", args, 1); }
    };
}
