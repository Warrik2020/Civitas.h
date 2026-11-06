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
        void Bind(void* core) const { void* __callArgs[] = { core }; CallStatic("Bind", __callArgs, 1); }
        float OpinionTerm(int judge, int target) const { void* __callArgs[] = { &judge, &target }; return CallStaticValue<float>("OpinionTerm", __callArgs, 2); }
        float WarRollMul(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<float>("WarRollMul", __callArgs, 2); }
        bool HasCause(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<bool>("HasCause", __callArgs, 2); }
        int Explain(int judge, int target, void* dst) const { void* __callArgs[] = { &judge, &target, dst }; return CallStaticValue<int>("Explain", __callArgs, 3); }
        void* Arc(int id) const { void* __callArgs[] = { &id }; return CallStatic("Arc", __callArgs, 1); }
        int ArcsOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; return CallStaticValue<int>("ArcsOf", __callArgs, 2); }
        void* LeagueAgainst(int menace) const { void* __callArgs[] = { &menace }; return CallStatic("LeagueAgainst", __callArgs, 1); }
        void* LeagueById(int id) const { void* __callArgs[] = { &id }; return CallStatic("LeagueById", __callArgs, 1); }
        int LeaguesOf(int member, void* dst) const { void* __callArgs[] = { &member, dst }; return CallStaticValue<int>("LeaguesOf", __callArgs, 2); }
        void* ScrambleFor(int victim) const { void* __callArgs[] = { &victim }; return CallStatic("ScrambleFor", __callArgs, 1); }
        int ScramblesOf(int id, void* dst) const { void* __callArgs[] = { &id, dst }; return CallStaticValue<int>("ScramblesOf", __callArgs, 2); }
        void* EpisodeFor(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStatic("EpisodeFor", __callArgs, 2); }
        bool RivalsOf(int id, int& r0, int& r1) const { void* __callArgs[] = { &id, &r0, &r1 }; return CallStaticValue<bool>("RivalsOf", __callArgs, 3); }
        bool IsRival(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<bool>("IsRival", __callArgs, 2); }
        bool RivalFlared(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<bool>("RivalFlared", __callArgs, 2); }
        bool IsMenace(int id) const { void* __callArgs[] = { &id }; return CallStaticValue<bool>("IsMenace", __callArgs, 1); }
        bool IsCollapsing(int id) const { void* __callArgs[] = { &id }; return CallStaticValue<bool>("IsCollapsing", __callArgs, 1); }
        float Menace(int id) const { void* __callArgs[] = { &id }; return CallStaticValue<float>("Menace", __callArgs, 1); }
        bool IsNear(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<bool>("IsNear", __callArgs, 2); }
        bool IsGreatPower(int id) const { void* __callArgs[] = { &id }; return CallStaticValue<bool>("IsGreatPower", __callArgs, 1); }
        int FearersOf(int id, void* dst) const { void* __callArgs[] = { &id, dst }; return CallStaticValue<int>("FearersOf", __callArgs, 2); }
        float LeagueReadiness(void* L) const { void* __callArgs[] = { L }; return CallStaticValue<float>("LeagueReadiness", __callArgs, 1); }
        int WeakestLink(void* L, int except) const { void* __callArgs[] = { L, &except }; return CallStaticValue<int>("WeakestLink", __callArgs, 2); }
        int TicksLeft(void* o) const { void* __callArgs[] = { o }; return CallStaticValue<int>("TicksLeft", __callArgs, 1); }
    };
}
