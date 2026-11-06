#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerPeopleEntry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerPeopleEntry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerPeopleEntry") {}
    public:
        int owner() const { return ReadField<int>("owner"); }
        void SetOwner(int value) const { WriteField<int>("owner", value); }
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        void* standingAxes() const { return ReadField<void*>("standingAxes"); }
        void SetStandingAxes(void* value) const { WriteField<void*>("standingAxes", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void SetAcceptance(float value) const { WriteField<float>("acceptance", value); }
        int standingSetTick() const { return ReadField<int>("standingSetTick"); }
        void SetStandingSetTick(int value) const { WriteField<int>("standingSetTick", value); }
        int petitionStage() const { return ReadField<int>("petitionStage"); }
        void SetPetitionStage(int value) const { WriteField<int>("petitionStage", value); }
        bool petitionDemand() const { return ReadField<bool>("petitionDemand"); }
        void SetPetitionDemand(bool value) const { WriteField<bool>("petitionDemand", value); }
        int petitionTick() const { return ReadField<int>("petitionTick"); }
        void SetPetitionTick(int value) const { WriteField<int>("petitionTick", value); }
        int nextPetitionTick() const { return ReadField<int>("nextPetitionTick"); }
        void SetNextPetitionTick(int value) const { WriteField<int>("nextPetitionTick", value); }
        float lastShare() const { return ReadField<float>("lastShare"); }
        void SetLastShare(float value) const { WriteField<float>("lastShare", value); }
        int lastShareTick() const { return ReadField<int>("lastShareTick"); }
        void SetLastShareTick(int value) const { WriteField<int>("lastShareTick", value); }
        int petitionAgeTicks() const { return ReadField<int>("petitionAgeTicks"); }
        void SetPetitionAgeTicks(int value) const { WriteField<int>("petitionAgeTicks", value); }
        int nextPetitionLeft() const { return ReadField<int>("nextPetitionLeft"); }
        void SetNextPetitionLeft(int value) const { WriteField<int>("nextPetitionLeft", value); }
        int lastShareAgeTicks() const { return ReadField<int>("lastShareAgeTicks"); }
        void SetLastShareAgeTicks(int value) const { WriteField<int>("lastShareAgeTicks", value); }
        void* realmRungs() const { return ReadField<void*>("realmRungs"); }
        void SetRealmRungs(void* value) const { WriteField<void*>("realmRungs", value); }
        void* zoneRungs() const { return ReadField<void*>("zoneRungs"); }
        void SetZoneRungs(void* value) const { WriteField<void*>("zoneRungs", value); }
        void* harshUntil() const { return ReadField<void*>("harshUntil"); }
        void SetHarshUntil(void* value) const { WriteField<void*>("harshUntil", value); }
        void* acceptRestUntil() const { return ReadField<void*>("acceptRestUntil"); }
        void SetAcceptRestUntil(void* value) const { WriteField<void*>("acceptRestUntil", value); }
        int petitionAxis() const { return ReadField<int>("petitionAxis"); }
        void SetPetitionAxis(int value) const { WriteField<int>("petitionAxis", value); }
        bool petitionOnZone() const { return ReadField<bool>("petitionOnZone"); }
        void SetPetitionOnZone(bool value) const { WriteField<bool>("petitionOnZone", value); }
    };
}
