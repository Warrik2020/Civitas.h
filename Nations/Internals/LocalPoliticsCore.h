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
        float WarRollMul(int self, int other) const { void* args[] = { &self, &other }; return CallValue<float>("WarRollMul", args, 2); }
        bool HasCause(int self, int other) const { void* args[] = { &self, &other }; return CallValue<bool>("HasCause", args, 2); }
        bool Assisted(int attacker, int defender) const { void* args[] = { &attacker, &defender }; return CallValue<bool>("Assisted", args, 2); }
        int CopyLocalWarTicks(void* dst) const { void* args[] = { dst }; return CallValue<int>("CopyLocalWarTicks", args, 1); }
        void RestoreGuardrails(void* ticks, void* wars) const { void* args[] = { ticks, wars }; Call("RestoreGuardrails", args, 2); }
        void* LeagueAgainst(int menace) const { void* args[] = { &menace }; return Call("LeagueAgainst", args, 1); }
        void* LeagueById(int id) const { void* args[] = { &id }; return Call("LeagueById", args, 1); }
        int LeaguesOf(int member, void* dst) const { void* args[] = { &member, dst }; return CallValue<int>("LeaguesOf", args, 2); }
        void QueueJoin(int menace, int member) const { void* args[] = { &menace, &member }; Call("QueueJoin", args, 2); }
        bool IsLeagueMenaceOf(int att, int def) const { void* args[] = { &att, &def }; return CallValue<bool>("IsLeagueMenaceOf", args, 2); }
        void ProcessJoins(void* w, void* roll) const { void* args[] = { w, roll }; Call("ProcessJoins", args, 2); }
        float HalfLifeYears(int k) const { void* args[] = { &k }; return CallStaticValue<float>("HalfLifeYears", args, 1); }
        float Memory(int judge, int target, int kind) const { void* args[] = { &judge, &target, &kind }; return CallValue<float>("Memory", args, 3); }
        int CopyLedger(void* dst) const { void* args[] = { dst }; return CallValue<int>("CopyLedger", args, 1); }
        void RestoreSentiment(void* s) const { void* args[] = { &s }; Call("RestoreSentiment", args, 1); }
        float OpinionTerm(int judge, int target) const { void* args[] = { &judge, &target }; return CallValue<float>("OpinionTerm", args, 2); }
        int Explain(int judge, int target, void* dst) const { void* args[] = { &judge, &target, dst }; return CallValue<int>("Explain", args, 3); }
        int TicksLeft(void* o) const { void* args[] = { o }; return CallValue<int>("TicksLeft", args, 1); }
        bool Accept(void* w, void* o, int& why) const { void* args[] = { w, o, &why }; return CallValue<bool>("Accept", args, 3); }
        void Decline(void* w, void* o) const { void* args[] = { w, o }; Call("Decline", args, 2); }
        void RestoreOffer(void* o) const { void* args[] = { o }; Call("RestoreOffer", args, 1); }
        void* DebugEnqueueOffer(void* w, int kind, int arcId, int recordId, int from, int against, float gold = 0f) const { void* args[] = { w, &kind, &arcId, &recordId, &from, &against, &gold }; return Call("DebugEnqueueOffer", args, 7); }
        float Proximity(int a, int b) const { void* args[] = { &a, &b }; return CallValue<float>("Proximity", args, 2); }
        bool IsNear(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("IsNear", args, 2); }
        void* LinksOf(int id) const { void* args[] = { &id }; return Call("LinksOf", args, 1); }
        float Growth(void* w, int id) const { void* args[] = { w, &id }; return CallValue<float>("Growth", args, 2); }
        int PeakTiles(void* w, int id) const { void* args[] = { w, &id }; return CallValue<int>("PeakTiles", args, 2); }
        float MenaceScore(void* w, int id) const { void* args[] = { w, &id }; return CallValue<float>("MenaceScore", args, 2); }
        float CollapseScore(void* w, int id, int& cause) const { void* args[] = { w, &id, &cause }; return CallValue<float>("CollapseScore", args, 3); }
        float Menace(int id) const { void* args[] = { &id }; return CallValue<float>("Menace", args, 1); }
        float Collapse(int id) const { void* args[] = { &id }; return CallValue<float>("Collapse", args, 1); }
        bool IsMenace(int id) const { void* args[] = { &id }; return CallValue<bool>("IsMenace", args, 1); }
        bool IsCollapsing(int id) const { void* args[] = { &id }; return CallValue<bool>("IsCollapsing", args, 1); }
        bool IsGreatPower(int id) const { void* args[] = { &id }; return CallValue<bool>("IsGreatPower", args, 1); }
        bool ExportNation(int id, void* r) const { void* args[] = { &id, r }; return CallValue<bool>("ExportNation", args, 2); }
        void ImportNation(void* r) const { void* args[] = { r }; Call("ImportNation", args, 1); }
        void RestoreClock(int originTick, int histHead, int histFilled, int lastSampleTick) const { void* args[] = { &originTick, &histHead, &histFilled, &lastSampleTick }; Call("RestoreClock", args, 4); }
        void RestoreOfferId(int next) const { void* args[] = { &next }; Call("RestoreOfferId", args, 1); }
        void AdoptLeague(void* L) const { void* args[] = { L }; Call("AdoptLeague", args, 1); }
        void AdoptScramble(void* s) const { void* args[] = { s }; Call("AdoptScramble", args, 1); }
        void AdoptEpisode(void* e) const { void* args[] = { e }; Call("AdoptEpisode", args, 1); }
        void RestoreInbox(void* incidents) const { void* args[] = { incidents }; Call("RestoreInbox", args, 1); }
        void AfterRestore() const { Call("AfterRestore", nullptr, 0); }
        int FearersOf(int id, void* dst) const { void* args[] = { &id, dst }; return CallValue<int>("FearersOf", args, 2); }
        float LeagueReadiness(void* L) const { void* args[] = { L }; return CallValue<float>("LeagueReadiness", args, 1); }
        int WeakestLink(void* L, int except) const { void* args[] = { L, &except }; return CallValue<int>("WeakestLink", args, 2); }
        float ScrambleShareLeft(void* s) const { void* args[] = { s }; return CallValue<float>("ScrambleShareLeft", args, 1); }
        bool IsRival(int self, int other) const { void* args[] = { &self, &other }; return CallValue<bool>("IsRival", args, 2); }
        bool RivalFlared(int self, int other) const { void* args[] = { &self, &other }; return CallValue<bool>("RivalFlared", args, 2); }
        bool RivalsOf(int id, int& r0, int& r1) const { void* args[] = { &id, &r0, &r1 }; return CallValue<bool>("RivalsOf", args, 3); }
        void* RivalSlotOf(int id, int slot) const { void* args[] = { &id, &slot }; return Call("RivalSlotOf", args, 2); }
        void RestoreRivalSlot(int id, int slot, void* r) const { void* args[] = { &id, &slot, &r }; Call("RestoreRivalSlot", args, 3); }
        float RivalScore(void* w, int self, int c) const { void* args[] = { w, &self, &c }; return CallValue<float>("RivalScore", args, 3); }
        void* ScrambleFor(int victim) const { void* args[] = { &victim }; return Call("ScrambleFor", args, 1); }
        void* ScrambleById(int id) const { void* args[] = { &id }; return Call("ScrambleById", args, 1); }
        int ScramblesOf(int id, void* dst) const { void* args[] = { &id, dst }; return CallValue<int>("ScramblesOf", args, 2); }
        void* EpisodeFor(int a, int b) const { void* args[] = { &a, &b }; return Call("EpisodeFor", args, 2); }
        void* EpisodeById(int id) const { void* args[] = { &id }; return Call("EpisodeById", args, 1); }
        void* Arc(int id) const { void* args[] = { &id }; return Call("Arc", args, 1); }
        int ArcsOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; return CallValue<int>("ArcsOf", args, 2); }
        void BeginRestore() const { Call("BeginRestore", nullptr, 0); }
        void EndRestore() const { Call("EndRestore", nullptr, 0); }
        void* RentArc(int kind) const { void* args[] = { &kind }; return Call("RentArc", args, 1); }
        void AdoptArc(void* a) const { void* args[] = { a }; Call("AdoptArc", args, 1); }
        void RestoreIds(int nextArcId, int nextRecordId) const { void* args[] = { &nextArcId, &nextRecordId }; Call("RestoreIds", args, 2); }
        void Enqueue(void* inc) const { void* args[] = { &inc }; Call("Enqueue", args, 1); }
        int CopyInbox(void* dst) const { void* args[] = { dst }; return CallValue<int>("CopyInbox", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Pass(void* w, float passYears) const { void* args[] = { w, &passYears }; Call("Pass", args, 2); }
        void Tick(void* w, int aiInterval, void* roll) const { void* args[] = { w, &aiInterval, roll }; Call("Tick", args, 3); }
        int OriginTick() const { return ReadField<int>("OriginTick"); }
        void SetOriginTick(int value) const { WriteField<int>("OriginTick", value); }
        void* Stats() const { return ReadField<void*>("Stats"); }
        void SetStats(void* value) const { WriteField<void*>("Stats", value); }
        void* LastYearStats() const { return ReadField<void*>("LastYearStats"); }
        void SetLastYearStats(void* value) const { WriteField<void*>("LastYearStats", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        int leaguesFormed() const { return ReadField<int>("leaguesFormed"); }
        void SetLeaguesFormed(int value) const { WriteField<int>("leaguesFormed", value); }
        int strikes() const { return ReadField<int>("strikes"); }
        void SetStrikes(int value) const { WriteField<int>("strikes", value); }
        int defensiveJoins() const { return ReadField<int>("defensiveJoins"); }
        void SetDefensiveJoins(int value) const { WriteField<int>("defensiveJoins", value); }
        int pounces() const { return ReadField<int>("pounces"); }
        void SetPounces(int value) const { WriteField<int>("pounces", value); }
        int lateJoins() const { return ReadField<int>("lateJoins"); }
        void SetLateJoins(int value) const { WriteField<int>("lateJoins", value); }
        int assisted() const { return ReadField<int>("assisted"); }
        void SetAssisted(int value) const { WriteField<int>("assisted", value); }
        int gifts() const { return ReadField<int>("gifts"); }
        void SetGifts(int value) const { WriteField<int>("gifts", value); }
        int subsidies() const { return ReadField<int>("subsidies"); }
        void SetSubsidies(int value) const { WriteField<int>("subsidies", value); }
        int scramblesOpened() const { return ReadField<int>("scramblesOpened"); }
        void SetScramblesOpened(int value) const { WriteField<int>("scramblesOpened", value); }
        int rivalriesBegun() const { return ReadField<int>("rivalriesBegun"); }
        void SetRivalriesBegun(int value) const { WriteField<int>("rivalriesBegun", value); }
        int capBlocked() const { return ReadField<int>("capBlocked"); }
        void SetCapBlocked(int value) const { WriteField<int>("capBlocked", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
        int capitalLost() const { return ReadField<int>("capitalLost"); }
        void SetCapitalLost(int value) const { WriteField<int>("capitalLost", value); }
        int capitulated() const { return ReadField<int>("capitulated"); }
        void SetCapitulated(int value) const { WriteField<int>("capitulated", value); }
        int unionBroke() const { return ReadField<int>("unionBroke"); }
        void SetUnionBroke(int value) const { WriteField<int>("unionBroke", value); }
        int coup() const { return ReadField<int>("coup"); }
        void SetCoup(int value) const { WriteField<int>("coup", value); }
        int revolt0() const { return ReadField<int>("revolt0"); }
        void SetRevolt0(int value) const { WriteField<int>("revolt0", value); }
        int revolt1() const { return ReadField<int>("revolt1"); }
        void SetRevolt1(int value) const { WriteField<int>("revolt1", value); }
        int lastWar() const { return ReadField<int>("lastWar"); }
        void SetLastWar(int value) const { WriteField<int>("lastWar", value); }
        int cooldownUntil() const { return ReadField<int>("cooldownUntil"); }
        void SetCooldownUntil(int value) const { WriteField<int>("cooldownUntil", value); }
        bool crisis() const { return ReadField<bool>("crisis"); }
        void SetCrisis(bool value) const { WriteField<bool>("crisis", value); }
        int foundIntent() const { return ReadField<int>("foundIntent"); }
        void SetFoundIntent(int value) const { WriteField<int>("foundIntent", value); }
        int pleaTick() const { return ReadField<int>("pleaTick"); }
        void SetPleaTick(int value) const { WriteField<int>("pleaTick", value); }
    };
}
