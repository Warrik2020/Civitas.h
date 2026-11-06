#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ArmsPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmsPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ArmsPanel") {}
    public:
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void SetOpen(bool open) const { void* __callArgs[] = { &open }; Call("SetOpen", __callArgs, 1); }
        void ShowDesigns() const { Call("ShowDesigns", nullptr, 0); }
        void ShowDesigns(int domain) const { void* __callArgs[] = { &domain }; Call("ShowDesigns", __callArgs, 1); }
    };
}
