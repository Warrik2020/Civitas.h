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
        bool ShareOf(int armyId, float& lo, float& hi) const { void* __callArgs[] = { &armyId, &lo, &hi }; return CallValue<bool>("ShareOf", __callArgs, 3); }
        void* SpansOf(int armyId) const { void* __callArgs[] = { &armyId }; return Call("SpansOf", __callArgs, 1); }
        bool Holds(int armyId, float f) const { void* __callArgs[] = { &armyId, &f }; return CallValue<bool>("Holds", __callArgs, 2); }
        bool WantsEarly(void* mil, void* nc, int tick) const { void* __callArgs[] = { mil, nc, &tick }; return CallValue<bool>("WantsEarly", __callArgs, 3); }
        void EvaluateNation(void* store, void* mil, void* n, void* grid, void* cfg, void* buckets, void* cities, void* divisionById, int tick, int ticksPerDay = 3) const { void* __callArgs[] = { store, mil, n, grid, cfg, buckets, cities, divisionById, &tick, &ticksPerDay }; Call("EvaluateNation", __callArgs, 10); }
        bool BeginNation(void* store, void* mil, void* n, void* grid, void* cfg, void* cities, int tick, void* nc) const { void* __callArgs[] = { store, mil, n, grid, cfg, cities, &tick, &nc }; return CallValue<bool>("BeginNation", __callArgs, 8); }
        bool OpenNation(void* store, void* mil, void* n, void* grid, void* cities, int tick, void* nc) const { void* __callArgs[] = { store, mil, n, grid, cities, &tick, &nc }; return CallValue<bool>("OpenNation", __callArgs, 7); }
        int LandOf(void* d, int nationId) const { void* __callArgs[] = { d, &nationId }; return CallValue<int>("LandOf", __callArgs, 2); }
        int LandOf(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; return CallValue<int>("LandOf", __callArgs, 2); }
        void NoteFlood(void* store, void* mil, void* conn) const { void* __callArgs[] = { store, mil, conn }; Call("NoteFlood", __callArgs, 3); }
        void ForgetNation(int nationId) const { void* __callArgs[] = { &nationId }; Call("ForgetNation", __callArgs, 1); }
        void ResolveFront(void* army, void* mil, void* grid, void* cfg) const { void* __callArgs[] = { army, mil, grid, cfg }; Call("ResolveFront", __callArgs, 4); }
        void SplitFronts(void* nc, void* mil, void* grid) const { void* __callArgs[] = { nc, mil, grid }; Call("SplitFronts", __callArgs, 3); }
        bool HasFronts(void* nc) const { void* __callArgs[] = { nc }; return CallStaticValue<bool>("HasFronts", __callArgs, 1); }
        void EndNation(void* mil, void* nc) const { void* __callArgs[] = { mil, nc }; Call("EndNation", __callArgs, 2); }
        void EvaluateArmy(void* store, void* army, void* n, void* mil, void* grid, void* cfg, void* buckets, void* divisionById, int tick, int ticksPerDay) const { void* __callArgs[] = { store, army, n, mil, grid, cfg, buckets, divisionById, &tick, &ticksPerDay }; Call("EvaluateArmy", __callArgs, 10); }
        void* PointAtFraction(void* line, float f) const { void* __callArgs[] = { line, &f }; return CallStatic("PointAtFraction", __callArgs, 2); }
        float ArcFraction(void* line, void* p) const { void* __callArgs[] = { line, p }; return CallStaticValue<float>("ArcFraction", __callArgs, 2); }
        void* ArmyAt(void* store, int nationId, void* tile, float radiusTiles) const { void* __callArgs[] = { store, &nationId, tile, &radiusTiles }; return Call("ArmyAt", __callArgs, 4); }
        int FoeAt(void* border, void* grid, int nationId, void* tile, float radiusTiles) const { void* __callArgs[] = { border, grid, &nationId, tile, &radiusTiles }; return CallStaticValue<int>("FoeAt", __callArgs, 5); }
        bool Borders(void* border, int foe) const { void* __callArgs[] = { border, &foe }; return CallStaticValue<bool>("Borders", __callArgs, 2); }
        bool Eligible(void* d, void* grid, void* onFront) const { void* __callArgs[] = { d, grid, onFront }; return CallStaticValue<bool>("Eligible", __callArgs, 3); }
        bool Steerable(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Steerable", __callArgs, 1); }
        bool HeldByOrder(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStaticValue<bool>("HeldByOrder", __callArgs, 2); }
        void ReleaseOrder(void* d) const { void* __callArgs[] = { d }; CallStatic("ReleaseOrder", __callArgs, 1); }
        void ForgetArmy(int armyId) const { void* __callArgs[] = { &armyId }; Call("ForgetArmy", __callArgs, 1); }
        void* geometry() const { return ReadField<void*>("geometry"); }
        int EarlyMinTicks() const { return ReadStaticField<int>("EarlyMinTicks"); }
        float PlanningPerDay() const { return ReadStaticField<float>("PlanningPerDay"); }
        float PlanningDecayPerDay() const { return ReadStaticField<float>("PlanningDecayPerDay"); }
        float InPositionTiles() const { return ReadStaticField<float>("InPositionTiles"); }
        int OrderLingerTicks() const { return ReadStaticField<int>("OrderLingerTicks"); }
    };
}
