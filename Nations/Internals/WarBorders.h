#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarBorders : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarBorders(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarBorders") {}
    public:
        void Note(void* rel, int winnerId, int loserId, int tile) const { void* __callArgs[] = { rel, &winnerId, &loserId, &tile }; CallStatic("Note", __callArgs, 4); }
        void Record(void* rel, int winnerId, int loserId, int tile) const { void* __callArgs[] = { rel, &winnerId, &loserId, &tile }; CallStatic("Record", __callArgs, 4); }
        void Forget(void* rel) const { void* __callArgs[] = { rel }; CallStatic("Forget", __callArgs, 1); }
        void BeginSettlement() const { CallStatic("BeginSettlement", nullptr, 0); }
        void EndSettlement() const { CallStatic("EndSettlement", nullptr, 0); }
        bool Restore(void* rel, void* ctx, void* suspended = nullptr, bool reviveLandless = false) const { void* __callArgs[] = { rel, &ctx, suspended, &reviveLandless }; return CallStaticValue<bool>("Restore", __callArgs, 4); }
        void RestoreAllWarsOf(int nationId, void* mgr, void* ctx, void* suspended = nullptr, bool reviveLandless = false) const { void* __callArgs[] = { &nationId, mgr, &ctx, suspended, &reviveLandless }; CallStatic("RestoreAllWarsOf", __callArgs, 5); }
        bool HoldsGroundFor(void* rel, int nationId, void* grid) const { void* __callArgs[] = { rel, &nationId, grid }; return CallStaticValue<bool>("HoldsGroundFor", __callArgs, 3); }
        void Reapply(void* suspended, void* ctx) const { void* __callArgs[] = { suspended, &ctx }; CallStatic("Reapply", __callArgs, 2); }
        void ReapplyStillAtWar(void* suspended, void* ctx) const { void* __callArgs[] = { suspended, &ctx }; CallStatic("ReapplyStillAtWar", __callArgs, 2); }
        void ReopenWarsOf(int nationId, void* mgr) const { void* __callArgs[] = { &nationId, mgr }; CallStatic("ReopenWarsOf", __callArgs, 2); }
    };
}
