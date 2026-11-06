#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class OrdersBar : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OrdersBar(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "OrdersBar") {}
    public:
        void Dismiss() const { CallStatic("Dismiss", nullptr, 0); }
        void Restore() const { CallStatic("Restore", nullptr, 0); }
    };
}
