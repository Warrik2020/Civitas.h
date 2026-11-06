#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class MovementV2 : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MovementV2(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "MovementV2") {}
    public:
        void Tick(void* d, void* n, void* grid, void* cfg, int tick, void* mil, void* occupancy) const { void* __callArgs[] = { d, n, grid, cfg, &tick, mil, occupancy }; CallStatic("Tick", __callArgs, 7); }
        void AcceptOrder(void* d, void* target) const { void* __callArgs[] = { d, target }; CallStatic("AcceptOrder", __callArgs, 2); }
        void RetargetNow(void* d, void* grid, int tick, void* mil) const { void* __callArgs[] = { d, grid, &tick, mil }; CallStatic("RetargetNow", __callArgs, 4); }
        bool PressGoal(void* d, void* mil, void* grid) const { void* __callArgs[] = { d, mil, grid }; return CallStaticValue<bool>("PressGoal", __callArgs, 3); }
        bool PressAt(void* d, void* mil, void* grid, void* p) const { void* __callArgs[] = { d, mil, grid, p }; return CallStaticValue<bool>("PressAt", __callArgs, 4); }
    };
}
