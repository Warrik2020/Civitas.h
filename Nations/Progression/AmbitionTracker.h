#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class AmbitionTracker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AmbitionTracker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "AmbitionTracker") {}
    public:
        bool IsDone(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("IsDone", args, 1); }
        int BaselineOf(int slot) const { void* args[] = { &slot }; return CallStaticValue<int>("BaselineOf", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Restore(int nation, int band, void* baselines, void* done) const { void* args[] = { &nation, &band, baselines, done }; CallStatic("Restore", args, 4); }
        void Capture(int& nation, int& band, void* baselines, void* done) const { void* args[] = { &nation, &band, &baselines, &done }; CallStatic("Capture", args, 4); }
        int Base(int slot) const { void* args[] = { &slot }; return CallValue<int>("Base", args, 1); }
        float Own(int k) const { void* args[] = { &k }; return CallValue<float>("Own", args, 1); }
        int states() const { return ReadField<int>("states"); }
        void SetStates(int value) const { WriteField<int>("states", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int researchWorks() const { return ReadField<int>("researchWorks"); }
        void SetResearchWorks(int value) const { WriteField<int>("researchWorks", value); }
        int arsenals() const { return ReadField<int>("arsenals"); }
        void SetArsenals(int value) const { WriteField<int>("arsenals", value); }
        int settledStates() const { return ReadField<int>("settledStates"); }
        void SetSettledStates(int value) const { WriteField<int>("settledStates", value); }
        int manufactories() const { return ReadField<int>("manufactories"); }
        void SetManufactories(int value) const { WriteField<int>("manufactories", value); }
        int factories() const { return ReadField<int>("factories"); }
        void SetFactories(int value) const { WriteField<int>("factories", value); }
        int cavalry() const { return ReadField<int>("cavalry"); }
        void SetCavalry(int value) const { WriteField<int>("cavalry", value); }
        int tanks() const { return ReadField<int>("tanks"); }
        void SetTanks(int value) const { WriteField<int>("tanks", value); }
        int gunDivisions() const { return ReadField<int>("gunDivisions"); }
        void SetGunDivisions(int value) const { WriteField<int>("gunDivisions", value); }
        int statesWithDeposits() const { return ReadField<int>("statesWithDeposits"); }
        void SetStatesWithDeposits(int value) const { WriteField<int>("statesWithDeposits", value); }
        int militaryWorks() const { return ReadField<int>("militaryWorks"); }
        void SetMilitaryWorks(int value) const { WriteField<int>("militaryWorks", value); }
        bool leasedIn() const { return ReadField<bool>("leasedIn"); }
        void SetLeasedIn(bool value) const { WriteField<bool>("leasedIn", value); }
        bool infantryUnarmed() const { return ReadField<bool>("infantryUnarmed"); }
        void SetInfantryUnarmed(bool value) const { WriteField<bool>("infantryUnarmed", value); }
        void* res() const { return ReadField<void*>("res"); }
        void SetRes(void* value) const { WriteField<void*>("res", value); }
    };
}
