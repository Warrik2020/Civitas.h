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
        void Open(float anchorX) const { void* args[] = { &anchorX }; Call("Open", args, 1); }
        void Close() const { Call("Close", nullptr, 0); }
        void* Next() const { return Call("Next", nullptr, 0); }
    };
}
