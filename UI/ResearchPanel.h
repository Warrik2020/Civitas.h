#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ResearchPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResearchPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ResearchPanel") {}
    public:
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void OpenOrToggle() const { Call("OpenOrToggle", nullptr, 0); }
    };
}
