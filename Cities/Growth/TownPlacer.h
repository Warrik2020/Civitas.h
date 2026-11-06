#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Growth
{
    class TownPlacer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TownPlacer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Growth", "TownPlacer") {}
    public:
        bool TryFindScoredSite(void* n, void* grid, void* cfg, void* cities, void* w, int& tx, int& ty) const { void* args[] = { n, grid, cfg, cities, &w, &tx, &ty }; return CallStaticValue<bool>("TryFindScoredSite", args, 7); }
    };
}
