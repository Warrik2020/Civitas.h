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
        void* Ensure(void* host) const { void* args[] = { host }; return CallStatic("Ensure", args, 1); }
        void DeferWrites(void* slider) const { void* args[] = { slider }; CallStatic("DeferWrites", args, 1); }
    };
}
