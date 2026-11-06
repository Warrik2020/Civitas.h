#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityBindings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityBindings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityBindings") {}
    public:
        void SetCapacity(int groupCap) const { void* __callArgs[] = { &groupCap }; Call("SetCapacity", __callArgs, 1); }
        int PartnerOf(int from, int to, int root) const { void* __callArgs[] = { &from, &to, &root }; return CallValue<int>("PartnerOf", __callArgs, 3); }
        float StrengthOf(int from, int to, int root) const { void* __callArgs[] = { &from, &to, &root }; return CallValue<float>("StrengthOf", __callArgs, 3); }
        void Refresh(int from, void* grid, void* dominantAt, void* cfg, int maxSamples = 4000) const { void* __callArgs[] = { &from, grid, dominantAt, cfg, &maxSamples }; Call("Refresh", __callArgs, 5); }
        void Forget(int root) const { void* __callArgs[] = { &root }; Call("Forget", __callArgs, 1); }
    };
}
