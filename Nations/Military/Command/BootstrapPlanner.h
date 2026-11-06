#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class BootstrapPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BootstrapPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "BootstrapPlanner") {}
    public:
        void Plan(void* store, void* system, void* mil, void* n, void* grid, void* cfg, void* milById, void* divisionById, int tick) const { void* __callArgs[] = { store, system, mil, n, grid, cfg, milById, divisionById, &tick }; CallStatic("Plan", __callArgs, 9); }
        float ExecuteBar(void* mil, int tick) const { void* __callArgs[] = { mil, &tick }; return CallStaticValue<float>("ExecuteBar", __callArgs, 2); }
        float WarWeight() const { return ReadStaticField<float>("WarWeight"); }
        float ExecuteRatio() const { return ReadStaticField<float>("ExecuteRatio"); }
        float ExecuteRatioFloor() const { return ReadStaticField<float>("ExecuteRatioFloor"); }
        float MoveShare() const { return ReadStaticField<float>("MoveShare"); }
    };
}
