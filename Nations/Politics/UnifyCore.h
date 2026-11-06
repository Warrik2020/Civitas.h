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
        void Freed(void* w, int lord, int newState, int people, int liberator, const char* how) const { void* managed_5 = Api() && Api()->NewString ? Api()->NewString(how ? how : "") : nullptr; void* __callArgs[] = { w, &lord, &newState, &people, &liberator, managed_5 }; Call("Freed", __callArgs, 6); }
        void* SwitchFocusBlock(void* w, void* b) const { void* __callArgs[] = { w, b }; return CallStatic("SwitchFocusBlock", __callArgs, 2); }
        bool SetFocus(void* w, void* r, void* b, int people, const char*& error) const { void* __callArgs[] = { w, r, b, &people, &error }; return CallValue<bool>("SetFocus", __callArgs, 5); }
        float Odds(void* w, void* r, void* b, void* terms) const { void* __callArgs[] = { w, r, b, terms }; return CallValue<float>("Odds", __callArgs, 4); }
        float OpinionOdds(float opinion) const { void* __callArgs[] = { &opinion }; return CallStaticValue<float>("OpinionOdds", __callArgs, 1); }
        bool Close(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<bool>("Close", __callArgs, 3); }
        float JoinOdds(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<float>("JoinOdds", __callArgs, 3); }
        void* AskBlock(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return Call("AskBlock", __callArgs, 3); }
        bool Ask(void* w, void* r, void* b, const char*& error) const { void* __callArgs[] = { w, r, b, &error }; return CallValue<bool>("Ask", __callArgs, 4); }
        float RisingFee(void* w, void* r) const { void* __callArgs[] = { w, r }; return CallValue<float>("RisingFee", __callArgs, 2); }
        void* RisingBlock(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return Call("RisingBlock", __callArgs, 3); }
        bool BackRising(void* w, void* r, void* b, const char*& error) const { void* __callArgs[] = { w, r, b, &error }; return CallValue<bool>("BackRising", __callArgs, 4); }
        void CancelRising(void* b) const { void* __callArgs[] = { b }; Call("CancelRising", __callArgs, 1); }
        void* WarBlock(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return Call("WarBlock", __callArgs, 3); }
        bool DeclareWar(void* w, void* r, void* b, const char*& error) const { void* __callArgs[] = { w, r, b, &error }; return CallValue<bool>("DeclareWar", __callArgs, 4); }
        void AfterLoad(void* w) const { void* __callArgs[] = { w }; Call("AfterLoad", __callArgs, 1); }
        void* JoinBlock(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return Call("JoinBlock", __callArgs, 3); }
        bool JoinThem(void* w, void* r, void* b, const char*& error) const { void* __callArgs[] = { w, r, b, &error }; return CallValue<bool>("JoinThem", __callArgs, 4); }
        void PlayerOffers(void* w, void* branches, void* owners) const { void* __callArgs[] = { w, branches, owners }; Call("PlayerOffers", __callArgs, 3); }
        bool Answer(void* w, void* r, void* b, bool accept) const { void* __callArgs[] = { w, r, b, &accept }; return CallValue<bool>("Answer", __callArgs, 4); }
        void* BuildRealm(void* w, int nation, int kind, int group) const { void* __callArgs[] = { w, &nation, &kind, &group }; return Call("BuildRealm", __callArgs, 4); }
        void* RescopeBlock(void* r) const { void* __callArgs[] = { r }; return CallStatic("RescopeBlock", __callArgs, 1); }
        void* Rescope(void* w, void* r, int group) const { void* __callArgs[] = { w, r, &group }; return Call("Rescope", __callArgs, 3); }
        void* EndingBlock(void* w, void* r, void* b, int need) const { void* __callArgs[] = { w, r, b, &need }; return Call("EndingBlock", __callArgs, 4); }
        float BaseOdds(void* w, void* r, void* b, void* terms, float start, float meterWeight, void* f, void* term) const { void* __callArgs[] = { w, r, b, terms, &start, &meterWeight, &f, &term }; return CallValue<float>("BaseOdds", __callArgs, 8); }
        float Clamp(float sum) const { void* __callArgs[] = { &sum }; return CallStaticValue<float>("Clamp", __callArgs, 1); }
        bool AskEnding(void* w, void* r, void* b, void* e, void* act, const char*& error) const { void* __callArgs[] = { w, r, b, e, act, &error }; return CallValue<bool>("AskEnding", __callArgs, 6); }
        bool DoEnding(void* w, void* r, void* b, void* e, void* act, const char*& error) const { void* __callArgs[] = { w, r, b, e, act, &error }; return CallValue<bool>("DoEnding", __callArgs, 6); }
        void* DemandOf(void* b) const { void* __callArgs[] = { b }; return CallStatic("DemandOf", __callArgs, 1); }
        void* AnswerOf(void* b, void* demand) const { void* __callArgs[] = { b, demand }; return CallStatic("AnswerOf", __callArgs, 2); }
        int OpenDemandCount(void* r) const { void* __callArgs[] = { r }; return CallStaticValue<int>("OpenDemandCount", __callArgs, 1); }
        bool RefuseDemand(void* w, void* r, void* b, const char*& error) const { void* __callArgs[] = { w, r, b, &error }; return CallValue<bool>("RefuseDemand", __callArgs, 4); }
        void ShiftDeadlines(int nation, int span) const { void* __callArgs[] = { &nation, &span }; Call("ShiftDeadlines", __callArgs, 2); }
        void* PeopleBranch(int nation, int people) const { void* __callArgs[] = { &nation, &people }; return Call("PeopleBranch", __callArgs, 2); }
        float TrustOf(int nation, int people) const { void* __callArgs[] = { &nation, &people }; return CallValue<float>("TrustOf", __callArgs, 2); }
        void AddTrust(void* w, int nation, int people, float delta) const { void* __callArgs[] = { w, &nation, &people, &delta }; Call("AddTrust", __callArgs, 4); }
        int RecentRefusals(void* w, int nation, int people) const { void* __callArgs[] = { w, &nation, &people }; return CallValue<int>("RecentRefusals", __callArgs, 3); }
        void* EnsurePeopleBranch(void* w, int nation, int people) const { void* __callArgs[] = { w, &nation, &people }; return Call("EnsurePeopleBranch", __callArgs, 3); }
        void* FinishableName(void* w, int nation, int people, const char* key) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { w, &nation, &people, managed_3 }; return Call("FinishableName", __callArgs, 4); }
        bool FinishStep(void* w, int nation, int people, const char* key) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { w, &nation, &people, managed_3 }; return CallValue<bool>("FinishStep", __callArgs, 4); }
        bool HasBond(int a, int b, int kind) const { void* __callArgs[] = { &a, &b, &kind }; return CallValue<bool>("HasBond", __callArgs, 3); }
        void AddBond(void* w, int a, int b, int kind) const { void* __callArgs[] = { w, &a, &b, &kind }; Call("AddBond", __callArgs, 4); }
        void RestoreBond(void* bond) const { void* __callArgs[] = { bond }; Call("RestoreBond", __callArgs, 1); }
        void EndBranch(void* w, void* r, void* b, void* ending) const { void* __callArgs[] = { w, r, b, ending }; Call("EndBranch", __callArgs, 4); }
        void RefuseEnding(void* w, void* r, void* b, void* ending) const { void* __callArgs[] = { w, r, b, ending }; Call("RefuseEnding", __callArgs, 4); }
        bool RollEnding(void* w, void* r, void* b, void* ending) const { void* __callArgs[] = { w, r, b, ending }; return CallValue<bool>("RollEnding", __callArgs, 4); }
        void PostEndingOffer(void* w, void* r, void* b, void* ending) const { void* __callArgs[] = { w, r, b, ending }; Call("PostEndingOffer", __callArgs, 4); }
        void ReviewEndingOffer(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; Call("ReviewEndingOffer", __callArgs, 3); }
        bool AiTryEndings(void* w, void* r, void* b, float minOdds, void* allowed) const { void* __callArgs[] = { w, r, b, &minOdds, allowed }; return CallValue<bool>("AiTryEndings", __callArgs, 5); }
        void* LibOf(int kind) const { void* __callArgs[] = { &kind }; return Call("LibOf", __callArgs, 1); }
        void SetLibrary(void* lib) const { void* __callArgs[] = { lib }; Call("SetLibrary", __callArgs, 1); }
        void SetLibrary(int kind, void* lib) const { void* __callArgs[] = { &kind, lib }; Call("SetLibrary", __callArgs, 2); }
        void* RulesOf(int kind) const { void* __callArgs[] = { &kind }; return Call("RulesOf", __callArgs, 1); }
        void* RealmOf(void** args = nullptr, int count = 0) const { return Call("RealmOf", args, count); }
        bool HasContent(int kind) const { void* __callArgs[] = { &kind }; return CallValue<bool>("HasContent", __callArgs, 1); }
        float TicksPerMonth(void* w) const { void* __callArgs[] = { w }; return CallStaticValue<float>("TicksPerMonth", __callArgs, 1); }
        void* EnsureRealm(void** args = nullptr, int count = 0) const { return Call("EnsureRealm", args, count); }
        void Restore(void* r) const { void* __callArgs[] = { r }; Call("Restore", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* FactsFor(void* w, void* r, int target, void* b) const { void* __callArgs[] = { w, r, &target, b }; return Call("FactsFor", __callArgs, 4); }
        void Tick(void* w) const { void* __callArgs[] = { w }; Call("Tick", __callArgs, 1); }
        void Advance(void* w, int span) const { void* __callArgs[] = { w, &span }; Call("Advance", __callArgs, 2); }
        void NoteFounded(int id) const { void* __callArgs[] = { &id }; Call("NoteFounded", __callArgs, 1); }
        void Review(void* w, int nation, float months) const { void* __callArgs[] = { w, &nation, &months }; Call("Review", __callArgs, 3); }
        int ViewOf(void* r, void* b, void* s) const { void* __callArgs[] = { r, b, s }; return CallValue<int>("ViewOf", __callArgs, 3); }
        float Fee(void* w, void* r, void* s) const { void* __callArgs[] = { w, r, s }; return CallStaticValue<float>("Fee", __callArgs, 3); }
        void* BlockReason(void* w, void* r, void* b, void* s) const { void* __callArgs[] = { w, r, b, s }; return Call("BlockReason", __callArgs, 4); }
        bool Start(void* w, void* r, void* b, void* s, const char*& error) const { void* __callArgs[] = { w, r, b, s, &error }; return CallValue<bool>("Start", __callArgs, 5); }
        void Cancel(void* s) const { void* __callArgs[] = { s }; Call("Cancel", __callArgs, 1); }
        void Refresh(void* w, void* r) const { void* __callArgs[] = { w, r }; Call("Refresh", __callArgs, 2); }
        bool TryModifiers(int nation, void* m) const { void* __callArgs[] = { &nation, &m }; return CallValue<bool>("TryModifiers", __callArgs, 2); }
        float FaithRule(int nation) const { void* __callArgs[] = { &nation }; return CallValue<float>("FaithRule", __callArgs, 1); }
        float OpinionTerm(void* w, int judge, int other) const { void* __callArgs[] = { w, &judge, &other }; return CallValue<float>("OpinionTerm", __callArgs, 3); }
        bool HasCause(int attacker, int defender) const { void* __callArgs[] = { &attacker, &defender }; return CallValue<bool>("HasCause", __callArgs, 2); }
        bool WantsAnnex(int victor, int loser) const { void* __callArgs[] = { &victor, &loser }; return CallValue<bool>("WantsAnnex", __callArgs, 2); }
        void* Counts() const { return ReadField<void*>("Counts"); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
        int OriginTick() const { return ReadField<int>("OriginTick"); }
        void OriginTick(int value) const { WriteField<int>("OriginTick", value); }
    };
}
