#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsQuery : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsQuery(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsQuery") {}
    public:
        void Publish(void* sys) const { void* __callArgs[] = { sys }; CallStatic("Publish", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        bool Governs(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Governs", __callArgs, 1); }
        float PowerMulOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("PowerMulOf", __callArgs, 1); }
        float OrgCapMulOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("OrgCapMulOf", __callArgs, 1); }
        float ReinforceMulOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("ReinforceMulOf", __callArgs, 1); }
        float SpeedMulOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("SpeedMulOf", __callArgs, 1); }
        float OrgRegenMulOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("OrgRegenMulOf", __callArgs, 1); }
        void* TermsOf(void* d) const { void* __callArgs[] = { d }; return CallStatic("TermsOf", __callArgs, 1); }
        float RadiusTiles(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("RadiusTiles", __callArgs, 1); }
        void* FieldOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("FieldOf", __callArgs, 1); }
        int FieldVersion(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("FieldVersion", __callArgs, 1); }
        bool Solved(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("Solved", __callArgs, 1); }
        void* SourcesOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("SourcesOf", __callArgs, 1); }
        float TotalCapacity(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("TotalCapacity", __callArgs, 1); }
        void* Summary(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("Summary", __callArgs, 1); }
        float CapacityAt(int nationId, float x, float y) const { void* __callArgs[] = { &nationId, &x, &y }; return CallStaticValue<float>("CapacityAt", __callArgs, 3); }
        bool Sample(int nationId, float x, float y, void* r) const { void* __callArgs[] = { &nationId, &x, &y, &r }; return CallStaticValue<bool>("Sample", __callArgs, 4); }
        float ReachValueAt(int nationId, float x, float y, uint8_t& cellClass) const { void* __callArgs[] = { &nationId, &x, &y, &cellClass }; return CallStaticValue<float>("ReachValueAt", __callArgs, 4); }
        bool Reaches(int nationId, float x, float y) const { void* __callArgs[] = { &nationId, &x, &y }; return CallStaticValue<bool>("Reaches", __callArgs, 3); }
        float ReachTilesAlong(int nationId, void* from, void* dir, float maxTiles) const { void* __callArgs[] = { &nationId, from, dir, &maxTiles }; return CallStaticValue<float>("ReachTilesAlong", __callArgs, 4); }
        float LoadAt(int nationId, void* pos, int excludeId = -1) const { void* __callArgs[] = { &nationId, pos, &excludeId }; return CallStaticValue<float>("LoadAt", __callArgs, 3); }
        float DemandOf(void* d, void* cfg) const { void* __callArgs[] = { d, cfg }; return CallStaticValue<float>("DemandOf", __callArgs, 2); }
        void Watch(int divisionId) const { void* __callArgs[] = { &divisionId }; CallStatic("Watch", __callArgs, 1); }
        void* Project(int nationId, void* pos, float extraDemand, int excludeId, void* forCurves = nullptr) const { void* __callArgs[] = { &nationId, pos, &extraDemand, &excludeId, forCurves }; return CallStatic("Project", __callArgs, 5); }
        float ProjectedStrain(int nationId, void* pos, float extraDemand, int excludeId = -1) const { void* __callArgs[] = { &nationId, pos, &extraDemand, &excludeId }; return CallStaticValue<float>("ProjectedStrain", __callArgs, 4); }
        void* CityTerms(void* c) const { void* __callArgs[] = { c }; return CallStatic("CityTerms", __callArgs, 1); }
        float ReachTilesOf(float output, int roadLevel, float rangeMul) const { void* __callArgs[] = { &output, &roadLevel, &rangeMul }; return CallStaticValue<float>("ReachTilesOf", __callArgs, 3); }
    };
}
