#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Notices
{
    class NoticeLogPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NoticeLogPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Notices", "NoticeLogPanel") {}
    public:
        void Toggle() const { CallStatic("Toggle", nullptr, 0); }
        void Open() const { CallStatic("Open", nullptr, 0); }
        void Close() const { CallStatic("Close", nullptr, 0); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* accent() const { return ReadField<void*>("accent"); }
        void SetAccent(void* value) const { WriteField<void*>("accent", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* date() const { return ReadField<void*>("date"); }
        void SetDate(void* value) const { WriteField<void*>("date", value); }
        void* notice() const { return ReadField<void*>("notice"); }
        void SetNotice(void* value) const { WriteField<void*>("notice", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
    };
}
