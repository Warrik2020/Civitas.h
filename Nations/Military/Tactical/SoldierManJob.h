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
        float Decay(uint16_t v, int stamp, int now, int halfSteps) const { void* args[] = { &v, &stamp, &now, &halfSteps }; return CallStaticValue<float>("Decay", args, 4); }
        void Execute(int batch) const { void* args[] = { &batch }; Call("Execute", args, 1); }
        int Batch() const { return ReadStaticField<int>("Batch"); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void SetSoldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void SetUnitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* unitOrders() const { return ReadField<void*>("unitOrders"); }
        void SetUnitOrders(void* value) const { WriteField<void*>("unitOrders", value); }
        void* contacts() const { return ReadField<void*>("contacts"); }
        void SetContacts(void* value) const { WriteField<void*>("contacts", value); }
        void* formOfBlock() const { return ReadField<void*>("formOfBlock"); }
        void SetFormOfBlock(void* value) const { WriteField<void*>("formOfBlock", value); }
        void* dirTable() const { return ReadField<void*>("dirTable"); }
        void SetDirTable(void* value) const { WriteField<void*>("dirTable", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* shots() const { return ReadField<void*>("shots"); }
        void SetShots(void* value) const { WriteField<void*>("shots", value); }
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
        void* works() const { return ReadField<void*>("works"); }
        void SetWorks(void* value) const { WriteField<void*>("works", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void SetMenCount(int value) const { WriteField<int>("menCount", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        int quanta() const { return ReadField<int>("quanta"); }
        void SetQuanta(int value) const { WriteField<int>("quanta", value); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void SetSeed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        float dt() const { return ReadField<float>("dt"); }
        void SetDt(float value) const { WriteField<float>("dt", value); }
        void* arenaSize() const { return ReadField<void*>("arenaSize"); }
        void SetArenaSize(void* value) const { WriteField<void*>("arenaSize", value); }
        int suppHalfSteps() const { return ReadField<int>("suppHalfSteps"); }
        void SetSuppHalfSteps(int value) const { WriteField<int>("suppHalfSteps", value); }
        int fearHalfSteps() const { return ReadField<int>("fearHalfSteps"); }
        void SetFearHalfSteps(int value) const { WriteField<int>("fearHalfSteps", value); }
        int acquireSteps() const { return ReadField<int>("acquireSteps"); }
        void SetAcquireSteps(int value) const { WriteField<int>("acquireSteps", value); }
    };
}
