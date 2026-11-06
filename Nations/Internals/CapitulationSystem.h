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
        bool ShouldCapitulate(int nationId, void* rel, void* n, void* it, void* grid, void* cities, void* cfg, int tick, void* surrender = nullptr) const { void* args[] = { &nationId, rel, n, it, grid, cities, cfg, &tick, surrender }; return CallStaticValue<bool>("ShouldCapitulate", args, 9); }
        bool CapitalHeld(int nationId, void* rel, void* grid) const { void* args[] = { &nationId, rel, grid }; return CallStaticValue<bool>("CapitalHeld", args, 3); }
        void NoteFallenCapital(int nationId, int tile, void* rels, void* grid) const { void* args[] = { &nationId, &tile, rels, grid }; CallStatic("NoteFallenCapital", args, 4); }
        int CapitalHolder(int nationId, void* rels, void* grid, int& tile) const { void* args[] = { &nationId, rels, grid, &tile }; return CallStaticValue<int>("CapitalHolder", args, 4); }
        void* BuildDeal(int loserId, void* loserRelations) const { void* args[] = { &loserId, loserRelations }; return CallStatic("BuildDeal", args, 2); }
        void ExecuteDeal(void* deal, float takeFraction, bool puppet, void* mgr, void* ctx) const { void* args[] = { &deal, &takeFraction, &puppet, mgr, &ctx }; CallStatic("ExecuteDeal", args, 5); }
        int CollapseToArmies(int loserId, void* mgr, void* ctx) const { void* args[] = { &loserId, mgr, &ctx }; return CallStaticValue<int>("CollapseToArmies", args, 3); }
        void ReconcileCities(int loserId, void* ctx) const { void* args[] = { &loserId, &ctx }; CallStatic("ReconcileCities", args, 2); }
        void ReconcileCitiesTo(int fromId, int toId, void* ctx) const { void* args[] = { &fromId, &toId, &ctx }; CallStatic("ReconcileCitiesTo", args, 3); }
        void EndAllWarsOf(int nationId, void* mgr, void* ctx, void* except = nullptr) const { void* args[] = { &nationId, mgr, &ctx, except }; CallStatic("EndAllWarsOf", args, 4); }
        int loserId() const { return ReadField<int>("loserId"); }
        void SetLoserId(int value) const { WriteField<int>("loserId", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void SetVictorId(int value) const { WriteField<int>("victorId", value); }
        void* shares() const { return ReadField<void*>("shares"); }
        void SetShares(void* value) const { WriteField<void*>("shares", value); }
        int enemyId() const { return ReadField<int>("enemyId"); }
        void SetEnemyId(int value) const { WriteField<int>("enemyId", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
    };
}
