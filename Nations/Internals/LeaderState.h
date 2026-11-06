#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderState") {}
    public:
        bool HasTrait(int t) const { void* __callArgs[] = { &t }; return CallValue<bool>("HasTrait", __callArgs, 1); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* shortName() const { return ReadField<void*>("shortName"); }
        void shortName(void* value) const { WriteField<void*>("shortName", value); }
        void* title() const { return ReadField<void*>("title"); }
        void title(void* value) const { WriteField<void*>("title", value); }
        void* givenName() const { return ReadField<void*>("givenName"); }
        void givenName(void* value) const { WriteField<void*>("givenName", value); }
        void* house() const { return ReadField<void*>("house"); }
        void house(void* value) const { WriteField<void*>("house", value); }
        void* epithet() const { return ReadField<void*>("epithet"); }
        void epithet(void* value) const { WriteField<void*>("epithet", value); }
        void* bornEpithet() const { return ReadField<void*>("bornEpithet"); }
        void bornEpithet(void* value) const { WriteField<void*>("bornEpithet", value); }
        int regnal() const { return ReadField<int>("regnal"); }
        void regnal(int value) const { WriteField<int>("regnal", value); }
        bool female() const { return ReadField<bool>("female"); }
        void female(bool value) const { WriteField<bool>("female", value); }
        int culture() const { return ReadField<int>("culture"); }
        void culture(int value) const { WriteField<int>("culture", value); }
        int UnknownCulture() const { return ReadStaticField<int>("UnknownCulture"); }
        void* titleOverride() const { return ReadField<void*>("titleOverride"); }
        void titleOverride(void* value) const { WriteField<void*>("titleOverride", value); }
        int titleGovernment() const { return ReadField<int>("titleGovernment"); }
        void titleGovernment(int value) const { WriteField<int>("titleGovernment", value); }
        bool playerDynasty() const { return ReadField<bool>("playerDynasty"); }
        void playerDynasty(bool value) const { WriteField<bool>("playerDynasty", value); }
        int archetype() const { return ReadField<int>("archetype"); }
        void archetype(int value) const { WriteField<int>("archetype", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void traits(int64_t value) const { WriteField<int64_t>("traits", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void bornTick(int value) const { WriteField<int>("bornTick", value); }
        int ageBand() const { return ReadField<int>("ageBand"); }
        void ageBand(int value) const { WriteField<int>("ageBand", value); }
        int UnknownBorn() const { return ReadStaticField<int>("UnknownBorn"); }
        float aggression() const { return ReadField<float>("aggression"); }
        void aggression(float value) const { WriteField<float>("aggression", value); }
        float expansionism() const { return ReadField<float>("expansionism"); }
        void expansionism(float value) const { WriteField<float>("expansionism", value); }
        float sociability() const { return ReadField<float>("sociability"); }
        void sociability(float value) const { WriteField<float>("sociability", value); }
        float industriousness() const { return ReadField<float>("industriousness"); }
        void industriousness(float value) const { WriteField<float>("industriousness", value); }
        float researchMul() const { return ReadField<float>("researchMul"); }
        void researchMul(float value) const { WriteField<float>("researchMul", value); }
        float opinionAdd() const { return ReadField<float>("opinionAdd"); }
        void opinionAdd(float value) const { WriteField<float>("opinionAdd", value); }
        int accessionTick() const { return ReadField<int>("accessionTick"); }
        void accessionTick(int value) const { WriteField<int>("accessionTick", value); }
        int accessionTiles() const { return ReadField<int>("accessionTiles"); }
        void accessionTiles(int value) const { WriteField<int>("accessionTiles", value); }
        int reignEndTick() const { return ReadField<int>("reignEndTick"); }
        void reignEndTick(int value) const { WriteField<int>("reignEndTick", value); }
        int warsDeclared() const { return ReadField<int>("warsDeclared"); }
        void warsDeclared(int value) const { WriteField<int>("warsDeclared", value); }
    };
}
