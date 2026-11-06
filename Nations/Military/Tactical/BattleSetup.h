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
        uint8_t EncodeSpeed(float mul) const { void* __callArgs[] = { &mul }; return CallStaticValue<uint8_t>("EncodeSpeed", __callArgs, 1); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void seed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        void* engine() const { return ReadField<void*>("engine"); }
        void engine(void* value) const { WriteField<void*>("engine", value); }
        bool keepBodies() const { return ReadField<bool>("keepBodies"); }
        void keepBodies(bool value) const { WriteField<bool>("keepBodies", value); }
        float operationalPaceUnits() const { return ReadField<float>("operationalPaceUnits"); }
        void operationalPaceUnits(float value) const { WriteField<float>("operationalPaceUnits", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void arenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        void* terrainSpeed() const { return ReadField<void*>("terrainSpeed"); }
        void terrainSpeed(void* value) const { WriteField<void*>("terrainSpeed", value); }
        void* terrainHeight() const { return ReadField<void*>("terrainHeight"); }
        void terrainHeight(void* value) const { WriteField<void*>("terrainHeight", value); }
        int cellsWide() const { return ReadField<int>("cellsWide"); }
        void cellsWide(int value) const { WriteField<int>("cellsWide", value); }
        int cellsHigh() const { return ReadField<int>("cellsHigh"); }
        void cellsHigh(int value) const { WriteField<int>("cellsHigh", value); }
        void* terrainKind() const { return ReadField<void*>("terrainKind"); }
        void terrainKind(void* value) const { WriteField<void*>("terrainKind", value); }
        int cellsPerTile() const { return ReadField<int>("cellsPerTile"); }
        void cellsPerTile(int value) const { WriteField<int>("cellsPerTile", value); }
        void* urbanDistricts() const { return ReadField<void*>("urbanDistricts"); }
        void urbanDistricts(void* value) const { WriteField<void*>("urbanDistricts", value); }
        void* urbanBuildings() const { return ReadField<void*>("urbanBuildings"); }
        void urbanBuildings(void* value) const { WriteField<void*>("urbanBuildings", value); }
        void* urbanStreets() const { return ReadField<void*>("urbanStreets"); }
        void urbanStreets(void* value) const { WriteField<void*>("urbanStreets", value); }
        void* urbanCellStart() const { return ReadField<void*>("urbanCellStart"); }
        void urbanCellStart(void* value) const { WriteField<void*>("urbanCellStart", value); }
        void* urbanCellItems() const { return ReadField<void*>("urbanCellItems"); }
        void urbanCellItems(void* value) const { WriteField<void*>("urbanCellItems", value); }
        void* urbanBounds() const { return ReadField<void*>("urbanBounds"); }
        void urbanBounds(void* value) const { WriteField<void*>("urbanBounds", value); }
        void* worksSegs() const { return ReadField<void*>("worksSegs"); }
        void worksSegs(void* value) const { WriteField<void*>("worksSegs", value); }
        void* worksDiscs() const { return ReadField<void*>("worksDiscs"); }
        void worksDiscs(void* value) const { WriteField<void*>("worksDiscs", value); }
        void* worksCellStart() const { return ReadField<void*>("worksCellStart"); }
        void worksCellStart(void* value) const { WriteField<void*>("worksCellStart", value); }
        void* worksCellItems() const { return ReadField<void*>("worksCellItems"); }
        void worksCellItems(void* value) const { WriteField<void*>("worksCellItems", value); }
        void* worksBounds() const { return ReadField<void*>("worksBounds"); }
        void worksBounds(void* value) const { WriteField<void*>("worksBounds", value); }
        float worksCellsPerTile() const { return ReadField<float>("worksCellsPerTile"); }
        void worksCellsPerTile(float value) const { WriteField<float>("worksCellsPerTile", value); }
        int worksCellsX() const { return ReadField<int>("worksCellsX"); }
        void worksCellsX(int value) const { WriteField<int>("worksCellsX", value); }
        int worksCellsY() const { return ReadField<int>("worksCellsY"); }
        void worksCellsY(int value) const { WriteField<int>("worksCellsY", value); }
        void* worksTrace() const { return ReadField<void*>("worksTrace"); }
        void worksTrace(void* value) const { WriteField<void*>("worksTrace", value); }
        void* worksGroups() const { return ReadField<void*>("worksGroups"); }
        int TerrainCellsPerTile() const { return ReadStaticField<int>("TerrainCellsPerTile"); }
        int MaxTerrainCells() const { return ReadStaticField<int>("MaxTerrainCells"); }
        float TerrainSpeedScale() const { return ReadStaticField<float>("TerrainSpeedScale"); }
    };
}
