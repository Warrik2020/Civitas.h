#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class DisplaySettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DisplaySettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "DisplaySettings") {}
    public:
        int Sanitize(int fps) const { void* args[] = { &fps }; return CallStaticValue<int>("Sanitize", args, 1); }
        void* Describe(int mode) const { void* args[] = { &mode }; return CallStatic("Describe", args, 1); }
        void Invalidate() const { CallStatic("Invalidate", nullptr, 0); }
        int CurrentOptionIndex() const { return CallStaticValue<int>("CurrentOptionIndex", nullptr, 0); }
        int NearestOptionIndex(void* wh) const { void* args[] = { wh }; return CallStaticValue<int>("NearestOptionIndex", args, 1); }
        void* Describe(void* wh) const { void* args[] = { wh }; return CallStatic("Describe", args, 1); }
        void* Aspect(void* wh) const { void* args[] = { wh }; return CallStatic("Aspect", args, 1); }
        void Apply() const { CallStatic("Apply", nullptr, 0); }
        int MinFrameCap() const { return ReadStaticField<int>("MinFrameCap"); }
        int MaxFrameCap() const { return ReadStaticField<int>("MaxFrameCap"); }
        void* FrameCapPresets() const { return ReadStaticField<void*>("FrameCapPresets"); }
        int MinWidth() const { return ReadStaticField<int>("MinWidth"); }
        int MinHeight() const { return ReadStaticField<int>("MinHeight"); }
        int MaxWidth() const { return ReadStaticField<int>("MaxWidth"); }
        int MaxHeight() const { return ReadStaticField<int>("MaxHeight"); }
        void* ModePresets() const { return ReadStaticField<void*>("ModePresets"); }
    };
}
