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
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* show() const { return ReadField<void*>("show"); }
        void SetShow(void* value) const { WriteField<void*>("show", value); }
        void* hide() const { return ReadField<void*>("hide"); }
        void SetHide(void* value) const { WriteField<void*>("hide", value); }
        void* shown() const { return ReadField<void*>("shown"); }
        void SetShown(void* value) const { WriteField<void*>("shown", value); }
        void* window() const { return ReadField<void*>("window"); }
        void SetWindow(void* value) const { WriteField<void*>("window", value); }
        void* header() const { return ReadField<void*>("header"); }
        void SetHeader(void* value) const { WriteField<void*>("header", value); }
        void* available() const { return ReadField<void*>("available"); }
        void SetAvailable(void* value) const { WriteField<void*>("available", value); }
    };
}
