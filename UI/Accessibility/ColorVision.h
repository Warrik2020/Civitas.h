#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Accessibility
{
    class ColorVision : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ColorVision(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Accessibility", "ColorVision") {}
    public:
        void* Adapt(void* c, int mode) const { void* args[] = { c, &mode }; return CallStatic("Adapt", args, 2); }
        void* Describe(int mode) const { void* args[] = { &mode }; return CallStatic("Describe", args, 1); }
        void* ShortName(int mode) const { void* args[] = { &mode }; return CallStatic("ShortName", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
