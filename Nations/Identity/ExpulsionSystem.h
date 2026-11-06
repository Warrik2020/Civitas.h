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
        void SyncOrder(void* it, int people, int axis, bool ousts, bool purge, bool realmScope, int now) const { void* args[] = { it, &people, &axis, &ousts, &purge, &realmScope, &now }; CallStatic("SyncOrder", args, 7); }
        void* Find(void* it, int people, int axis) const { void* args[] = { it, &people, &axis }; return CallStatic("Find", args, 3); }
        bool IsOusting(void* it, int people) const { void* args[] = { it, &people }; return CallStaticValue<bool>("IsOusting", args, 2); }
        void ClearOrders(void* it) const { void* args[] = { it }; CallStatic("ClearOrders", args, 1); }
        void StepUnrest(void* it, void* cfg, int span = 1) const { void* args[] = { it, cfg, &span }; CallStatic("StepUnrest", args, 3); }
        void Tick(void* nations, void* getInternals, void* ctx) const { void* args[] = { nations, getInternals, &ctx }; CallStatic("Tick", args, 3); }
        void* identity() const { return ReadField<void*>("identity"); }
        void SetIdentity(void* value) const { WriteField<void*>("identity", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* cfg() const { return ReadField<void*>("cfg"); }
        void SetCfg(void* value) const { WriteField<void*>("cfg", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void SetWorldTick(int value) const { WriteField<int>("worldTick", value); }
    };
}
