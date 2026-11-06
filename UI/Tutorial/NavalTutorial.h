#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Tutorial
{
    class NavalTutorial : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalTutorial(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Tutorial", "NavalTutorial") {}
    public:
        void Offer() const { CallStatic("Offer", nullptr, 0); }
        void* Key() const { return ReadStaticField<void*>("Key"); }
    };
}
