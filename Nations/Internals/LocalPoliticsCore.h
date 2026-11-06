#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalPoliticsCore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalPoliticsCore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalPoliticsCore") {}
    public:
        float WarRollMul(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallValue<float>("WarRollMul", __callArgs, 2); }
        bool HasCause(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallValue<bool>("HasCause", __callArgs, 2); }
        bool Assisted(int attacker, int defender) const { void* __callArgs[] = { &attacker, &defender }; return CallValue<bool>("Assisted", __callArgs, 2); }
        int CopyLocalWarTicks(void* dst) const { void* __callArgs[] = { dst }; return CallValue<int>("CopyLocalWarTicks", __callArgs, 1); }
        void RestoreGuardrails(void* ticks, void* wars) const { void* __callArgs[] = { ticks, wars }; Call("RestoreGuardrails", __callArgs, 2); }
        void* LeagueAgainst(int menace) const { void* __callArgs[] = { &menace }; return Call("LeagueAgainst", __callArgs, 1); }
        void* LeagueById(int id) const { void* __callArgs[] = { &id }; return Call("LeagueById", __callArgs, 1); }
        int LeaguesOf(int member, void* dst) const { void* __callArgs[] = { &member, dst }; return CallValue<int>("LeaguesOf", __callArgs, 2); }
        void QueueJoin(int menace, int member) const { void* __callArgs[] = { &menace, &member }; Call("QueueJoin", __callArgs, 2); }
        bool IsLeagueMenaceOf(int att, int def) const { void* __callArgs[] = { &att, &def }; return CallValue<bool>("IsLeagueMenaceOf", __callArgs, 2); }
        void ProcessJoins(void* w, void* roll) const { void* __callArgs[] = { w, roll }; Call("ProcessJoins", __callArgs, 2); }
        float HalfLifeYears(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<float>("HalfLifeYears", __callArgs, 1); }
        float Memory(int judge, int target, int kind) const { void* __callArgs[] = { &judge, &target, &kind }; return CallValue<float>("Memory", __callArgs, 3); }
        int CopyLedger(void* dst) const { void* __callArgs[] = { dst }; return CallValue<int>("CopyLedger", __callArgs, 1); }
        void RestoreSentiment(void* s) const { void* __callArgs[] = { &s }; Call("RestoreSentiment", __callArgs, 1); }
        float OpinionTerm(int judge, int target) const { void* __callArgs[] = { &judge, &target }; return CallValue<float>("OpinionTerm", __callArgs, 2); }
        int Explain(int judge, int target, void* dst) const { void* __callArgs[] = { &judge, &target, dst }; return CallValue<int>("Explain", __callArgs, 3); }
        int TicksLeft(void* o) const { void* __callArgs[] = { o }; return CallValue<int>("TicksLeft", __callArgs, 1); }
        bool Accept(void* w, void* o, int& why) const { void* __callArgs[] = { w, o, &why }; return CallValue<bool>("Accept", __callArgs, 3); }
        void Decline(void* w, void* o) const { void* __callArgs[] = { w, o }; Call("Decline", __callArgs, 2); }
        void RestoreOffer(void* o) const { void* __callArgs[] = { o }; Call("RestoreOffer", __callArgs, 1); }
        void* DebugEnqueueOffer(void* w, int kind, int arcId, int recordId, int from, int against, float gold = 0.0f) const { void* __callArgs[] = { w, &kind, &arcId, &recordId, &from, &against, &gold }; return Call("DebugEnqueueOffer", __callArgs, 7); }
        float Proximity(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<float>("Proximity", __callArgs, 2); }
        bool IsNear(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("IsNear", __callArgs, 2); }
        void* LinksOf(int id) const { void* __callArgs[] = { &id }; return Call("LinksOf", __callArgs, 1); }
        float Growth(void* w, int id) const { void* __callArgs[] = { w, &id }; return CallValue<float>("Growth", __callArgs, 2); }
        int PeakTiles(void* w, int id) const { void* __callArgs[] = { w, &id }; return CallValue<int>("PeakTiles", __callArgs, 2); }
        float MenaceScore(void* w, int id) const { void* __callArgs[] = { w, &id }; return CallValue<float>("MenaceScore", __callArgs, 2); }
        float CollapseScore(void* w, int id, int& cause) const { void* __callArgs[] = { w, &id, &cause }; return CallValue<float>("CollapseScore", __callArgs, 3); }
        float Menace(int id) const { void* __callArgs[] = { &id }; return CallValue<float>("Menace", __callArgs, 1); }
        float Collapse(int id) const { void* __callArgs[] = { &id }; return CallValue<float>("Collapse", __callArgs, 1); }
        bool IsMenace(int id) const { void* __callArgs[] = { &id }; return CallValue<bool>("IsMenace", __callArgs, 1); }
        bool IsCollapsing(int id) const { void* __callArgs[] = { &id }; return CallValue<bool>("IsCollapsing", __callArgs, 1); }
        bool IsGreatPower(int id) const { void* __callArgs[] = { &id }; return CallValue<bool>("IsGreatPower", __callArgs, 1); }
        bool ExportNation(int id, void* r) const { void* __callArgs[] = { &id, r }; return CallValue<bool>("ExportNation", __callArgs, 2); }
        void ImportNation(void* r) const { void* __callArgs[] = { r }; Call("ImportNation", __callArgs, 1); }
        void RestoreClock(int originTick, int histHead, int histFilled, int lastSampleTick) const { void* __callArgs[] = { &originTick, &histHead, &histFilled, &lastSampleTick }; Call("RestoreClock", __callArgs, 4); }
        void RestoreOfferId(int next) const { void* __callArgs[] = { &next }; Call("RestoreOfferId", __callArgs, 1); }
        void AdoptLeague(void* L) const { void* __callArgs[] = { L }; Call("AdoptLeague", __callArgs, 1); }
        void AdoptScramble(void* s) const { void* __callArgs[] = { s }; Call("AdoptScramble", __callArgs, 1); }
        void AdoptEpisode(void* e) const { void* __callArgs[] = { e }; Call("AdoptEpisode", __callArgs, 1); }
        void RestoreInbox(void* incidents) const { void* __callArgs[] = { incidents }; Call("RestoreInbox", __callArgs, 1); }
        void AfterRestore() const { Call("AfterRestore", nullptr, 0); }
        int FearersOf(int id, void* dst) const { void* __callArgs[] = { &id, dst }; return CallValue<int>("FearersOf", __callArgs, 2); }
        float LeagueReadiness(void* L) const { void* __callArgs[] = { L }; return CallValue<float>("LeagueReadiness", __callArgs, 1); }
        int WeakestLink(void* L, int except) const { void* __callArgs[] = { L, &except }; return CallValue<int>("WeakestLink", __callArgs, 2); }
        float ScrambleShareLeft(void* s) const { void* __callArgs[] = { s }; return CallValue<float>("ScrambleShareLeft", __callArgs, 1); }
        bool IsRival(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallValue<bool>("IsRival", __callArgs, 2); }
        bool RivalFlared(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallValue<bool>("RivalFlared", __callArgs, 2); }
        bool RivalsOf(int id, int& r0, int& r1) const { void* __callArgs[] = { &id, &r0, &r1 }; return CallValue<bool>("RivalsOf", __callArgs, 3); }
        void* RivalSlotOf(int id, int slot) const { void* __callArgs[] = { &id, &slot }; return Call("RivalSlotOf", __callArgs, 2); }
        void RestoreRivalSlot(int id, int slot, void* r) const { void* __callArgs[] = { &id, &slot, &r }; Call("RestoreRivalSlot", __callArgs, 3); }
        float RivalScore(void* w, int self, int c) const { void* __callArgs[] = { w, &self, &c }; return CallValue<float>("RivalScore", __callArgs, 3); }
        void* ScrambleFor(int victim) const { void* __callArgs[] = { &victim }; return Call("ScrambleFor", __callArgs, 1); }
        void* ScrambleById(int id) const { void* __callArgs[] = { &id }; return Call("ScrambleById", __callArgs, 1); }
        int ScramblesOf(int id, void* dst) const { void* __callArgs[] = { &id, dst }; return CallValue<int>("ScramblesOf", __callArgs, 2); }
        void* EpisodeFor(int a, int b) const { void* __callArgs[] = { &a, &b }; return Call("EpisodeFor", __callArgs, 2); }
        void* EpisodeById(int id) const { void* __callArgs[] = { &id }; return Call("EpisodeById", __callArgs, 1); }
        void* Arc(int id) const { void* __callArgs[] = { &id }; return Call("Arc", __callArgs, 1); }
        int ArcsOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; return CallValue<int>("ArcsOf", __callArgs, 2); }
        void BeginRestore() const { Call("BeginRestore", nullptr, 0); }
        void EndRestore() const { Call("EndRestore", nullptr, 0); }
        void* RentArc(int kind) const { void* __callArgs[] = { &kind }; return Call("RentArc", __callArgs, 1); }
        void AdoptArc(void* a) const { void* __callArgs[] = { a }; Call("AdoptArc", __callArgs, 1); }
        void RestoreIds(int nextArcId, int nextRecordId) const { void* __callArgs[] = { &nextArcId, &nextRecordId }; Call("RestoreIds", __callArgs, 2); }
        void Enqueue(void* inc) const { void* __callArgs[] = { &inc }; Call("Enqueue", __callArgs, 1); }
        int CopyInbox(void* dst) const { void* __callArgs[] = { dst }; return CallValue<int>("CopyInbox", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Pass(void* w, float passYears) const { void* __callArgs[] = { w, &passYears }; Call("Pass", __callArgs, 2); }
        void Tick(void* w, int aiInterval, void* roll) const { void* __callArgs[] = { w, &aiInterval, roll }; Call("Tick", __callArgs, 3); }
        int OriginTick() const { return ReadField<int>("OriginTick"); }
        void OriginTick(int value) const { WriteField<int>("OriginTick", value); }
        void* Stats() const { return ReadField<void*>("Stats"); }
        void Stats(void* value) const { WriteField<void*>("Stats", value); }
        void* LastYearStats() const { return ReadField<void*>("LastYearStats"); }
        void LastYearStats(void* value) const { WriteField<void*>("LastYearStats", value); }
    };
}
