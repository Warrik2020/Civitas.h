#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Shell
{
    class ScreenPage : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScreenPage(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Shell", "ScreenPage") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* show() const { return ReadField<void*>("show"); }
        void show(void* value) const { WriteField<void*>("show", value); }
        void* hide() const { return ReadField<void*>("hide"); }
        void hide(void* value) const { WriteField<void*>("hide", value); }
        void* shown() const { return ReadField<void*>("shown"); }
        void shown(void* value) const { WriteField<void*>("shown", value); }
        void* window() const { return ReadField<void*>("window"); }
        void window(void* value) const { WriteField<void*>("window", value); }
        void* header() const { return ReadField<void*>("header"); }
        void header(void* value) const { WriteField<void*>("header", value); }
        void* available() const { return ReadField<void*>("available"); }
        void available(void* value) const { WriteField<void*>("available", value); }
    };
}
