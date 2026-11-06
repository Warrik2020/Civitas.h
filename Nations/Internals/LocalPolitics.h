#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalPolitics : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalPolitics(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalPolitics") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Bind(void* core) const { void* args[] = { core }; CallStatic("Bind", args, 1); }
        float OpinionTerm(int judge, int target) const { void* args[] = { &judge, &target }; return CallStaticValue<float>("OpinionTerm", args, 2); }
        float WarRollMul(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<float>("WarRollMul", args, 2); }
        bool HasCause(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<bool>("HasCause", args, 2); }
        int Explain(int judge, int target, void* dst) const { void* args[] = { &judge, &target, dst }; return CallStaticValue<int>("Explain", args, 3); }
        void* Arc(int id) const { void* args[] = { &id }; return CallStatic("Arc", args, 1); }
        int ArcsOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; return CallStaticValue<int>("ArcsOf", args, 2); }
        void* LeagueAgainst(int menace) const { void* args[] = { &menace }; return CallStatic("LeagueAgainst", args, 1); }
        void* LeagueById(int id) const { void* args[] = { &id }; return CallStatic("LeagueById", args, 1); }
        int LeaguesOf(int member, void* dst) const { void* args[] = { &member, dst }; return CallStaticValue<int>("LeaguesOf", args, 2); }
        void* ScrambleFor(int victim) const { void* args[] = { &victim }; return CallStatic("ScrambleFor", args, 1); }
        int ScramblesOf(int id, void* dst) const { void* args[] = { &id, dst }; return CallStaticValue<int>("ScramblesOf", args, 2); }
        void* EpisodeFor(int a, int b) const { void* args[] = { &a, &b }; return CallStatic("EpisodeFor", args, 2); }
        bool RivalsOf(int id, int& r0, int& r1) const { void* args[] = { &id, &r0, &r1 }; return CallStaticValue<bool>("RivalsOf", args, 3); }
        bool IsRival(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<bool>("IsRival", args, 2); }
        bool RivalFlared(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<bool>("RivalFlared", args, 2); }
        bool IsMenace(int id) const { void* args[] = { &id }; return CallStaticValue<bool>("IsMenace", args, 1); }
        bool IsCollapsing(int id) const { void* args[] = { &id }; return CallStaticValue<bool>("IsCollapsing", args, 1); }
        float Menace(int id) const { void* args[] = { &id }; return CallStaticValue<float>("Menace", args, 1); }
        bool IsNear(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<bool>("IsNear", args, 2); }
        bool IsGreatPower(int id) const { void* args[] = { &id }; return CallStaticValue<bool>("IsGreatPower", args, 1); }
        int FearersOf(int id, void* dst) const { void* args[] = { &id, dst }; return CallStaticValue<int>("FearersOf", args, 2); }
        float LeagueReadiness(void* L) const { void* args[] = { L }; return CallStaticValue<float>("LeagueReadiness", args, 1); }
        int WeakestLink(void* L, int except) const { void* args[] = { L, &except }; return CallStaticValue<int>("WeakestLink", args, 2); }
        int TicksLeft(void* o) const { void* args[] = { o }; return CallStaticValue<int>("TicksLeft", args, 1); }
    };
}
