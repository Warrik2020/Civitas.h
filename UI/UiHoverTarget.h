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
        void OnPointerEnter(void* e) const { void* args[] = { e }; Call("OnPointerEnter", args, 1); }
        void OnPointerExit(void* e) const { void* args[] = { e }; Call("OnPointerExit", args, 1); }
        void OnPointerDown(void* e) const { void* args[] = { e }; Call("OnPointerDown", args, 1); }
        void OnPointerClick(void* e) const { void* args[] = { e }; Call("OnPointerClick", args, 1); }
        void* onHover() const { return ReadField<void*>("onHover"); }
        void SetOnHover(void* value) const { WriteField<void*>("onHover", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
        void* onRightClick() const { return ReadField<void*>("onRightClick"); }
        void SetOnRightClick(void* value) const { WriteField<void*>("onRightClick", value); }
    };
}
