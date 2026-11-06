#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyFacts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyFacts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyFacts") {}
    public:
        int self() const { return ReadField<int>("self"); }
        void self(int value) const { WriteField<int>("self", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int selfGov() const { return ReadField<int>("selfGov"); }
        void selfGov(int value) const { WriteField<int>("selfGov", value); }
        int targetGov() const { return ReadField<int>("targetGov"); }
        void targetGov(int value) const { WriteField<int>("targetGov", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void ratio(float value) const { WriteField<float>("ratio", value); }
        bool border() const { return ReadField<bool>("border"); }
        void border(bool value) const { WriteField<bool>("border", value); }
        int protector() const { return ReadField<int>("protector"); }
        void protector(int value) const { WriteField<int>("protector", value); }
        bool subject() const { return ReadField<bool>("subject"); }
        void subject(bool value) const { WriteField<bool>("subject", value); }
        bool ourSubject() const { return ReadField<bool>("ourSubject"); }
        void ourSubject(bool value) const { WriteField<bool>("ourSubject", value); }
        bool inUnion() const { return ReadField<bool>("inUnion"); }
        void inUnion(bool value) const { WriteField<bool>("inUnion", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void opinion(float value) const { WriteField<float>("opinion", value); }
        bool recentWar() const { return ReadField<bool>("recentWar"); }
        void recentWar(bool value) const { WriteField<bool>("recentWar", value); }
        bool sameFaith() const { return ReadField<bool>("sameFaith"); }
        void sameFaith(bool value) const { WriteField<bool>("sameFaith", value); }
        float targetOwnShare() const { return ReadField<float>("targetOwnShare"); }
        void targetOwnShare(float value) const { WriteField<float>("targetOwnShare", value); }
        float targetHappiness() const { return ReadField<float>("targetHappiness"); }
        void targetHappiness(float value) const { WriteField<float>("targetHappiness", value); }
        bool targetAtWar() const { return ReadField<bool>("targetAtWar"); }
        void targetAtWar(bool value) const { WriteField<bool>("targetAtWar", value); }
        int rival() const { return ReadField<int>("rival"); }
        void rival(int value) const { WriteField<int>("rival", value); }
        bool oldRealm() const { return ReadField<bool>("oldRealm"); }
        void oldRealm(bool value) const { WriteField<bool>("oldRealm", value); }
        bool rich() const { return ReadField<bool>("rich"); }
        void rich(bool value) const { WriteField<bool>("rich", value); }
        bool targetIsPlayer() const { return ReadField<bool>("targetIsPlayer"); }
        void targetIsPlayer(bool value) const { WriteField<bool>("targetIsPlayer", value); }
        float ties() const { return ReadField<float>("ties"); }
        void ties(float value) const { WriteField<float>("ties", value); }
        int kinCount() const { return ReadField<int>("kinCount"); }
        void kinCount(int value) const { WriteField<int>("kinCount", value); }
        bool faithSplit() const { return ReadField<bool>("faithSplit"); }
        void faithSplit(bool value) const { WriteField<bool>("faithSplit", value); }
        bool minorityRealm() const { return ReadField<bool>("minorityRealm"); }
        void minorityRealm(bool value) const { WriteField<bool>("minorityRealm", value); }
        bool champion() const { return ReadField<bool>("champion"); }
        void champion(bool value) const { WriteField<bool>("champion", value); }
        bool heir() const { return ReadField<bool>("heir"); }
        void heir(bool value) const { WriteField<bool>("heir", value); }
        bool greatPower() const { return ReadField<bool>("greatPower"); }
        void greatPower(bool value) const { WriteField<bool>("greatPower", value); }
        bool targetGreatPower() const { return ReadField<bool>("targetGreatPower"); }
        void targetGreatPower(bool value) const { WriteField<bool>("targetGreatPower", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void allied(bool value) const { WriteField<bool>("allied", value); }
        bool pact() const { return ReadField<bool>("pact"); }
        void pact(bool value) const { WriteField<bool>("pact", value); }
        bool tradePact() const { return ReadField<bool>("tradePact"); }
        void tradePact(bool value) const { WriteField<bool>("tradePact", value); }
        int states() const { return ReadField<int>("states"); }
        void states(int value) const { WriteField<int>("states", value); }
        float ourShare() const { return ReadField<float>("ourShare"); }
        void ourShare(float value) const { WriteField<float>("ourShare", value); }
        bool realmLand() const { return ReadField<bool>("realmLand"); }
        void realmLand(bool value) const { WriteField<bool>("realmLand", value); }
        bool peopleLand() const { return ReadField<bool>("peopleLand"); }
        void peopleLand(bool value) const { WriteField<bool>("peopleLand", value); }
        bool claimed() const { return ReadField<bool>("claimed"); }
        void claimed(bool value) const { WriteField<bool>("claimed", value); }
        float share() const { return ReadField<float>("share"); }
        void share(float value) const { WriteField<float>("share", value); }
        float grievance() const { return ReadField<float>("grievance"); }
        void grievance(float value) const { WriteField<float>("grievance", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void acceptance(float value) const { WriteField<float>("acceptance", value); }
        int standing() const { return ReadField<int>("standing"); }
        void standing(int value) const { WriteField<int>("standing", value); }
        bool accepted() const { return ReadField<bool>("accepted"); }
        void accepted(bool value) const { WriteField<bool>("accepted", value); }
        bool kindred() const { return ReadField<bool>("kindred"); }
        void kindred(bool value) const { WriteField<bool>("kindred", value); }
        bool otherFaith() const { return ReadField<bool>("otherFaith"); }
        void otherFaith(bool value) const { WriteField<bool>("otherFaith", value); }
        bool hasHomeland() const { return ReadField<bool>("hasHomeland"); }
        void hasHomeland(bool value) const { WriteField<bool>("hasHomeland", value); }
        bool homelandNear() const { return ReadField<bool>("homelandNear"); }
        void homelandNear(bool value) const { WriteField<bool>("homelandNear", value); }
        int theirStates() const { return ReadField<int>("theirStates"); }
        void theirStates(int value) const { WriteField<int>("theirStates", value); }
        bool homeRule() const { return ReadField<bool>("homeRule"); }
        void homeRule(bool value) const { WriteField<bool>("homeRule", value); }
        bool busy() const { return ReadField<bool>("busy"); }
        void busy(bool value) const { WriteField<bool>("busy", value); }
        bool ourPeople() const { return ReadField<bool>("ourPeople"); }
        void ourPeople(bool value) const { WriteField<bool>("ourPeople", value); }
        bool stateless() const { return ReadField<bool>("stateless"); }
        void stateless(bool value) const { WriteField<bool>("stateless", value); }
        int subjects() const { return ReadField<int>("subjects"); }
        void subjects(int value) const { WriteField<int>("subjects", value); }
        bool wide() const { return ReadField<bool>("wide"); }
        void wide(bool value) const { WriteField<bool>("wide", value); }
        bool kinRealm() const { return ReadField<bool>("kinRealm"); }
        void kinRealm(bool value) const { WriteField<bool>("kinRealm", value); }
        bool abroad() const { return ReadField<bool>("abroad"); }
        void abroad(bool value) const { WriteField<bool>("abroad", value); }
        int closeness() const { return ReadField<int>("closeness"); }
        void closeness(int value) const { WriteField<int>("closeness", value); }
    };
}
