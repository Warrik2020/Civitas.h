#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TradeSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradeSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TradeSystem") {}
    public:
        void RecomputeLinks(void* roads, void* grid, void* getRelation, void* linked, void* cfg) const { void* args[] = { roads, grid, getRelation, linked, cfg }; CallStatic("RecomputeLinks", args, 5); }
        void TickVolumes(void* nations, void* internals, void* linked, void* cfg) const { void* args[] = { nations, internals, linked, cfg }; CallStatic("TickVolumes", args, 4); }
        void TickIdentityErosion(void* linked, void* grid, void* identity, void* internals, void* cfg, int tick) const { void* args[] = { linked, grid, identity, internals, cfg, &tick }; CallStatic("TickIdentityErosion", args, 6); }
    };
}
