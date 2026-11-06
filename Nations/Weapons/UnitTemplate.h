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
        int DomainOf(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<int>("DomainOf", __callArgs, 1); }
        int SlotFor(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("SlotFor", __callArgs, 1); }
        int SlotId(int s) const { void* __callArgs[] = { &s }; return CallValue<int>("SlotId", __callArgs, 1); }
        void SetSlot(int s, int designId) const { void* __callArgs[] = { &s, &designId }; Call("SetSlot", __callArgs, 2); }
        bool IsPieceSlot(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("IsPieceSlot", __callArgs, 1); }
        int LineCount(int s) const { void* __callArgs[] = { &s }; return CallValue<int>("LineCount", __callArgs, 1); }
        int LineId(int s, int line) const { void* __callArgs[] = { &s, &line }; return CallValue<int>("LineId", __callArgs, 2); }
        int LineOf(int s, int designId) const { void* __callArgs[] = { &s, &designId }; return CallValue<int>("LineOf", __callArgs, 2); }
        float LineShare(int s, int line) const { void* __callArgs[] = { &s, &line }; return CallValue<float>("LineShare", __callArgs, 2); }
        int LineAmount(int s, int line) const { void* __callArgs[] = { &s, &line }; return CallValue<int>("LineAmount", __callArgs, 2); }
        bool AddLine(int s, int designId, int amount) const { void* __callArgs[] = { &s, &designId, &amount }; return CallValue<bool>("AddLine", __callArgs, 3); }
        bool SetLineDesign(int s, int line, int designId) const { void* __callArgs[] = { &s, &line, &designId }; return CallValue<bool>("SetLineDesign", __callArgs, 3); }
        void SetLineAmount(int s, int line, int amount) const { void* __callArgs[] = { &s, &line, &amount }; Call("SetLineAmount", __callArgs, 3); }
        void RemoveLine(int s, int line) const { void* __callArgs[] = { &s, &line }; Call("RemoveLine", __callArgs, 2); }
        void RemoveDesign(int designId) const { void* __callArgs[] = { &designId }; Call("RemoveDesign", __callArgs, 1); }
        void FitLines() const { Call("FitLines", nullptr, 0); }
        void TidyLines() const { Call("TidyLines", nullptr, 0); }
        int CountFor(int s) const { void* __callArgs[] = { &s }; return CallValue<int>("CountFor", __callArgs, 1); }
        bool UsesDesign(int designId) const { void* __callArgs[] = { &designId }; return CallValue<bool>("UsesDesign", __callArgs, 1); }
        bool SameSlots(void* o) const { void* __callArgs[] = { o }; return CallValue<bool>("SameSlots", __callArgs, 1); }
        bool SameCounts(void* o) const { void* __callArgs[] = { o }; return CallValue<bool>("SameCounts", __callArgs, 1); }
        bool SameKit(void* o) const { void* __callArgs[] = { o }; return CallValue<bool>("SameKit", __callArgs, 1); }
        void CopyCounts(void* o) const { void* __callArgs[] = { o }; Call("CopyCounts", __callArgs, 1); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
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
        int carrierId() const { return ReadField<int>("carrierId"); }
        void carrierId(int value) const { WriteField<int>("carrierId", value); }
        int artilleryId() const { return ReadField<int>("artilleryId"); }
        void artilleryId(int value) const { WriteField<int>("artilleryId", value); }
        void* extra() const { return ReadField<void*>("extra"); }
        void extra(void* value) const { WriteField<void*>("extra", value); }
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
        int year() const { return ReadField<int>("year"); }
        void year(int value) const { WriteField<int>("year", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void retired(bool value) const { WriteField<bool>("retired", value); }
        bool builtin() const { return ReadField<bool>("builtin"); }
        void builtin(bool value) const { WriteField<bool>("builtin", value); }
        int revision() const { return ReadField<int>("revision"); }
        void revision(int value) const { WriteField<int>("revision", value); }
        void* Slots() const { return ReadStaticField<void*>("Slots"); }
        int SlotCount() const { return ReadStaticField<int>("SlotCount"); }
        int MaxLinesPerSlot() const { return ReadStaticField<int>("MaxLinesPerSlot"); }
    };
}
