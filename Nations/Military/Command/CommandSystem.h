#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CommandSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CommandSystem") {}
    public:
        bool ShareOf(int armyId, float& lo, float& hi) const { void* args[] = { &armyId, &lo, &hi }; return CallValue<bool>("ShareOf", args, 3); }
        void* SpansOf(int armyId) const { void* args[] = { &armyId }; return Call("SpansOf", args, 1); }
        bool Holds(int armyId, float f) const { void* args[] = { &armyId, &f }; return CallValue<bool>("Holds", args, 2); }
        bool WantsEarly(void* mil, void* nc, int tick) const { void* args[] = { mil, nc, &tick }; return CallValue<bool>("WantsEarly", args, 3); }
        void EvaluateNation(void* store, void* mil, void* n, void* grid, void* cfg, void* buckets, void* cities, void* divisionById, int tick, int ticksPerDay = 3) const { void* args[] = { store, mil, n, grid, cfg, buckets, cities, divisionById, &tick, &ticksPerDay }; Call("EvaluateNation", args, 10); }
        bool BeginNation(void* store, void* mil, void* n, void* grid, void* cfg, void* cities, int tick, void* nc) const { void* args[] = { store, mil, n, grid, cfg, cities, &tick, &nc }; return CallValue<bool>("BeginNation", args, 8); }
        bool OpenNation(void* store, void* mil, void* n, void* grid, void* cities, int tick, void* nc) const { void* args[] = { store, mil, n, grid, cities, &tick, &nc }; return CallValue<bool>("OpenNation", args, 7); }
        int LandOf(void* d, int nationId) const { void* args[] = { d, &nationId }; return CallValue<int>("LandOf", args, 2); }
        int LandOf(int nationId, int tile) const { void* args[] = { &nationId, &tile }; return CallValue<int>("LandOf", args, 2); }
        void NoteFlood(void* store, void* mil, void* conn) const { void* args[] = { store, mil, conn }; Call("NoteFlood", args, 3); }
        void ForgetNation(int nationId) const { void* args[] = { &nationId }; Call("ForgetNation", args, 1); }
        void ResolveFront(void* army, void* mil, void* grid, void* cfg) const { void* args[] = { army, mil, grid, cfg }; Call("ResolveFront", args, 4); }
        void SplitFronts(void* nc, void* mil, void* grid) const { void* args[] = { nc, mil, grid }; Call("SplitFronts", args, 3); }
        bool HasFronts(void* nc) const { void* args[] = { nc }; return CallStaticValue<bool>("HasFronts", args, 1); }
        void EndNation(void* mil, void* nc) const { void* args[] = { mil, nc }; Call("EndNation", args, 2); }
        void EvaluateArmy(void* store, void* army, void* n, void* mil, void* grid, void* cfg, void* buckets, void* divisionById, int tick, int ticksPerDay) const { void* args[] = { store, army, n, mil, grid, cfg, buckets, divisionById, &tick, &ticksPerDay }; Call("EvaluateArmy", args, 10); }
        void* PointAtFraction(void* line, float f) const { void* args[] = { line, &f }; return CallStatic("PointAtFraction", args, 2); }
        float ArcFraction(void* line, void* p) const { void* args[] = { line, p }; return CallStaticValue<float>("ArcFraction", args, 2); }
        void* ArmyAt(void* store, int nationId, void* tile, float radiusTiles) const { void* args[] = { store, &nationId, tile, &radiusTiles }; return Call("ArmyAt", args, 4); }
        int FoeAt(void* border, void* grid, int nationId, void* tile, float radiusTiles) const { void* args[] = { border, grid, &nationId, tile, &radiusTiles }; return CallStaticValue<int>("FoeAt", args, 5); }
        bool Borders(void* border, int foe) const { void* args[] = { border, &foe }; return CallStaticValue<bool>("Borders", args, 2); }
        bool Eligible(void* d, void* grid, void* onFront) const { void* args[] = { d, grid, onFront }; return CallStaticValue<bool>("Eligible", args, 3); }
        bool Steerable(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Steerable", args, 1); }
        bool HeldByOrder(void* d, int tick) const { void* args[] = { d, &tick }; return CallStaticValue<bool>("HeldByOrder", args, 2); }
        void ReleaseOrder(void* d) const { void* args[] = { d }; CallStatic("ReleaseOrder", args, 1); }
        void ForgetArmy(int armyId) const { void* args[] = { &armyId }; Call("ForgetArmy", args, 1); }
        void* geometry() const { return ReadField<void*>("geometry"); }
        int EarlyMinTicks() const { return ReadStaticField<int>("EarlyMinTicks"); }
        float PlanningPerDay() const { return ReadStaticField<float>("PlanningPerDay"); }
        float PlanningDecayPerDay() const { return ReadStaticField<float>("PlanningDecayPerDay"); }
        float InPositionTiles() const { return ReadStaticField<float>("InPositionTiles"); }
        int OrderLingerTicks() const { return ReadStaticField<int>("OrderLingerTicks"); }
    };
}
