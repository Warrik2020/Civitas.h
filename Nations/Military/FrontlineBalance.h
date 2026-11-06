#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FrontlineBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontlineBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FrontlineBalance") {}
    public:
        float ThreatRadiusTiles() const { return ReadStaticField<float>("ThreatRadiusTiles"); }
        float CriticalEnter() const { return ReadStaticField<float>("CriticalEnter"); }
        float CriticalExit() const { return ReadStaticField<float>("CriticalExit"); }
        int ThreatMemoryTicks() const { return ReadStaticField<int>("ThreatMemoryTicks"); }
        int MaxThreatMarks() const { return ReadStaticField<int>("MaxThreatMarks"); }
        float DepthMatchRatio() const { return ReadStaticField<float>("DepthMatchRatio"); }
        float DepthSlack() const { return ReadStaticField<float>("DepthSlack"); }
        int DepthMaxPerAnchor() const { return ReadStaticField<int>("DepthMaxPerAnchor"); }
        float DepthPoolShare() const { return ReadStaticField<float>("DepthPoolShare"); }
        float AccessPoolShare() const { return ReadStaticField<float>("AccessPoolShare"); }
        float DepthBackTiles() const { return ReadStaticField<float>("DepthBackTiles"); }
        float DepthLateralTiles() const { return ReadStaticField<float>("DepthLateralTiles"); }
        float DepthRearTiles() const { return ReadStaticField<float>("DepthRearTiles"); }
        float MinOurMeanPower() const { return ReadStaticField<float>("MinOurMeanPower"); }
        float PostDedupeTiles() const { return ReadStaticField<float>("PostDedupeTiles"); }
        float CapitalValue() const { return ReadStaticField<float>("CapitalValue"); }
        float CapitalRadiusTiles() const { return ReadStaticField<float>("CapitalRadiusTiles"); }
        float CityValue() const { return ReadStaticField<float>("CityValue"); }
        float CityRadiusTiles() const { return ReadStaticField<float>("CityRadiusTiles"); }
        float CityValueCap() const { return ReadStaticField<float>("CityValueCap"); }
        float CoreValue() const { return ReadStaticField<float>("CoreValue"); }
        float ReliefValue() const { return ReadStaticField<float>("ReliefValue"); }
        float ReliefRadiusTiles() const { return ReadStaticField<float>("ReliefRadiusTiles"); }
        float ObjectiveRadiusTiles() const { return ReadStaticField<float>("ObjectiveRadiusTiles"); }
        float ObjectiveMinDot() const { return ReadStaticField<float>("ObjectiveMinDot"); }
        float ObjectiveCapitalMul() const { return ReadStaticField<float>("ObjectiveCapitalMul"); }
        int ObjectiveLastCities() const { return ReadStaticField<int>("ObjectiveLastCities"); }
        float ObjectiveLastCitiesMul() const { return ReadStaticField<float>("ObjectiveLastCitiesMul"); }
        float ObjectiveBend() const { return ReadStaticField<float>("ObjectiveBend"); }
        float CorridorBackTiles() const { return ReadStaticField<float>("CorridorBackTiles"); }
        int CorridorProbeSteps() const { return ReadStaticField<int>("CorridorProbeSteps"); }
        float ExploitMinCorridorTiles() const { return ReadStaticField<float>("ExploitMinCorridorTiles"); }
        float AssaultMinObjective() const { return ReadStaticField<float>("AssaultMinObjective"); }
        int AssaultMaxPerAnchor() const { return ReadStaticField<int>("AssaultMaxPerAnchor"); }
        float RecallShare() const { return ReadStaticField<float>("RecallShare"); }
        int RecallMin() const { return ReadStaticField<int>("RecallMin"); }
        float RecallMaxTiles() const { return ReadStaticField<float>("RecallMaxTiles"); }
        float RecallUnboundedValue() const { return ReadStaticField<float>("RecallUnboundedValue"); }
        float BreakoutMaxGapTiles() const { return ReadStaticField<float>("BreakoutMaxGapTiles"); }
        float BreakoutPressTiles() const { return ReadStaticField<float>("BreakoutPressTiles"); }
        float BreakoutRetargetTiles() const { return ReadStaticField<float>("BreakoutRetargetTiles"); }
        float PocketCellTiles() const { return ReadStaticField<float>("PocketCellTiles"); }
        int ResolveCompSteps() const { return ReadStaticField<int>("ResolveCompSteps"); }
        int RecruitMarkMaxAgeTicks() const { return ReadStaticField<int>("RecruitMarkMaxAgeTicks"); }
        float RecruitMinDistTiles() const { return ReadStaticField<float>("RecruitMinDistTiles"); }
        float RecruitTooClosePenalty() const { return ReadStaticField<float>("RecruitTooClosePenalty"); }
        float RecruitDistScaleTiles() const { return ReadStaticField<float>("RecruitDistScaleTiles"); }
        float RecruitCrowdWeight() const { return ReadStaticField<float>("RecruitCrowdWeight"); }
        int RecruitMaxCandidates() const { return ReadStaticField<int>("RecruitMaxCandidates"); }
    };
}
