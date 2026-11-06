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
        void* Capture(void* fileIds) const { void* __callArgs[] = { fileIds }; return CallStatic("Capture", __callArgs, 1); }
        void Apply(void* ser, void* runtimeOf) const { void* __callArgs[] = { ser, runtimeOf }; CallStatic("Apply", __callArgs, 2); }
    };
}
