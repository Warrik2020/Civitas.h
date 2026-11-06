#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MenuBackdrop : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MenuBackdrop(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MenuBackdrop") {}
    public:
        void* Attach(void* canvas, int seed) const { void* args[] = { canvas, &seed }; return CallStatic("Attach", args, 2); }
        void BuildFade(void* canvas) const { void* args[] = { canvas }; Call("BuildFade", args, 1); }
        void FadeIn(float seconds) const { void* args[] = { &seconds }; Call("FadeIn", args, 1); }
        void* FadeOut(float seconds) const { void* args[] = { &seconds }; return Call("FadeOut", args, 1); }
    };
}
