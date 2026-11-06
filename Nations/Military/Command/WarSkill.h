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
        void* From(void* d, int intervalTicks) const { void* __callArgs[] = { d, &intervalTicks }; return CallStatic("From", __callArgs, 2); }
        void ApplyTemper(void* s, float temper) const { void* __callArgs[] = { &s, &temper }; CallStatic("ApplyTemper", __callArgs, 2); }
        float SeamBias(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("SeamBias", __callArgs, 1); }
        float SpearheadShare(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("SpearheadShare", __callArgs, 1); }
        int IntervalTicks(int baseTicks, void* d) const { void* __callArgs[] = { &baseTicks, d }; return CallStaticValue<int>("IntervalTicks", __callArgs, 2); }
        bool Due(int tick, int nationId, int interval, bool first) const { void* __callArgs[] = { &tick, &nationId, &interval, &first }; return CallStaticValue<bool>("Due", __callArgs, 4); }
        int intervalTicks() const { return ReadField<int>("intervalTicks"); }
        void intervalTicks(int value) const { WriteField<int>("intervalTicks", value); }
        int armySize() const { return ReadField<int>("armySize"); }
        void armySize(int value) const { WriteField<int>("armySize", value); }
        float moveShare() const { return ReadField<float>("moveShare"); }
        void moveShare(float value) const { WriteField<float>("moveShare", value); }
        float threatWeight() const { return ReadField<float>("threatWeight"); }
        void threatWeight(float value) const { WriteField<float>("threatWeight", value); }
        float seamBias() const { return ReadField<float>("seamBias"); }
        void seamBias(float value) const { WriteField<float>("seamBias", value); }
        float fallbackOn() const { return ReadField<float>("fallbackOn"); }
        void fallbackOn(float value) const { WriteField<float>("fallbackOn", value); }
        float fallbackOff() const { return ReadField<float>("fallbackOff"); }
        void fallbackOff(float value) const { WriteField<float>("fallbackOff", value); }
        int retreatSteps() const { return ReadField<int>("retreatSteps"); }
        void retreatSteps(int value) const { WriteField<int>("retreatSteps", value); }
        float lineQuality() const { return ReadField<float>("lineQuality"); }
        void lineQuality(float value) const { WriteField<float>("lineQuality", value); }
        float secondShare() const { return ReadField<float>("secondShare"); }
        void secondShare(float value) const { WriteField<float>("secondShare", value); }
        float secondTrigger() const { return ReadField<float>("secondTrigger"); }
        void secondTrigger(float value) const { WriteField<float>("secondTrigger", value); }
        bool prewarLines() const { return ReadField<bool>("prewarLines"); }
        void prewarLines(bool value) const { WriteField<bool>("prewarLines", value); }
        int garrisonCities() const { return ReadField<int>("garrisonCities"); }
        void garrisonCities(int value) const { WriteField<int>("garrisonCities", value); }
        int garrisonDivisions() const { return ReadField<int>("garrisonDivisions"); }
        void garrisonDivisions(int value) const { WriteField<int>("garrisonDivisions", value); }
        float garrisonRange() const { return ReadField<float>("garrisonRange"); }
        void garrisonRange(float value) const { WriteField<float>("garrisonRange", value); }
        float counterShare() const { return ReadField<float>("counterShare"); }
        void counterShare(float value) const { WriteField<float>("counterShare", value); }
        float counterOdds() const { return ReadField<float>("counterOdds"); }
        void counterOdds(float value) const { WriteField<float>("counterOdds", value); }
        bool counterUseLine() const { return ReadField<bool>("counterUseLine"); }
        void counterUseLine(bool value) const { WriteField<bool>("counterUseLine", value); }
        bool defenceFirst() const { return ReadField<bool>("defenceFirst"); }
        void defenceFirst(bool value) const { WriteField<bool>("defenceFirst", value); }
        bool holdWhileLosing() const { return ReadField<bool>("holdWhileLosing"); }
        void holdWhileLosing(bool value) const { WriteField<bool>("holdWhileLosing", value); }
        float idleBar() const { return ReadField<float>("idleBar"); }
        void idleBar(float value) const { WriteField<float>("idleBar", value); }
        float opsPerArmy() const { return ReadField<float>("opsPerArmy"); }
        void opsPerArmy(float value) const { WriteField<float>("opsPerArmy", value); }
        int maxOps() const { return ReadField<int>("maxOps"); }
        void maxOps(int value) const { WriteField<int>("maxOps", value); }
        float objectiveRange() const { return ReadField<float>("objectiveRange"); }
        void objectiveRange(float value) const { WriteField<float>("objectiveRange", value); }
        float minFeasibility() const { return ReadField<float>("minFeasibility"); }
        void minFeasibility(float value) const { WriteField<float>("minFeasibility", value); }
        float prepareShare() const { return ReadField<float>("prepareShare"); }
        void prepareShare(float value) const { WriteField<float>("prepareShare", value); }
        int prepareMaxTicks() const { return ReadField<int>("prepareMaxTicks"); }
        void prepareMaxTicks(int value) const { WriteField<int>("prepareMaxTicks", value); }
        float spearShare() const { return ReadField<float>("spearShare"); }
        void spearShare(float value) const { WriteField<float>("spearShare", value); }
        float surrenderWeight() const { return ReadField<float>("surrenderWeight"); }
        void surrenderWeight(float value) const { WriteField<float>("surrenderWeight", value); }
        bool deepCapital() const { return ReadField<bool>("deepCapital"); }
        void deepCapital(bool value) const { WriteField<bool>("deepCapital", value); }
        float guardMass() const { return ReadField<float>("guardMass"); }
        void guardMass(float value) const { WriteField<float>("guardMass", value); }
        float waryWeight() const { return ReadField<float>("waryWeight"); }
        void waryWeight(float value) const { WriteField<float>("waryWeight", value); }
        bool watchNeighbours() const { return ReadField<bool>("watchNeighbours"); }
        void watchNeighbours(bool value) const { WriteField<bool>("watchNeighbours", value); }
        float planningPush() const { return ReadField<float>("planningPush"); }
        void planningPush(float value) const { WriteField<float>("planningPush", value); }
        float readOdds() const { return ReadField<float>("readOdds"); }
        void readOdds(float value) const { WriteField<float>("readOdds", value); }
        float sightTiles() const { return ReadField<float>("sightTiles"); }
        void sightTiles(float value) const { WriteField<float>("sightTiles", value); }
        float goNowRatio() const { return ReadField<float>("goNowRatio"); }
        void goNowRatio(float value) const { WriteField<float>("goNowRatio", value); }
        int stance() const { return ReadField<int>("stance"); }
        void stance(int value) const { WriteField<int>("stance", value); }
        float capitalMul() const { return ReadField<float>("capitalMul"); }
        void capitalMul(float value) const { WriteField<float>("capitalMul", value); }
        float distanceScale() const { return ReadField<float>("distanceScale"); }
        void distanceScale(float value) const { WriteField<float>("distanceScale", value); }
    };
}
