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
        void Publish(void* sys) const { void* args[] = { sys }; CallStatic("Publish", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        bool Governs(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Governs", args, 1); }
        float PowerMulOf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("PowerMulOf", args, 1); }
        float OrgCapMulOf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("OrgCapMulOf", args, 1); }
        float ReinforceMulOf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("ReinforceMulOf", args, 1); }
        float SpeedMulOf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("SpeedMulOf", args, 1); }
        float OrgRegenMulOf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("OrgRegenMulOf", args, 1); }
        void* TermsOf(void* d) const { void* args[] = { d }; return CallStatic("TermsOf", args, 1); }
        float RadiusTiles(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("RadiusTiles", args, 1); }
        void* FieldOf(int nationId) const { void* args[] = { &nationId }; return CallStatic("FieldOf", args, 1); }
        int FieldVersion(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("FieldVersion", args, 1); }
        bool Solved(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("Solved", args, 1); }
        void* SourcesOf(int nationId) const { void* args[] = { &nationId }; return CallStatic("SourcesOf", args, 1); }
        float TotalCapacity(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("TotalCapacity", args, 1); }
        void* Summary(int nationId) const { void* args[] = { &nationId }; return CallStatic("Summary", args, 1); }
        float CapacityAt(int nationId, float x, float y) const { void* args[] = { &nationId, &x, &y }; return CallStaticValue<float>("CapacityAt", args, 3); }
        bool Sample(int nationId, float x, float y, void* r) const { void* args[] = { &nationId, &x, &y, &r }; return CallStaticValue<bool>("Sample", args, 4); }
        float ReachValueAt(int nationId, float x, float y, uint8_t& cellClass) const { void* args[] = { &nationId, &x, &y, &cellClass }; return CallStaticValue<float>("ReachValueAt", args, 4); }
        bool Reaches(int nationId, float x, float y) const { void* args[] = { &nationId, &x, &y }; return CallStaticValue<bool>("Reaches", args, 3); }
        float ReachTilesAlong(int nationId, void* from, void* dir, float maxTiles) const { void* args[] = { &nationId, from, dir, &maxTiles }; return CallStaticValue<float>("ReachTilesAlong", args, 4); }
        float LoadAt(int nationId, void* pos, int excludeId = -1) const { void* args[] = { &nationId, pos, &excludeId }; return CallStaticValue<float>("LoadAt", args, 3); }
        float DemandOf(void* d, void* cfg) const { void* args[] = { d, cfg }; return CallStaticValue<float>("DemandOf", args, 2); }
        void Watch(int divisionId) const { void* args[] = { &divisionId }; CallStatic("Watch", args, 1); }
        void* Project(int nationId, void* pos, float extraDemand, int excludeId, void* forCurves = nullptr) const { void* args[] = { &nationId, pos, &extraDemand, &excludeId, forCurves }; return CallStatic("Project", args, 5); }
        float ProjectedStrain(int nationId, void* pos, float extraDemand, int excludeId = -1) const { void* args[] = { &nationId, pos, &extraDemand, &excludeId }; return CallStaticValue<float>("ProjectedStrain", args, 4); }
        void* CityTerms(void* c) const { void* args[] = { c }; return CallStatic("CityTerms", args, 1); }
        float ReachTilesOf(float output, int roadLevel, float rangeMul) const { void* args[] = { &output, &roadLevel, &rangeMul }; return CallStaticValue<float>("ReachTilesOf", args, 3); }
    };
}
