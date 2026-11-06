#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyValidate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyValidate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyValidate") {}
    public:
        void Run(void* lib) const { void* __callArgs[] = { lib }; CallStatic("Run", __callArgs, 1); }
        void* Tokens() const { return ReadStaticField<void*>("Tokens"); }
    };
}
