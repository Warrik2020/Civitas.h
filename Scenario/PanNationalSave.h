#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class PanNationalSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PanNationalSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "PanNationalSave") {}
    public:
        void* Capture(void* internals, void* identityFileIds) const { void* args[] = { internals, identityFileIds }; return CallStatic("Capture", args, 2); }
        void* ToSer(void* m, void* identityFileIds) const { void* args[] = { m, identityFileIds }; return CallStatic("ToSer", args, 2); }
        void* FromSer(void* s, void* peopleKey) const { void* args[] = { s, peopleKey }; return CallStatic("FromSer", args, 2); }
        void Apply(void* ser, void* internals, void* peopleKey) const { void* args[] = { ser, internals, peopleKey }; CallStatic("Apply", args, 3); }
    };
}
