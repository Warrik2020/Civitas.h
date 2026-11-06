#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VehicleEvaluator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VehicleEvaluator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VehicleEvaluator") {}
    public:
        float Width(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("Width", __callArgs, 1); }
        void* Measure(void* d) const { void* __callArgs[] = { d }; return CallStatic("Measure", __callArgs, 1); }
        void Validate(void* d, void* it, void* issues) const { void* __callArgs[] = { d, it, issues }; CallStatic("Validate", __callArgs, 3); }
        void* Evaluate(void* d) const { void* __callArgs[] = { d }; return CallStatic("Evaluate", __callArgs, 1); }
        void* Evaluate(void* d, void* m) const { void* __callArgs[] = { d, m }; return CallStatic("Evaluate", __callArgs, 2); }
        void RawOf(void* s, float& attack, float& defence) const { void* __callArgs[] = { s, &attack, &defence }; CallStatic("RawOf", __callArgs, 3); }
    };
}
