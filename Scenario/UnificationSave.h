#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class UnificationSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnificationSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "UnificationSave") {}
    public:
        void* Capture(void* internals, void* identityFileIds) const { void* args[] = { internals, identityFileIds }; return CallStatic("Capture", args, 2); }
        void* Capture(void* core, void* identityFileIds) const { void* args[] = { core, identityFileIds }; return CallStatic("Capture", args, 2); }
        void Apply(void* ser, void* internals, void* peopleKey) const { void* args[] = { ser, internals, peopleKey }; CallStatic("Apply", args, 3); }
        void Apply(void* ser, void* core, void* peopleKey) const { void* args[] = { ser, core, peopleKey }; CallStatic("Apply", args, 3); }
    };
}
