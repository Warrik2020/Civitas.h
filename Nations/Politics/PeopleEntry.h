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
        int StandingOn(int axis) const { void* __callArgs[] = { &axis }; return CallValue<int>("StandingOn", __callArgs, 1); }
        int RealmOn(int axis) const { void* __callArgs[] = { &axis }; return CallValue<int>("RealmOn", __callArgs, 1); }
        int ZoneOn(int axis) const { void* __callArgs[] = { &axis }; return CallValue<int>("ZoneOn", __callArgs, 1); }
        int EffectiveOn(int axis, bool inZone) const { void* __callArgs[] = { &axis, &inZone }; return CallValue<int>("EffectiveOn", __callArgs, 2); }
        bool OustsOn(int axis) const { void* __callArgs[] = { &axis }; return CallValue<bool>("OustsOn", __callArgs, 1); }
        void SetAllStandings(int s) const { void* __callArgs[] = { &s }; Call("SetAllStandings", __callArgs, 1); }
        void* realm() const { return ReadField<void*>("realm"); }
        void* zone() const { return ReadField<void*>("zone"); }
        void* harshUntilTick() const { return ReadField<void*>("harshUntilTick"); }
        void* acceptRestUntilTick() const { return ReadField<void*>("acceptRestUntilTick"); }
        void* presenceMass() const { return ReadField<void*>("presenceMass"); }
        void* presenceShare() const { return ReadField<void*>("presenceShare"); }
        void* presenceZoneFrac() const { return ReadField<void*>("presenceZoneFrac"); }
        void* presenceOfficial() const { return ReadField<void*>("presenceOfficial"); }
        int primaryAxis() const { return ReadField<int>("primaryAxis"); }
        void primaryAxis(int value) const { WriteField<int>("primaryAxis", value); }
        float ground() const { return ReadField<float>("ground"); }
        void ground(float value) const { WriteField<float>("ground", value); }
        int presenceTick() const { return ReadField<int>("presenceTick"); }
        void presenceTick(int value) const { WriteField<int>("presenceTick", value); }
        void* blend() const { return ReadField<void*>("blend"); }
        bool blendReady() const { return ReadField<bool>("blendReady"); }
        void blendReady(bool value) const { WriteField<bool>("blendReady", value); }
        int petitionAxis() const { return ReadField<int>("petitionAxis"); }
        void petitionAxis(int value) const { WriteField<int>("petitionAxis", value); }
        bool petitionOnZone() const { return ReadField<bool>("petitionOnZone"); }
        void petitionOnZone(bool value) const { WriteField<bool>("petitionOnZone", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void acceptance(float value) const { WriteField<float>("acceptance", value); }
        int standingSetTick() const { return ReadField<int>("standingSetTick"); }
        void standingSetTick(int value) const { WriteField<int>("standingSetTick", value); }
        uint8_t petitionStage() const { return ReadField<uint8_t>("petitionStage"); }
        void petitionStage(uint8_t value) const { WriteField<uint8_t>("petitionStage", value); }
        bool petitionDemand() const { return ReadField<bool>("petitionDemand"); }
        void petitionDemand(bool value) const { WriteField<bool>("petitionDemand", value); }
        int petitionTick() const { return ReadField<int>("petitionTick"); }
        void petitionTick(int value) const { WriteField<int>("petitionTick", value); }
        int nextPetitionTick() const { return ReadField<int>("nextPetitionTick"); }
        void nextPetitionTick(int value) const { WriteField<int>("nextPetitionTick", value); }
        float lastShare() const { return ReadField<float>("lastShare"); }
        void lastShare(float value) const { WriteField<float>("lastShare", value); }
        int lastShareTick() const { return ReadField<int>("lastShareTick"); }
        void lastShareTick(int value) const { WriteField<int>("lastShareTick", value); }
        float shareGrowthPerYear() const { return ReadField<float>("shareGrowthPerYear"); }
        void shareGrowthPerYear(float value) const { WriteField<float>("shareGrowthPerYear", value); }
    };
}
