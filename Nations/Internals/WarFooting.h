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
        void Publish(void* it, void* cfg, bool ai, void* d) const { void* args[] = { it, cfg, &ai, d }; CallStatic("Publish", args, 4); }
        void* Compute(float income, float netIncome, float militaryBill, float treasury, float happiness, float chestMin, void* d) const { void* args[] = { &income, &netIncome, &militaryBill, &treasury, &happiness, &chestMin, d }; return CallStatic("Compute", args, 7); }
        bool Alert(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Alert", args, 1); }
        int CapitulationWait(int baseTicks, bool ai, void* d) const { void* args[] = { &baseTicks, &ai, d }; return CallStaticValue<int>("CapitulationWait", args, 3); }
        float StrainLookaheadTicks() const { return ReadStaticField<float>("StrainLookaheadTicks"); }
        float HappinessGuard() const { return ReadStaticField<float>("HappinessGuard"); }
        float reserve() const { return ReadField<float>("reserve"); }
        void SetReserve(float value) const { WriteField<float>("reserve", value); }
        float runway() const { return ReadField<float>("runway"); }
        void SetRunway(float value) const { WriteField<float>("runway", value); }
        float army() const { return ReadField<float>("army"); }
        void SetArmy(float value) const { WriteField<float>("army", value); }
        bool strained() const { return ReadField<bool>("strained"); }
        void SetStrained(bool value) const { WriteField<bool>("strained", value); }
    };
}
