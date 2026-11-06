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
        bool CanClaimTile(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<bool>("CanClaimTile", __callArgs, 1); }
        void AddStampedTiles(void* batch) const { void* __callArgs[] = { batch }; Call("AddStampedTiles", __callArgs, 1); }
        void CommitStroke() const { Call("CommitStroke", nullptr, 0); }
        bool IsPendingTile(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<bool>("IsPendingTile", __callArgs, 1); }
        bool DropNewestOrder() const { return CallValue<bool>("DropNewestOrder", nullptr, 0); }
        void ClearPendingClaims() const { Call("ClearPendingClaims", nullptr, 0); }
    };
}
