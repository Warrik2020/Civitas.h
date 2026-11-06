#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class LanguageSelector : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LanguageSelector(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "LanguageSelector") {}
    public:
        void* Attach(void* canvas) const { void* __callArgs[] = { canvas }; return CallStatic("Attach", __callArgs, 1); }
        float Width() const { return ReadStaticField<float>("Width"); }
    };
}
