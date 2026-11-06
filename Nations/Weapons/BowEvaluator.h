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
        void* Measure(void* d) const { void* __callArgs[] = { d }; return CallStatic("Measure", __callArgs, 1); }
        void* Evaluate(void* d) const { void* __callArgs[] = { d }; return CallStatic("Evaluate", __callArgs, 1); }
        void* Evaluate(void* d, void* m) const { void* __callArgs[] = { d, m }; return CallStatic("Evaluate", __callArgs, 2); }
        float DrawLbf(void* d, int kind) const { void* __callArgs[] = { d, &kind }; return CallStaticValue<float>("DrawLbf", __callArgs, 2); }
        float DrawLbf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("DrawLbf", __callArgs, 1); }
        float Ceiling(void* d, int kind, int limb) const { void* __callArgs[] = { d, &kind, &limb }; return CallStaticValue<float>("Ceiling", __callArgs, 3); }
        float Ceiling(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("Ceiling", __callArgs, 1); }
        void Validate(void* d, void* it, void* issues) const { void* __callArgs[] = { d, it, issues }; CallStatic("Validate", __callArgs, 3); }
    };
}
