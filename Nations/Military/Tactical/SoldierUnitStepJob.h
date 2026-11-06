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
        void Execute(int i) const { void* __callArgs[] = { &i }; Call("Execute", __callArgs, 1); }
        void* gridStart() const { return ReadField<void*>("gridStart"); }
        void gridStart(void* value) const { WriteField<void*>("gridStart", value); }
        void* gridItems() const { return ReadField<void*>("gridItems"); }
        void gridItems(void* value) const { WriteField<void*>("gridItems", value); }
        void* gridBig() const { return ReadField<void*>("gridBig"); }
        void gridBig(void* value) const { WriteField<void*>("gridBig", value); }
        void* gridMeta() const { return ReadField<void*>("gridMeta"); }
        void gridMeta(void* value) const { WriteField<void*>("gridMeta", value); }
        void* proxy() const { return ReadField<void*>("proxy"); }
        void proxy(void* value) const { WriteField<void*>("proxy", value); }
        float gridCell() const { return ReadField<float>("gridCell"); }
        void gridCell(float value) const { WriteField<float>("gridCell", value); }
        float gridBigReach() const { return ReadField<float>("gridBigReach"); }
        void gridBigReach(float value) const { WriteField<float>("gridBigReach", value); }
        int gridWide() const { return ReadField<int>("gridWide"); }
        void gridWide(int value) const { WriteField<int>("gridWide", value); }
        int gridHigh() const { return ReadField<int>("gridHigh"); }
        void gridHigh(int value) const { WriteField<int>("gridHigh", value); }
        int gridBlockCap() const { return ReadField<int>("gridBlockCap"); }
        void gridBlockCap(int value) const { WriteField<int>("gridBlockCap", value); }
        void* prev() const { return ReadField<void*>("prev"); }
        void prev(void* value) const { WriteField<void*>("prev", value); }
        void* cur() const { return ReadField<void*>("cur"); }
        void cur(void* value) const { WriteField<void*>("cur", value); }
        void* contacts() const { return ReadField<void*>("contacts"); }
        void contacts(void* value) const { WriteField<void*>("contacts", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void unitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* unitOrders() const { return ReadField<void*>("unitOrders"); }
        void unitOrders(void* value) const { WriteField<void*>("unitOrders", value); }
        void* terrainSpeed() const { return ReadField<void*>("terrainSpeed"); }
        void terrainSpeed(void* value) const { WriteField<void*>("terrainSpeed", value); }
        void* terrainHeight() const { return ReadField<void*>("terrainHeight"); }
        void terrainHeight(void* value) const { WriteField<void*>("terrainHeight", value); }
        int cellsWide() const { return ReadField<int>("cellsWide"); }
        void cellsWide(int value) const { WriteField<int>("cellsWide", value); }
        int cellsHigh() const { return ReadField<int>("cellsHigh"); }
        void cellsHigh(int value) const { WriteField<int>("cellsHigh", value); }
        float cellsPerTile() const { return ReadField<float>("cellsPerTile"); }
        void cellsPerTile(float value) const { WriteField<float>("cellsPerTile", value); }
        float dt() const { return ReadField<float>("dt"); }
        void dt(float value) const { WriteField<float>("dt", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void arenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        void* sideRear0() const { return ReadField<void*>("sideRear0"); }
        void sideRear0(void* value) const { WriteField<void*>("sideRear0", value); }
        void* sideRear1() const { return ReadField<void*>("sideRear1"); }
        void sideRear1(void* value) const { WriteField<void*>("sideRear1", value); }
        void* sideCentre0() const { return ReadField<void*>("sideCentre0"); }
        void sideCentre0(void* value) const { WriteField<void*>("sideCentre0", value); }
        void* sideCentre1() const { return ReadField<void*>("sideCentre1"); }
        void sideCentre1(void* value) const { WriteField<void*>("sideCentre1", value); }
        void* urbanBounds() const { return ReadField<void*>("urbanBounds"); }
        void urbanBounds(void* value) const { WriteField<void*>("urbanBounds", value); }
        void* districts() const { return ReadField<void*>("districts"); }
        void districts(void* value) const { WriteField<void*>("districts", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void buildings(void* value) const { WriteField<void*>("buildings", value); }
        void* urbanCellStart() const { return ReadField<void*>("urbanCellStart"); }
        void urbanCellStart(void* value) const { WriteField<void*>("urbanCellStart", value); }
        void* urbanCellItems() const { return ReadField<void*>("urbanCellItems"); }
        void urbanCellItems(void* value) const { WriteField<void*>("urbanCellItems", value); }
    };
}
