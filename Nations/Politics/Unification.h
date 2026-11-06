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
        void Raise(void* notice) const { void* __callArgs[] = { &notice }; CallStatic("Raise", __callArgs, 1); }
        void Bind(void* core, void* world) const { void* __callArgs[] = { core, world }; CallStatic("Bind", __callArgs, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        bool TryModifiers(int nation, void* m) const { void* __callArgs[] = { &nation, &m }; return CallStaticValue<bool>("TryModifiers", __callArgs, 2); }
        float OpinionTerm(int judge, int other) const { void* __callArgs[] = { &judge, &other }; return CallStaticValue<float>("OpinionTerm", __callArgs, 2); }
        float FaithRule(int nation) const { void* __callArgs[] = { &nation }; return CallStaticValue<float>("FaithRule", __callArgs, 1); }
        bool CauseForWar(int attacker, int defender) const { void* __callArgs[] = { &attacker, &defender }; return CallStaticValue<bool>("CauseForWar", __callArgs, 2); }
        float PeaceAnnexMul(int victor, int loser) const { void* __callArgs[] = { &victor, &loser }; return CallStaticValue<float>("PeaceAnnexMul", __callArgs, 2); }
        bool WantsAnnex(int victor, int loser) const { void* __callArgs[] = { &victor, &loser }; return CallStaticValue<bool>("WantsAnnex", __callArgs, 2); }
        float TrustOf(int nation, int people) const { void* __callArgs[] = { &nation, &people }; return CallStaticValue<float>("TrustOf", __callArgs, 2); }
        void AddTrust(int nation, int people, float delta) const { void* __callArgs[] = { &nation, &people, &delta }; CallStatic("AddTrust", __callArgs, 3); }
        bool TryDemand(int nation, int people, void* demand, void* answer) const { void* __callArgs[] = { &nation, &people, &demand, &answer }; return CallStaticValue<bool>("TryDemand", __callArgs, 4); }
        int OpenDemands(int nation) const { void* __callArgs[] = { &nation }; return CallStaticValue<int>("OpenDemands", __callArgs, 1); }
        int RecentRefusals(int nation, int people) const { void* __callArgs[] = { &nation, &people }; return CallStaticValue<int>("RecentRefusals", __callArgs, 2); }
        float TrustDrift(int nation, int people, void* terms) const { void* __callArgs[] = { &nation, &people, terms }; return CallStaticValue<float>("TrustDrift", __callArgs, 3); }
        bool TrustHeld(int nation, int people) const { void* __callArgs[] = { &nation, &people }; return CallStaticValue<bool>("TrustHeld", __callArgs, 2); }
        void EnsurePeopleBranch(int nation, int people) const { void* __callArgs[] = { &nation, &people }; CallStatic("EnsurePeopleBranch", __callArgs, 2); }
        void* FinishablePeoplesStep(int nation, int people, const char* key) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { &nation, &people, managed_2 }; return CallStatic("FinishablePeoplesStep", __callArgs, 3); }
        bool FinishPeoplesStep(int nation, int people, const char* key) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { &nation, &people, managed_2 }; return CallStaticValue<bool>("FinishPeoplesStep", __callArgs, 3); }
    };
}
