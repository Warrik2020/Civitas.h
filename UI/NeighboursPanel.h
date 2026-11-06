#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NeighboursPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NeighboursPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NeighboursPanel") {}
    public:
        void ShowPage() const { CallStatic("ShowPage", nullptr, 0); }
        void HidePage() const { CallStatic("HidePage", nullptr, 0); }
        void CloseDocked() const { CallStatic("CloseDocked", nullptr, 0); }
        void Open() const { CallStatic("Open", nullptr, 0); }
        void OpenOn(int arcId) const { void* __callArgs[] = { &arcId }; CallStatic("OpenOn", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
    };
}
