#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Expansion
{
    class ExpansionEconomy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ExpansionEconomy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Expansion", "ExpansionEconomy") {}
    public:
        void Publish(void* cfg) const { void* args[] = { cfg }; CallStatic("Publish", args, 1); }
        float FrontSpeed(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("FrontSpeed", args, 2); }
        float TileMultiplier(void* l, int x, int y) const { void* args[] = { l, &x, &y }; return CallStaticValue<float>("TileMultiplier", args, 3); }
        bool TryBuy(void* n, int x, int y) const { void* args[] = { n, &x, &y }; return CallStaticValue<bool>("TryBuy", args, 3); }
        void BeachheadCost(void* n, void* grid, void* tiles, float& gold, float& settlers) const { void* args[] = { n, grid, tiles, &gold, &settlers }; CallStatic("BeachheadCost", args, 5); }
        bool TryBuyBeachhead(void* n, void* grid, void* tiles) const { void* args[] = { n, grid, tiles }; return CallStaticValue<bool>("TryBuyBeachhead", args, 3); }
        bool CanAffordBeachhead(void* n, void* grid, void* tiles) const { void* args[] = { n, grid, tiles }; return CallStaticValue<bool>("CanAffordBeachhead", args, 3); }
        void* Shortfall(void* l) const { void* args[] = { l }; return CallStatic("Shortfall", args, 1); }
        int Affordable(void* l) const { void* args[] = { l }; return CallStaticValue<int>("Affordable", args, 1); }
        void Refill(void* n, void* it, void* cfg, int span = 1) const { void* args[] = { n, it, cfg, &span }; CallStatic("Refill", args, 4); }
        float SizeMultiplier(int tileCount, void* cfg) const { void* args[] = { &tileCount, cfg }; return CallStaticValue<float>("SizeMultiplier", args, 2); }
        void Settle(void* n, void* it) const { void* args[] = { n, it }; CallStatic("Settle", args, 2); }
        int Ceiling(void* it, void* cfg, float expansionism) const { void* args[] = { it, cfg, &expansionism }; return CallStaticValue<int>("Ceiling", args, 3); }
        int WorldLandTiles() const { return ReadStaticField<int>("WorldLandTiles"); }
        void SetWorldLandTiles(int value) const { WriteStaticField<int>("WorldLandTiles", value); }
        int LivingNations() const { return ReadStaticField<int>("LivingNations"); }
        void SetLivingNations(int value) const { WriteStaticField<int>("LivingNations", value); }
    };
}
