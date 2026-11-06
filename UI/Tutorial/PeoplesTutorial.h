#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Tutorial
{
    class PeoplesTutorial : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesTutorial(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Tutorial", "PeoplesTutorial") {}
    public:
        void Offer() const { CallStatic("Offer", nullptr, 0); }
        void* Key() const { return ReadStaticField<void*>("Key"); }
    };
}
