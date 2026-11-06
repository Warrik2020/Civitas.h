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
        float PointsPerTick(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("PointsPerTick", args, 2); }
        float FundingRateMul(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("FundingRateMul", args, 2); }
        float CostOf(int techIndex, void* cfg) const { void* args[] = { &techIndex, cfg }; return CallStaticValue<float>("CostOf", args, 2); }
        bool IsResearched(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<bool>("IsResearched", args, 2); }
        bool BuildingUnlocked(void* it, int t) const { void* args[] = { it, &t }; return CallStaticValue<bool>("BuildingUnlocked", args, 2); }
        void Tick(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("Tick", args, 2); }
        void TickSpan(void* it, void* cfg, int span) const { void* args[] = { it, cfg, &span }; CallStatic("TickSpan", args, 3); }
        bool CanResearch(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<bool>("CanResearch", args, 2); }
        bool IsRunning(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<bool>("IsRunning", args, 2); }
        int RunningCount(void* it) const { void* args[] = { it }; return CallStaticValue<int>("RunningCount", args, 1); }
        float ProgressOf(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<float>("ProgressOf", args, 2); }
        bool SlotHasWork(void* it, int slot) const { void* args[] = { it, &slot }; return CallStaticValue<bool>("SlotHasWork", args, 2); }
        bool StartResearch(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<bool>("StartResearch", args, 2); }
        bool StopSlot(void* it, int slot) const { void* args[] = { it, &slot }; return CallStaticValue<bool>("StopSlot", args, 2); }
        float StashedProgress(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<float>("StashedProgress", args, 2); }
        bool CanStartAnyQueued(void* it, int slot) const { void* args[] = { it, &slot }; return CallStaticValue<bool>("CanStartAnyQueued", args, 2); }
        void InheritFrom(void* child, void* parent) const { void* args[] = { child, parent }; CallStatic("InheritFrom", args, 2); }
        void RecomputeModifiers(void* it) const { void* args[] = { it }; CallStatic("RecomputeModifiers", args, 1); }
        bool DivisionUnlocked(void* it, int t, void* mcfg) const { void* args[] = { it, &t, mcfg }; return CallStaticValue<bool>("DivisionUnlocked", args, 3); }
        bool LegacyGate(void* it, int t, void* mcfg) const { void* args[] = { it, &t, mcfg }; return CallStaticValue<bool>("LegacyGate", args, 3); }
    };
}
