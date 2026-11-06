#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class EthnogenesisSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EthnogenesisSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "EthnogenesisSave") {}
    public:
        void* Capture(void* nations, void* internals, void* fileIds) const { void* args[] = { nations, internals, fileIds }; return CallStatic("Capture", args, 3); }
        void Apply(void* ser, void* internals, void* runtimeOf) const { void* args[] = { ser, internals, runtimeOf }; CallStatic("Apply", args, 3); }
    };
}
