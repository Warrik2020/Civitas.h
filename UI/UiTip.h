#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiTip : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiTip(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiTip") {}
    public:
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* hotkey() const { return ReadField<void*>("hotkey"); }
        void SetHotkey(void* value) const { WriteField<void*>("hotkey", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* blocked() const { return ReadField<void*>("blocked"); }
        void SetBlocked(void* value) const { WriteField<void*>("blocked", value); }
        void* cost() const { return ReadField<void*>("cost"); }
        void SetCost(void* value) const { WriteField<void*>("cost", value); }
        void* breakdown() const { return ReadField<void*>("breakdown"); }
        void SetBreakdown(void* value) const { WriteField<void*>("breakdown", value); }
    };
}
