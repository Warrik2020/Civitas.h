#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnitTemplate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnitTemplate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnitTemplate") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int cls() const { return ReadField<int>("cls"); }
        void SetCls(int value) const { WriteField<int>("cls", value); }
        int meleeId() const { return ReadField<int>("meleeId"); }
        void SetMeleeId(int value) const { WriteField<int>("meleeId", value); }
        int firearmId() const { return ReadField<int>("firearmId"); }
        void SetFirearmId(int value) const { WriteField<int>("firearmId", value); }
        int armourId() const { return ReadField<int>("armourId"); }
        void SetArmourId(int value) const { WriteField<int>("armourId", value); }
        int vehicleId() const { return ReadField<int>("vehicleId"); }
        void SetVehicleId(int value) const { WriteField<int>("vehicleId", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void SetRetired(bool value) const { WriteField<bool>("retired", value); }
        bool builtin() const { return ReadField<bool>("builtin"); }
        void SetBuiltin(bool value) const { WriteField<bool>("builtin", value); }
        int revision() const { return ReadField<int>("revision"); }
        void SetRevision(int value) const { WriteField<int>("revision", value); }
        int carrierId() const { return ReadField<int>("carrierId"); }
        void SetCarrierId(int value) const { WriteField<int>("carrierId", value); }
        int artilleryId() const { return ReadField<int>("artilleryId"); }
        void SetArtilleryId(int value) const { WriteField<int>("artilleryId", value); }
        int soldiers() const { return ReadField<int>("soldiers"); }
        void SetSoldiers(int value) const { WriteField<int>("soldiers", value); }
        int cavalry() const { return ReadField<int>("cavalry"); }
        void SetCavalry(int value) const { WriteField<int>("cavalry", value); }
        int tanks() const { return ReadField<int>("tanks"); }
        void SetTanks(int value) const { WriteField<int>("tanks", value); }
        int guns() const { return ReadField<int>("guns"); }
        void SetGuns(int value) const { WriteField<int>("guns", value); }
        int cars() const { return ReadField<int>("cars"); }
        void SetCars(int value) const { WriteField<int>("cars", value); }
        bool composed() const { return ReadField<bool>("composed"); }
        void SetComposed(bool value) const { WriteField<bool>("composed", value); }
        void* extraSlots() const { return ReadField<void*>("extraSlots"); }
        void SetExtraSlots(void* value) const { WriteField<void*>("extraSlots", value); }
        void* extraIds() const { return ReadField<void*>("extraIds"); }
        void SetExtraIds(void* value) const { WriteField<void*>("extraIds", value); }
        void* extraCounts() const { return ReadField<void*>("extraCounts"); }
        void SetExtraCounts(void* value) const { WriteField<void*>("extraCounts", value); }
    };
}
