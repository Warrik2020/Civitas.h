#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class EconomyPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EconomyPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "EconomyPanel") {}
    public:
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void ShowScreenPage(void* page) const { void* __callArgs[] = { page }; Call("ShowScreenPage", __callArgs, 1); }
    };
}
