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
        void OnBeginDrag(void* e) const { void* args[] = { e }; Call("OnBeginDrag", args, 1); }
        void OnDrag(void* e) const { void* args[] = { e }; Call("OnDrag", args, 1); }
        void OnEndDrag(void* e) const { void* args[] = { e }; Call("OnEndDrag", args, 1); }
        void* onDrag() const { return ReadField<void*>("onDrag"); }
        void SetOnDrag(void* value) const { WriteField<void*>("onDrag", value); }
        void* onEnd() const { return ReadField<void*>("onEnd"); }
        void SetOnEnd(void* value) const { WriteField<void*>("onEnd", value); }
    };
}
