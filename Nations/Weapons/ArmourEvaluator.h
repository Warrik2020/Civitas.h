#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourEvaluator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourEvaluator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourEvaluator") {}
    public:
        void* Measure(void* d) const { void* __callArgs[] = { d }; return CallStatic("Measure", __callArgs, 1); }
        void Validate(void* d, void* it, void* issues) const { void* __callArgs[] = { d, it, issues }; CallStatic("Validate", __callArgs, 3); }
        void* Evaluate(void* d) const { void* __callArgs[] = { d }; return CallStatic("Evaluate", __callArgs, 1); }
        void* Evaluate(void* d, void* m) const { void* __callArgs[] = { d, m }; return CallStatic("Evaluate", __callArgs, 2); }
        void* ErgoNote(void* s) const { void* __callArgs[] = { s }; return CallStatic("ErgoNote", __callArgs, 1); }
        float RawAt(void* s, float year) const { void* __callArgs[] = { s, &year }; return CallStaticValue<float>("RawAt", __callArgs, 2); }
        float ScoreAt(void* s, float year) const { void* __callArgs[] = { s, &year }; return CallStaticValue<float>("ScoreAt", __callArgs, 2); }
        float OrganAt(void* s, int organ, float year) const { void* __callArgs[] = { s, &organ, &year }; return CallStaticValue<float>("OrganAt", __callArgs, 3); }
        void* ErgoFactors() const { return ReadStaticField<void*>("ErgoFactors"); }
    };
}
