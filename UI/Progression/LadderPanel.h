#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Progression
{
    class LadderPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LadderPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Progression", "LadderPanel") {}
    public:
        void ToggleFromHud() const { CallStatic("ToggleFromHud", nullptr, 0); }
        void Open() const { CallStatic("Open", nullptr, 0); }
        void CloseDocked() const { CallStatic("CloseDocked", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
    };
}
