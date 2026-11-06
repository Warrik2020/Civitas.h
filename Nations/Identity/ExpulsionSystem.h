#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class ExpulsionSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ExpulsionSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "ExpulsionSystem") {}
    public:
        void SyncOrder(void* it, int people, int axis, bool ousts, bool purge, bool realmScope, int now) const { void* __callArgs[] = { it, &people, &axis, &ousts, &purge, &realmScope, &now }; CallStatic("SyncOrder", __callArgs, 7); }
        void* Find(void* it, int people, int axis) const { void* __callArgs[] = { it, &people, &axis }; return CallStatic("Find", __callArgs, 3); }
        bool IsOusting(void* it, int people) const { void* __callArgs[] = { it, &people }; return CallStaticValue<bool>("IsOusting", __callArgs, 2); }
        void ClearOrders(void* it) const { void* __callArgs[] = { it }; CallStatic("ClearOrders", __callArgs, 1); }
        void StepUnrest(void* it, void* cfg, int span = 1) const { void* __callArgs[] = { it, cfg, &span }; CallStatic("StepUnrest", __callArgs, 3); }
        void Tick(void* nations, void* getInternals, void* ctx) const { void* __callArgs[] = { nations, getInternals, &ctx }; CallStatic("Tick", __callArgs, 3); }
    };
}
