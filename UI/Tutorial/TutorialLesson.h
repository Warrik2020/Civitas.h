#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Tutorial
{
    class TutorialLesson : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TutorialLesson(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Tutorial", "TutorialLesson") {}
    public:
        void* title() const { return ReadField<void*>("title"); }
        void* body() const { return ReadField<void*>("body"); }
        void* objective() const { return ReadField<void*>("objective"); }
        void* target() const { return ReadField<void*>("target"); }
    };
}
