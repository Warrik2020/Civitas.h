#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarFooting : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFooting(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarFooting") {}
    public:
        void Publish(void* it, void* cfg, bool ai, void* d) const { void* __callArgs[] = { it, cfg, &ai, d }; CallStatic("Publish", __callArgs, 4); }
        void* Compute(float income, float netIncome, float militaryBill, float treasury, float happiness, float chestMin, void* d) const { void* __callArgs[] = { &income, &netIncome, &militaryBill, &treasury, &happiness, &chestMin, d }; return CallStatic("Compute", __callArgs, 7); }
        bool Alert(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("Alert", __callArgs, 1); }
        int CapitulationWait(int baseTicks, bool ai, void* d) const { void* __callArgs[] = { &baseTicks, &ai, d }; return CallStaticValue<int>("CapitulationWait", __callArgs, 3); }
        float StrainLookaheadTicks() const { return ReadStaticField<float>("StrainLookaheadTicks"); }
        float HappinessGuard() const { return ReadStaticField<float>("HappinessGuard"); }
    };
}
