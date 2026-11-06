#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Progression
{
    class ResourceMapMode : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceMapMode(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Progression", "ResourceMapMode") {}
    public:
        void* ColorOf(int k) const { void* args[] = { &k }; return CallStatic("ColorOf", args, 1); }
        void Show() const { CallStatic("Show", nullptr, 0); }
        void Hide() const { CallStatic("Hide", nullptr, 0); }
        void Toggle() const { CallStatic("Toggle", nullptr, 0); }
    };
}
