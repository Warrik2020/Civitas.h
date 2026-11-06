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
        void* Attach(void* canvas, int seed) const { void* __callArgs[] = { canvas, &seed }; return CallStatic("Attach", __callArgs, 2); }
        void BuildFade(void* canvas) const { void* __callArgs[] = { canvas }; Call("BuildFade", __callArgs, 1); }
        void FadeIn(float seconds = 1.1f) const { void* __callArgs[] = { &seconds }; Call("FadeIn", __callArgs, 1); }
        void* FadeOut(float seconds = 0.4f) const { void* __callArgs[] = { &seconds }; return Call("FadeOut", __callArgs, 1); }
    };
}
