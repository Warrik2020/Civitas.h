#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleSimJobs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleSimJobs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleSimJobs") {}
    public:
        uint32_t Hash(uint32_t x) const { void* args[] = { &x }; return CallStaticValue<uint32_t>("Hash", args, 1); }
        float Hash01(uint32_t x) const { void* args[] = { &x }; return CallStaticValue<float>("Hash01", args, 1); }
        float DistToBlock(void* p, void* b) const { void* args[] = { p, &b }; return CallStaticValue<float>("DistToBlock", args, 2); }
        uint8_t Encirclement(uint32_t blocked) const { void* args[] = { &blocked }; return CallStaticValue<uint8_t>("Encirclement", args, 1); }
        int Octant(void* v) const { void* args[] = { v }; return CallStaticValue<int>("Octant", args, 1); }
        void* BlockPoint(void* b, float u, float v) const { void* args[] = { &b, &u, &v }; return CallStatic("BlockPoint", args, 3); }
        float TerrainSpeed(void* speed, int cellsWide, int cellsHigh, float cellsPerTile, void* p) const { void* args[] = { &speed, &cellsWide, &cellsHigh, &cellsPerTile, p }; return CallStaticValue<float>("TerrainSpeed", args, 5); }
        float TerrainHeight(void* height, int cellsWide, int cellsHigh, float cellsPerTile, void* p) const { void* args[] = { &height, &cellsWide, &cellsHigh, &cellsPerTile, p }; return CallStaticValue<float>("TerrainHeight", args, 5); }
        float BlockOverlapTest(void* a, void* b) const { void* args[] = { &a, &b }; return CallStaticValue<float>("BlockOverlapTest", args, 2); }
        uint8_t Slew(uint8_t cur, void* want, float maxRad, uint32_t salt, void* dir) const { void* args[] = { &cur, want, &maxRad, &salt, dir }; return CallStaticValue<uint8_t>("Slew", args, 5); }
        void* Drift(uint32_t salt, uint32_t stepRaw, float driftSeconds) const { void* args[] = { &salt, &stepRaw, &driftSeconds }; return CallStatic("Drift", args, 3); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void Execute(int b) const { void* args[] = { &b }; Call("Execute", args, 1); }
        void Execute(int bi) const { void* args[] = { &bi }; Call("Execute", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void Execute() const { Call("Execute", nullptr, 0); }
        int MeleeRanks() const { return ReadStaticField<int>("MeleeRanks"); }
        void* gridStart() const { return ReadField<void*>("gridStart"); }
        void SetGridStart(void* value) const { WriteField<void*>("gridStart", value); }
        void* gridItems() const { return ReadField<void*>("gridItems"); }
        void SetGridItems(void* value) const { WriteField<void*>("gridItems", value); }
        void* gridBig() const { return ReadField<void*>("gridBig"); }
        void SetGridBig(void* value) const { WriteField<void*>("gridBig", value); }
        void* gridMeta() const { return ReadField<void*>("gridMeta"); }
        void SetGridMeta(void* value) const { WriteField<void*>("gridMeta", value); }
        void* proxy() const { return ReadField<void*>("proxy"); }
        void SetProxy(void* value) const { WriteField<void*>("proxy", value); }
        float gridCell() const { return ReadField<float>("gridCell"); }
        void SetGridCell(float value) const { WriteField<float>("gridCell", value); }
        float gridBigReach() const { return ReadField<float>("gridBigReach"); }
        void SetGridBigReach(float value) const { WriteField<float>("gridBigReach", value); }
        int gridWide() const { return ReadField<int>("gridWide"); }
        void SetGridWide(int value) const { WriteField<int>("gridWide", value); }
        int gridHigh() const { return ReadField<int>("gridHigh"); }
        void SetGridHigh(int value) const { WriteField<int>("gridHigh", value); }
        int gridBlockCap() const { return ReadField<int>("gridBlockCap"); }
        void SetGridBlockCap(int value) const { WriteField<int>("gridBlockCap", value); }
        void* prev() const { return ReadField<void*>("prev"); }
        void SetPrev(void* value) const { WriteField<void*>("prev", value); }
        void* cur() const { return ReadField<void*>("cur"); }
        void SetCur(void* value) const { WriteField<void*>("cur", value); }
        void* terrainSpeed() const { return ReadField<void*>("terrainSpeed"); }
        void SetTerrainSpeed(void* value) const { WriteField<void*>("terrainSpeed", value); }
        void* terrainHeight() const { return ReadField<void*>("terrainHeight"); }
        void SetTerrainHeight(void* value) const { WriteField<void*>("terrainHeight", value); }
        int cellsWide() const { return ReadField<int>("cellsWide"); }
        void SetCellsWide(int value) const { WriteField<int>("cellsWide", value); }
        int cellsHigh() const { return ReadField<int>("cellsHigh"); }
        void SetCellsHigh(int value) const { WriteField<int>("cellsHigh", value); }
        float cellsPerTile() const { return ReadField<float>("cellsPerTile"); }
        void SetCellsPerTile(float value) const { WriteField<float>("cellsPerTile", value); }
        float dt() const { return ReadField<float>("dt"); }
        void SetDt(float value) const { WriteField<float>("dt", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void SetArenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        void* sideRear0() const { return ReadField<void*>("sideRear0"); }
        void SetSideRear0(void* value) const { WriteField<void*>("sideRear0", value); }
        void* sideRear1() const { return ReadField<void*>("sideRear1"); }
        void SetSideRear1(void* value) const { WriteField<void*>("sideRear1", value); }
        void* sideCentre0() const { return ReadField<void*>("sideCentre0"); }
        void SetSideCentre0(void* value) const { WriteField<void*>("sideCentre0", value); }
        void* sideCentre1() const { return ReadField<void*>("sideCentre1"); }
        void SetSideCentre1(void* value) const { WriteField<void*>("sideCentre1", value); }
        void* urbanBounds() const { return ReadField<void*>("urbanBounds"); }
        void SetUrbanBounds(void* value) const { WriteField<void*>("urbanBounds", value); }
        void* districts() const { return ReadField<void*>("districts"); }
        void SetDistricts(void* value) const { WriteField<void*>("districts", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void SetBuildings(void* value) const { WriteField<void*>("buildings", value); }
        void* urbanCellStart() const { return ReadField<void*>("urbanCellStart"); }
        void SetUrbanCellStart(void* value) const { WriteField<void*>("urbanCellStart", value); }
        void* urbanCellItems() const { return ReadField<void*>("urbanCellItems"); }
        void SetUrbanCellItems(void* value) const { WriteField<void*>("urbanCellItems", value); }
        void* push() const { return ReadField<void*>("push"); }
        void SetPush(void* value) const { WriteField<void*>("push", value); }
        void* wall() const { return ReadField<void*>("wall"); }
        void SetWall(void* value) const { WriteField<void*>("wall", value); }
        void* wallN() const { return ReadField<void*>("wallN"); }
        void SetWallN(void* value) const { WriteField<void*>("wallN", value); }
        int fire() const { return ReadField<int>("fire"); }
        void SetFire(int value) const { WriteField<int>("fire", value); }
        int melee() const { return ReadField<int>("melee"); }
        void SetMelee(int value) const { WriteField<int>("melee", value); }
        int threat() const { return ReadField<int>("threat"); }
        void SetThreat(int value) const { WriteField<int>("threat", value); }
        float fireD() const { return ReadField<float>("fireD"); }
        void SetFireD(float value) const { WriteField<float>("fireD", value); }
        float meleeD() const { return ReadField<float>("meleeD"); }
        void SetMeleeD(float value) const { WriteField<float>("meleeD", value); }
        float threatD() const { return ReadField<float>("threatD"); }
        void SetThreatD(float value) const { WriteField<float>("threatD", value); }
        float wallSpan() const { return ReadField<float>("wallSpan"); }
        void SetWallSpan(float value) const { WriteField<float>("wallSpan", value); }
        float wallPen() const { return ReadField<float>("wallPen"); }
        void SetWallPen(float value) const { WriteField<float>("wallPen", value); }
        int wallAt() const { return ReadField<int>("wallAt"); }
        void SetWallAt(int value) const { WriteField<int>("wallAt", value); }
        uint8_t flanked() const { return ReadField<uint8_t>("flanked"); }
        void SetFlanked(uint8_t value) const { WriteField<uint8_t>("flanked", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* hitsByDiv() const { return ReadField<void*>("hitsByDiv"); }
        void SetHitsByDiv(void* value) const { WriteField<void*>("hitsByDiv", value); }
        void* hitTotal() const { return ReadField<void*>("hitTotal"); }
        void SetHitTotal(void* value) const { WriteField<void*>("hitTotal", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        void* terrainSpeed() const { return ReadField<void*>("terrainSpeed"); }
        void SetTerrainSpeed(void* value) const { WriteField<void*>("terrainSpeed", value); }
        void* batColor() const { return ReadField<void*>("batColor"); }
        void SetBatColor(void* value) const { WriteField<void*>("batColor", value); }
        void* dirTable() const { return ReadField<void*>("dirTable"); }
        void SetDirTable(void* value) const { WriteField<void*>("dirTable", value); }
        int cellsWide() const { return ReadField<int>("cellsWide"); }
        void SetCellsWide(int value) const { WriteField<int>("cellsWide", value); }
        int cellsHigh() const { return ReadField<int>("cellsHigh"); }
        void SetCellsHigh(int value) const { WriteField<int>("cellsHigh", value); }
        float cellsPerTile() const { return ReadField<float>("cellsPerTile"); }
        void SetCellsPerTile(float value) const { WriteField<float>("cellsPerTile", value); }
        int divCount() const { return ReadField<int>("divCount"); }
        void SetDivCount(int value) const { WriteField<int>("divCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        float dt() const { return ReadField<float>("dt"); }
        void SetDt(float value) const { WriteField<float>("dt", value); }
        uint32_t step() const { return ReadField<uint32_t>("step"); }
        void SetStep(uint32_t value) const { WriteField<uint32_t>("step", value); }
        uint32_t stepRaw() const { return ReadField<uint32_t>("stepRaw"); }
        void SetStepRaw(uint32_t value) const { WriteField<uint32_t>("stepRaw", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void SetArenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        void* urbanBounds() const { return ReadField<void*>("urbanBounds"); }
        void SetUrbanBounds(void* value) const { WriteField<void*>("urbanBounds", value); }
        void* districts() const { return ReadField<void*>("districts"); }
        void SetDistricts(void* value) const { WriteField<void*>("districts", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void SetBuildings(void* value) const { WriteField<void*>("buildings", value); }
        void* urbanCellStart() const { return ReadField<void*>("urbanCellStart"); }
        void SetUrbanCellStart(void* value) const { WriteField<void*>("urbanCellStart", value); }
        void* urbanCellItems() const { return ReadField<void*>("urbanCellItems"); }
        void SetUrbanCellItems(void* value) const { WriteField<void*>("urbanCellItems", value); }
        void* shells() const { return ReadField<void*>("shells"); }
        void SetShells(void* value) const { WriteField<void*>("shells", value); }
        void* shellCount() const { return ReadField<void*>("shellCount"); }
        void SetShellCount(void* value) const { WriteField<void*>("shellCount", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* hitsByDiv() const { return ReadField<void*>("hitsByDiv"); }
        void SetHitsByDiv(void* value) const { WriteField<void*>("hitsByDiv", value); }
        void* hitTotal() const { return ReadField<void*>("hitTotal"); }
        void SetHitTotal(void* value) const { WriteField<void*>("hitTotal", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        int divCount() const { return ReadField<int>("divCount"); }
        void SetDivCount(int value) const { WriteField<int>("divCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        float dt() const { return ReadField<float>("dt"); }
        void SetDt(float value) const { WriteField<float>("dt", value); }
        uint32_t step() const { return ReadField<uint32_t>("step"); }
        void SetStep(uint32_t value) const { WriteField<uint32_t>("step", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* hitTotal() const { return ReadField<void*>("hitTotal"); }
        void SetHitTotal(void* value) const { WriteField<void*>("hitTotal", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        uint32_t step() const { return ReadField<uint32_t>("step"); }
        void SetStep(uint32_t value) const { WriteField<uint32_t>("step", value); }
        uint32_t stepRaw() const { return ReadField<uint32_t>("stepRaw"); }
        void SetStepRaw(uint32_t value) const { WriteField<uint32_t>("stepRaw", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* batColor() const { return ReadField<void*>("batColor"); }
        void SetBatColor(void* value) const { WriteField<void*>("batColor", value); }
        void* batSelected() const { return ReadField<void*>("batSelected"); }
        void SetBatSelected(void* value) const { WriteField<void*>("batSelected", value); }
        void* dots() const { return ReadField<void*>("dots"); }
        void SetDots(void* value) const { WriteField<void*>("dots", value); }
        void* batchCount() const { return ReadField<void*>("batchCount"); }
        void SetBatchCount(void* value) const { WriteField<void*>("batchCount", value); }
        int batchSize() const { return ReadField<int>("batchSize"); }
        void SetBatchSize(int value) const { WriteField<int>("batchSize", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void SetMenCount(int value) const { WriteField<int>("menCount", value); }
        void* visible() const { return ReadField<void*>("visible"); }
        void SetVisible(void* value) const { WriteField<void*>("visible", value); }
        float extrapolate() const { return ReadField<float>("extrapolate"); }
        void SetExtrapolate(float value) const { WriteField<float>("extrapolate", value); }
        int playerSide() const { return ReadField<int>("playerSide"); }
        void SetPlayerSide(int value) const { WriteField<int>("playerSide", value); }
        void* counts() const { return ReadField<void*>("counts"); }
        void SetCounts(void* value) const { WriteField<void*>("counts", value); }
        void* offsets() const { return ReadField<void*>("offsets"); }
        void SetOffsets(void* value) const { WriteField<void*>("offsets", value); }
        void* total() const { return ReadField<void*>("total"); }
        void SetTotal(void* value) const { WriteField<void*>("total", value); }
        int batches() const { return ReadField<int>("batches"); }
        void SetBatches(int value) const { WriteField<int>("batches", value); }
        void* arr() const { return ReadField<void*>("arr"); }
        void SetArr(void* value) const { WriteField<void*>("arr", value); }
    };
}
