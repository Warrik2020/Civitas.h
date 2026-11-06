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
        int BestStateFor(int nationId, int type, int& block) const { void* args[] = { &nationId, &type, &block }; return CallValue<int>("BestStateFor", args, 3); }
        void UpgradableWorks(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("UpgradableWorks", args, 2); }
        int UpgradesUnderWay(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("UpgradesUnderWay", args, 1); }
        int BlockOf(void* it, int nationId, int stateId, int type, bool god = false, bool charge = true) const { void* args[] = { it, &nationId, &stateId, &type, &god, &charge }; return CallValue<int>("BlockOf", args, 6); }
        int BlockOf(int nationId, int stateId, int type) const { void* args[] = { &nationId, &stateId, &type }; return CallValue<int>("BlockOf", args, 3); }
        void* BlockNote(int b, int type) const { void* args[] = { &b, &type }; return CallStatic("BlockNote", args, 2); }
        void* TechNameFor(int type) const { void* args[] = { &type }; return CallStatic("TechNameFor", args, 1); }
        void OutcomeOfBuild(void* o, int nationId, int stateId, int type) const { void* args[] = { o, &nationId, &stateId, &type }; Call("OutcomeOfBuild", args, 4); }
        int LayStartingArmouries() const { return CallValue<int>("LayStartingArmouries", nullptr, 0); }
        bool UpgradeTarget(void* it, void* f, int& toType, int& toTier, bool& locked) const { void* args[] = { it, f, &toType, &toTier, &locked }; return CallValue<bool>("UpgradeTarget", args, 5); }
        float UpgradeCostOf(int nationId, void* f) const { void* args[] = { &nationId, f }; return CallValue<float>("UpgradeCostOf", args, 2); }
        int UpgradeTicksOf(void* f) const { void* args[] = { f }; return CallValue<int>("UpgradeTicksOf", args, 1); }
        int UpgradeBlockOf(void* it, int nationId, void* f, bool charge = true) const { void* args[] = { it, &nationId, f, &charge }; return CallValue<int>("UpgradeBlockOf", args, 4); }
        void* UpgradeBlockNote(int b, void* f) const { void* args[] = { &b, f }; return Call("UpgradeBlockNote", args, 2); }
        bool TryUpgrade(int nationId, void* f, bool charge = true) const { void* args[] = { &nationId, f, &charge }; return CallValue<bool>("TryUpgrade", args, 3); }
        void OutcomeOfUpgrade(void* o, int nationId, void* f) const { void* args[] = { o, &nationId, f }; Call("OutcomeOfUpgrade", args, 3); }
        void SetFactoriesVisible(bool visible) const { void* args[] = { &visible }; Call("SetFactoriesVisible", args, 1); }
        bool TryBuild(int nationId, int stateId, int type, bool god = false, bool charge = true) const { void* args[] = { &nationId, &stateId, &type, &god, &charge }; return CallValue<bool>("TryBuild", args, 5); }
        bool PlaceScenarioBuilding(int nationId, int stateId, int type, float progress, float integrity, int tier = -1, int upgradeType = -1, int upgradeTier = -1, float upgradeProgress = 0f) const { void* args[] = { &nationId, &stateId, &type, &progress, &integrity, &tier, &upgradeType, &upgradeTier, &upgradeProgress }; return CallValue<bool>("PlaceScenarioBuilding", args, 9); }
        bool PlaceRerolledBuilding(int tile, int nationId, int stateId, int type, float progress, float integrity, int tier, int upgradeType, int upgradeTier, float upgradeProgress) const { void* args[] = { &tile, &nationId, &stateId, &type, &progress, &integrity, &tier, &upgradeType, &upgradeTier, &upgradeProgress }; return CallValue<bool>("PlaceRerolledBuilding", args, 10); }
        void* BuildingsIn(int stateId) const { void* args[] = { &stateId }; return Call("BuildingsIn", args, 1); }
        void* FactoriesOf(int nationId) const { void* args[] = { &nationId }; return Call("FactoriesOf", args, 1); }
        int SlotsOf(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("SlotsOf", args, 1); }
        int UsedSlots(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("UsedSlots", args, 1); }
        int FreeSlots(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("FreeSlots", args, 1); }
        int OwnerOf(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("OwnerOf", args, 1); }
        float CostOf(int t) const { void* args[] = { &t }; return CallValue<float>("CostOf", args, 1); }
        float CostOf(int nationId, int t) const { void* args[] = { &nationId, &t }; return CallValue<float>("CostOf", args, 2); }
        float CostEscalation(int nationId, int t) const { void* args[] = { &nationId, &t }; return CallValue<float>("CostEscalation", args, 2); }
        float CommittedWeight(int nationId, int ladder) const { void* args[] = { &nationId, &ladder }; return CallValue<float>("CommittedWeight", args, 2); }
        int BuildTicksOf(int t) const { void* args[] = { &t }; return CallValue<int>("BuildTicksOf", args, 1); }
        int CountOf(int nationId, int t) const { void* args[] = { &nationId, &t }; return CallValue<int>("CountOf", args, 2); }
        int TransferFactories(int fromNationId, int toNationId, int count) const { void* args[] = { &fromNationId, &toNationId, &count }; return CallValue<int>("TransferFactories", args, 3); }
        int TransferAllFactories(int fromNationId, int toNationId) const { void* args[] = { &fromNationId, &toNationId }; return CallValue<int>("TransferAllFactories", args, 2); }
        float TryBuildRoad(int nationId, void* pathTiles, int cityA = -1, int cityB = -1, bool charge = true) const { void* args[] = { &nationId, pathTiles, &cityA, &cityB, &charge }; return CallValue<float>("TryBuildRoad", args, 5); }
        void* RoadUpgradeBlocker(int nationId, void* r, bool checkCost = true) const { void* args[] = { &nationId, r, &checkCost }; return Call("RoadUpgradeBlocker", args, 3); }
        float RoadUpgradeCost(void* r) const { void* args[] = { r }; return CallValue<float>("RoadUpgradeCost", args, 1); }
        float TryUpgradeRoad(int nationId, void* r, bool charge = true) const { void* args[] = { &nationId, r, &charge }; return CallValue<float>("TryUpgradeRoad", args, 3); }
        bool Demolish(void* f) const { void* args[] = { f }; return CallValue<bool>("Demolish", args, 1); }
        void ClearState(int stateId) const { void* args[] = { &stateId }; Call("ClearState", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int CountInState(int stateId, int type) const { void* args[] = { &stateId, &type }; return CallValue<int>("CountInState", args, 2); }
        void* f() const { return ReadField<void*>("f"); }
        void SetF(void* value) const { WriteField<void*>("f", value); }
        int steps() const { return ReadField<int>("steps"); }
        void SetSteps(int value) const { WriteField<int>("steps", value); }
        float cost() const { return ReadField<float>("cost"); }
        void SetCost(float value) const { WriteField<float>("cost", value); }
    };
}
