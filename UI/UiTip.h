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
        void title(void* value) const { WriteField<void*>("title", value); }
        void* hotkey() const { return ReadField<void*>("hotkey"); }
        void hotkey(void* value) const { WriteField<void*>("hotkey", value); }
        void* body() const { return ReadField<void*>("body"); }
        void body(void* value) const { WriteField<void*>("body", value); }
        void* blocked() const { return ReadField<void*>("blocked"); }
        void blocked(void* value) const { WriteField<void*>("blocked", value); }
        void* cost() const { return ReadField<void*>("cost"); }
        void cost(void* value) const { WriteField<void*>("cost", value); }
        void* breakdown() const { return ReadField<void*>("breakdown"); }
        void breakdown(void* value) const { WriteField<void*>("breakdown", value); }
    };
}
