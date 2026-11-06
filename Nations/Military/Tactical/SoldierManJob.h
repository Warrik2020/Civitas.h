#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierManJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierManJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierManJob") {}
    public:
        float Decay(uint16_t v, int stamp, int now, int halfSteps) const { void* __callArgs[] = { &v, &stamp, &now, &halfSteps }; return CallStaticValue<float>("Decay", __callArgs, 4); }
        void Execute(int batch) const { void* __callArgs[] = { &batch }; Call("Execute", __callArgs, 1); }
        int Batch() const { return ReadStaticField<int>("Batch"); }
        void* men() const { return ReadField<void*>("men"); }
        void men(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void soldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void snap(void* value) const { WriteField<void*>("snap", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void bats(void* value) const { WriteField<void*>("bats", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void unitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* unitOrders() const { return ReadField<void*>("unitOrders"); }
        void unitOrders(void* value) const { WriteField<void*>("unitOrders", value); }
        void* contacts() const { return ReadField<void*>("contacts"); }
        void contacts(void* value) const { WriteField<void*>("contacts", value); }
        void* formOfBlock() const { return ReadField<void*>("formOfBlock"); }
        void formOfBlock(void* value) const { WriteField<void*>("formOfBlock", value); }
        void* dirTable() const { return ReadField<void*>("dirTable"); }
        void dirTable(void* value) const { WriteField<void*>("dirTable", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void grid(void* value) const { WriteField<void*>("grid", value); }
        void* shots() const { return ReadField<void*>("shots"); }
        void shots(void* value) const { WriteField<void*>("shots", value); }
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
        void* works() const { return ReadField<void*>("works"); }
        void works(void* value) const { WriteField<void*>("works", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void menCount(int value) const { WriteField<int>("menCount", value); }
        int step() const { return ReadField<int>("step"); }
        void step(int value) const { WriteField<int>("step", value); }
        int quanta() const { return ReadField<int>("quanta"); }
        void quanta(int value) const { WriteField<int>("quanta", value); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void seed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        float dt() const { return ReadField<float>("dt"); }
        void dt(float value) const { WriteField<float>("dt", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void arenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        int suppHalfSteps() const { return ReadField<int>("suppHalfSteps"); }
        void suppHalfSteps(int value) const { WriteField<int>("suppHalfSteps", value); }
        int fearHalfSteps() const { return ReadField<int>("fearHalfSteps"); }
        void fearHalfSteps(int value) const { WriteField<int>("fearHalfSteps", value); }
        int acquireSteps() const { return ReadField<int>("acquireSteps"); }
        void acquireSteps(int value) const { WriteField<int>("acquireSteps", value); }
    };
}
