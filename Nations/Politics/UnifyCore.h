#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyCore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyCore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyCore") {}
    public:
        void Freed(void* w, int lord, int newState, int people, int liberator, const char* how) const { void* managed_5 = Api() && Api()->NewString ? Api()->NewString(how ? how : "") : nullptr; void* args[] = { w, &lord, &newState, &people, &liberator, managed_5 }; Call("Freed", args, 6); }
        void* SwitchFocusBlock(void* w, void* b) const { void* args[] = { w, b }; return CallStatic("SwitchFocusBlock", args, 2); }
        bool SetFocus(void* w, void* r, void* b, int people, const char*& error) const { void* args[] = { w, r, b, &people, &error }; return CallValue<bool>("SetFocus", args, 5); }
        float Odds(void* w, void* r, void* b, void* terms) const { void* args[] = { w, r, b, terms }; return CallValue<float>("Odds", args, 4); }
        float OpinionOdds(float opinion) const { void* args[] = { &opinion }; return CallStaticValue<float>("OpinionOdds", args, 1); }
        bool Close(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<bool>("Close", args, 3); }
        float JoinOdds(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<float>("JoinOdds", args, 3); }
        void* AskBlock(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return Call("AskBlock", args, 3); }
        bool Ask(void* w, void* r, void* b, const char*& error) const { void* args[] = { w, r, b, &error }; return CallValue<bool>("Ask", args, 4); }
        float RisingFee(void* w, void* r) const { void* args[] = { w, r }; return CallValue<float>("RisingFee", args, 2); }
        void* RisingBlock(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return Call("RisingBlock", args, 3); }
        bool BackRising(void* w, void* r, void* b, const char*& error) const { void* args[] = { w, r, b, &error }; return CallValue<bool>("BackRising", args, 4); }
        void CancelRising(void* b) const { void* args[] = { b }; Call("CancelRising", args, 1); }
        void* WarBlock(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return Call("WarBlock", args, 3); }
        bool DeclareWar(void* w, void* r, void* b, const char*& error) const { void* args[] = { w, r, b, &error }; return CallValue<bool>("DeclareWar", args, 4); }
        void AfterLoad(void* w) const { void* args[] = { w }; Call("AfterLoad", args, 1); }
        void* JoinBlock(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return Call("JoinBlock", args, 3); }
        bool JoinThem(void* w, void* r, void* b, const char*& error) const { void* args[] = { w, r, b, &error }; return CallValue<bool>("JoinThem", args, 4); }
        void PlayerOffers(void* w, void* branches, void* owners) const { void* args[] = { w, branches, owners }; Call("PlayerOffers", args, 3); }
        bool Answer(void* w, void* r, void* b, bool accept) const { void* args[] = { w, r, b, &accept }; return CallValue<bool>("Answer", args, 4); }
        void* BuildRealm(void* w, int nation, int kind, int group) const { void* args[] = { w, &nation, &kind, &group }; return Call("BuildRealm", args, 4); }
        void* RescopeBlock(void* r) const { void* args[] = { r }; return CallStatic("RescopeBlock", args, 1); }
        void* Rescope(void* w, void* r, int group) const { void* args[] = { w, r, &group }; return Call("Rescope", args, 3); }
        void* EndingBlock(void* w, void* r, void* b, int need) const { void* args[] = { w, r, b, &need }; return Call("EndingBlock", args, 4); }
        float BaseOdds(void* w, void* r, void* b, void* terms, float start, float meterWeight, void* f, void* term) const { void* args[] = { w, r, b, terms, &start, &meterWeight, &f, &term }; return CallValue<float>("BaseOdds", args, 8); }
        float Clamp(float sum) const { void* args[] = { &sum }; return CallStaticValue<float>("Clamp", args, 1); }
        bool AskEnding(void* w, void* r, void* b, void* e, void* act, const char*& error) const { void* args[] = { w, r, b, e, act, &error }; return CallValue<bool>("AskEnding", args, 6); }
        bool DoEnding(void* w, void* r, void* b, void* e, void* act, const char*& error) const { void* args[] = { w, r, b, e, act, &error }; return CallValue<bool>("DoEnding", args, 6); }
        void* DemandOf(void* b) const { void* args[] = { b }; return CallStatic("DemandOf", args, 1); }
        void* AnswerOf(void* b, void* demand) const { void* args[] = { b, demand }; return CallStatic("AnswerOf", args, 2); }
        int OpenDemandCount(void* r) const { void* args[] = { r }; return CallStaticValue<int>("OpenDemandCount", args, 1); }
        bool RefuseDemand(void* w, void* r, void* b, const char*& error) const { void* args[] = { w, r, b, &error }; return CallValue<bool>("RefuseDemand", args, 4); }
        void ShiftDeadlines(int nation, int span) const { void* args[] = { &nation, &span }; Call("ShiftDeadlines", args, 2); }
        void* PeopleBranch(int nation, int people) const { void* args[] = { &nation, &people }; return Call("PeopleBranch", args, 2); }
        float TrustOf(int nation, int people) const { void* args[] = { &nation, &people }; return CallValue<float>("TrustOf", args, 2); }
        void AddTrust(void* w, int nation, int people, float delta) const { void* args[] = { w, &nation, &people, &delta }; Call("AddTrust", args, 4); }
        int RecentRefusals(void* w, int nation, int people) const { void* args[] = { w, &nation, &people }; return CallValue<int>("RecentRefusals", args, 3); }
        void* EnsurePeopleBranch(void* w, int nation, int people) const { void* args[] = { w, &nation, &people }; return Call("EnsurePeopleBranch", args, 3); }
        void* FinishableName(void* w, int nation, int people, const char* key) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { w, &nation, &people, managed_3 }; return Call("FinishableName", args, 4); }
        bool FinishStep(void* w, int nation, int people, const char* key) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { w, &nation, &people, managed_3 }; return CallValue<bool>("FinishStep", args, 4); }
        bool HasBond(int a, int b, int kind) const { void* args[] = { &a, &b, &kind }; return CallValue<bool>("HasBond", args, 3); }
        void AddBond(void* w, int a, int b, int kind) const { void* args[] = { w, &a, &b, &kind }; Call("AddBond", args, 4); }
        void RestoreBond(void* bond) const { void* args[] = { bond }; Call("RestoreBond", args, 1); }
        void EndBranch(void* w, void* r, void* b, void* ending) const { void* args[] = { w, r, b, ending }; Call("EndBranch", args, 4); }
        void RefuseEnding(void* w, void* r, void* b, void* ending) const { void* args[] = { w, r, b, ending }; Call("RefuseEnding", args, 4); }
        bool RollEnding(void* w, void* r, void* b, void* ending) const { void* args[] = { w, r, b, ending }; return CallValue<bool>("RollEnding", args, 4); }
        void PostEndingOffer(void* w, void* r, void* b, void* ending) const { void* args[] = { w, r, b, ending }; Call("PostEndingOffer", args, 4); }
        void ReviewEndingOffer(void* w, void* r, void* b) const { void* args[] = { w, r, b }; Call("ReviewEndingOffer", args, 3); }
        bool AiTryEndings(void* w, void* r, void* b, float minOdds, void* allowed) const { void* args[] = { w, r, b, &minOdds, allowed }; return CallValue<bool>("AiTryEndings", args, 5); }
        void* LibOf(int kind) const { void* args[] = { &kind }; return Call("LibOf", args, 1); }
        void SetLibrary(void* lib) const { void* args[] = { lib }; Call("SetLibrary", args, 1); }
        void SetLibrary(int kind, void* lib) const { void* args[] = { &kind, lib }; Call("SetLibrary", args, 2); }
        void* RulesOf(int kind) const { void* args[] = { &kind }; return Call("RulesOf", args, 1); }
        void* RealmOf(void** args = nullptr, int count = 0) const { return Call("RealmOf", args, count); }
        bool HasContent(int kind) const { void* args[] = { &kind }; return CallValue<bool>("HasContent", args, 1); }
        float TicksPerMonth(void* w) const { void* args[] = { w }; return CallStaticValue<float>("TicksPerMonth", args, 1); }
        void* EnsureRealm(void** args = nullptr, int count = 0) const { return Call("EnsureRealm", args, count); }
        void Restore(void* r) const { void* args[] = { r }; Call("Restore", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* FactsFor(void* w, void* r, int target, void* b) const { void* args[] = { w, r, &target, b }; return Call("FactsFor", args, 4); }
        void Tick(void* w) const { void* args[] = { w }; Call("Tick", args, 1); }
        void Advance(void* w, int span) const { void* args[] = { w, &span }; Call("Advance", args, 2); }
        void NoteFounded(int id) const { void* args[] = { &id }; Call("NoteFounded", args, 1); }
        void Review(void* w, int nation, float months) const { void* args[] = { w, &nation, &months }; Call("Review", args, 3); }
        int ViewOf(void* r, void* b, void* s) const { void* args[] = { r, b, s }; return CallValue<int>("ViewOf", args, 3); }
        float Fee(void* w, void* r, void* s) const { void* args[] = { w, r, s }; return CallStaticValue<float>("Fee", args, 3); }
        void* BlockReason(void* w, void* r, void* b, void* s) const { void* args[] = { w, r, b, s }; return Call("BlockReason", args, 4); }
        bool Start(void* w, void* r, void* b, void* s, const char*& error) const { void* args[] = { w, r, b, s, &error }; return CallValue<bool>("Start", args, 5); }
        void Cancel(void* s) const { void* args[] = { s }; Call("Cancel", args, 1); }
        void Refresh(void* w, void* r) const { void* args[] = { w, r }; Call("Refresh", args, 2); }
        bool TryModifiers(int nation, void* m) const { void* args[] = { &nation, &m }; return CallValue<bool>("TryModifiers", args, 2); }
        float FaithRule(int nation) const { void* args[] = { &nation }; return CallValue<float>("FaithRule", args, 1); }
        float OpinionTerm(void* w, int judge, int other) const { void* args[] = { w, &judge, &other }; return CallValue<float>("OpinionTerm", args, 3); }
        bool HasCause(int attacker, int defender) const { void* args[] = { &attacker, &defender }; return CallValue<bool>("HasCause", args, 2); }
        bool WantsAnnex(int victor, int loser) const { void* args[] = { &victor, &loser }; return CallValue<bool>("WantsAnnex", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        int GetHashCode() const { return CallValue<int>("GetHashCode", nullptr, 0); }
        void* Counts() const { return ReadField<void*>("Counts"); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
        int OriginTick() const { return ReadField<int>("OriginTick"); }
        void SetOriginTick(int value) const { WriteField<int>("OriginTick", value); }
        int proclaimed() const { return ReadField<int>("proclaimed"); }
        void SetProclaimed(int value) const { WriteField<int>("proclaimed", value); }
        int steps() const { return ReadField<int>("steps"); }
        void SetSteps(int value) const { WriteField<int>("steps", value); }
        int asks() const { return ReadField<int>("asks"); }
        void SetAsks(int value) const { WriteField<int>("asks", value); }
        int joined() const { return ReadField<int>("joined"); }
        void SetJoined(int value) const { WriteField<int>("joined", value); }
        int refused() const { return ReadField<int>("refused"); }
        void SetRefused(int value) const { WriteField<int>("refused", value); }
        int joinedThem() const { return ReadField<int>("joinedThem"); }
        void SetJoinedThem(int value) const { WriteField<int>("joinedThem", value); }
        int risings() const { return ReadField<int>("risings"); }
        void SetRisings(int value) const { WriteField<int>("risings", value); }
        int risingJoined() const { return ReadField<int>("risingJoined"); }
        void SetRisingJoined(int value) const { WriteField<int>("risingJoined", value); }
        int wars() const { return ReadField<int>("wars"); }
        void SetWars(int value) const { WriteField<int>("wars", value); }
        int reactions() const { return ReadField<int>("reactions"); }
        void SetReactions(int value) const { WriteField<int>("reactions", value); }
    };
}
