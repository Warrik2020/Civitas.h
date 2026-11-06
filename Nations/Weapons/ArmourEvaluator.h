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
        void* Measure(void* d) const { void* args[] = { d }; return CallStatic("Measure", args, 1); }
        void Validate(void* d, void* it, void* issues) const { void* args[] = { d, it, issues }; CallStatic("Validate", args, 3); }
        void* Evaluate(void* d) const { void* args[] = { d }; return CallStatic("Evaluate", args, 1); }
        void* Evaluate(void* d, void* m) const { void* args[] = { d, m }; return CallStatic("Evaluate", args, 2); }
        void* ErgoNote(void* s) const { void* args[] = { s }; return CallStatic("ErgoNote", args, 1); }
        float RawAt(void* s, float year) const { void* args[] = { s, &year }; return CallStaticValue<float>("RawAt", args, 2); }
        float ScoreAt(void* s, float year) const { void* args[] = { s, &year }; return CallStaticValue<float>("ScoreAt", args, 2); }
        float OrganAt(void* s, int organ, float year) const { void* args[] = { s, &organ, &year }; return CallStaticValue<float>("OrganAt", args, 3); }
        void* ErgoFactors() const { return ReadStaticField<void*>("ErgoFactors"); }
    };
}
