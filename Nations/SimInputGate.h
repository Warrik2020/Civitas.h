#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SimInputGate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimInputGate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SimInputGate") {}
    public:
        void* Ensure(void* host) const { void* __callArgs[] = { host }; return CallStatic("Ensure", __callArgs, 1); }
        void DeferWrites(void* slider) const { void* __callArgs[] = { slider }; CallStatic("DeferWrites", __callArgs, 1); }
    };
}
