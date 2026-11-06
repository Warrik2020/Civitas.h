#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MenuBattleLayer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MenuBattleLayer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MenuBattleLayer") {}
    public:
        void* Source() const { return ReadField<void*>("Source"); }
        void SetSource(void* value) const { WriteField<void*>("Source", value); }
        float FieldWidth() const { return ReadField<float>("FieldWidth"); }
        void SetFieldWidth(float value) const { WriteField<float>("FieldWidth", value); }
    };
}
