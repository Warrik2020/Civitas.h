#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiDragRelay : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiDragRelay(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiDragRelay") {}
    public:
        void OnBeginDrag(void* e) const { void* __callArgs[] = { e }; Call("OnBeginDrag", __callArgs, 1); }
        void OnDrag(void* e) const { void* __callArgs[] = { e }; Call("OnDrag", __callArgs, 1); }
        void OnEndDrag(void* e) const { void* __callArgs[] = { e }; Call("OnEndDrag", __callArgs, 1); }
        void* onDrag() const { return ReadField<void*>("onDrag"); }
        void onDrag(void* value) const { WriteField<void*>("onDrag", value); }
        void* onEnd() const { return ReadField<void*>("onEnd"); }
        void onEnd(void* value) const { WriteField<void*>("onEnd", value); }
    };
}
