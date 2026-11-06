#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleBridge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleBridge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleBridge") {}
    public:
        float OrgOf(void* sim, int div) const { void* args[] = { sim, &div }; return CallStaticValue<float>("OrgOf", args, 2); }
        bool Owns(void* d) const { void* args[] = { d }; return CallValue<bool>("Owns", args, 1); }
        void TickOwned(void* d, void* mil, void* n, void* grid, void* occupancy, void* cfg, int tick) const { void* args[] = { d, mil, n, grid, occupancy, cfg, &tick }; Call("TickOwned", args, 7); }
    };
}
