#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Accessibility
{
    class AccessibilitySettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AccessibilitySettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Accessibility", "AccessibilitySettings") {}
    public:
        void ResetToDefaults() const { CallStatic("ResetToDefaults", nullptr, 0); }
        void Apply() const { CallStatic("Apply", nullptr, 0); }
        void ApplyToMap() const { CallStatic("ApplyToMap", nullptr, 0); }
        float MinTextScale() const { return ReadStaticField<float>("MinTextScale"); }
        float MaxTextScale() const { return ReadStaticField<float>("MaxTextScale"); }
        void* TextScalePresets() const { return ReadStaticField<void*>("TextScalePresets"); }
        float NeutralContrast() const { return ReadStaticField<float>("NeutralContrast"); }
    };
}
