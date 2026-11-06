#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class EthnogenesisSpawn : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EthnogenesisSpawn(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "EthnogenesisSpawn") {}
    public:
        void SharesOf(void* ctx, void* m, int rootA, int rootB, int& sa, int& sb) const { void* __callArgs[] = { ctx, &m, &rootA, &rootB, &sa, &sb }; CallStatic("SharesOf", __callArgs, 6); }
        int Plan(void* rt, void* grid, void* ctx, int rootA, int rootB, int x0, int y0, int x1, int y1, int ring, int cap, void* tiles, void* dist, void* seen) const { void* __callArgs[] = { rt, grid, ctx, &rootA, &rootB, &x0, &y0, &x1, &y1, &ring, &cap, tiles, dist, seen }; return CallStaticValue<int>("Plan", __callArgs, 14); }
        int Anchor(void* tiles, int seam, int width, int cx, int cy) const { void* __callArgs[] = { tiles, &seam, &width, &cx, &cy }; return CallStaticValue<int>("Anchor", __callArgs, 5); }
        void Apply(int axis, void* rt, void* grid, void* ctx, int rootA, int rootB, int newGid, void* tiles, void* dist, int core, void* onFlip, void* chunks, void* coreOwners) const { void* __callArgs[] = { &axis, rt, grid, ctx, &rootA, &rootB, &newGid, tiles, dist, &core, onFlip, chunks, coreOwners }; CallStatic("Apply", __callArgs, 13); }
        void* RelabelRoots(void* ctx, void* m, int rootA, int rootB, uint16_t toKey) const { void* __callArgs[] = { ctx, m, &rootA, &rootB, &toKey }; return CallStatic("RelabelRoots", __callArgs, 5); }
        void* HalfToward(void* ctx, void* m, int rootA, int rootB, uint16_t toKey) const { void* __callArgs[] = { ctx, m, &rootA, &rootB, &toKey }; return CallStatic("HalfToward", __callArgs, 5); }
        void RescanAround(void* rt, void* chunks) const { void* __callArgs[] = { rt, chunks }; CallStatic("RescanAround", __callArgs, 2); }
    };
}
