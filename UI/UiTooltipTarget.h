#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiTooltipTarget : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiTooltipTarget(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiTooltipTarget") {}
    public:
        void OnPointerEnter(void* e) const { void* args[] = { e }; Call("OnPointerEnter", args, 1); }
        void OnPointerExit(void* e) const { void* args[] = { e }; Call("OnPointerExit", args, 1); }
        void OnPointerDown(void* e) const { void* args[] = { e }; Call("OnPointerDown", args, 1); }
        void* provider() const { return ReadField<void*>("provider"); }
        void SetProvider(void* value) const { WriteField<void*>("provider", value); }
    };
}
