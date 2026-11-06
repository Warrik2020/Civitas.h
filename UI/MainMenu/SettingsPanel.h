#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class SettingsPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SettingsPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "SettingsPanel") {}
    public:
        void Open(int sortingOrder = 95) const { void* __callArgs[] = { &sortingOrder }; CallStatic("Open", __callArgs, 1); }
        void OpenBeside(int sortingOrder) const { void* __callArgs[] = { &sortingOrder }; CallStatic("OpenBeside", __callArgs, 1); }
        void CloseIfOpen() const { CallStatic("CloseIfOpen", nullptr, 0); }
        void Close() const { Call("Close", nullptr, 0); }
    };
}
