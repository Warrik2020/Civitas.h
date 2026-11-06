#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPickArea : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPickArea(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPickArea") {}
    public:
        void OnPointerDown(void* e) const { void* args[] = { e }; Call("OnPointerDown", args, 1); }
        void OnDrag(void* e) const { void* args[] = { e }; Call("OnDrag", args, 1); }
        void OnPointerUp(void* e) const { void* args[] = { e }; Call("OnPointerUp", args, 1); }
        void* onPick() const { return ReadField<void*>("onPick"); }
        void SetOnPick(void* value) const { WriteField<void*>("onPick", value); }
        void* onRelease() const { return ReadField<void*>("onRelease"); }
        void SetOnRelease(void* value) const { WriteField<void*>("onRelease", value); }
    };
}
