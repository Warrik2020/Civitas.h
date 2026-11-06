#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Tutorial
{
    class TutorialCoach : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TutorialCoach(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Tutorial", "TutorialCoach") {}
    public:
        void ResetTopics(void* keys) const { void* args[] = { keys }; CallStatic("ResetTopics", args, 1); }
        void Restart() const { Call("Restart", nullptr, 0); }
    };
}
