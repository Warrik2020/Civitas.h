#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class TimeSkipWake : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipWake(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "TimeSkipWake") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void Arm(void* atStart) const { void* args[] = { atStart }; Call("Arm", args, 1); }
        void Evaluate(int month, void* candidates, void* options, void* wake, void* quiet) const { void* args[] = { &month, candidates, options, wake, quiet }; Call("Evaluate", args, 5); }
        void Snooze(void* reasons, int month) const { void* args[] = { reasons, &month }; Call("Snooze", args, 2); }
        bool IsKnown(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallValue<bool>("IsKnown", args, 1); }
    };
}
