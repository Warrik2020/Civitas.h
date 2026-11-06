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
        void SetCapacity(int groupCap) const { void* args[] = { &groupCap }; Call("SetCapacity", args, 1); }
        int PartnerOf(int from, int to, int root) const { void* args[] = { &from, &to, &root }; return CallValue<int>("PartnerOf", args, 3); }
        float StrengthOf(int from, int to, int root) const { void* args[] = { &from, &to, &root }; return CallValue<float>("StrengthOf", args, 3); }
        void Refresh(int from, void* grid, void* dominantAt, void* cfg, int maxSamples = 4000) const { void* args[] = { &from, grid, dominantAt, cfg, &maxSamples }; Call("Refresh", args, 5); }
        void Forget(int root) const { void* args[] = { &root }; Call("Forget", args, 1); }
    };
}
