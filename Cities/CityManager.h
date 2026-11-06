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
        int RoadCrews(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("RoadCrews", args, 1); }
        void* FindIconAt(void* world, void* cam) const { void* args[] = { world, cam }; return Call("FindIconAt", args, 2); }
        void TransferCity(void* city, int newNationId, bool makeCapital = false) const { void* args[] = { city, &newNationId, &makeCapital }; Call("TransferCity", args, 3); }
        bool RemoveCity(void* city) const { void* args[] = { city }; return CallValue<bool>("RemoveCity", args, 1); }
        void* CityAtPoint(void* tile) const { void* args[] = { tile }; return Call("CityAtPoint", args, 1); }
        void* CitiesOf(int nationId) const { void* args[] = { &nationId }; return Call("CitiesOf", args, 1); }
        bool TrySettle(int nationId, void* weights, void* town) const { void* args[] = { &nationId, &weights, &town }; return CallValue<bool>("TrySettle", args, 3); }
        int TrySettleAt(int nationId, int x, int y) const { void* args[] = { &nationId, &x, &y }; return CallValue<int>("TrySettleAt", args, 3); }
        int TrySettleAt(int nationId, int x, int y, void* town) const { void* args[] = { &nationId, &x, &y, &town }; return CallValue<int>("TrySettleAt", args, 4); }
        int CityCount(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CityCount", args, 1); }
        void* GetCity(int id) const { void* args[] = { &id }; return Call("GetCity", args, 1); }
        bool IsIconDrawn(int cityId) const { void* args[] = { &cityId }; return CallValue<bool>("IsIconDrawn", args, 1); }
        void RenameCity(int id, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &id, managed_1 }; Call("RenameCity", args, 2); }
        void RestoreCityName(void* c, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { c, managed_1 }; Call("RestoreCityName", args, 2); }
        void StepRoadPlanningNow() const { Call("StepRoadPlanningNow", nullptr, 0); }
        void* FindRoadPath(void* startTile, void* goalTile, int preferOwner = -1) const { void* args[] = { startTile, goalTile, &preferOwner }; return Call("FindRoadPath", args, 3); }
        bool MoveCapital(int nationId, int x, int y) const { void* args[] = { &nationId, &x, &y }; return CallValue<bool>("MoveCapital", args, 3); }
        void* AddScenarioCity(int nationId, int x, int y, bool isCapital, float currentRadius, float targetRadius, int maxBuildings) const { void* args[] = { &nationId, &x, &y, &isCapital, &currentRadius, &targetRadius, &maxBuildings }; return Call("AddScenarioCity", args, 7); }
        bool AddManualRoad(void* pathTiles, int builderNationId, int cityA = -1, int cityB = -1) const { void* args[] = { pathTiles, &builderNationId, &cityA, &cityB }; return CallValue<bool>("AddManualRoad", args, 4); }
        bool AddScenarioRoad(void* pathTiles, int builderNationId, int level = 1) const { void* args[] = { pathTiles, &builderNationId, &level }; return CallValue<bool>("AddScenarioRoad", args, 3); }
        bool BeginRoadUpgrade(void* r) const { void* args[] = { r }; return CallValue<bool>("BeginRoadUpgrade", args, 1); }
        void* NearestRoad(void* tilePos, float maxDist, void* filter = nullptr) const { void* args[] = { tilePos, &maxDist, filter }; return Call("NearestRoad", args, 3); }
        int RoadLevelAt(int tile) const { void* args[] = { &tile }; return CallValue<int>("RoadLevelAt", args, 1); }
        void SetRoadHighlight(void* r) const { void* args[] = { r }; Call("SetRoadHighlight", args, 1); }
        bool CitiesLinked(int cityA, int cityB) const { void* args[] = { &cityA, &cityB }; return CallValue<bool>("CitiesLinked", args, 2); }
        void SetRoadsVisible(bool visible) const { void* args[] = { &visible }; Call("SetRoadsVisible", args, 1); }
        void SetCitiesVisible(bool visible) const { void* args[] = { &visible }; Call("SetCitiesVisible", args, 1); }
        void SetFarmsVisible(bool visible) const { void* args[] = { &visible }; Call("SetFarmsVisible", args, 1); }
        int cityCount() const { return ReadField<int>("cityCount"); }
        void SetCityCount(int value) const { WriteField<int>("cityCount", value); }
        int nextTownOrdinal() const { return ReadField<int>("nextTownOrdinal"); }
        void SetNextTownOrdinal(int value) const { WriteField<int>("nextTownOrdinal", value); }
    };
}
