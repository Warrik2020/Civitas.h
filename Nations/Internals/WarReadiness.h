#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarReadiness : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarReadiness(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarReadiness") {}
    public:
        bool IsGo(void* v) const { void* __callArgs[] = { v }; return CallStaticValue<bool>("IsGo", __callArgs, 1); }
        void* Check(void* mgr, void* grid, void* cfg, void* attacker, int attackerId, int defenderId) const { void* __callArgs[] = { mgr, grid, cfg, attacker, &attackerId, &defenderId }; return CallStatic("Check", __callArgs, 6); }
        int CountStaged(void* mgr, void* grid, int nationId, int targetId, float radius, int cap, bool homeSideOnly = false) const { void* __callArgs[] = { mgr, grid, &nationId, &targetId, &radius, &cap, &homeSideOnly }; return CallStaticValue<int>("CountStaged", __callArgs, 7); }
    };
}
