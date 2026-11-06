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
        void Note(void* rel, int winnerId, int loserId, int tile) const { void* args[] = { rel, &winnerId, &loserId, &tile }; CallStatic("Note", args, 4); }
        void Record(void* rel, int winnerId, int loserId, int tile) const { void* args[] = { rel, &winnerId, &loserId, &tile }; CallStatic("Record", args, 4); }
        void Forget(void* rel) const { void* args[] = { rel }; CallStatic("Forget", args, 1); }
        void BeginSettlement() const { CallStatic("BeginSettlement", nullptr, 0); }
        void EndSettlement() const { CallStatic("EndSettlement", nullptr, 0); }
        bool Restore(void* rel, void* ctx, void* suspended = nullptr, bool reviveLandless = false) const { void* args[] = { rel, &ctx, suspended, &reviveLandless }; return CallStaticValue<bool>("Restore", args, 4); }
        void RestoreAllWarsOf(int nationId, void* mgr, void* ctx, void* suspended = nullptr, bool reviveLandless = false) const { void* args[] = { &nationId, mgr, &ctx, suspended, &reviveLandless }; CallStatic("RestoreAllWarsOf", args, 5); }
        bool HoldsGroundFor(void* rel, int nationId, void* grid) const { void* args[] = { rel, &nationId, grid }; return CallStaticValue<bool>("HoldsGroundFor", args, 3); }
        void Reapply(void* suspended, void* ctx) const { void* args[] = { suspended, &ctx }; CallStatic("Reapply", args, 2); }
        void ReapplyStillAtWar(void* suspended, void* ctx) const { void* args[] = { suspended, &ctx }; CallStatic("ReapplyStillAtWar", args, 2); }
        void ReopenWarsOf(int nationId, void* mgr) const { void* args[] = { &nationId, mgr }; CallStatic("ReopenWarsOf", args, 2); }
        void* rel() const { return ReadField<void*>("rel"); }
        void SetRel(void* value) const { WriteField<void*>("rel", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        int occupier() const { return ReadField<int>("occupier"); }
        void SetOccupier(int value) const { WriteField<int>("occupier", value); }
        int prewarOwner() const { return ReadField<int>("prewarOwner"); }
        void SetPrewarOwner(int value) const { WriteField<int>("prewarOwner", value); }
    };
}
