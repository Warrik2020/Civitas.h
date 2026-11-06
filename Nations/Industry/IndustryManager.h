#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class IndustryManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IndustryManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "IndustryManager") {}
    public:
        int BestStateFor(int nationId, int type, int& block) const { void* __callArgs[] = { &nationId, &type, &block }; return CallValue<int>("BestStateFor", __callArgs, 3); }
        void UpgradableWorks(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("UpgradableWorks", __callArgs, 2); }
        int UpgradesUnderWay(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("UpgradesUnderWay", __callArgs, 1); }
        int BlockOf(void* it, int nationId, int stateId, int type, bool god = false, bool charge = true) const { void* __callArgs[] = { it, &nationId, &stateId, &type, &god, &charge }; return CallValue<int>("BlockOf", __callArgs, 6); }
        int BlockOf(int nationId, int stateId, int type) const { void* __callArgs[] = { &nationId, &stateId, &type }; return CallValue<int>("BlockOf", __callArgs, 3); }
        void* BlockNote(int b, int type) const { void* __callArgs[] = { &b, &type }; return CallStatic("BlockNote", __callArgs, 2); }
        void* TechNameFor(int type) const { void* __callArgs[] = { &type }; return CallStatic("TechNameFor", __callArgs, 1); }
        void OutcomeOfBuild(void* o, int nationId, int stateId, int type) const { void* __callArgs[] = { o, &nationId, &stateId, &type }; Call("OutcomeOfBuild", __callArgs, 4); }
        int LayStartingArmouries() const { return CallValue<int>("LayStartingArmouries", nullptr, 0); }
        bool UpgradeTarget(void* it, void* f, int& toType, int& toTier, bool& locked) const { void* __callArgs[] = { it, f, &toType, &toTier, &locked }; return CallValue<bool>("UpgradeTarget", __callArgs, 5); }
        float UpgradeCostOf(int nationId, void* f) const { void* __callArgs[] = { &nationId, f }; return CallValue<float>("UpgradeCostOf", __callArgs, 2); }
        int UpgradeTicksOf(void* f) const { void* __callArgs[] = { f }; return CallValue<int>("UpgradeTicksOf", __callArgs, 1); }
        int UpgradeBlockOf(void* it, int nationId, void* f, bool charge = true) const { void* __callArgs[] = { it, &nationId, f, &charge }; return CallValue<int>("UpgradeBlockOf", __callArgs, 4); }
        void* UpgradeBlockNote(int b, void* f) const { void* __callArgs[] = { &b, f }; return Call("UpgradeBlockNote", __callArgs, 2); }
        bool TryUpgrade(int nationId, void* f, bool charge = true) const { void* __callArgs[] = { &nationId, f, &charge }; return CallValue<bool>("TryUpgrade", __callArgs, 3); }
        void OutcomeOfUpgrade(void* o, int nationId, void* f) const { void* __callArgs[] = { o, &nationId, f }; Call("OutcomeOfUpgrade", __callArgs, 3); }
        void SetFactoriesVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetFactoriesVisible", __callArgs, 1); }
        bool TryBuild(int nationId, int stateId, int type, bool god = false, bool charge = true) const { void* __callArgs[] = { &nationId, &stateId, &type, &god, &charge }; return CallValue<bool>("TryBuild", __callArgs, 5); }
        bool PlaceScenarioBuilding(int nationId, int stateId, int type, float progress, float integrity, int tier = -1, int upgradeType = -1, int upgradeTier = -1, float upgradeProgress = 0.0f) const { void* __callArgs[] = { &nationId, &stateId, &type, &progress, &integrity, &tier, &upgradeType, &upgradeTier, &upgradeProgress }; return CallValue<bool>("PlaceScenarioBuilding", __callArgs, 9); }
        bool PlaceRerolledBuilding(int tile, int nationId, int stateId, int type, float progress, float integrity, int tier, int upgradeType, int upgradeTier, float upgradeProgress) const { void* __callArgs[] = { &tile, &nationId, &stateId, &type, &progress, &integrity, &tier, &upgradeType, &upgradeTier, &upgradeProgress }; return CallValue<bool>("PlaceRerolledBuilding", __callArgs, 10); }
        void* BuildingsIn(int stateId) const { void* __callArgs[] = { &stateId }; return Call("BuildingsIn", __callArgs, 1); }
        void* FactoriesOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("FactoriesOf", __callArgs, 1); }
        int SlotsOf(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("SlotsOf", __callArgs, 1); }
        int UsedSlots(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("UsedSlots", __callArgs, 1); }
        int FreeSlots(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("FreeSlots", __callArgs, 1); }
        int OwnerOf(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("OwnerOf", __callArgs, 1); }
        float CostOf(int t) const { void* __callArgs[] = { &t }; return CallValue<float>("CostOf", __callArgs, 1); }
        float CostOf(int nationId, int t) const { void* __callArgs[] = { &nationId, &t }; return CallValue<float>("CostOf", __callArgs, 2); }
        float CostEscalation(int nationId, int t) const { void* __callArgs[] = { &nationId, &t }; return CallValue<float>("CostEscalation", __callArgs, 2); }
        float CommittedWeight(int nationId, int ladder) const { void* __callArgs[] = { &nationId, &ladder }; return CallValue<float>("CommittedWeight", __callArgs, 2); }
        int BuildTicksOf(int t) const { void* __callArgs[] = { &t }; return CallValue<int>("BuildTicksOf", __callArgs, 1); }
        int CountOf(int nationId, int t) const { void* __callArgs[] = { &nationId, &t }; return CallValue<int>("CountOf", __callArgs, 2); }
        int TransferFactories(int fromNationId, int toNationId, int count) const { void* __callArgs[] = { &fromNationId, &toNationId, &count }; return CallValue<int>("TransferFactories", __callArgs, 3); }
        int TransferAllFactories(int fromNationId, int toNationId) const { void* __callArgs[] = { &fromNationId, &toNationId }; return CallValue<int>("TransferAllFactories", __callArgs, 2); }
        float TryBuildRoad(int nationId, void* pathTiles, int cityA = -1, int cityB = -1, bool charge = true) const { void* __callArgs[] = { &nationId, pathTiles, &cityA, &cityB, &charge }; return CallValue<float>("TryBuildRoad", __callArgs, 5); }
        void* RoadUpgradeBlocker(int nationId, void* r, bool checkCost = true) const { void* __callArgs[] = { &nationId, r, &checkCost }; return Call("RoadUpgradeBlocker", __callArgs, 3); }
        float RoadUpgradeCost(void* r) const { void* __callArgs[] = { r }; return CallValue<float>("RoadUpgradeCost", __callArgs, 1); }
        float TryUpgradeRoad(int nationId, void* r, bool charge = true) const { void* __callArgs[] = { &nationId, r, &charge }; return CallValue<float>("TryUpgradeRoad", __callArgs, 3); }
        bool Demolish(void* f) const { void* __callArgs[] = { f }; return CallValue<bool>("Demolish", __callArgs, 1); }
        void ClearState(int stateId) const { void* __callArgs[] = { &stateId }; Call("ClearState", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int CountInState(int stateId, int type) const { void* __callArgs[] = { &stateId, &type }; return CallValue<int>("CountInState", __callArgs, 2); }
    };
}
