#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class PlanTools : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanTools(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "PlanTools") {}
    public:
        void ToggleFront() const { CallStatic("ToggleFront", nullptr, 0); }
        void ToggleFallback() const { CallStatic("ToggleFallback", nullptr, 0); }
        void ToggleOffensive() const { CallStatic("ToggleOffensive", nullptr, 0); }
        void ToggleSpearhead() const { CallStatic("ToggleSpearhead", nullptr, 0); }
        void ToggleDelete() const { CallStatic("ToggleDelete", nullptr, 0); }
        void CancelTool() const { CallStatic("CancelTool", nullptr, 0); }
        void* ArmyAtScreen(void* screen) const { void* __callArgs[] = { screen }; return CallStatic("ArmyAtScreen", __callArgs, 1); }
    };
}
