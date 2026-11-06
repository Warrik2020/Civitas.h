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
        void* Capture(void* nations, void* internals) const { void* args[] = { nations, internals }; return CallStatic("Capture", args, 2); }
        void* Capture(void* core, void* nationIds, void* alive) const { void* args[] = { core, nationIds, alive }; return CallStatic("Capture", args, 3); }
        void Apply(void* ser, void* internals) const { void* args[] = { ser, internals }; CallStatic("Apply", args, 2); }
        void Apply(void* ser, void* core) const { void* args[] = { ser, core }; CallStatic("Apply", args, 2); }
    };
}
