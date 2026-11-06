#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class PlanExecutor : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanExecutor(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "PlanExecutor") {}
    public:
        void Execute(void* army, void* line, void* slotter, void* divs, void* mil, void* grid, void* cfg, void* offensive = nullptr) const { void* args[] = { army, line, slotter, divs, mil, grid, cfg, offensive }; CallStatic("Execute", args, 8); }
        void ExecuteFallback(void* army, void* line, void* slotter, void* divs, void* n, void* mil, void* grid, void* cfg, int tick) const { void* args[] = { army, line, slotter, divs, n, mil, grid, cfg, &tick }; CallStatic("ExecuteFallback", args, 9); }
        bool Executing(void* army) const { void* args[] = { army }; return CallStaticValue<bool>("Executing", args, 1); }
        bool AdvanceAim(void* d, void* post, void* mil, void* grid, void* aim) const { void* args[] = { d, post, mil, grid, &aim }; return CallStaticValue<bool>("AdvanceAim", args, 5); }
        bool AimToward(void* d, void* from, void* goal, void* mil, void* grid, void* aim) const { void* args[] = { d, from, goal, mil, grid, &aim }; return CallStaticValue<bool>("AimToward", args, 6); }
        bool Held(void* mil, void* grid, void* p) const { void* args[] = { mil, grid, p }; return CallStaticValue<bool>("Held", args, 3); }
        void* OnOwn(void* from, void* to, void* mil, void* grid) const { void* args[] = { from, to, mil, grid }; return CallStatic("OnOwn", args, 4); }
        void SetTarget(void* d, void* target, void* cfg) const { void* args[] = { d, target, cfg }; CallStatic("SetTarget", args, 3); }
        float ExecAimTiles() const { return ReadStaticField<float>("ExecAimTiles"); }
        float StickyTiles() const { return ReadStaticField<float>("StickyTiles"); }
        float FollowTiles() const { return ReadStaticField<float>("FollowTiles"); }
    };
}
