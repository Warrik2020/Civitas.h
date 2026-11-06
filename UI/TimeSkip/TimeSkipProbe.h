#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class TimeSkipProbe : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipProbe(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "TimeSkipProbe") {}
    public:
        void Listen(bool on) const { void* args[] = { &on }; Call("Listen", args, 1); }
        void BeginStep() const { Call("BeginStep", nullptr, 0); }
        void Collect(void* into) const { void* args[] = { into }; Call("Collect", args, 1); }
    };
}
