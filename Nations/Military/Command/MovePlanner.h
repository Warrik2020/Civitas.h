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
        void Enqueue(void* d, bool player) const { void* args[] = { d, &player }; CallStatic("Enqueue", args, 2); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        void* TickQueueSteps(void* grid, void* cfg, int tick, void* militaryOf, bool split) const { void* args[] = { grid, cfg, &tick, militaryOf, &split }; return CallStatic("TickQueueSteps", args, 5); }
        void DrainPlayerNow(void* grid, void* cfg, int tick, void* militaryOf, float maxMs) const { void* args[] = { grid, cfg, &tick, militaryOf, &maxMs }; CallStatic("DrainPlayerNow", args, 5); }
        bool Plan(void* d, void* mil, void* grid, void* cfg, bool player) const { void* args[] = { d, mil, grid, cfg, &player }; return CallStaticValue<bool>("Plan", args, 5); }
        void* Reach(void* d, void* mil, void* goal, void* grid, void* cfg, float& ticks) const { void* args[] = { d, mil, goal, grid, cfg, &ticks }; return CallStatic("Reach", args, 6); }
        bool GoesDirect(void* mover, void* mil, void* grid, void* goal) const { void* args[] = { mover, mil, grid, goal }; return CallStaticValue<bool>("GoesDirect", args, 4); }
        bool PreviewPath(void* mover, void* mil, void* goal, void* grid, void* cfg, void* into) const { void* args[] = { mover, mil, goal, grid, cfg, into }; return CallStaticValue<bool>("PreviewPath", args, 6); }
        bool PreviewPath(void* mover, void* mil, void* goal, void* grid, void* cfg, void* into, bool& reached) const { void* args[] = { mover, mil, goal, grid, cfg, into, &reached }; return CallStaticValue<bool>("PreviewPath", args, 7); }
        bool Search(void* d, void* mil, void* start, void* goal, bool allowPress, bool bestEffort, int maxExpansions, void* grid, void* cfg, void* points, int& pointCount, bool& truncated, bool& reachedGoal, int& expansionsUsed) const { void* args[] = { d, mil, start, goal, &allowPress, &bestEffort, &maxExpansions, grid, cfg, &points, &pointCount, &truncated, &reachedGoal, &expansionsUsed }; return CallStaticValue<bool>("Search", args, 14); }
        bool LegClear(void* d, void* mil, void* grid, void* a, void* b, bool allowPress) const { void* args[] = { d, mil, grid, a, b, &allowPress }; return CallStaticValue<bool>("LegClear", args, 6); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Push(int node, float pri) const { void* args[] = { &node, &pri }; Call("Push", args, 2); }
        int Pop() const { return CallValue<int>("Pop", nullptr, 0); }
    };
}
