#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Notices
{
    class NoticeCardInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NoticeCardInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Notices", "NoticeCardInput") {}
    public:
        void OnPointerClick(void* e) const { void* __callArgs[] = { e }; Call("OnPointerClick", __callArgs, 1); }
        void OnPointerEnter(void* e) const { void* __callArgs[] = { e }; Call("OnPointerEnter", __callArgs, 1); }
        void OnPointerExit(void* e) const { void* __callArgs[] = { e }; Call("OnPointerExit", __callArgs, 1); }
        void* click() const { return ReadField<void*>("click"); }
        void click(void* value) const { WriteField<void*>("click", value); }
        void* hover() const { return ReadField<void*>("hover"); }
        void hover(void* value) const { WriteField<void*>("hover", value); }
    };
}
