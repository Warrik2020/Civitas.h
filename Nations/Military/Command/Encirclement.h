#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class Encirclement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Encirclement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "Encirclement") {}
    public:
        void SetTick(int tick) const { void* __callArgs[] = { &tick }; CallStatic("SetTick", __callArgs, 1); }
        bool Trapped(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Trapped", __callArgs, 1); }
        bool Trapped(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStaticValue<bool>("Trapped", __callArgs, 2); }
        bool CanFallBack(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("CanFallBack", __callArgs, 1); }
        int TicksEncircled(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStaticValue<int>("TicksEncircled", __callArgs, 2); }
        float SoftnessOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("SoftnessOf", __callArgs, 1); }
        float OrgCapFactor(void* d, void* cfg, int tick) const { void* __callArgs[] = { d, cfg, &tick }; return CallStaticValue<float>("OrgCapFactor", __callArgs, 3); }
        float ManpowerDrainOf(void* d, void* cfg, int tick) const { void* __callArgs[] = { d, cfg, &tick }; return CallStaticValue<float>("ManpowerDrainOf", __callArgs, 3); }
        void DrainOrg(void* d, void* cfg, int tick) const { void* __callArgs[] = { d, cfg, &tick }; CallStatic("DrainOrg", __callArgs, 3); }
        void NoteStamp(void* d, int tick) const { void* __callArgs[] = { d, &tick }; CallStatic("NoteStamp", __callArgs, 2); }
        int SaveTicks(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStaticValue<int>("SaveTicks", __callArgs, 2); }
        int TrapTicks() const { return ReadStaticField<int>("TrapTicks"); }
        int OrgEaseTicks() const { return ReadStaticField<int>("OrgEaseTicks"); }
        int DrainGrowTicks() const { return ReadStaticField<int>("DrainGrowTicks"); }
        float DrainStartShare() const { return ReadStaticField<float>("DrainStartShare"); }
        float DrainEndShare() const { return ReadStaticField<float>("DrainEndShare"); }
        float FortressDrainMul() const { return ReadStaticField<float>("FortressDrainMul"); }
        float FortressOrgHold() const { return ReadStaticField<float>("FortressOrgHold"); }
        float StockFadeBelow() const { return ReadStaticField<float>("StockFadeBelow"); }
        float OrgDecayFraction() const { return ReadStaticField<float>("OrgDecayFraction"); }
    };
}
