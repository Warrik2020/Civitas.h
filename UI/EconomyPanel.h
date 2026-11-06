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
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void ShowScreenPage(void* page) const { void* args[] = { page }; Call("ShowScreenPage", args, 1); }
        void* Of(void* it) const { void* args[] = { it }; return CallStatic("Of", args, 1); }
        void Restore(void* it) const { void* args[] = { it }; Call("Restore", args, 1); }
    };
}
