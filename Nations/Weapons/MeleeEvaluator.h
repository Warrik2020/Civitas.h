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
        void* Measure(void* d) const { void* args[] = { d }; return CallStatic("Measure", args, 1); }
        void Validate(void* d, void* it, void* issues) const { void* args[] = { d, it, issues }; CallStatic("Validate", args, 3); }
        void* Evaluate(void* d) const { void* args[] = { d }; return CallStatic("Evaluate", args, 1); }
        void* Evaluate(void* d, void* m) const { void* args[] = { d, m }; return CallStatic("Evaluate", args, 2); }
    };
}
