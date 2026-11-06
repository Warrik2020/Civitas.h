#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickInteractPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickInteractPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickInteractPanel") {}
    public:
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
    };
}
