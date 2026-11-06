#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionArmy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionArmy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionArmy") {}
    public:
        int FairTarget(void* union_, int memberId, void* mgr, void* ctx) const { void* args[] = { union_, &memberId, mgr, &ctx }; return CallStaticValue<int>("FairTarget", args, 4); }
        int FairTargetOf(int divisions, int memberTiles, int64_t land) const { void* args[] = { &divisions, &memberTiles, &land }; return CallStaticValue<int>("FairTargetOf", args, 3); }
        int OwedOf(int target, int own, int rulerOwn) const { void* args[] = { &target, &own, &rulerOwn }; return CallStaticValue<int>("OwedOf", args, 3); }
        int Owed(void* union_, int memberId, void* mgr, void* ctx) const { void* args[] = { union_, &memberId, mgr, &ctx }; return CallStaticValue<int>("Owed", args, 4); }
        int Give(int rulerId, int memberId, int count, void* mgr) const { void* args[] = { &rulerId, &memberId, &count, mgr }; return CallStaticValue<int>("Give", args, 4); }
        void PoolInto(int rulerId, int newcomerId, int garrison, void* mgr, void* ctx, bool keepOwn = false) const { void* args[] = { &rulerId, &newcomerId, &garrison, mgr, &ctx, &keepOwn }; CallStatic("PoolInto", args, 6); }
        void* SnapshotOwed(void** args = nullptr, int count = 0) const { return CallStatic("SnapshotOwed", args, count); }
    };
}
