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
        void Arm(void* atStart) const { void* __callArgs[] = { atStart }; Call("Arm", __callArgs, 1); }
        void Evaluate(int month, void* candidates, void* options, void* wake, void* quiet) const { void* __callArgs[] = { &month, candidates, options, wake, quiet }; Call("Evaluate", __callArgs, 5); }
        void Snooze(void* reasons, int month) const { void* __callArgs[] = { reasons, &month }; Call("Snooze", __callArgs, 2); }
        bool IsKnown(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallValue<bool>("IsKnown", __callArgs, 1); }
    };
}
