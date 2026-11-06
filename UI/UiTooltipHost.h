#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiTooltipHost : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiTooltipHost(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiTooltipHost") {}
    public:
        void Enter(void* target) const { void* __callArgs[] = { target }; CallStatic("Enter", __callArgs, 1); }
        void Exit(void* target) const { void* __callArgs[] = { target }; CallStatic("Exit", __callArgs, 1); }
        void HideCurrent() const { CallStatic("HideCurrent", nullptr, 0); }
        void SetOrder(int order) const { void* __callArgs[] = { &order }; CallStatic("SetOrder", __callArgs, 1); }
    };
}
