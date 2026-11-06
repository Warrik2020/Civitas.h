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
        void SetSelf(int value) const { WriteField<int>("self", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        int selfGov() const { return ReadField<int>("selfGov"); }
        void SetSelfGov(int value) const { WriteField<int>("selfGov", value); }
        int targetGov() const { return ReadField<int>("targetGov"); }
        void SetTargetGov(int value) const { WriteField<int>("targetGov", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void SetRatio(float value) const { WriteField<float>("ratio", value); }
        bool border() const { return ReadField<bool>("border"); }
        void SetBorder(bool value) const { WriteField<bool>("border", value); }
        int protector() const { return ReadField<int>("protector"); }
        void SetProtector(int value) const { WriteField<int>("protector", value); }
        bool subject() const { return ReadField<bool>("subject"); }
        void SetSubject(bool value) const { WriteField<bool>("subject", value); }
        bool ourSubject() const { return ReadField<bool>("ourSubject"); }
        void SetOurSubject(bool value) const { WriteField<bool>("ourSubject", value); }
        bool inUnion() const { return ReadField<bool>("inUnion"); }
        void SetInUnion(bool value) const { WriteField<bool>("inUnion", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void SetOpinion(float value) const { WriteField<float>("opinion", value); }
        bool recentWar() const { return ReadField<bool>("recentWar"); }
        void SetRecentWar(bool value) const { WriteField<bool>("recentWar", value); }
        bool sameFaith() const { return ReadField<bool>("sameFaith"); }
        void SetSameFaith(bool value) const { WriteField<bool>("sameFaith", value); }
        float targetOwnShare() const { return ReadField<float>("targetOwnShare"); }
        void SetTargetOwnShare(float value) const { WriteField<float>("targetOwnShare", value); }
        float targetHappiness() const { return ReadField<float>("targetHappiness"); }
        void SetTargetHappiness(float value) const { WriteField<float>("targetHappiness", value); }
        bool targetAtWar() const { return ReadField<bool>("targetAtWar"); }
        void SetTargetAtWar(bool value) const { WriteField<bool>("targetAtWar", value); }
        int rival() const { return ReadField<int>("rival"); }
        void SetRival(int value) const { WriteField<int>("rival", value); }
        bool oldRealm() const { return ReadField<bool>("oldRealm"); }
        void SetOldRealm(bool value) const { WriteField<bool>("oldRealm", value); }
        bool rich() const { return ReadField<bool>("rich"); }
        void SetRich(bool value) const { WriteField<bool>("rich", value); }
        bool targetIsPlayer() const { return ReadField<bool>("targetIsPlayer"); }
        void SetTargetIsPlayer(bool value) const { WriteField<bool>("targetIsPlayer", value); }
        float ties() const { return ReadField<float>("ties"); }
        void SetTies(float value) const { WriteField<float>("ties", value); }
        int kinCount() const { return ReadField<int>("kinCount"); }
        void SetKinCount(int value) const { WriteField<int>("kinCount", value); }
        bool faithSplit() const { return ReadField<bool>("faithSplit"); }
        void SetFaithSplit(bool value) const { WriteField<bool>("faithSplit", value); }
        bool minorityRealm() const { return ReadField<bool>("minorityRealm"); }
        void SetMinorityRealm(bool value) const { WriteField<bool>("minorityRealm", value); }
        bool champion() const { return ReadField<bool>("champion"); }
        void SetChampion(bool value) const { WriteField<bool>("champion", value); }
        bool heir() const { return ReadField<bool>("heir"); }
        void SetHeir(bool value) const { WriteField<bool>("heir", value); }
        bool greatPower() const { return ReadField<bool>("greatPower"); }
        void SetGreatPower(bool value) const { WriteField<bool>("greatPower", value); }
        bool targetGreatPower() const { return ReadField<bool>("targetGreatPower"); }
        void SetTargetGreatPower(bool value) const { WriteField<bool>("targetGreatPower", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void SetAllied(bool value) const { WriteField<bool>("allied", value); }
        bool pact() const { return ReadField<bool>("pact"); }
        void SetPact(bool value) const { WriteField<bool>("pact", value); }
        bool tradePact() const { return ReadField<bool>("tradePact"); }
        void SetTradePact(bool value) const { WriteField<bool>("tradePact", value); }
        int states() const { return ReadField<int>("states"); }
        void SetStates(int value) const { WriteField<int>("states", value); }
        float ourShare() const { return ReadField<float>("ourShare"); }
        void SetOurShare(float value) const { WriteField<float>("ourShare", value); }
        bool realmLand() const { return ReadField<bool>("realmLand"); }
        void SetRealmLand(bool value) const { WriteField<bool>("realmLand", value); }
        bool peopleLand() const { return ReadField<bool>("peopleLand"); }
        void SetPeopleLand(bool value) const { WriteField<bool>("peopleLand", value); }
        bool claimed() const { return ReadField<bool>("claimed"); }
        void SetClaimed(bool value) const { WriteField<bool>("claimed", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        float grievance() const { return ReadField<float>("grievance"); }
        void SetGrievance(float value) const { WriteField<float>("grievance", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void SetAcceptance(float value) const { WriteField<float>("acceptance", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        bool accepted() const { return ReadField<bool>("accepted"); }
        void SetAccepted(bool value) const { WriteField<bool>("accepted", value); }
        bool kindred() const { return ReadField<bool>("kindred"); }
        void SetKindred(bool value) const { WriteField<bool>("kindred", value); }
        bool otherFaith() const { return ReadField<bool>("otherFaith"); }
        void SetOtherFaith(bool value) const { WriteField<bool>("otherFaith", value); }
        bool hasHomeland() const { return ReadField<bool>("hasHomeland"); }
        void SetHasHomeland(bool value) const { WriteField<bool>("hasHomeland", value); }
        bool homelandNear() const { return ReadField<bool>("homelandNear"); }
        void SetHomelandNear(bool value) const { WriteField<bool>("homelandNear", value); }
        int theirStates() const { return ReadField<int>("theirStates"); }
        void SetTheirStates(int value) const { WriteField<int>("theirStates", value); }
        bool homeRule() const { return ReadField<bool>("homeRule"); }
        void SetHomeRule(bool value) const { WriteField<bool>("homeRule", value); }
        bool busy() const { return ReadField<bool>("busy"); }
        void SetBusy(bool value) const { WriteField<bool>("busy", value); }
        bool ourPeople() const { return ReadField<bool>("ourPeople"); }
        void SetOurPeople(bool value) const { WriteField<bool>("ourPeople", value); }
        bool stateless() const { return ReadField<bool>("stateless"); }
        void SetStateless(bool value) const { WriteField<bool>("stateless", value); }
        int subjects() const { return ReadField<int>("subjects"); }
        void SetSubjects(int value) const { WriteField<int>("subjects", value); }
        bool wide() const { return ReadField<bool>("wide"); }
        void SetWide(bool value) const { WriteField<bool>("wide", value); }
        bool kinRealm() const { return ReadField<bool>("kinRealm"); }
        void SetKinRealm(bool value) const { WriteField<bool>("kinRealm", value); }
        bool abroad() const { return ReadField<bool>("abroad"); }
        void SetAbroad(bool value) const { WriteField<bool>("abroad", value); }
        int closeness() const { return ReadField<int>("closeness"); }
        void SetCloseness(int value) const { WriteField<int>("closeness", value); }
    };
}
