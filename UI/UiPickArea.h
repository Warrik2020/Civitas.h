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
        void OnPointerDown(void* e) const { void* __callArgs[] = { e }; Call("OnPointerDown", __callArgs, 1); }
        void OnDrag(void* e) const { void* __callArgs[] = { e }; Call("OnDrag", __callArgs, 1); }
        void OnPointerUp(void* e) const { void* __callArgs[] = { e }; Call("OnPointerUp", __callArgs, 1); }
        void* onPick() const { return ReadField<void*>("onPick"); }
        void onPick(void* value) const { WriteField<void*>("onPick", value); }
        void* onRelease() const { return ReadField<void*>("onRelease"); }
        void onRelease(void* value) const { WriteField<void*>("onRelease", value); }
    };
}
