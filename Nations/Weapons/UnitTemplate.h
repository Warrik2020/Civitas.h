#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class UnitTemplate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnitTemplate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "UnitTemplate") {}
    public:
        int DomainOf(int s) const { void* args[] = { &s }; return CallStaticValue<int>("DomainOf", args, 1); }
        int SlotFor(void* d) const { void* args[] = { d }; return CallStaticValue<int>("SlotFor", args, 1); }
        int SlotId(int s) const { void* args[] = { &s }; return CallValue<int>("SlotId", args, 1); }
        void SetSlot(int s, int designId) const { void* args[] = { &s, &designId }; Call("SetSlot", args, 2); }
        bool IsPieceSlot(int s) const { void* args[] = { &s }; return CallStaticValue<bool>("IsPieceSlot", args, 1); }
        int LineCount(int s) const { void* args[] = { &s }; return CallValue<int>("LineCount", args, 1); }
        int LineId(int s, int line) const { void* args[] = { &s, &line }; return CallValue<int>("LineId", args, 2); }
        int LineOf(int s, int designId) const { void* args[] = { &s, &designId }; return CallValue<int>("LineOf", args, 2); }
        float LineShare(int s, int line) const { void* args[] = { &s, &line }; return CallValue<float>("LineShare", args, 2); }
        int LineAmount(int s, int line) const { void* args[] = { &s, &line }; return CallValue<int>("LineAmount", args, 2); }
        bool AddLine(int s, int designId, int amount) const { void* args[] = { &s, &designId, &amount }; return CallValue<bool>("AddLine", args, 3); }
        bool SetLineDesign(int s, int line, int designId) const { void* args[] = { &s, &line, &designId }; return CallValue<bool>("SetLineDesign", args, 3); }
        void SetLineAmount(int s, int line, int amount) const { void* args[] = { &s, &line, &amount }; Call("SetLineAmount", args, 3); }
        void RemoveLine(int s, int line) const { void* args[] = { &s, &line }; Call("RemoveLine", args, 2); }
        void RemoveDesign(int designId) const { void* args[] = { &designId }; Call("RemoveDesign", args, 1); }
        void FitLines() const { Call("FitLines", nullptr, 0); }
        void TidyLines() const { Call("TidyLines", nullptr, 0); }
        int CountFor(int s) const { void* args[] = { &s }; return CallValue<int>("CountFor", args, 1); }
        bool UsesDesign(int designId) const { void* args[] = { &designId }; return CallValue<bool>("UsesDesign", args, 1); }
        bool SameSlots(void* o) const { void* args[] = { o }; return CallValue<bool>("SameSlots", args, 1); }
        bool SameCounts(void* o) const { void* args[] = { o }; return CallValue<bool>("SameCounts", args, 1); }
        bool SameKit(void* o) const { void* args[] = { o }; return CallValue<bool>("SameKit", args, 1); }
        void CopyCounts(void* o) const { void* args[] = { o }; Call("CopyCounts", args, 1); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
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
        int carrierId() const { return ReadField<int>("carrierId"); }
        void SetCarrierId(int value) const { WriteField<int>("carrierId", value); }
        int artilleryId() const { return ReadField<int>("artilleryId"); }
        void SetArtilleryId(int value) const { WriteField<int>("artilleryId", value); }
        void* extra() const { return ReadField<void*>("extra"); }
        void SetExtra(void* value) const { WriteField<void*>("extra", value); }
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
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void SetRetired(bool value) const { WriteField<bool>("retired", value); }
        bool builtin() const { return ReadField<bool>("builtin"); }
        void SetBuiltin(bool value) const { WriteField<bool>("builtin", value); }
        int revision() const { return ReadField<int>("revision"); }
        void SetRevision(int value) const { WriteField<int>("revision", value); }
        void* Slots() const { return ReadStaticField<void*>("Slots"); }
        int SlotCount() const { return ReadStaticField<int>("SlotCount"); }
        int MaxLinesPerSlot() const { return ReadStaticField<int>("MaxLinesPerSlot"); }
    };
}
