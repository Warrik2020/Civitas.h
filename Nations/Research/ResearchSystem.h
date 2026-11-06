#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class ResearchSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResearchSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "ResearchSystem") {}
    public:
        float PointsPerTick(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("PointsPerTick", __callArgs, 2); }
        float FundingRateMul(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("FundingRateMul", __callArgs, 2); }
        float CostOf(int techIndex, void* cfg) const { void* __callArgs[] = { &techIndex, cfg }; return CallStaticValue<float>("CostOf", __callArgs, 2); }
        bool IsResearched(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<bool>("IsResearched", __callArgs, 2); }
        bool BuildingUnlocked(void* it, int t) const { void* __callArgs[] = { it, &t }; return CallStaticValue<bool>("BuildingUnlocked", __callArgs, 2); }
        void Tick(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; CallStatic("Tick", __callArgs, 2); }
        void TickSpan(void* it, void* cfg, int span) const { void* __callArgs[] = { it, cfg, &span }; CallStatic("TickSpan", __callArgs, 3); }
        bool CanResearch(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<bool>("CanResearch", __callArgs, 2); }
        bool IsRunning(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<bool>("IsRunning", __callArgs, 2); }
        int RunningCount(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("RunningCount", __callArgs, 1); }
        float ProgressOf(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<float>("ProgressOf", __callArgs, 2); }
        bool SlotHasWork(void* it, int slot) const { void* __callArgs[] = { it, &slot }; return CallStaticValue<bool>("SlotHasWork", __callArgs, 2); }
        bool StartResearch(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<bool>("StartResearch", __callArgs, 2); }
        bool StopSlot(void* it, int slot) const { void* __callArgs[] = { it, &slot }; return CallStaticValue<bool>("StopSlot", __callArgs, 2); }
        float StashedProgress(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<float>("StashedProgress", __callArgs, 2); }
        bool CanStartAnyQueued(void* it, int slot) const { void* __callArgs[] = { it, &slot }; return CallStaticValue<bool>("CanStartAnyQueued", __callArgs, 2); }
        void InheritFrom(void* child, void* parent) const { void* __callArgs[] = { child, parent }; CallStatic("InheritFrom", __callArgs, 2); }
        void RecomputeModifiers(void* it) const { void* __callArgs[] = { it }; CallStatic("RecomputeModifiers", __callArgs, 1); }
        bool DivisionUnlocked(void* it, int t, void* mcfg) const { void* __callArgs[] = { it, &t, mcfg }; return CallStaticValue<bool>("DivisionUnlocked", __callArgs, 3); }
        bool LegacyGate(void* it, int t, void* mcfg) const { void* __callArgs[] = { it, &t, mcfg }; return CallStaticValue<bool>("LegacyGate", __callArgs, 3); }
    };
}
