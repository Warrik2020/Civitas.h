#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class MovePlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MovePlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "MovePlanner") {}
    public:
        void Enqueue(void* d, bool player) const { void* __callArgs[] = { d, &player }; CallStatic("Enqueue", __callArgs, 2); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        void* TickQueueSteps(void* grid, void* cfg, int tick, void* militaryOf, bool split) const { void* __callArgs[] = { grid, cfg, &tick, militaryOf, &split }; return CallStatic("TickQueueSteps", __callArgs, 5); }
        void DrainPlayerNow(void* grid, void* cfg, int tick, void* militaryOf, float maxMs) const { void* __callArgs[] = { grid, cfg, &tick, militaryOf, &maxMs }; CallStatic("DrainPlayerNow", __callArgs, 5); }
        bool Plan(void* d, void* mil, void* grid, void* cfg, bool player) const { void* __callArgs[] = { d, mil, grid, cfg, &player }; return CallStaticValue<bool>("Plan", __callArgs, 5); }
        void* Reach(void* d, void* mil, void* goal, void* grid, void* cfg, float& ticks) const { void* __callArgs[] = { d, mil, goal, grid, cfg, &ticks }; return CallStatic("Reach", __callArgs, 6); }
        bool GoesDirect(void* mover, void* mil, void* grid, void* goal) const { void* __callArgs[] = { mover, mil, grid, goal }; return CallStaticValue<bool>("GoesDirect", __callArgs, 4); }
        bool PreviewPath(void* mover, void* mil, void* goal, void* grid, void* cfg, void* into) const { void* __callArgs[] = { mover, mil, goal, grid, cfg, into }; return CallStaticValue<bool>("PreviewPath", __callArgs, 6); }
        bool PreviewPath(void* mover, void* mil, void* goal, void* grid, void* cfg, void* into, bool& reached) const { void* __callArgs[] = { mover, mil, goal, grid, cfg, into, &reached }; return CallStaticValue<bool>("PreviewPath", __callArgs, 7); }
        bool Search(void* d, void* mil, void* start, void* goal, bool allowPress, bool bestEffort, int maxExpansions, void* grid, void* cfg, void* points, int& pointCount, bool& truncated, bool& reachedGoal, int& expansionsUsed) const { void* __callArgs[] = { d, mil, start, goal, &allowPress, &bestEffort, &maxExpansions, grid, cfg, &points, &pointCount, &truncated, &reachedGoal, &expansionsUsed }; return CallStaticValue<bool>("Search", __callArgs, 14); }
        bool LegClear(void* d, void* mil, void* grid, void* a, void* b, bool allowPress) const { void* __callArgs[] = { d, mil, grid, a, b, &allowPress }; return CallStaticValue<bool>("LegClear", __callArgs, 6); }
    };
}
