#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Notices
{
    class NoticeAlerts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NoticeAlerts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Notices", "NoticeAlerts") {}
    public:
        void Watch(void* alerts, int player) const { void* __callArgs[] = { alerts, &player }; CallStatic("Watch", __callArgs, 2); }
    };
}
