#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ConversionSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ConversionSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ConversionSave") {}
    public:
        void* Capture(void* fileIds) const { void* args[] = { fileIds }; return CallStatic("Capture", args, 1); }
        void Apply(void* ser, void* runtimeOf) const { void* args[] = { ser, runtimeOf }; CallStatic("Apply", args, 2); }
    };
}
