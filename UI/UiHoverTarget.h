#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiHoverTarget : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiHoverTarget(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiHoverTarget") {}
    public:
        void OnPointerEnter(void* e) const { void* __callArgs[] = { e }; Call("OnPointerEnter", __callArgs, 1); }
        void OnPointerExit(void* e) const { void* __callArgs[] = { e }; Call("OnPointerExit", __callArgs, 1); }
        void OnPointerDown(void* e) const { void* __callArgs[] = { e }; Call("OnPointerDown", __callArgs, 1); }
        void OnPointerClick(void* e) const { void* __callArgs[] = { e }; Call("OnPointerClick", __callArgs, 1); }
        void* onHover() const { return ReadField<void*>("onHover"); }
        void onHover(void* value) const { WriteField<void*>("onHover", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void onClick(void* value) const { WriteField<void*>("onClick", value); }
        void* onRightClick() const { return ReadField<void*>("onRightClick"); }
        void onRightClick(void* value) const { WriteField<void*>("onRightClick", value); }
    };
}
