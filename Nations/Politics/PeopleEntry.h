#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PeopleEntry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleEntry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PeopleEntry") {}
    public:
        int StandingOn(int axis) const { void* args[] = { &axis }; return CallValue<int>("StandingOn", args, 1); }
        int RealmOn(int axis) const { void* args[] = { &axis }; return CallValue<int>("RealmOn", args, 1); }
        int ZoneOn(int axis) const { void* args[] = { &axis }; return CallValue<int>("ZoneOn", args, 1); }
        int EffectiveOn(int axis, bool inZone) const { void* args[] = { &axis, &inZone }; return CallValue<int>("EffectiveOn", args, 2); }
        bool OustsOn(int axis) const { void* args[] = { &axis }; return CallValue<bool>("OustsOn", args, 1); }
        void SetAllStandings(int s) const { void* args[] = { &s }; Call("SetAllStandings", args, 1); }
        void* realm() const { return ReadField<void*>("realm"); }
        void* zone() const { return ReadField<void*>("zone"); }
        void* harshUntilTick() const { return ReadField<void*>("harshUntilTick"); }
        void* acceptRestUntilTick() const { return ReadField<void*>("acceptRestUntilTick"); }
        void* presenceMass() const { return ReadField<void*>("presenceMass"); }
        void* presenceShare() const { return ReadField<void*>("presenceShare"); }
        void* presenceZoneFrac() const { return ReadField<void*>("presenceZoneFrac"); }
        void* presenceOfficial() const { return ReadField<void*>("presenceOfficial"); }
        int primaryAxis() const { return ReadField<int>("primaryAxis"); }
        void SetPrimaryAxis(int value) const { WriteField<int>("primaryAxis", value); }
        float ground() const { return ReadField<float>("ground"); }
        void SetGround(float value) const { WriteField<float>("ground", value); }
        int presenceTick() const { return ReadField<int>("presenceTick"); }
        void SetPresenceTick(int value) const { WriteField<int>("presenceTick", value); }
        void* blend() const { return ReadField<void*>("blend"); }
        bool blendReady() const { return ReadField<bool>("blendReady"); }
        void SetBlendReady(bool value) const { WriteField<bool>("blendReady", value); }
        int petitionAxis() const { return ReadField<int>("petitionAxis"); }
        void SetPetitionAxis(int value) const { WriteField<int>("petitionAxis", value); }
        bool petitionOnZone() const { return ReadField<bool>("petitionOnZone"); }
        void SetPetitionOnZone(bool value) const { WriteField<bool>("petitionOnZone", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void SetAcceptance(float value) const { WriteField<float>("acceptance", value); }
        int standingSetTick() const { return ReadField<int>("standingSetTick"); }
        void SetStandingSetTick(int value) const { WriteField<int>("standingSetTick", value); }
        uint8_t petitionStage() const { return ReadField<uint8_t>("petitionStage"); }
        void SetPetitionStage(uint8_t value) const { WriteField<uint8_t>("petitionStage", value); }
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
        float shareGrowthPerYear() const { return ReadField<float>("shareGrowthPerYear"); }
        void SetShareGrowthPerYear(float value) const { WriteField<float>("shareGrowthPerYear", value); }
    };
}
