#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerWaypoints : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerWaypoints(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerWaypoints") {}
    public:
        void* Pending(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallStatic("Pending", __callArgs, 1); }
        bool Has(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallStaticValue<bool>("Has", __callArgs, 1); }
        void* MoveClearing(void* units, void* tile, int ctrlId) const { void* __callArgs[] = { units, tile, &ctrlId }; return CallStatic("MoveClearing", __callArgs, 3); }
        void* QueueOrMove(void* units, void* tile, int ctrlId) const { void* __callArgs[] = { units, tile, &ctrlId }; return CallStatic("QueueOrMove", __callArgs, 3); }
        void ClearFor(void* units) const { void* __callArgs[] = { units }; CallStatic("ClearFor", __callArgs, 1); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
    };
}
