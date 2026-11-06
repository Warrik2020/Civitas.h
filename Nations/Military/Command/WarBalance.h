#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class WarBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "WarBalance") {}
    public:
        int ArmySize() const { return ReadStaticField<int>("ArmySize"); }
        int MaxArmiesPerTheatre() const { return ReadStaticField<int>("MaxArmiesPerTheatre"); }
        float ArmyCountHysteresis() const { return ReadStaticField<float>("ArmyCountHysteresis"); }
        float WarWeight() const { return ReadStaticField<float>("WarWeight"); }
        float WaryWeight() const { return ReadStaticField<float>("WaryWeight"); }
        float ThreatWeight() const { return ReadStaticField<float>("ThreatWeight"); }
        float MoveShare() const { return ReadStaticField<float>("MoveShare"); }
        float PrepWeightMul() const { return ReadStaticField<float>("PrepWeightMul"); }
        float PrepMoveMul() const { return ReadStaticField<float>("PrepMoveMul"); }
        float PrepMassTiles() const { return ReadStaticField<float>("PrepMassTiles"); }
        float ObjectiveRangeTiles() const { return ReadStaticField<float>("ObjectiveRangeTiles"); }
        float ObjectiveDistanceScale() const { return ReadStaticField<float>("ObjectiveDistanceScale"); }
        float GoalMul() const { return ReadStaticField<float>("GoalMul"); }
        float HubValue() const { return ReadStaticField<float>("HubValue"); }
        float MinObjectiveScore() const { return ReadStaticField<float>("MinObjectiveScore"); }
        float MinFeasibility() const { return ReadStaticField<float>("MinFeasibility"); }
        float FeasibilityCap() const { return ReadStaticField<float>("FeasibilityCap"); }
        float CorridorTiles() const { return ReadStaticField<float>("CorridorTiles"); }
        int MinOperations() const { return ReadStaticField<int>("MinOperations"); }
        int MaxOperations() const { return ReadStaticField<int>("MaxOperations"); }
        float PrepareShare() const { return ReadStaticField<float>("PrepareShare"); }
        int PrepareMaxTicks() const { return ReadStaticField<int>("PrepareMaxTicks"); }
        float GoNowRatio() const { return ReadStaticField<float>("GoNowRatio"); }
        float ProgressStep() const { return ReadStaticField<float>("ProgressStep"); }
        int StallTicks() const { return ReadStaticField<int>("StallTicks"); }
        int CooldownTicks() const { return ReadStaticField<int>("CooldownTicks"); }
        int ReduceMaxTicks() const { return ReadStaticField<int>("ReduceMaxTicks"); }
        float ReliefRangeTiles() const { return ReadStaticField<float>("ReliefRangeTiles"); }
        float PocketPullTiles() const { return ReadStaticField<float>("PocketPullTiles"); }
        float FallbackBackTiles() const { return ReadStaticField<float>("FallbackBackTiles"); }
        float FallbackCityTiles() const { return ReadStaticField<float>("FallbackCityTiles"); }
        float FallbackOnRatio() const { return ReadStaticField<float>("FallbackOnRatio"); }
        float FallbackOffRatio() const { return ReadStaticField<float>("FallbackOffRatio"); }
        int RetreatSteps() const { return ReadStaticField<int>("RetreatSteps"); }
        int QuietReturnTicks() const { return ReadStaticField<int>("QuietReturnTicks"); }
        float WeldTiles() const { return ReadStaticField<float>("WeldTiles"); }
        float AttackedTheatreWeight() const { return ReadStaticField<float>("AttackedTheatreWeight"); }
        int RetreatStepMinTicks() const { return ReadStaticField<int>("RetreatStepMinTicks"); }
        float OverrunShare() const { return ReadStaticField<float>("OverrunShare"); }
        float StepBackPressure() const { return ReadStaticField<float>("StepBackPressure"); }
        float LineQuality() const { return ReadStaticField<float>("LineQuality"); }
        float LineSeekMin() const { return ReadStaticField<float>("LineSeekMin"); }
        float LineSeekMax() const { return ReadStaticField<float>("LineSeekMax"); }
        float PreparedSnapShare() const { return ReadStaticField<float>("PreparedSnapShare"); }
        float SecondLineShare() const { return ReadStaticField<float>("SecondLineShare"); }
        float SecondLineTrigger() const { return ReadStaticField<float>("SecondLineTrigger"); }
        int SecondLineMinTheatre() const { return ReadStaticField<int>("SecondLineMinTheatre"); }
        int SecondLineMinDivisions() const { return ReadStaticField<int>("SecondLineMinDivisions"); }
        float SecondLineDepthTiles() const { return ReadStaticField<float>("SecondLineDepthTiles"); }
        float SecondLineMoveTiles() const { return ReadStaticField<float>("SecondLineMoveTiles"); }
        int SecondLineRedrawTicks() const { return ReadStaticField<int>("SecondLineRedrawTicks"); }
        int GarrisonCities() const { return ReadStaticField<int>("GarrisonCities"); }
        int GarrisonDivisions() const { return ReadStaticField<int>("GarrisonDivisions"); }
        float GarrisonRangeTiles() const { return ReadStaticField<float>("GarrisonRangeTiles"); }
        float CapitalThreatTiles() const { return ReadStaticField<float>("CapitalThreatTiles"); }
        float GarrisonPoolShare() const { return ReadStaticField<float>("GarrisonPoolShare"); }
        float CounterShare() const { return ReadStaticField<float>("CounterShare"); }
        float CounterOdds() const { return ReadStaticField<float>("CounterOdds"); }
        float CounterRangeTiles() const { return ReadStaticField<float>("CounterRangeTiles"); }
        float CounterThreat() const { return ReadStaticField<float>("CounterThreat"); }
        int CounterGroupMax() const { return ReadStaticField<int>("CounterGroupMax"); }
        float CounterMaxOrg() const { return ReadStaticField<float>("CounterMaxOrg"); }
        float OpsPerArmy() const { return ReadStaticField<float>("OpsPerArmy"); }
        float SurrenderWeight() const { return ReadStaticField<float>("SurrenderWeight"); }
        float SurrenderScale() const { return ReadStaticField<float>("SurrenderScale"); }
        float RetakeMul() const { return ReadStaticField<float>("RetakeMul"); }
        float KeepExecutingShare() const { return ReadStaticField<float>("KeepExecutingShare"); }
        float PlanningPush() const { return ReadStaticField<float>("PlanningPush"); }
        int LosingMemoryTicks() const { return ReadStaticField<int>("LosingMemoryTicks"); }
        float BlockedRatio() const { return ReadStaticField<float>("BlockedRatio"); }
        float GuardMassWeight() const { return ReadStaticField<float>("GuardMassWeight"); }
        float WatchEnter() const { return ReadStaticField<float>("WatchEnter"); }
        float WatchKeep() const { return ReadStaticField<float>("WatchKeep"); }
        float WatchRatio() const { return ReadStaticField<float>("WatchRatio"); }
        int MinIntervalTicks() const { return ReadStaticField<int>("MinIntervalTicks"); }
        float SeamThreatBias() const { return ReadStaticField<float>("SeamThreatBias"); }
        int PincerEvery() const { return ReadStaticField<int>("PincerEvery"); }
        float PincerSampleTiles() const { return ReadStaticField<float>("PincerSampleTiles"); }
        float PincerMinChord() const { return ReadStaticField<float>("PincerMinChord"); }
        float PincerMaxChord() const { return ReadStaticField<float>("PincerMaxChord"); }
        float PincerArcRatio() const { return ReadStaticField<float>("PincerArcRatio"); }
        float PincerMaxArc() const { return ReadStaticField<float>("PincerMaxArc"); }
        float PincerChordShare() const { return ReadStaticField<float>("PincerChordShare"); }
        int PincerMaxCells() const { return ReadStaticField<int>("PincerMaxCells"); }
        int PincerMaxGapChecks() const { return ReadStaticField<int>("PincerMaxGapChecks"); }
        int PincerMaxFloods() const { return ReadStaticField<int>("PincerMaxFloods"); }
        float PincerArmTiles() const { return ReadStaticField<float>("PincerArmTiles"); }
        float MinPincerScore() const { return ReadStaticField<float>("MinPincerScore"); }
        float SalientEndTiles() const { return ReadStaticField<float>("SalientEndTiles"); }
        float SalientThreatRatio() const { return ReadStaticField<float>("SalientThreatRatio"); }
        float NeckArmyShare() const { return ReadStaticField<float>("NeckArmyShare"); }
        float NeckLandShare() const { return ReadStaticField<float>("NeckLandShare"); }
        int PincerOneArmyMin() const { return ReadStaticField<int>("PincerOneArmyMin"); }
    };
}
