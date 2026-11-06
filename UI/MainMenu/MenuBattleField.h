#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MenuBattleField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MenuBattleField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MenuBattleField") {}
    public:
        int Width() const { return ReadStaticField<int>("Width"); }
        int Height() const { return ReadStaticField<int>("Height"); }
        void* Pixels() const { return ReadField<void*>("Pixels"); }
    };
}
