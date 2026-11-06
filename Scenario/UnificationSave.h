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
        void* Capture(void* internals, void* identityFileIds) const { void* __callArgs[] = { internals, identityFileIds }; return CallStatic("Capture", __callArgs, 2); }
        void* CaptureOverload1(void* core, void* identityFileIds) const { void* __callArgs[] = { core, identityFileIds }; return CallStatic("Capture", __callArgs, 2); }
        void Apply(void* ser, void* internals, void* peopleKey) const { void* __callArgs[] = { ser, internals, peopleKey }; CallStatic("Apply", __callArgs, 3); }
        void ApplyOverload3(void* ser, void* core, void* peopleKey) const { void* __callArgs[] = { ser, core, peopleKey }; CallStatic("Apply", __callArgs, 3); }
    };
}
