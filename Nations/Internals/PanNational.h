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
        void InstallUnionHooks(void* mgr) const { void* __callArgs[] = { mgr }; CallStatic("InstallUnionHooks", __callArgs, 1); }
        float UnionPartnerScore(int self, int partner) const { void* __callArgs[] = { &self, &partner }; return CallStaticValue<float>("UnionPartnerScore", __callArgs, 2); }
        float UnionBorderMul(int self, int partner) const { void* __callArgs[] = { &self, &partner }; return CallStaticValue<float>("UnionBorderMul", __callArgs, 2); }
        int UnionKindFor(int self, int partner, int proposed) const { void* __callArgs[] = { &self, &partner, &proposed }; return CallStaticValue<int>("UnionKindFor", __callArgs, 3); }
        bool UnionGuardWaived(int self, int partner) const { void* __callArgs[] = { &self, &partner }; return CallStaticValue<bool>("UnionGuardWaived", __callArgs, 2); }
        float UnionProposalMul(int self) const { void* __callArgs[] = { &self }; return CallStaticValue<float>("UnionProposalMul", __callArgs, 1); }
        void UnionOddsFor(int proposer, int target, float& samePeople, float& lostRealm) const { void* __callArgs[] = { &proposer, &target, &samePeople, &lostRealm }; CallStatic("UnionOddsFor", __callArgs, 4); }
        float UnionLoyaltyFor(int member, int senior) const { void* __callArgs[] = { &member, &senior }; return CallStaticValue<float>("UnionLoyaltyFor", __callArgs, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int KeyOf(void* identity, int nationId) const { void* __callArgs[] = { identity, &nationId }; return CallStaticValue<int>("KeyOf", __callArgs, 2); }
        int PeopleKeyLive(void* identity, int nationId) const { void* __callArgs[] = { identity, &nationId }; return CallStaticValue<int>("PeopleKeyLive", __callArgs, 2); }
        void Refresh(void* nations, void* identity, int idCapacity, void* power, void* relations) const { void* __callArgs[] = { nations, identity, &idCapacity, power, relations }; CallStatic("Refresh", __callArgs, 5); }
        void RefreshOverload12(void* nations, void* keyOf, int idCapacity, void* power, void* relations) const { void* __callArgs[] = { nations, keyOf, &idCapacity, power, relations }; CallStatic("Refresh", __callArgs, 5); }
        void IndexGlories(void* glories, int nowWorldTick, float ticksPerYear, void* grid) const { void* __callArgs[] = { glories, &nowWorldTick, &ticksPerYear, grid }; CallStatic("IndexGlories", __callArgs, 4); }
        int PeopleOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("PeopleOf", __callArgs, 1); }
        int PeopleKeyOr(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("PeopleKeyOr", __callArgs, 1); }
        bool AreKin(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<bool>("AreKin", __callArgs, 2); }
        void* MembersOf(int peopleKey) const { void* __callArgs[] = { &peopleKey }; return CallStatic("MembersOf", __callArgs, 1); }
        int KinOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; return CallStaticValue<int>("KinOf", __callArgs, 2); }
        int KinCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("KinCount", __callArgs, 1); }
        void* GloryOfPeople(int peopleKey) const { void* __callArgs[] = { &peopleKey }; return CallStatic("GloryOfPeople", __callArgs, 1); }
        float FervorOfPeople(int peopleKey) const { void* __callArgs[] = { &peopleKey }; return CallStaticValue<float>("FervorOfPeople", __callArgs, 1); }
        bool TryGetGlory(int nationId, void* memory, float& fervor) const { void* __callArgs[] = { &nationId, &memory, &fervor }; return CallStaticValue<bool>("TryGetGlory", __callArgs, 3); }
        bool Blames(void* m, int other) const { void* __callArgs[] = { m, &other }; return CallStaticValue<bool>("Blames", __callArgs, 2); }
        int LeaderOf(int peopleKey) const { void* __callArgs[] = { &peopleKey }; return CallStaticValue<int>("LeaderOf", __callArgs, 1); }
        float OpinionTerm(int judge, int other) const { void* __callArgs[] = { &judge, &other }; return CallStaticValue<float>("OpinionTerm", __callArgs, 2); }
        void Explain(int judge, int other, float& kin, float& grievance, float& outrage) const { void* __callArgs[] = { &judge, &other, &kin, &grievance, &outrage }; CallStatic("Explain", __callArgs, 5); }
        float AllianceBonus(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<float>("AllianceBonus", __callArgs, 2); }
        float AllianceGateRelief(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<float>("AllianceGateRelief", __callArgs, 2); }
        bool ShieldsKin(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<bool>("ShieldsKin", __callArgs, 2); }
        float WarRollMul(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<float>("WarRollMul", __callArgs, 2); }
        void AimWarGoal(void* self, void* it, int enemy) const { void* __callArgs[] = { self, it, &enemy }; CallStatic("AimWarGoal", __callArgs, 3); }
        int ChampionOf(int peopleKey, int owner, void* alive) const { void* __callArgs[] = { &peopleKey, &owner, alive }; return CallStaticValue<int>("ChampionOf", __callArgs, 3); }
        float ClaimStartShare(int stateId, int peopleKey, float ordinary) const { void* __callArgs[] = { &stateId, &peopleKey, &ordinary }; return CallStaticValue<float>("ClaimStartShare", __callArgs, 3); }
        float ClaimStopShare(int stateId, int peopleKey, float ordinary) const { void* __callArgs[] = { &stateId, &peopleKey, &ordinary }; return CallStaticValue<float>("ClaimStopShare", __callArgs, 3); }
        bool IsRealmState(int stateId, int peopleKey) const { void* __callArgs[] = { &stateId, &peopleKey }; return CallStaticValue<bool>("IsRealmState", __callArgs, 2); }
    };
}
