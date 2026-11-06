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
        void* Capture(void* internals, void* identityFileIds) const { void* __callArgs[] = { internals, identityFileIds }; return CallStatic("Capture", __callArgs, 2); }
        void* ToSer(void* m, void* identityFileIds) const { void* __callArgs[] = { m, identityFileIds }; return CallStatic("ToSer", __callArgs, 2); }
        void* FromSer(void* s, void* peopleKey) const { void* __callArgs[] = { s, peopleKey }; return CallStatic("FromSer", __callArgs, 2); }
        void Apply(void* ser, void* internals, void* peopleKey) const { void* __callArgs[] = { ser, internals, peopleKey }; CallStatic("Apply", __callArgs, 3); }
    };
}
