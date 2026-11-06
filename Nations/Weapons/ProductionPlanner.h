#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ProductionPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProductionPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ProductionPlanner") {}
    public:
        void Evaluate(void* it, void* cfg, bool force = false) const { void* __callArgs[] = { it, cfg, &force }; CallStatic("Evaluate", __callArgs, 3); }
        int IntervalTicks() const { return ReadStaticField<int>("IntervalTicks"); }
        float HorizonTicks() const { return ReadStaticField<float>("HorizonTicks"); }
    };
}
