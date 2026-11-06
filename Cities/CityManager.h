#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityManager") {}
    public:
        int RoadCrews(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("RoadCrews", __callArgs, 1); }
        void* FindIconAt(void* world, void* cam) const { void* __callArgs[] = { world, cam }; return Call("FindIconAt", __callArgs, 2); }
        void TransferCity(void* city, int newNationId, bool makeCapital = false) const { void* __callArgs[] = { city, &newNationId, &makeCapital }; Call("TransferCity", __callArgs, 3); }
        bool RemoveCity(void* city) const { void* __callArgs[] = { city }; return CallValue<bool>("RemoveCity", __callArgs, 1); }
        void* CityAtPoint(void* tile) const { void* __callArgs[] = { tile }; return Call("CityAtPoint", __callArgs, 1); }
        void* CitiesOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("CitiesOf", __callArgs, 1); }
        bool TrySettle(int nationId, void* weights, void* town) const { void* __callArgs[] = { &nationId, &weights, &town }; return CallValue<bool>("TrySettle", __callArgs, 3); }
        int TrySettleAt(int nationId, int x, int y) const { void* __callArgs[] = { &nationId, &x, &y }; return CallValue<int>("TrySettleAt", __callArgs, 3); }
        int TrySettleAt(int nationId, int x, int y, void* town) const { void* __callArgs[] = { &nationId, &x, &y, &town }; return CallValue<int>("TrySettleAt", __callArgs, 4); }
        int CityCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CityCount", __callArgs, 1); }
        void* GetCity(int id) const { void* __callArgs[] = { &id }; return Call("GetCity", __callArgs, 1); }
        bool IsIconDrawn(int cityId) const { void* __callArgs[] = { &cityId }; return CallValue<bool>("IsIconDrawn", __callArgs, 1); }
        void RenameCity(int id, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &id, managed_1 }; Call("RenameCity", __callArgs, 2); }
        void RestoreCityName(void* c, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { c, managed_1 }; Call("RestoreCityName", __callArgs, 2); }
        void StepRoadPlanningNow() const { Call("StepRoadPlanningNow", nullptr, 0); }
        void* FindRoadPath(void* startTile, void* goalTile, int preferOwner = -1) const { void* __callArgs[] = { startTile, goalTile, &preferOwner }; return Call("FindRoadPath", __callArgs, 3); }
        bool MoveCapital(int nationId, int x, int y) const { void* __callArgs[] = { &nationId, &x, &y }; return CallValue<bool>("MoveCapital", __callArgs, 3); }
        void* AddScenarioCity(int nationId, int x, int y, bool isCapital, float currentRadius, float targetRadius, int maxBuildings) const { void* __callArgs[] = { &nationId, &x, &y, &isCapital, &currentRadius, &targetRadius, &maxBuildings }; return Call("AddScenarioCity", __callArgs, 7); }
        bool AddManualRoad(void* pathTiles, int builderNationId, int cityA = -1, int cityB = -1) const { void* __callArgs[] = { pathTiles, &builderNationId, &cityA, &cityB }; return CallValue<bool>("AddManualRoad", __callArgs, 4); }
        bool AddScenarioRoad(void* pathTiles, int builderNationId, int level = 1) const { void* __callArgs[] = { pathTiles, &builderNationId, &level }; return CallValue<bool>("AddScenarioRoad", __callArgs, 3); }
        bool BeginRoadUpgrade(void* r) const { void* __callArgs[] = { r }; return CallValue<bool>("BeginRoadUpgrade", __callArgs, 1); }
        void* NearestRoad(void* tilePos, float maxDist, void* filter = nullptr) const { void* __callArgs[] = { tilePos, &maxDist, filter }; return Call("NearestRoad", __callArgs, 3); }
        int RoadLevelAt(int tile) const { void* __callArgs[] = { &tile }; return CallValue<int>("RoadLevelAt", __callArgs, 1); }
        void SetRoadHighlight(void* r) const { void* __callArgs[] = { r }; Call("SetRoadHighlight", __callArgs, 1); }
        bool CitiesLinked(int cityA, int cityB) const { void* __callArgs[] = { &cityA, &cityB }; return CallValue<bool>("CitiesLinked", __callArgs, 2); }
        void SetRoadsVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetRoadsVisible", __callArgs, 1); }
        void SetCitiesVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetCitiesVisible", __callArgs, 1); }
        void SetFarmsVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetFarmsVisible", __callArgs, 1); }
    };
}
