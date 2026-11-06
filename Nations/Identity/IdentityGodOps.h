#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityGodOps : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityGodOps(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityGodOps") {}
    public:
        int RelabelFamily(int axis, void* rt, void* grid, void* ctx, int fromRoot, uint16_t toKey, void* onFlip, void* chunks) const { void* args[] = { &axis, rt, grid, ctx, &fromRoot, &toKey, onFlip, chunks }; return CallStaticValue<int>("RelabelFamily", args, 8); }
        int AssimilateOwned(int axis, void* rt, void* grid, void* ctx, int owner, int minX, int minY, int maxX, int maxY, int root, void* onFlip, void* chunks) const { void* args[] = { &axis, rt, grid, ctx, &owner, &minX, &minY, &maxX, &maxY, &root, onFlip, chunks }; return CallStaticValue<int>("AssimilateOwned", args, 12); }
        int RelabelOwned(int axis, void* rt, void* grid, void* ctx, int owner, int minX, int minY, int maxX, int maxY, int fromRoot, uint16_t toKey, void* onFlip, void* chunks, int stateId = -1) const { void* args[] = { &axis, rt, grid, ctx, &owner, &minX, &minY, &maxX, &maxY, &fromRoot, &toKey, onFlip, chunks, &stateId }; return CallStaticValue<int>("RelabelOwned", args, 14); }
    };
}
