#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class LocalPoliticsSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalPoliticsSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "LocalPoliticsSave") {}
    public:
        void* Capture(void* nations, void* internals) const { void* __callArgs[] = { nations, internals }; return CallStatic("Capture", __callArgs, 2); }
        void* Capture(void* core, void* nationIds, void* alive) const { void* __callArgs[] = { core, nationIds, alive }; return CallStatic("Capture", __callArgs, 3); }
        void Apply(void* ser, void* internals) const { void* __callArgs[] = { ser, internals }; CallStatic("Apply", __callArgs, 2); }
        void ApplyOverload3(void* ser, void* core) const { void* __callArgs[] = { ser, core }; CallStatic("Apply", __callArgs, 2); }
    };
}
