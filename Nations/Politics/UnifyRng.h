#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyRng : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyRng(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyRng") {}
    public:
        float Roll(int seed, int a, int b, int c, int d) const { void* args[] = { &seed, &a, &b, &c, &d }; return CallStaticValue<float>("Roll", args, 5); }
        int Hash(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<int>("Hash", args, 1); }
    };
}
