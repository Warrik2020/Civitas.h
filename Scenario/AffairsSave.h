#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class AffairsSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "AffairsSave") {}
    public:
        void* Capture(void* nations, void* internals, void* identityFileIds) const { void* args[] = { nations, internals, identityFileIds }; return CallStatic("Capture", args, 3); }
        void* Capture(void* core, void* alive) const { void* args[] = { core, alive }; return CallStatic("Capture", args, 2); }
        void Apply(void* ser, void* internals, void* peopleKey) const { void* args[] = { ser, internals, peopleKey }; CallStatic("Apply", args, 3); }
        void Apply(void* ser, void* core) const { void* args[] = { ser, core }; CallStatic("Apply", args, 2); }
    };
}
