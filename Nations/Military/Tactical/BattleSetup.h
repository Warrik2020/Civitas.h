#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleSetup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleSetup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleSetup") {}
    public:
        uint8_t EncodeSpeed(float mul) const { void* args[] = { &mul }; return CallStaticValue<uint8_t>("EncodeSpeed", args, 1); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void SetSeed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        void* engine() const { return ReadField<void*>("engine"); }
        void SetEngine(void* value) const { WriteField<void*>("engine", value); }
        bool keepBodies() const { return ReadField<bool>("keepBodies"); }
        void SetKeepBodies(bool value) const { WriteField<bool>("keepBodies", value); }
        float operationalPaceUnits() const { return ReadField<float>("operationalPaceUnits"); }
        void SetOperationalPaceUnits(float value) const { WriteField<float>("operationalPaceUnits", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void SetArenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        void* terrainSpeed() const { return ReadField<void*>("terrainSpeed"); }
        void SetTerrainSpeed(void* value) const { WriteField<void*>("terrainSpeed", value); }
        void* terrainHeight() const { return ReadField<void*>("terrainHeight"); }
        void SetTerrainHeight(void* value) const { WriteField<void*>("terrainHeight", value); }
        int cellsWide() const { return ReadField<int>("cellsWide"); }
        void SetCellsWide(int value) const { WriteField<int>("cellsWide", value); }
        int cellsHigh() const { return ReadField<int>("cellsHigh"); }
        void SetCellsHigh(int value) const { WriteField<int>("cellsHigh", value); }
        void* terrainKind() const { return ReadField<void*>("terrainKind"); }
        void SetTerrainKind(void* value) const { WriteField<void*>("terrainKind", value); }
        int cellsPerTile() const { return ReadField<int>("cellsPerTile"); }
        void SetCellsPerTile(int value) const { WriteField<int>("cellsPerTile", value); }
        void* urbanDistricts() const { return ReadField<void*>("urbanDistricts"); }
        void SetUrbanDistricts(void* value) const { WriteField<void*>("urbanDistricts", value); }
        void* urbanBuildings() const { return ReadField<void*>("urbanBuildings"); }
        void SetUrbanBuildings(void* value) const { WriteField<void*>("urbanBuildings", value); }
        void* urbanStreets() const { return ReadField<void*>("urbanStreets"); }
        void SetUrbanStreets(void* value) const { WriteField<void*>("urbanStreets", value); }
        void* urbanCellStart() const { return ReadField<void*>("urbanCellStart"); }
        void SetUrbanCellStart(void* value) const { WriteField<void*>("urbanCellStart", value); }
        void* urbanCellItems() const { return ReadField<void*>("urbanCellItems"); }
        void SetUrbanCellItems(void* value) const { WriteField<void*>("urbanCellItems", value); }
        void* urbanBounds() const { return ReadField<void*>("urbanBounds"); }
        void SetUrbanBounds(void* value) const { WriteField<void*>("urbanBounds", value); }
        void* worksSegs() const { return ReadField<void*>("worksSegs"); }
        void SetWorksSegs(void* value) const { WriteField<void*>("worksSegs", value); }
        void* worksDiscs() const { return ReadField<void*>("worksDiscs"); }
        void SetWorksDiscs(void* value) const { WriteField<void*>("worksDiscs", value); }
        void* worksCellStart() const { return ReadField<void*>("worksCellStart"); }
        void SetWorksCellStart(void* value) const { WriteField<void*>("worksCellStart", value); }
        void* worksCellItems() const { return ReadField<void*>("worksCellItems"); }
        void SetWorksCellItems(void* value) const { WriteField<void*>("worksCellItems", value); }
        void* worksBounds() const { return ReadField<void*>("worksBounds"); }
        void SetWorksBounds(void* value) const { WriteField<void*>("worksBounds", value); }
        float worksCellsPerTile() const { return ReadField<float>("worksCellsPerTile"); }
        void SetWorksCellsPerTile(float value) const { WriteField<float>("worksCellsPerTile", value); }
        int worksCellsX() const { return ReadField<int>("worksCellsX"); }
        void SetWorksCellsX(int value) const { WriteField<int>("worksCellsX", value); }
        int worksCellsY() const { return ReadField<int>("worksCellsY"); }
        void SetWorksCellsY(int value) const { WriteField<int>("worksCellsY", value); }
        void* worksTrace() const { return ReadField<void*>("worksTrace"); }
        void SetWorksTrace(void* value) const { WriteField<void*>("worksTrace", value); }
        void* worksGroups() const { return ReadField<void*>("worksGroups"); }
        int TerrainCellsPerTile() const { return ReadStaticField<int>("TerrainCellsPerTile"); }
        int MaxTerrainCells() const { return ReadStaticField<int>("MaxTerrainCells"); }
        float TerrainSpeedScale() const { return ReadStaticField<float>("TerrainSpeedScale"); }
    };
}
