#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class GeneralTraits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GeneralTraits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "GeneralTraits") {}
    public:
        void* At(int i) const { void* __callArgs[] = { &i }; return CallStatic("At", __callArgs, 1); }
        bool Has(int mask, int t) const { void* __callArgs[] = { &mask, &t }; return CallStaticValue<bool>("Has", __callArgs, 2); }
        bool TryGet(int t, void* def) const { void* __callArgs[] = { &t, &def }; return CallStaticValue<bool>("TryGet", __callArgs, 2); }
        void Of(int mask, void* into) const { void* __callArgs[] = { &mask, into }; CallStatic("Of", __callArgs, 2); }
        bool Fits(int mask, int t) const { void* __callArgs[] = { &mask, &t }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
    };
}
