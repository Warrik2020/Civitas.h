#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Expansion
{
    class ExpansionManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ExpansionManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Expansion", "ExpansionManager") {}
    public:
        bool CanClaimTile(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<bool>("CanClaimTile", args, 1); }
        void AddStampedTiles(void* batch) const { void* args[] = { batch }; Call("AddStampedTiles", args, 1); }
        void CommitStroke() const { Call("CommitStroke", nullptr, 0); }
        bool IsPendingTile(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<bool>("IsPendingTile", args, 1); }
        bool DropNewestOrder() const { return CallValue<bool>("DropNewestOrder", nullptr, 0); }
        void ClearPendingClaims() const { Call("ClearPendingClaims", nullptr, 0); }
        void* pending() const { return ReadField<void*>("pending"); }
        void SetPending(void* value) const { WriteField<void*>("pending", value); }
        void* seeds() const { return ReadField<void*>("seeds"); }
        void SetSeeds(void* value) const { WriteField<void*>("seeds", value); }
        int frontierCount() const { return ReadField<int>("frontierCount"); }
        void SetFrontierCount(int value) const { WriteField<int>("frontierCount", value); }
        int idleTicks() const { return ReadField<int>("idleTicks"); }
        void SetIdleTicks(int value) const { WriteField<int>("idleTicks", value); }
    };
}
