#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Accessibility
{
    class MapPalette : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapPalette(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Accessibility", "MapPalette") {}
    public:
        void* Grade(void* c) const { void* args[] = { c }; return CallStatic("Grade", args, 1); }
        void* Adapt(void* c) const { void* args[] = { c }; return CallStatic("Adapt", args, 1); }
        float NeutralContrast() const { return ReadStaticField<float>("NeutralContrast"); }
    };
}
