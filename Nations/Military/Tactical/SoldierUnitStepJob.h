#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierUnitStepJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierUnitStepJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierUnitStepJob") {}
    public:
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void AddFire(int j, float g) const { void* args[] = { &j, &g }; Call("AddFire", args, 2); }
        void AddMelee(int j, float g) const { void* args[] = { &j, &g }; Call("AddMelee", args, 2); }
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
        void* contacts() const { return ReadField<void*>("contacts"); }
        void SetContacts(void* value) const { WriteField<void*>("contacts", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void SetUnitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* unitOrders() const { return ReadField<void*>("unitOrders"); }
        void SetUnitOrders(void* value) const { WriteField<void*>("unitOrders", value); }
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
        float wallSpan() const { return ReadField<float>("wallSpan"); }
        void SetWallSpan(float value) const { WriteField<float>("wallSpan", value); }
        float wallPen() const { return ReadField<float>("wallPen"); }
        void SetWallPen(float value) const { WriteField<float>("wallPen", value); }
        int wallAt() const { return ReadField<int>("wallAt"); }
        void SetWallAt(int value) const { WriteField<int>("wallAt", value); }
        int threat() const { return ReadField<int>("threat"); }
        void SetThreat(int value) const { WriteField<int>("threat", value); }
        float threatD() const { return ReadField<float>("threatD"); }
        void SetThreatD(float value) const { WriteField<float>("threatD", value); }
        uint8_t flanked() const { return ReadField<uint8_t>("flanked"); }
        void SetFlanked(uint8_t value) const { WriteField<uint8_t>("flanked", value); }
        int f0() const { return ReadField<int>("f0"); }
        void SetF0(int value) const { WriteField<int>("f0", value); }
        int f1() const { return ReadField<int>("f1"); }
        void SetF1(int value) const { WriteField<int>("f1", value); }
        int f2() const { return ReadField<int>("f2"); }
        void SetF2(int value) const { WriteField<int>("f2", value); }
        int f3() const { return ReadField<int>("f3"); }
        void SetF3(int value) const { WriteField<int>("f3", value); }
        float g0() const { return ReadField<float>("g0"); }
        void SetG0(float value) const { WriteField<float>("g0", value); }
        float g1() const { return ReadField<float>("g1"); }
        void SetG1(float value) const { WriteField<float>("g1", value); }
        float g2() const { return ReadField<float>("g2"); }
        void SetG2(float value) const { WriteField<float>("g2", value); }
        float g3() const { return ReadField<float>("g3"); }
        void SetG3(float value) const { WriteField<float>("g3", value); }
        int m0() const { return ReadField<int>("m0"); }
        void SetM0(int value) const { WriteField<int>("m0", value); }
        int m1() const { return ReadField<int>("m1"); }
        void SetM1(int value) const { WriteField<int>("m1", value); }
        float h0() const { return ReadField<float>("h0"); }
        void SetH0(float value) const { WriteField<float>("h0", value); }
        float h1() const { return ReadField<float>("h1"); }
        void SetH1(float value) const { WriteField<float>("h1", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        float foeD() const { return ReadField<float>("foeD"); }
        void SetFoeD(float value) const { WriteField<float>("foeD", value); }
    };
}
