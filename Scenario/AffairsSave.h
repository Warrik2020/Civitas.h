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
        void* Capture(void* nations, void* internals, void* identityFileIds) const { void* __callArgs[] = { nations, internals, identityFileIds }; return CallStatic("Capture", __callArgs, 3); }
        void* Capture(void* core, void* alive) const { void* __callArgs[] = { core, alive }; return CallStatic("Capture", __callArgs, 2); }
        void Apply(void* ser, void* internals, void* peopleKey) const { void* __callArgs[] = { ser, internals, peopleKey }; CallStatic("Apply", __callArgs, 3); }
        void Apply(void* ser, void* core) const { void* __callArgs[] = { ser, core }; CallStatic("Apply", __callArgs, 2); }
    };
}
