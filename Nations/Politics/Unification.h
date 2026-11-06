#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class Unification : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Unification(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "Unification") {}
    public:
        void Raise(void* notice) const { void* args[] = { &notice }; CallStatic("Raise", args, 1); }
        void Bind(void* core, void* world) const { void* args[] = { core, world }; CallStatic("Bind", args, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        bool TryModifiers(int nation, void* m) const { void* args[] = { &nation, &m }; return CallStaticValue<bool>("TryModifiers", args, 2); }
        float OpinionTerm(int judge, int other) const { void* args[] = { &judge, &other }; return CallStaticValue<float>("OpinionTerm", args, 2); }
        float FaithRule(int nation) const { void* args[] = { &nation }; return CallStaticValue<float>("FaithRule", args, 1); }
        bool CauseForWar(int attacker, int defender) const { void* args[] = { &attacker, &defender }; return CallStaticValue<bool>("CauseForWar", args, 2); }
        float PeaceAnnexMul(int victor, int loser) const { void* args[] = { &victor, &loser }; return CallStaticValue<float>("PeaceAnnexMul", args, 2); }
        bool WantsAnnex(int victor, int loser) const { void* args[] = { &victor, &loser }; return CallStaticValue<bool>("WantsAnnex", args, 2); }
        float TrustOf(int nation, int people) const { void* args[] = { &nation, &people }; return CallStaticValue<float>("TrustOf", args, 2); }
        void AddTrust(int nation, int people, float delta) const { void* args[] = { &nation, &people, &delta }; CallStatic("AddTrust", args, 3); }
        bool TryDemand(int nation, int people, void* demand, void* answer) const { void* args[] = { &nation, &people, &demand, &answer }; return CallStaticValue<bool>("TryDemand", args, 4); }
        int OpenDemands(int nation) const { void* args[] = { &nation }; return CallStaticValue<int>("OpenDemands", args, 1); }
        int RecentRefusals(int nation, int people) const { void* args[] = { &nation, &people }; return CallStaticValue<int>("RecentRefusals", args, 2); }
        float TrustDrift(int nation, int people, void* terms) const { void* args[] = { &nation, &people, terms }; return CallStaticValue<float>("TrustDrift", args, 3); }
        bool TrustHeld(int nation, int people) const { void* args[] = { &nation, &people }; return CallStaticValue<bool>("TrustHeld", args, 2); }
        void EnsurePeopleBranch(int nation, int people) const { void* args[] = { &nation, &people }; CallStatic("EnsurePeopleBranch", args, 2); }
        void* FinishablePeoplesStep(int nation, int people, const char* key) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { &nation, &people, managed_2 }; return CallStatic("FinishablePeoplesStep", args, 3); }
        bool FinishPeoplesStep(int nation, int people, const char* key) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { &nation, &people, managed_2 }; return CallStaticValue<bool>("FinishPeoplesStep", args, 3); }
    };
}
