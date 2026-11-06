#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PoliciesPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PoliciesPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PoliciesPanel") {}
    public:
        void ShowReunite() const { CallStatic("ShowReunite", nullptr, 0); }
        void ShowTree(int kind) const { void* __callArgs[] = { &kind }; CallStatic("ShowTree", __callArgs, 1); }
        void ShowBranch(int kind, int target, void* step) const { void* __callArgs[] = { &kind, &target, step }; CallStatic("ShowBranch", __callArgs, 3); }
        void HideIfOpen() const { CallStatic("HideIfOpen", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void OpenOrToggle() const { Call("OpenOrToggle", nullptr, 0); }
    };
}
