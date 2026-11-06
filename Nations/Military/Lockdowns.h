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
        bool IsLocked(int stateId, int host) const { void* __callArgs[] = { &stateId, &host }; return CallStaticValue<bool>("IsLocked", __callArgs, 2); }
        bool IsLockedTile(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; return CallStaticValue<bool>("IsLockedTile", __callArgs, 2); }
        int CountLockedBy(int occupier, int host) const { void* __callArgs[] = { &occupier, &host }; return CallStaticValue<int>("CountLockedBy", __callArgs, 2); }
        int CountLockedAgainst(int host) const { void* __callArgs[] = { &host }; return CallStaticValue<int>("CountLockedAgainst", __callArgs, 1); }
        float ProgressOf(int occupier, int host, int stateId) const { void* __callArgs[] = { &occupier, &host, &stateId }; return CallStaticValue<float>("ProgressOf", __callArgs, 3); }
        float AnyProgress(int occupier, int host) const { void* __callArgs[] = { &occupier, &host }; return CallStaticValue<float>("AnyProgress", __callArgs, 2); }
        bool HostInLockedState(void* grid, void* d) const { void* __callArgs[] = { grid, d }; return CallStaticValue<bool>("HostInLockedState", __callArgs, 2); }
        float HostMarchMul(void* grid, void* d) const { void* __callArgs[] = { grid, d }; return CallStaticValue<float>("HostMarchMul", __callArgs, 2); }
        int FillFloodBlock(int nationId, int exemptState, void* scratch) const { void* __callArgs[] = { &nationId, &exemptState, &scratch }; return CallStaticValue<int>("FillFloodBlock", __callArgs, 3); }
        bool BlocksFloodAt(void* grid, int tileIndex, int nationId, int exemptState) const { void* __callArgs[] = { grid, &tileIndex, &nationId, &exemptState }; return CallStaticValue<bool>("BlocksFloodAt", __callArgs, 4); }
        void DrainDirtyHosts(void* into) const { void* __callArgs[] = { into }; CallStatic("DrainDirtyHosts", __callArgs, 1); }
        void OnWar(int a, int b, void* internals) const { void* __callArgs[] = { &a, &b, internals }; CallStatic("OnWar", __callArgs, 3); }
        void Restore(int occupier, int host, int stateId, int progressTicks, bool locked) const { void* __callArgs[] = { &occupier, &host, &stateId, &progressTicks, &locked }; CallStatic("Restore", __callArgs, 5); }
        void RecomputeEffects(void* grid, void* getNation, void* internals) const { void* __callArgs[] = { grid, getNation, internals }; CallStatic("RecomputeEffects", __callArgs, 3); }
        void Tick(int tick, void* grid, void* militaries, void* milById, void* getNation, void* internals, void* cfg) const { void* __callArgs[] = { &tick, grid, militaries, milById, getNation, internals, cfg }; CallStatic("Tick", __callArgs, 7); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
