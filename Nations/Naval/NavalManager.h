#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class NavalManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "NavalManager") {}
    public:
        bool AtWar(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("AtWar", args, 2); }
        void* GetFleet(int id) const { void* args[] = { &id }; return Call("GetFleet", args, 1); }
        int FleetCountOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("FleetCountOf", args, 1); }
        void FleetsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("FleetsOf", args, 2); }
        float Power(void* f) const { void* args[] = { f }; return CallStaticValue<float>("Power", args, 1); }
        float PatrolRadiusOf(void* f) const { void* args[] = { f }; return CallValue<float>("PatrolRadiusOf", args, 1); }
        void* SpawnFleet(int nationId, int waterTile, int homeCityTile, int ordinal = -1) const { void* args[] = { &nationId, &waterTile, &homeCityTile, &ordinal }; return Call("SpawnFleet", args, 4); }
        void DisbandFleet(int fleetId) const { void* args[] = { &fleetId }; Call("DisbandFleet", args, 1); }
        void TransferFleets(int from, int to) const { void* args[] = { &from, &to }; Call("TransferFleets", args, 2); }
        int TileOf(void* f) const { void* args[] = { f }; return CallValue<int>("TileOf", args, 1); }
        bool OrderMove(void* f, void* tile, void* why) const { void* args[] = { f, tile, &why }; return CallValue<bool>("OrderMove", args, 3); }
        bool OrderEscort(void* f, int divisionId) const { void* args[] = { f, &divisionId }; return CallValue<bool>("OrderEscort", args, 2); }
        bool OrderAttack(void* f, int enemyFleetId, void* why) const { void* args[] = { f, &enemyFleetId, &why }; return CallValue<bool>("OrderAttack", args, 3); }
        bool OrderReturn(void* f) const { void* args[] = { f }; return CallValue<bool>("OrderReturn", args, 1); }
        void OrderHalt(void* f) const { void* args[] = { f }; Call("OrderHalt", args, 1); }
        void SetPatrolSize(void* f, int size) const { void* args[] = { f, &size }; Call("SetPatrolSize", args, 2); }
        int WaterNear(void* tile, int maxR = 4) const { void* args[] = { tile, &maxR }; return CallValue<int>("WaterNear", args, 2); }
        void RestoreFleetRoute(void* f, void* lane, int leg, float legPos) const { void* args[] = { f, lane, &leg, &legPos }; Call("RestoreFleetRoute", args, 4); }
        int NearestOwnHullCargo(void* f, float radius) const { void* args[] = { f, &radius }; return CallValue<int>("NearestOwnHullCargo", args, 2); }
        void* HullForDivision(int divisionId) const { void* args[] = { &divisionId }; return Call("HullForDivision", args, 1); }
        int LaneDanger(int nationId, void* lane, float& power, int& firstFleetId) const { void* args[] = { &nationId, lane, &power, &firstFleetId }; return CallValue<int>("LaneDanger", args, 4); }
        bool LandingBlockedByFleet(int nationId, int landWater, int& fleetId) const { void* args[] = { &nationId, &landWater, &fleetId }; return CallValue<bool>("LandingBlockedByFleet", args, 3); }
        bool WaterBlockaded(int waterTile, int ownerId) const { void* args[] = { &waterTile, &ownerId }; return CallValue<bool>("WaterBlockaded", args, 2); }
        void EnemyFleetsNear(int nationId, void* pos, float radius, void* into) const { void* args[] = { &nationId, pos, &radius, into }; Call("EnemyFleetsNear", args, 4); }
        float SeaPowerNear(int nationId, void* pos, float radius, bool hostile) const { void* args[] = { &nationId, pos, &radius, &hostile }; return CallValue<float>("SeaPowerNear", args, 4); }
        float FleetCost(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("FleetCost", args, 1); }
        float FleetBuildTicks(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("FleetBuildTicks", args, 1); }
        bool CanBuildAt(int nationId, int cityTile, const char*& why) const { void* args[] = { &nationId, &cityTile, &why }; return CallValue<bool>("CanBuildAt", args, 3); }
        int YardInState(int nationId, int stateId, void* cities) const { void* args[] = { &nationId, &stateId, cities }; return CallValue<int>("YardInState", args, 3); }
        bool QueueAtCity(int nationId, int cityTile, const char*& why) const { void* args[] = { &nationId, &cityTile, &why }; return CallValue<bool>("QueueAtCity", args, 3); }
        void RestoreBuild(int nationId, int cityTile, float progress, float buildTicks) const { void* args[] = { &nationId, &cityTile, &progress, &buildTicks }; Call("RestoreBuild", args, 4); }
        int BuildCountOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("BuildCountOf", args, 1); }
        void BuildsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("BuildsOf", args, 2); }
        bool CancelBuild(int buildId) const { void* args[] = { &buildId }; return CallValue<bool>("CancelBuild", args, 1); }
        void ClearAll() const { Call("ClearAll", nullptr, 0); }
        int VesselCount(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("VesselCount", args, 1); }
        bool CanLaunch(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("CanLaunch", args, 1); }
        void* Launch(int nationId, int goalTile, int cargoKind, int cargoId) const { void* args[] = { &nationId, &goalTile, &cargoKind, &cargoId }; return Call("Launch", args, 4); }
        void* LaunchPlanned(int nationId, void* lane, int embarkTile, int landTile, int cargoKind, int cargoId, int start) const { void* args[] = { &nationId, lane, &embarkTile, &landTile, &cargoKind, &cargoId, &start }; return Call("LaunchPlanned", args, 7); }
        bool Reroute(int vesselId, void* lane, int newLandTile) const { void* args[] = { &vesselId, lane, &newLandTile }; return CallValue<bool>("Reroute", args, 3); }
        void SetPhase(int vesselId, int phase) const { void* args[] = { &vesselId, &phase }; Call("SetPhase", args, 2); }
        void Recall(int vesselId) const { void* args[] = { &vesselId }; Call("Recall", args, 1); }
        void Retire(int vesselId) const { void* args[] = { &vesselId }; Call("Retire", args, 1); }
        void* Get(int vesselId) const { void* args[] = { &vesselId }; return Call("Get", args, 1); }
        void* RestoreVessel(int nationId, int cargoKind, int cargoId, void* lane, int leg, float legPos, void* pos, void* heading, int phase, int fromLandTile, int toLandTile, int waterTile) const { void* args[] = { &nationId, &cargoKind, &cargoId, lane, &leg, &legPos, pos, heading, &phase, &fromLandTile, &toLandTile, &waterTile }; return Call("RestoreVessel", args, 12); }
        int WaterTileAt(void* p, int fallback) const { void* args[] = { p, &fallback }; return CallValue<int>("WaterTileAt", args, 2); }
        void Step(int tick) const { void* args[] = { &tick }; Call("Step", args, 1); }
        void* DivisionCargo() const { return ReadField<void*>("DivisionCargo"); }
        void SetDivisionCargo(void* value) const { WriteField<void*>("DivisionCargo", value); }
        bool FleetBuildingEnabled() const { return ReadStaticField<bool>("FleetBuildingEnabled"); }
        void SetFleetBuildingEnabled(bool value) const { WriteStaticField<bool>("FleetBuildingEnabled", value); }
    };
}
