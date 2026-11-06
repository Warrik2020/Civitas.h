#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class CapitulationSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CapitulationSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "CapitulationSystem") {}
    public:
        bool ShouldCapitulate(int nationId, void* rel, void* n, void* it, void* grid, void* cities, void* cfg, int tick, void* surrender = nullptr) const { void* __callArgs[] = { &nationId, rel, n, it, grid, cities, cfg, &tick, surrender }; return CallStaticValue<bool>("ShouldCapitulate", __callArgs, 9); }
        bool CapitalHeld(int nationId, void* rel, void* grid) const { void* __callArgs[] = { &nationId, rel, grid }; return CallStaticValue<bool>("CapitalHeld", __callArgs, 3); }
        void NoteFallenCapital(int nationId, int tile, void* rels, void* grid) const { void* __callArgs[] = { &nationId, &tile, rels, grid }; CallStatic("NoteFallenCapital", __callArgs, 4); }
        int CapitalHolder(int nationId, void* rels, void* grid, int& tile) const { void* __callArgs[] = { &nationId, rels, grid, &tile }; return CallStaticValue<int>("CapitalHolder", __callArgs, 4); }
        void* BuildDeal(int loserId, void* loserRelations) const { void* __callArgs[] = { &loserId, loserRelations }; return CallStatic("BuildDeal", __callArgs, 2); }
        void ExecuteDeal(void* deal, float takeFraction, bool puppet, void* mgr, void* ctx) const { void* __callArgs[] = { &deal, &takeFraction, &puppet, mgr, &ctx }; CallStatic("ExecuteDeal", __callArgs, 5); }
        int CollapseToArmies(int loserId, void* mgr, void* ctx) const { void* __callArgs[] = { &loserId, mgr, &ctx }; return CallStaticValue<int>("CollapseToArmies", __callArgs, 3); }
        void ReconcileCities(int loserId, void* ctx) const { void* __callArgs[] = { &loserId, &ctx }; CallStatic("ReconcileCities", __callArgs, 2); }
        void ReconcileCitiesTo(int fromId, int toId, void* ctx) const { void* __callArgs[] = { &fromId, &toId, &ctx }; CallStatic("ReconcileCitiesTo", __callArgs, 3); }
        void EndAllWarsOf(int nationId, void* mgr, void* ctx, void* except = nullptr) const { void* __callArgs[] = { &nationId, mgr, &ctx, except }; CallStatic("EndAllWarsOf", __callArgs, 4); }
    };
}
