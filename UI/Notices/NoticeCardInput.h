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
        void OnPointerClick(void* e) const { void* args[] = { e }; Call("OnPointerClick", args, 1); }
        void OnPointerEnter(void* e) const { void* args[] = { e }; Call("OnPointerEnter", args, 1); }
        void OnPointerExit(void* e) const { void* args[] = { e }; Call("OnPointerExit", args, 1); }
        void* click() const { return ReadField<void*>("click"); }
        void SetClick(void* value) const { WriteField<void*>("click", value); }
        void* hover() const { return ReadField<void*>("hover"); }
        void SetHover(void* value) const { WriteField<void*>("hover", value); }
    };
}
