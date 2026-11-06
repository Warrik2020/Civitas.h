#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class TimeSkipSession : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipSession(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "TimeSkipSession") {}
    public:
        void* Run() const { return Call("Run", nullptr, 0); }
        void* Continue_() const { return Call("Continue", nullptr, 0); }
        void Abort() const { Call("Abort", nullptr, 0); }
        void Close() const { Call("Close", nullptr, 0); }
        void* options() const { return ReadField<void*>("options"); }
        void* world() const { return ReadField<void*>("world"); }
        void* record() const { return ReadField<void*>("record"); }
        void* wokeFor() const { return ReadField<void*>("wokeFor"); }
    };
}
