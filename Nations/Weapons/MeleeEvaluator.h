#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleeEvaluator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleeEvaluator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleeEvaluator") {}
    public:
        void* Measure(void* d) const { void* __callArgs[] = { d }; return CallStatic("Measure", __callArgs, 1); }
        void Validate(void* d, void* it, void* issues) const { void* __callArgs[] = { d, it, issues }; CallStatic("Validate", __callArgs, 3); }
        void* Evaluate(void* d) const { void* __callArgs[] = { d }; return CallStatic("Evaluate", __callArgs, 1); }
        void* Evaluate(void* d, void* m) const { void* __callArgs[] = { d, m }; return CallStatic("Evaluate", __callArgs, 2); }
    };
}
