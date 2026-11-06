#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class BowEvaluator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BowEvaluator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "BowEvaluator") {}
    public:
        void* Measure(void* d) const { void* args[] = { d }; return CallStatic("Measure", args, 1); }
        void* Evaluate(void* d) const { void* args[] = { d }; return CallStatic("Evaluate", args, 1); }
        void* Evaluate(void* d, void* m) const { void* args[] = { d, m }; return CallStatic("Evaluate", args, 2); }
        float DrawLbf(void* d, int kind) const { void* args[] = { d, &kind }; return CallStaticValue<float>("DrawLbf", args, 2); }
        float DrawLbf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("DrawLbf", args, 1); }
        float Ceiling(void* d, int kind, int limb) const { void* args[] = { d, &kind, &limb }; return CallStaticValue<float>("Ceiling", args, 3); }
        float Ceiling(void* d) const { void* args[] = { d }; return CallStaticValue<float>("Ceiling", args, 1); }
        void Validate(void* d, void* it, void* issues) const { void* args[] = { d, it, issues }; CallStatic("Validate", args, 3); }
    };
}
