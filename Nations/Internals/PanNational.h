#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PanNational : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PanNational(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PanNational") {}
    public:
        void InstallUnionHooks(void* mgr) const { void* args[] = { mgr }; CallStatic("InstallUnionHooks", args, 1); }
        float UnionPartnerScore(int self, int partner) const { void* args[] = { &self, &partner }; return CallStaticValue<float>("UnionPartnerScore", args, 2); }
        float UnionBorderMul(int self, int partner) const { void* args[] = { &self, &partner }; return CallStaticValue<float>("UnionBorderMul", args, 2); }
        int UnionKindFor(int self, int partner, int proposed) const { void* args[] = { &self, &partner, &proposed }; return CallStaticValue<int>("UnionKindFor", args, 3); }
        bool UnionGuardWaived(int self, int partner) const { void* args[] = { &self, &partner }; return CallStaticValue<bool>("UnionGuardWaived", args, 2); }
        float UnionProposalMul(int self) const { void* args[] = { &self }; return CallStaticValue<float>("UnionProposalMul", args, 1); }
        void UnionOddsFor(int proposer, int target, float& samePeople, float& lostRealm) const { void* args[] = { &proposer, &target, &samePeople, &lostRealm }; CallStatic("UnionOddsFor", args, 4); }
        float UnionLoyaltyFor(int member, int senior) const { void* args[] = { &member, &senior }; return CallStaticValue<float>("UnionLoyaltyFor", args, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int KeyOf(void* identity, int nationId) const { void* args[] = { identity, &nationId }; return CallStaticValue<int>("KeyOf", args, 2); }
        int PeopleKeyLive(void* identity, int nationId) const { void* args[] = { identity, &nationId }; return CallStaticValue<int>("PeopleKeyLive", args, 2); }
        void Refresh(void* nations, void* identity, int idCapacity, void* power, void* relations) const { void* args[] = { nations, identity, &idCapacity, power, relations }; CallStatic("Refresh", args, 5); }
        void Refresh(void* nations, void* keyOf, int idCapacity, void* power, void* relations) const { void* args[] = { nations, keyOf, &idCapacity, power, relations }; CallStatic("Refresh", args, 5); }
        void IndexGlories(void* glories, int nowWorldTick, float ticksPerYear, void* grid) const { void* args[] = { glories, &nowWorldTick, &ticksPerYear, grid }; CallStatic("IndexGlories", args, 4); }
        int PeopleOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("PeopleOf", args, 1); }
        int PeopleKeyOr(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("PeopleKeyOr", args, 1); }
        bool AreKin(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<bool>("AreKin", args, 2); }
        void* MembersOf(int peopleKey) const { void* args[] = { &peopleKey }; return CallStatic("MembersOf", args, 1); }
        int KinOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; return CallStaticValue<int>("KinOf", args, 2); }
        int KinCount(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("KinCount", args, 1); }
        void* GloryOfPeople(int peopleKey) const { void* args[] = { &peopleKey }; return CallStatic("GloryOfPeople", args, 1); }
        float FervorOfPeople(int peopleKey) const { void* args[] = { &peopleKey }; return CallStaticValue<float>("FervorOfPeople", args, 1); }
        bool TryGetGlory(int nationId, void* memory, float& fervor) const { void* args[] = { &nationId, &memory, &fervor }; return CallStaticValue<bool>("TryGetGlory", args, 3); }
        bool Blames(void* m, int other) const { void* args[] = { m, &other }; return CallStaticValue<bool>("Blames", args, 2); }
        int LeaderOf(int peopleKey) const { void* args[] = { &peopleKey }; return CallStaticValue<int>("LeaderOf", args, 1); }
        float OpinionTerm(int judge, int other) const { void* args[] = { &judge, &other }; return CallStaticValue<float>("OpinionTerm", args, 2); }
        void Explain(int judge, int other, float& kin, float& grievance, float& outrage) const { void* args[] = { &judge, &other, &kin, &grievance, &outrage }; CallStatic("Explain", args, 5); }
        float AllianceBonus(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<float>("AllianceBonus", args, 2); }
        float AllianceGateRelief(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<float>("AllianceGateRelief", args, 2); }
        bool ShieldsKin(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<bool>("ShieldsKin", args, 2); }
        float WarRollMul(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<float>("WarRollMul", args, 2); }
        void AimWarGoal(void* self, void* it, int enemy) const { void* args[] = { self, it, &enemy }; CallStatic("AimWarGoal", args, 3); }
        int ChampionOf(int peopleKey, int owner, void* alive) const { void* args[] = { &peopleKey, &owner, alive }; return CallStaticValue<int>("ChampionOf", args, 3); }
        float ClaimStartShare(int stateId, int peopleKey, float ordinary) const { void* args[] = { &stateId, &peopleKey, &ordinary }; return CallStaticValue<float>("ClaimStartShare", args, 3); }
        float ClaimStopShare(int stateId, int peopleKey, float ordinary) const { void* args[] = { &stateId, &peopleKey, &ordinary }; return CallStaticValue<float>("ClaimStopShare", args, 3); }
        bool IsRealmState(int stateId, int peopleKey) const { void* args[] = { &stateId, &peopleKey }; return CallStaticValue<bool>("IsRealmState", args, 2); }
    };
}
