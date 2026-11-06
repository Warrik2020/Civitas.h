#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NationMerge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationMerge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NationMerge") {}
    public:
        void Absorb(int survivorId, int absorbedId, void* mgr, void* ctx, bool blendIdentity = true, bool keepSurvivorName = false) const { void* args[] = { &survivorId, &absorbedId, mgr, &ctx, &blendIdentity, &keepSurvivorName }; CallStatic("Absorb", args, 6); }
    };
}
