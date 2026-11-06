#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityPalette : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityPalette(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityPalette") {}
    public:
        void* RootFill(void* nationFill, int axis) const { void* __callArgs[] = { nationFill, &axis }; return CallStatic("RootFill", __callArgs, 2); }
        void* ProvinceFill(void* rootFill, int siblingIndex, int provinceId) const { void* __callArgs[] = { rootFill, &siblingIndex, &provinceId }; return CallStatic("ProvinceFill", __callArgs, 3); }
        void* HybridFill(void* fillA, void* fillB, int hybridId) const { void* __callArgs[] = { fillA, fillB, &hybridId }; return CallStatic("HybridFill", __callArgs, 3); }
        void* DivergentFill(void* rootFill, int newId) const { void* __callArgs[] = { rootFill, &newId }; return CallStatic("DivergentFill", __callArgs, 2); }
    };
}
