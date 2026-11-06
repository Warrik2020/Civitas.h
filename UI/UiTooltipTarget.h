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
        void OnPointerEnter(void* e) const { void* __callArgs[] = { e }; Call("OnPointerEnter", __callArgs, 1); }
        void OnPointerExit(void* e) const { void* __callArgs[] = { e }; Call("OnPointerExit", __callArgs, 1); }
        void OnPointerDown(void* e) const { void* __callArgs[] = { e }; Call("OnPointerDown", __callArgs, 1); }
        void* provider() const { return ReadField<void*>("provider"); }
        void provider(void* value) const { WriteField<void*>("provider", value); }
    };
}
