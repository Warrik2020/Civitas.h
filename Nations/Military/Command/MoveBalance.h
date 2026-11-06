#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class MoveBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MoveBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "MoveBalance") {}
    public:
        float PatchTiles() const { return ReadStaticField<float>("PatchTiles"); }
        float DirectMaxTiles() const { return ReadStaticField<float>("DirectMaxTiles"); }
        float DirectShortTiles() const { return ReadStaticField<float>("DirectShortTiles"); }
        float LookaheadMinTiles() const { return ReadStaticField<float>("LookaheadMinTiles"); }
        float LookaheadMaxTiles() const { return ReadStaticField<float>("LookaheadMaxTiles"); }
        float LookaheadSteps() const { return ReadStaticField<float>("LookaheadSteps"); }
        int PressRetryTicks() const { return ReadStaticField<int>("PressRetryTicks"); }
        int StallWindowTicks() const { return ReadStaticField<int>("StallWindowTicks"); }
        float StallNetTiles() const { return ReadStaticField<float>("StallNetTiles"); }
        void* RepathBackoffTicks() const { return ReadStaticField<void*>("RepathBackoffTicks"); }
        float TurnArcSteps() const { return ReadStaticField<float>("TurnArcSteps"); }
        float TurnOnSpotCos() const { return ReadStaticField<float>("TurnOnSpotCos"); }
        float PassSteps() const { return ReadStaticField<float>("PassSteps"); }
        float AtWaypointTiles() const { return ReadStaticField<float>("AtWaypointTiles"); }
        int SkipCheckTicks() const { return ReadStaticField<int>("SkipCheckTicks"); }
        int NudgeNodes() const { return ReadStaticField<int>("NudgeNodes"); }
        float LegMarginTiles() const { return ReadStaticField<float>("LegMarginTiles"); }
        float RejoinLeadTiles() const { return ReadStaticField<float>("RejoinLeadTiles"); }
        float RoadPull() const { return ReadStaticField<float>("RoadPull"); }
        float HeuristicWeight() const { return ReadStaticField<float>("HeuristicWeight"); }
        float CurveRadiusTiles() const { return ReadStaticField<float>("CurveRadiusTiles"); }
        int CurvePoints() const { return ReadStaticField<int>("CurvePoints"); }
        float CurveMaxTurnCos() const { return ReadStaticField<float>("CurveMaxTurnCos"); }
    };
}
