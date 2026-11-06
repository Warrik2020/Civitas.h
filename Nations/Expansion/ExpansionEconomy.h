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
        void Publish(void* cfg) const { void* __callArgs[] = { cfg }; CallStatic("Publish", __callArgs, 1); }
        float FrontSpeed(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<float>("FrontSpeed", __callArgs, 2); }
        float TileMultiplier(void* l, int x, int y) const { void* __callArgs[] = { l, &x, &y }; return CallStaticValue<float>("TileMultiplier", __callArgs, 3); }
        bool TryBuy(void* n, int x, int y) const { void* __callArgs[] = { n, &x, &y }; return CallStaticValue<bool>("TryBuy", __callArgs, 3); }
        void BeachheadCost(void* n, void* grid, void* tiles, float& gold, float& settlers) const { void* __callArgs[] = { n, grid, tiles, &gold, &settlers }; CallStatic("BeachheadCost", __callArgs, 5); }
        bool TryBuyBeachhead(void* n, void* grid, void* tiles) const { void* __callArgs[] = { n, grid, tiles }; return CallStaticValue<bool>("TryBuyBeachhead", __callArgs, 3); }
        bool CanAffordBeachhead(void* n, void* grid, void* tiles) const { void* __callArgs[] = { n, grid, tiles }; return CallStaticValue<bool>("CanAffordBeachhead", __callArgs, 3); }
        void* Shortfall(void* l) const { void* __callArgs[] = { l }; return CallStatic("Shortfall", __callArgs, 1); }
        int Affordable(void* l) const { void* __callArgs[] = { l }; return CallStaticValue<int>("Affordable", __callArgs, 1); }
        void Refill(void* n, void* it, void* cfg, int span = 1) const { void* __callArgs[] = { n, it, cfg, &span }; CallStatic("Refill", __callArgs, 4); }
        float SizeMultiplier(int tileCount, void* cfg) const { void* __callArgs[] = { &tileCount, cfg }; return CallStaticValue<float>("SizeMultiplier", __callArgs, 2); }
        void Settle(void* n, void* it) const { void* __callArgs[] = { n, it }; CallStatic("Settle", __callArgs, 2); }
        int Ceiling(void* it, void* cfg, float expansionism) const { void* __callArgs[] = { it, cfg, &expansionism }; return CallStaticValue<int>("Ceiling", __callArgs, 3); }
        int WorldLandTiles() const { return ReadStaticField<int>("WorldLandTiles"); }
        void WorldLandTiles(int value) const { WriteStaticField<int>("WorldLandTiles", value); }
        int LivingNations() const { return ReadStaticField<int>("LivingNations"); }
        void LivingNations(int value) const { WriteStaticField<int>("LivingNations", value); }
    };
}
