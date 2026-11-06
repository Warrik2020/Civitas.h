#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class TreatmentGateInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreatmentGateInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "TreatmentGateInput") {}
    public:
        int layer() const { return ReadField<int>("layer"); }
        void SetLayer(int value) const { WriteField<int>("layer", value); }
        int realm() const { return ReadField<int>("realm"); }
        void SetRealm(int value) const { WriteField<int>("realm", value); }
        int zone() const { return ReadField<int>("zone"); }
        void SetZone(int value) const { WriteField<int>("zone", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        bool ready() const { return ReadField<bool>("ready"); }
        void SetReady(bool value) const { WriteField<bool>("ready", value); }
        bool playerOwned() const { return ReadField<bool>("playerOwned"); }
        void SetPlayerOwned(bool value) const { WriteField<bool>("playerOwned", value); }
        bool validPeople() const { return ReadField<bool>("validPeople"); }
        void SetValidPeople(bool value) const { WriteField<bool>("validPeople", value); }
        bool ownPeople() const { return ReadField<bool>("ownPeople"); }
        void SetOwnPeople(bool value) const { WriteField<bool>("ownPeople", value); }
        bool identityLive() const { return ReadField<bool>("identityLive"); }
        void SetIdentityLive(bool value) const { WriteField<bool>("identityLive", value); }
        bool presentOnCount() const { return ReadField<bool>("presentOnCount"); }
        void SetPresentOnCount(bool value) const { WriteField<bool>("presentOnCount", value); }
        bool zoneHasTiles() const { return ReadField<bool>("zoneHasTiles"); }
        void SetZoneHasTiles(bool value) const { WriteField<bool>("zoneHasTiles", value); }
        int standingFloor() const { return ReadField<int>("standingFloor"); }
        void SetStandingFloor(int value) const { WriteField<int>("standingFloor", value); }
        int standingCap() const { return ReadField<int>("standingCap"); }
        void SetStandingCap(int value) const { WriteField<int>("standingCap", value); }
        int now() const { return ReadField<int>("now"); }
        void SetNow(int value) const { WriteField<int>("now", value); }
        int harshUntilTick() const { return ReadField<int>("harshUntilTick"); }
        void SetHarshUntilTick(int value) const { WriteField<int>("harshUntilTick", value); }
        float ticksPerYear() const { return ReadField<float>("ticksPerYear"); }
        void SetTicksPerYear(float value) const { WriteField<float>("ticksPerYear", value); }
        float baseCooldownYears() const { return ReadField<float>("baseCooldownYears"); }
        void SetBaseCooldownYears(float value) const { WriteField<float>("baseCooldownYears", value); }
    };
}
