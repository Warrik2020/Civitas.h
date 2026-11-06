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
        bool AtWar(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("AtWar", __callArgs, 2); }
        void* GetFleet(int id) const { void* __callArgs[] = { &id }; return Call("GetFleet", __callArgs, 1); }
        int FleetCountOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("FleetCountOf", __callArgs, 1); }
        void FleetsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("FleetsOf", __callArgs, 2); }
        float Power(void* f) const { void* __callArgs[] = { f }; return CallStaticValue<float>("Power", __callArgs, 1); }
        float PatrolRadiusOf(void* f) const { void* __callArgs[] = { f }; return CallValue<float>("PatrolRadiusOf", __callArgs, 1); }
        void* SpawnFleet(int nationId, int waterTile, int homeCityTile, int ordinal = -1) const { void* __callArgs[] = { &nationId, &waterTile, &homeCityTile, &ordinal }; return Call("SpawnFleet", __callArgs, 4); }
        void DisbandFleet(int fleetId) const { void* __callArgs[] = { &fleetId }; Call("DisbandFleet", __callArgs, 1); }
        void TransferFleets(int from, int to) const { void* __callArgs[] = { &from, &to }; Call("TransferFleets", __callArgs, 2); }
        int TileOf(void* f) const { void* __callArgs[] = { f }; return CallValue<int>("TileOf", __callArgs, 1); }
        bool OrderMove(void* f, void* tile, void* why) const { void* __callArgs[] = { f, tile, &why }; return CallValue<bool>("OrderMove", __callArgs, 3); }
        bool OrderEscort(void* f, int divisionId) const { void* __callArgs[] = { f, &divisionId }; return CallValue<bool>("OrderEscort", __callArgs, 2); }
        bool OrderAttack(void* f, int enemyFleetId, void* why) const { void* __callArgs[] = { f, &enemyFleetId, &why }; return CallValue<bool>("OrderAttack", __callArgs, 3); }
        bool OrderReturn(void* f) const { void* __callArgs[] = { f }; return CallValue<bool>("OrderReturn", __callArgs, 1); }
        void OrderHalt(void* f) const { void* __callArgs[] = { f }; Call("OrderHalt", __callArgs, 1); }
        void SetPatrolSize(void* f, int size) const { void* __callArgs[] = { f, &size }; Call("SetPatrolSize", __callArgs, 2); }
        int WaterNear(void* tile, int maxR = 4) const { void* __callArgs[] = { tile, &maxR }; return CallValue<int>("WaterNear", __callArgs, 2); }
        void RestoreFleetRoute(void* f, void* lane, int leg, float legPos) const { void* __callArgs[] = { f, lane, &leg, &legPos }; Call("RestoreFleetRoute", __callArgs, 4); }
        int NearestOwnHullCargo(void* f, float radius) const { void* __callArgs[] = { f, &radius }; return CallValue<int>("NearestOwnHullCargo", __callArgs, 2); }
        void* HullForDivision(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("HullForDivision", __callArgs, 1); }
        int LaneDanger(int nationId, void* lane, float& power, int& firstFleetId) const { void* __callArgs[] = { &nationId, lane, &power, &firstFleetId }; return CallValue<int>("LaneDanger", __callArgs, 4); }
        bool LandingBlockedByFleet(int nationId, int landWater, int& fleetId) const { void* __callArgs[] = { &nationId, &landWater, &fleetId }; return CallValue<bool>("LandingBlockedByFleet", __callArgs, 3); }
        bool WaterBlockaded(int waterTile, int ownerId) const { void* __callArgs[] = { &waterTile, &ownerId }; return CallValue<bool>("WaterBlockaded", __callArgs, 2); }
        void EnemyFleetsNear(int nationId, void* pos, float radius, void* into) const { void* __callArgs[] = { &nationId, pos, &radius, into }; Call("EnemyFleetsNear", __callArgs, 4); }
        float SeaPowerNear(int nationId, void* pos, float radius, bool hostile) const { void* __callArgs[] = { &nationId, pos, &radius, &hostile }; return CallValue<float>("SeaPowerNear", __callArgs, 4); }
        float FleetCost(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("FleetCost", __callArgs, 1); }
        float FleetBuildTicks(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("FleetBuildTicks", __callArgs, 1); }
        bool CanBuildAt(int nationId, int cityTile, const char*& why) const { void* __callArgs[] = { &nationId, &cityTile, &why }; return CallValue<bool>("CanBuildAt", __callArgs, 3); }
        int YardInState(int nationId, int stateId, void* cities) const { void* __callArgs[] = { &nationId, &stateId, cities }; return CallValue<int>("YardInState", __callArgs, 3); }
        bool QueueAtCity(int nationId, int cityTile, const char*& why) const { void* __callArgs[] = { &nationId, &cityTile, &why }; return CallValue<bool>("QueueAtCity", __callArgs, 3); }
        void RestoreBuild(int nationId, int cityTile, float progress, float buildTicks) const { void* __callArgs[] = { &nationId, &cityTile, &progress, &buildTicks }; Call("RestoreBuild", __callArgs, 4); }
        int BuildCountOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("BuildCountOf", __callArgs, 1); }
        void BuildsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("BuildsOf", __callArgs, 2); }
        bool CancelBuild(int buildId) const { void* __callArgs[] = { &buildId }; return CallValue<bool>("CancelBuild", __callArgs, 1); }
        void ClearAll() const { Call("ClearAll", nullptr, 0); }
        int VesselCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("VesselCount", __callArgs, 1); }
        bool CanLaunch(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("CanLaunch", __callArgs, 1); }
        void* Launch(int nationId, int goalTile, int cargoKind, int cargoId) const { void* __callArgs[] = { &nationId, &goalTile, &cargoKind, &cargoId }; return Call("Launch", __callArgs, 4); }
        void* LaunchPlanned(int nationId, void* lane, int embarkTile, int landTile, int cargoKind, int cargoId, int start) const { void* __callArgs[] = { &nationId, lane, &embarkTile, &landTile, &cargoKind, &cargoId, &start }; return Call("LaunchPlanned", __callArgs, 7); }
        bool Reroute(int vesselId, void* lane, int newLandTile) const { void* __callArgs[] = { &vesselId, lane, &newLandTile }; return CallValue<bool>("Reroute", __callArgs, 3); }
        void SetPhase(int vesselId, int phase) const { void* __callArgs[] = { &vesselId, &phase }; Call("SetPhase", __callArgs, 2); }
        void Recall(int vesselId) const { void* __callArgs[] = { &vesselId }; Call("Recall", __callArgs, 1); }
        void Retire(int vesselId) const { void* __callArgs[] = { &vesselId }; Call("Retire", __callArgs, 1); }
        void* Get(int vesselId) const { void* __callArgs[] = { &vesselId }; return Call("Get", __callArgs, 1); }
        void* RestoreVessel(int nationId, int cargoKind, int cargoId, void* lane, int leg, float legPos, void* pos, void* heading, int phase, int fromLandTile, int toLandTile, int waterTile) const { void* __callArgs[] = { &nationId, &cargoKind, &cargoId, lane, &leg, &legPos, pos, heading, &phase, &fromLandTile, &toLandTile, &waterTile }; return Call("RestoreVessel", __callArgs, 12); }
        int WaterTileAt(void* p, int fallback) const { void* __callArgs[] = { p, &fallback }; return CallValue<int>("WaterTileAt", __callArgs, 2); }
        void Step(int tick) const { void* __callArgs[] = { &tick }; Call("Step", __callArgs, 1); }
        void* DivisionCargo() const { return ReadField<void*>("DivisionCargo"); }
        void DivisionCargo(void* value) const { WriteField<void*>("DivisionCargo", value); }
        bool FleetBuildingEnabled() const { return ReadStaticField<bool>("FleetBuildingEnabled"); }
        void FleetBuildingEnabled(bool value) const { WriteStaticField<bool>("FleetBuildingEnabled", value); }
    };
}
