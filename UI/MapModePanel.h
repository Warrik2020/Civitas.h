#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapModePanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapModePanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapModePanel") {}
    public:
        void OpenAtRight() const { Call("OpenAtRight", nullptr, 0); }
        void Open(float anchorX) const { void* __callArgs[] = { &anchorX }; Call("Open", __callArgs, 1); }
        void Close() const { Call("Close", nullptr, 0); }
    };
}
