#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class AffairsPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "AffairsPanel") {}
    public:
        void Show() const { CallStatic("Show", nullptr, 0); }
        void HidePanel() const { CallStatic("HidePanel", nullptr, 0); }
        void OpenOn(int threadId) const { void* __callArgs[] = { &threadId }; CallStatic("OpenOn", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
    };
}
