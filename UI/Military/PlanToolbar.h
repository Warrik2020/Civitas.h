#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class PlanToolbar : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanToolbar(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "PlanToolbar") {}
    public:
        bool DockSpan(float& left, float& right) const { void* __callArgs[] = { &left, &right }; return CallStaticValue<bool>("DockSpan", __callArgs, 2); }
        void ToggleGroupExecute(void* g) const { void* __callArgs[] = { g }; CallStatic("ToggleGroupExecute", __callArgs, 1); }
    };
}
