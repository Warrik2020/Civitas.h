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
        void* RootFill(void* nationFill, int axis) const { void* args[] = { nationFill, &axis }; return CallStatic("RootFill", args, 2); }
        void* ProvinceFill(void* rootFill, int siblingIndex, int provinceId) const { void* args[] = { rootFill, &siblingIndex, &provinceId }; return CallStatic("ProvinceFill", args, 3); }
        void* HybridFill(void* fillA, void* fillB, int hybridId) const { void* args[] = { fillA, fillB, &hybridId }; return CallStatic("HybridFill", args, 3); }
        void* DivergentFill(void* rootFill, int newId) const { void* args[] = { rootFill, &newId }; return CallStatic("DivergentFill", args, 2); }
    };
}
