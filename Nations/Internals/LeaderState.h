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
        bool HasTrait(int t) const { void* args[] = { &t }; return CallValue<bool>("HasTrait", args, 1); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* shortName() const { return ReadField<void*>("shortName"); }
        void SetShortName(void* value) const { WriteField<void*>("shortName", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* givenName() const { return ReadField<void*>("givenName"); }
        void SetGivenName(void* value) const { WriteField<void*>("givenName", value); }
        void* house() const { return ReadField<void*>("house"); }
        void SetHouse(void* value) const { WriteField<void*>("house", value); }
        void* epithet() const { return ReadField<void*>("epithet"); }
        void SetEpithet(void* value) const { WriteField<void*>("epithet", value); }
        void* bornEpithet() const { return ReadField<void*>("bornEpithet"); }
        void SetBornEpithet(void* value) const { WriteField<void*>("bornEpithet", value); }
        int regnal() const { return ReadField<int>("regnal"); }
        void SetRegnal(int value) const { WriteField<int>("regnal", value); }
        bool female() const { return ReadField<bool>("female"); }
        void SetFemale(bool value) const { WriteField<bool>("female", value); }
        int culture() const { return ReadField<int>("culture"); }
        void SetCulture(int value) const { WriteField<int>("culture", value); }
        int UnknownCulture() const { return ReadStaticField<int>("UnknownCulture"); }
        void* titleOverride() const { return ReadField<void*>("titleOverride"); }
        void SetTitleOverride(void* value) const { WriteField<void*>("titleOverride", value); }
        int titleGovernment() const { return ReadField<int>("titleGovernment"); }
        void SetTitleGovernment(int value) const { WriteField<int>("titleGovernment", value); }
        bool playerDynasty() const { return ReadField<bool>("playerDynasty"); }
        void SetPlayerDynasty(bool value) const { WriteField<bool>("playerDynasty", value); }
        int archetype() const { return ReadField<int>("archetype"); }
        void SetArchetype(int value) const { WriteField<int>("archetype", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void SetTraits(int64_t value) const { WriteField<int64_t>("traits", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
        int ageBand() const { return ReadField<int>("ageBand"); }
        void SetAgeBand(int value) const { WriteField<int>("ageBand", value); }
        int UnknownBorn() const { return ReadStaticField<int>("UnknownBorn"); }
        float aggression() const { return ReadField<float>("aggression"); }
        void SetAggression(float value) const { WriteField<float>("aggression", value); }
        float expansionism() const { return ReadField<float>("expansionism"); }
        void SetExpansionism(float value) const { WriteField<float>("expansionism", value); }
        float sociability() const { return ReadField<float>("sociability"); }
        void SetSociability(float value) const { WriteField<float>("sociability", value); }
        float industriousness() const { return ReadField<float>("industriousness"); }
        void SetIndustriousness(float value) const { WriteField<float>("industriousness", value); }
        float researchMul() const { return ReadField<float>("researchMul"); }
        void SetResearchMul(float value) const { WriteField<float>("researchMul", value); }
        float opinionAdd() const { return ReadField<float>("opinionAdd"); }
        void SetOpinionAdd(float value) const { WriteField<float>("opinionAdd", value); }
        int accessionTick() const { return ReadField<int>("accessionTick"); }
        void SetAccessionTick(int value) const { WriteField<int>("accessionTick", value); }
        int accessionTiles() const { return ReadField<int>("accessionTiles"); }
        void SetAccessionTiles(int value) const { WriteField<int>("accessionTiles", value); }
        int reignEndTick() const { return ReadField<int>("reignEndTick"); }
        void SetReignEndTick(int value) const { WriteField<int>("reignEndTick", value); }
        int warsDeclared() const { return ReadField<int>("warsDeclared"); }
        void SetWarsDeclared(int value) const { WriteField<int>("warsDeclared", value); }
    };
}
