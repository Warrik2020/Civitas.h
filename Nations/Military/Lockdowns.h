#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Lockdowns : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Lockdowns(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Lockdowns") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        bool IsLocked(int stateId, int host) const { void* args[] = { &stateId, &host }; return CallStaticValue<bool>("IsLocked", args, 2); }
        bool IsLockedTile(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallStaticValue<bool>("IsLockedTile", args, 2); }
        int CountLockedBy(int occupier, int host) const { void* args[] = { &occupier, &host }; return CallStaticValue<int>("CountLockedBy", args, 2); }
        int CountLockedAgainst(int host) const { void* args[] = { &host }; return CallStaticValue<int>("CountLockedAgainst", args, 1); }
        float ProgressOf(int occupier, int host, int stateId) const { void* args[] = { &occupier, &host, &stateId }; return CallStaticValue<float>("ProgressOf", args, 3); }
        float AnyProgress(int occupier, int host) const { void* args[] = { &occupier, &host }; return CallStaticValue<float>("AnyProgress", args, 2); }
        bool HostInLockedState(void* grid, void* d) const { void* args[] = { grid, d }; return CallStaticValue<bool>("HostInLockedState", args, 2); }
        float HostMarchMul(void* grid, void* d) const { void* args[] = { grid, d }; return CallStaticValue<float>("HostMarchMul", args, 2); }
        int FillFloodBlock(int nationId, int exemptState, void* scratch) const { void* args[] = { &nationId, &exemptState, &scratch }; return CallStaticValue<int>("FillFloodBlock", args, 3); }
        bool BlocksFloodAt(void* grid, int tileIndex, int nationId, int exemptState) const { void* args[] = { grid, &tileIndex, &nationId, &exemptState }; return CallStaticValue<bool>("BlocksFloodAt", args, 4); }
        void DrainDirtyHosts(void* into) const { void* args[] = { into }; CallStatic("DrainDirtyHosts", args, 1); }
        void OnWar(int a, int b, void* internals) const { void* args[] = { &a, &b, internals }; CallStatic("OnWar", args, 3); }
        void Restore(int occupier, int host, int stateId, int progressTicks, bool locked) const { void* args[] = { &occupier, &host, &stateId, &progressTicks, &locked }; CallStatic("Restore", args, 5); }
        void RecomputeEffects(void* grid, void* getNation, void* internals) const { void* args[] = { grid, getNation, internals }; CallStatic("RecomputeEffects", args, 3); }
        void Tick(int tick, void* grid, void* militaries, void* milById, void* getNation, void* internals, void* cfg) const { void* args[] = { &tick, grid, militaries, milById, getNation, internals, cfg }; CallStatic("Tick", args, 7); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
