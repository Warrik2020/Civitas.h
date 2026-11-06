#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Accessibility
{
    class UiScaleDriver : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiScaleDriver(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Accessibility", "UiScaleDriver") {}
    public:
        void Apply(void* scaler) const { void* __callArgs[] = { scaler }; CallStatic("Apply", __callArgs, 1); }
        void ApplyNow() const { CallStatic("ApplyNow", nullptr, 0); }
        void Ensure() const { CallStatic("Ensure", nullptr, 0); }
        void* BaseReference() const { return ReadStaticField<void*>("BaseReference"); }
        bool FullScanEachPoll() const { return ReadStaticField<bool>("FullScanEachPoll"); }
        void FullScanEachPoll(bool value) const { WriteStaticField<bool>("FullScanEachPoll", value); }
    };
}
