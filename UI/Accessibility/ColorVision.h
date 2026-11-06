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
        void* Adapt(void* c, int mode) const { void* __callArgs[] = { c, &mode }; return CallStatic("Adapt", __callArgs, 2); }
        void* Describe(int mode) const { void* __callArgs[] = { &mode }; return CallStatic("Describe", __callArgs, 1); }
        void* ShortName(int mode) const { void* __callArgs[] = { &mode }; return CallStatic("ShortName", __callArgs, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
