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
        void Tick(void* d, void* n, void* grid, void* cfg, int tick, void* mil, void* occupancy) const { void* __callArgs[] = { d, n, grid, cfg, &tick, mil, occupancy }; CallStatic("Tick", __callArgs, 7); }
        void RallyRegen(void* d, void* cfg, int tick, float logisticsMul) const { void* __callArgs[] = { d, cfg, &tick, &logisticsMul }; CallStatic("RallyRegen", __callArgs, 4); }
        float OrgCapOf(void* d, void* cfg) const { void* __callArgs[] = { d, cfg }; return CallStaticValue<float>("OrgCapOf", __callArgs, 2); }
        bool FallbackTimedOut(void* d, void* cfg, int tick) const { void* __callArgs[] = { d, cfg, &tick }; return CallStaticValue<bool>("FallbackTimedOut", __callArgs, 3); }
        float MarchSpeed(void* d, void* cfg, void* grid, float fallbackSpeed, int x, int y) const { void* __callArgs[] = { d, cfg, grid, &fallbackSpeed, &x, &y }; return CallStaticValue<float>("MarchSpeed", __callArgs, 6); }
        float MarchSpeed(void* d, void* cfg, void* grid, float fallbackSpeed, int x, int y, bool includeTerrain) const { void* __callArgs[] = { d, cfg, grid, &fallbackSpeed, &x, &y, &includeTerrain }; return CallStaticValue<float>("MarchSpeed", __callArgs, 7); }
        bool OrderPointsAway(void* d, void* aim, void* enemyPos, void* cfg) const { void* __callArgs[] = { d, aim, enemyPos, cfg }; return CallStaticValue<bool>("OrderPointsAway", __callArgs, 4); }
        void AcceptOrder(void* d, void* target) const { void* __callArgs[] = { d, target }; CallStatic("AcceptOrder", __callArgs, 2); }
        void RejoinLine(void* d, void* grid, void* cfg, void* occupancy) const { void* __callArgs[] = { d, grid, cfg, occupancy }; CallStatic("RejoinLine", __callArgs, 4); }
        void ResumeOrder(void* d) const { void* __callArgs[] = { d }; CallStatic("ResumeOrder", __callArgs, 1); }
        void* FallbackPoint(void* d, void* n, void* grid, void* cfg, float dist, int tick) const { void* __callArgs[] = { d, n, grid, cfg, &dist, &tick }; return CallStatic("FallbackPoint", __callArgs, 6); }
        void StartRetreat(void* d, void* n, void* grid, void* cfg, int tick) const { void* __callArgs[] = { d, n, grid, cfg, &tick }; CallStatic("StartRetreat", __callArgs, 5); }
        void StartWithdraw(void* d, void* n, void* grid, void* cfg, int tick) const { void* __callArgs[] = { d, n, grid, cfg, &tick }; CallStatic("StartWithdraw", __callArgs, 5); }
        void* SnapToOwnLand(void* p, void* toward, int nationId, void* grid) const { void* __callArgs[] = { p, toward, &nationId, grid }; return CallStatic("SnapToOwnLand", __callArgs, 4); }
    };
}
