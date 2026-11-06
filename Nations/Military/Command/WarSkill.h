#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class WarSkill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarSkill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "WarSkill") {}
    public:
        void* From(void* d, int intervalTicks) const { void* args[] = { d, &intervalTicks }; return CallStatic("From", args, 2); }
        void ApplyTemper(void* s, float temper) const { void* args[] = { &s, &temper }; CallStatic("ApplyTemper", args, 2); }
        float SeamBias(void* d) const { void* args[] = { d }; return CallStaticValue<float>("SeamBias", args, 1); }
        float SpearheadShare(void* d) const { void* args[] = { d }; return CallStaticValue<float>("SpearheadShare", args, 1); }
        int IntervalTicks(int baseTicks, void* d) const { void* args[] = { &baseTicks, d }; return CallStaticValue<int>("IntervalTicks", args, 2); }
        bool Due(int tick, int nationId, int interval, bool first) const { void* args[] = { &tick, &nationId, &interval, &first }; return CallStaticValue<bool>("Due", args, 4); }
        int intervalTicks() const { return ReadField<int>("intervalTicks"); }
        void SetIntervalTicks(int value) const { WriteField<int>("intervalTicks", value); }
        int armySize() const { return ReadField<int>("armySize"); }
        void SetArmySize(int value) const { WriteField<int>("armySize", value); }
        float moveShare() const { return ReadField<float>("moveShare"); }
        void SetMoveShare(float value) const { WriteField<float>("moveShare", value); }
        float threatWeight() const { return ReadField<float>("threatWeight"); }
        void SetThreatWeight(float value) const { WriteField<float>("threatWeight", value); }
        float seamBias() const { return ReadField<float>("seamBias"); }
        void SetSeamBias(float value) const { WriteField<float>("seamBias", value); }
        float fallbackOn() const { return ReadField<float>("fallbackOn"); }
        void SetFallbackOn(float value) const { WriteField<float>("fallbackOn", value); }
        float fallbackOff() const { return ReadField<float>("fallbackOff"); }
        void SetFallbackOff(float value) const { WriteField<float>("fallbackOff", value); }
        int retreatSteps() const { return ReadField<int>("retreatSteps"); }
        void SetRetreatSteps(int value) const { WriteField<int>("retreatSteps", value); }
        float lineQuality() const { return ReadField<float>("lineQuality"); }
        void SetLineQuality(float value) const { WriteField<float>("lineQuality", value); }
        float secondShare() const { return ReadField<float>("secondShare"); }
        void SetSecondShare(float value) const { WriteField<float>("secondShare", value); }
        float secondTrigger() const { return ReadField<float>("secondTrigger"); }
        void SetSecondTrigger(float value) const { WriteField<float>("secondTrigger", value); }
        bool prewarLines() const { return ReadField<bool>("prewarLines"); }
        void SetPrewarLines(bool value) const { WriteField<bool>("prewarLines", value); }
        int garrisonCities() const { return ReadField<int>("garrisonCities"); }
        void SetGarrisonCities(int value) const { WriteField<int>("garrisonCities", value); }
        int garrisonDivisions() const { return ReadField<int>("garrisonDivisions"); }
        void SetGarrisonDivisions(int value) const { WriteField<int>("garrisonDivisions", value); }
        float garrisonRange() const { return ReadField<float>("garrisonRange"); }
        void SetGarrisonRange(float value) const { WriteField<float>("garrisonRange", value); }
        float counterShare() const { return ReadField<float>("counterShare"); }
        void SetCounterShare(float value) const { WriteField<float>("counterShare", value); }
        float counterOdds() const { return ReadField<float>("counterOdds"); }
        void SetCounterOdds(float value) const { WriteField<float>("counterOdds", value); }
        bool counterUseLine() const { return ReadField<bool>("counterUseLine"); }
        void SetCounterUseLine(bool value) const { WriteField<bool>("counterUseLine", value); }
        bool defenceFirst() const { return ReadField<bool>("defenceFirst"); }
        void SetDefenceFirst(bool value) const { WriteField<bool>("defenceFirst", value); }
        bool holdWhileLosing() const { return ReadField<bool>("holdWhileLosing"); }
        void SetHoldWhileLosing(bool value) const { WriteField<bool>("holdWhileLosing", value); }
        float idleBar() const { return ReadField<float>("idleBar"); }
        void SetIdleBar(float value) const { WriteField<float>("idleBar", value); }
        float opsPerArmy() const { return ReadField<float>("opsPerArmy"); }
        void SetOpsPerArmy(float value) const { WriteField<float>("opsPerArmy", value); }
        int maxOps() const { return ReadField<int>("maxOps"); }
        void SetMaxOps(int value) const { WriteField<int>("maxOps", value); }
        float objectiveRange() const { return ReadField<float>("objectiveRange"); }
        void SetObjectiveRange(float value) const { WriteField<float>("objectiveRange", value); }
        float minFeasibility() const { return ReadField<float>("minFeasibility"); }
        void SetMinFeasibility(float value) const { WriteField<float>("minFeasibility", value); }
        float prepareShare() const { return ReadField<float>("prepareShare"); }
        void SetPrepareShare(float value) const { WriteField<float>("prepareShare", value); }
        int prepareMaxTicks() const { return ReadField<int>("prepareMaxTicks"); }
        void SetPrepareMaxTicks(int value) const { WriteField<int>("prepareMaxTicks", value); }
        float spearShare() const { return ReadField<float>("spearShare"); }
        void SetSpearShare(float value) const { WriteField<float>("spearShare", value); }
        float surrenderWeight() const { return ReadField<float>("surrenderWeight"); }
        void SetSurrenderWeight(float value) const { WriteField<float>("surrenderWeight", value); }
        bool deepCapital() const { return ReadField<bool>("deepCapital"); }
        void SetDeepCapital(bool value) const { WriteField<bool>("deepCapital", value); }
        float guardMass() const { return ReadField<float>("guardMass"); }
        void SetGuardMass(float value) const { WriteField<float>("guardMass", value); }
        float waryWeight() const { return ReadField<float>("waryWeight"); }
        void SetWaryWeight(float value) const { WriteField<float>("waryWeight", value); }
        bool watchNeighbours() const { return ReadField<bool>("watchNeighbours"); }
        void SetWatchNeighbours(bool value) const { WriteField<bool>("watchNeighbours", value); }
        float planningPush() const { return ReadField<float>("planningPush"); }
        void SetPlanningPush(float value) const { WriteField<float>("planningPush", value); }
        float readOdds() const { return ReadField<float>("readOdds"); }
        void SetReadOdds(float value) const { WriteField<float>("readOdds", value); }
        float sightTiles() const { return ReadField<float>("sightTiles"); }
        void SetSightTiles(float value) const { WriteField<float>("sightTiles", value); }
        float goNowRatio() const { return ReadField<float>("goNowRatio"); }
        void SetGoNowRatio(float value) const { WriteField<float>("goNowRatio", value); }
        int stance() const { return ReadField<int>("stance"); }
        void SetStance(int value) const { WriteField<int>("stance", value); }
        float capitalMul() const { return ReadField<float>("capitalMul"); }
        void SetCapitalMul(float value) const { WriteField<float>("capitalMul", value); }
        float distanceScale() const { return ReadField<float>("distanceScale"); }
        void SetDistanceScale(float value) const { WriteField<float>("distanceScale", value); }
    };
}
