#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class ArmyInspector : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyInspector(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "ArmyInspector") {}
    public:
        void Open() const { CallStatic("Open", nullptr, 0); }
        void Close() const { CallStatic("Close", nullptr, 0); }
        void CloseAll() const { CallStatic("CloseAll", nullptr, 0); }
        void Toggle() const { CallStatic("Toggle", nullptr, 0); }
        void YieldDock() const { CallStatic("YieldDock", nullptr, 0); }
    };
}
