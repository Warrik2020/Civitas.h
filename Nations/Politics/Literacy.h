#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class Literacy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Literacy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "Literacy") {}
    public:
        void Fold(void* it, void* m) const { void* args[] = { it, &m }; CallStatic("Fold", args, 2); }
        float NoAlphabetResearchMul() const { return ReadStaticField<float>("NoAlphabetResearchMul"); }
        void* NoAlphabet() const { return ReadStaticField<void*>("NoAlphabet"); }
    };
}
