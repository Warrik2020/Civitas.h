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
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int cls() const { return ReadField<int>("cls"); }
        void cls(int value) const { WriteField<int>("cls", value); }
        int meleeId() const { return ReadField<int>("meleeId"); }
        void meleeId(int value) const { WriteField<int>("meleeId", value); }
        int firearmId() const { return ReadField<int>("firearmId"); }
        void firearmId(int value) const { WriteField<int>("firearmId", value); }
        int armourId() const { return ReadField<int>("armourId"); }
        void armourId(int value) const { WriteField<int>("armourId", value); }
        int vehicleId() const { return ReadField<int>("vehicleId"); }
        void vehicleId(int value) const { WriteField<int>("vehicleId", value); }
        int year() const { return ReadField<int>("year"); }
        void year(int value) const { WriteField<int>("year", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void retired(bool value) const { WriteField<bool>("retired", value); }
        bool builtin() const { return ReadField<bool>("builtin"); }
        void builtin(bool value) const { WriteField<bool>("builtin", value); }
        int revision() const { return ReadField<int>("revision"); }
        void revision(int value) const { WriteField<int>("revision", value); }
        int carrierId() const { return ReadField<int>("carrierId"); }
        void carrierId(int value) const { WriteField<int>("carrierId", value); }
        int artilleryId() const { return ReadField<int>("artilleryId"); }
        void artilleryId(int value) const { WriteField<int>("artilleryId", value); }
        int soldiers() const { return ReadField<int>("soldiers"); }
        void soldiers(int value) const { WriteField<int>("soldiers", value); }
        int cavalry() const { return ReadField<int>("cavalry"); }
        void cavalry(int value) const { WriteField<int>("cavalry", value); }
        int tanks() const { return ReadField<int>("tanks"); }
        void tanks(int value) const { WriteField<int>("tanks", value); }
        int guns() const { return ReadField<int>("guns"); }
        void guns(int value) const { WriteField<int>("guns", value); }
        int cars() const { return ReadField<int>("cars"); }
        void cars(int value) const { WriteField<int>("cars", value); }
        bool composed() const { return ReadField<bool>("composed"); }
        void composed(bool value) const { WriteField<bool>("composed", value); }
        void* extraSlots() const { return ReadField<void*>("extraSlots"); }
        void extraSlots(void* value) const { WriteField<void*>("extraSlots", value); }
        void* extraIds() const { return ReadField<void*>("extraIds"); }
        void extraIds(void* value) const { WriteField<void*>("extraIds", value); }
        void* extraCounts() const { return ReadField<void*>("extraCounts"); }
        void extraCounts(void* value) const { WriteField<void*>("extraCounts", value); }
    };
}
