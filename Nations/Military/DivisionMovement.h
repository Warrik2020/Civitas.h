#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionMovement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionMovement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionMovement") {}
    public:
        void Tick(void* d, void* n, void* grid, void* cfg, int tick, void* mil, void* occupancy) const { void* args[] = { d, n, grid, cfg, &tick, mil, occupancy }; CallStatic("Tick", args, 7); }
        void RallyRegen(void* d, void* cfg, int tick, float logisticsMul) const { void* args[] = { d, cfg, &tick, &logisticsMul }; CallStatic("RallyRegen", args, 4); }
        float OrgCapOf(void* d, void* cfg) const { void* args[] = { d, cfg }; return CallStaticValue<float>("OrgCapOf", args, 2); }
        bool FallbackTimedOut(void* d, void* cfg, int tick) const { void* args[] = { d, cfg, &tick }; return CallStaticValue<bool>("FallbackTimedOut", args, 3); }
        float MarchSpeed(void* d, void* cfg, void* grid, float fallbackSpeed, int x, int y) const { void* args[] = { d, cfg, grid, &fallbackSpeed, &x, &y }; return CallStaticValue<float>("MarchSpeed", args, 6); }
        float MarchSpeed(void* d, void* cfg, void* grid, float fallbackSpeed, int x, int y, bool includeTerrain) const { void* args[] = { d, cfg, grid, &fallbackSpeed, &x, &y, &includeTerrain }; return CallStaticValue<float>("MarchSpeed", args, 7); }
        bool OrderPointsAway(void* d, void* aim, void* enemyPos, void* cfg) const { void* args[] = { d, aim, enemyPos, cfg }; return CallStaticValue<bool>("OrderPointsAway", args, 4); }
        void AcceptOrder(void* d, void* target) const { void* args[] = { d, target }; CallStatic("AcceptOrder", args, 2); }
        void RejoinLine(void* d, void* grid, void* cfg, void* occupancy) const { void* args[] = { d, grid, cfg, occupancy }; CallStatic("RejoinLine", args, 4); }
        void ResumeOrder(void* d) const { void* args[] = { d }; CallStatic("ResumeOrder", args, 1); }
        void* FallbackPoint(void* d, void* n, void* grid, void* cfg, float dist, int tick) const { void* args[] = { d, n, grid, cfg, &dist, &tick }; return CallStatic("FallbackPoint", args, 6); }
        void StartRetreat(void* d, void* n, void* grid, void* cfg, int tick) const { void* args[] = { d, n, grid, cfg, &tick }; CallStatic("StartRetreat", args, 5); }
        void StartWithdraw(void* d, void* n, void* grid, void* cfg, int tick) const { void* args[] = { d, n, grid, cfg, &tick }; CallStatic("StartWithdraw", args, 5); }
        void* SnapToOwnLand(void* p, void* toward, int nationId, void* grid) const { void* args[] = { p, toward, &nationId, grid }; return CallStatic("SnapToOwnLand", args, 4); }
    };
}
