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
    };
}
