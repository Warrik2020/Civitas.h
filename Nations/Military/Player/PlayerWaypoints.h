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
        void* Pending(int divisionId) const { void* args[] = { &divisionId }; return CallStatic("Pending", args, 1); }
        bool Has(int divisionId) const { void* args[] = { &divisionId }; return CallStaticValue<bool>("Has", args, 1); }
        void* MoveClearing(void* units, void* tile, int ctrlId) const { void* args[] = { units, tile, &ctrlId }; return CallStatic("MoveClearing", args, 3); }
        void* QueueOrMove(void* units, void* tile, int ctrlId) const { void* args[] = { units, tile, &ctrlId }; return CallStatic("QueueOrMove", args, 3); }
        void ClearFor(void* units) const { void* args[] = { units }; CallStatic("ClearFor", args, 1); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        void* leg() const { return ReadField<void*>("leg"); }
        void SetLeg(void* value) const { WriteField<void*>("leg", value); }
        void* next() const { return ReadField<void*>("next"); }
    };
}
