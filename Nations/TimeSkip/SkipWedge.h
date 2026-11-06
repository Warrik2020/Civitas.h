#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipWedge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipWedge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipWedge") {}
    public:
        void* Outward(void* grid, void* attackerTiles, void* defenderTiles, int attacker, int defender) const { void* args[] = { grid, attackerTiles, defenderTiles, &attacker, &defender }; return CallStatic("Outward", args, 5); }
        int Take(void* grid, int attacker, int defender, void* from, void* dir, int reach, float halfWidth, int cap, void* claimed, void* into, void* stopAt = nullptr, void* stopNormal = nullptr) const { void* args[] = { grid, &attacker, &defender, from, dir, &reach, &halfWidth, &cap, claimed, into, stopAt, stopNormal }; return CallValue<int>("Take", args, 12); }
    };
}
