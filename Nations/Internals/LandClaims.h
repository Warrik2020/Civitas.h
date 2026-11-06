#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LandClaims : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandClaims(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LandClaims") {}
    public:
        void* ReasonName(int r) const { void* __callArgs[] = { &r }; return CallStatic("ReasonName", __callArgs, 1); }
        void* ReasonShort(int r) const { void* __callArgs[] = { &r }; return CallStatic("ReasonShort", __callArgs, 1); }
        float CostDaysOf(int r) const { void* __callArgs[] = { &r }; return CallStaticValue<float>("CostDaysOf", __callArgs, 1); }
        float CostOf(void* mgr, int claimantId, int r) const { void* __callArgs[] = { mgr, &claimantId, &r }; return CallStaticValue<float>("CostOf", __callArgs, 3); }
        float MatureYearsOf(int r) const { void* __callArgs[] = { &r }; return CallStaticValue<float>("MatureYearsOf", __callArgs, 1); }
        void* Find(int claimantId, int stateId) const { void* __callArgs[] = { &claimantId, &stateId }; return CallStatic("Find", __callArgs, 2); }
        int CountOf(int claimantId) const { void* __callArgs[] = { &claimantId }; return CallStaticValue<int>("CountOf", __callArgs, 1); }
        int ClaimsOf(int claimantId, void* dst) const { void* __callArgs[] = { &claimantId, dst }; return CallStaticValue<int>("ClaimsOf", __callArgs, 2); }
        void* CauseForWar(int claimantId, int holderId, int now) const { void* __callArgs[] = { &claimantId, &holderId, &now }; return CallStatic("CauseForWar", __callArgs, 3); }
        bool ClaimsTile(int claimantId, void* grid, int tile, int now) const { void* __callArgs[] = { &claimantId, grid, &tile, &now }; return CallStaticValue<bool>("ClaimsTile", __callArgs, 4); }
        bool PeopleClaim(int claimantId, int stateId) const { void* __callArgs[] = { &claimantId, &stateId }; return CallStaticValue<bool>("PeopleClaim", __callArgs, 2); }
        int PeopleOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("PeopleOf", __callArgs, 1); }
        float OpinionMalus(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<float>("OpinionMalus", __callArgs, 2); }
        void* Evidence(int claimantId, int stateId, void* grid, void* identity) const { void* __callArgs[] = { &claimantId, &stateId, grid, identity }; return CallStatic("Evidence", __callArgs, 4); }
        int BestReason(void* e) const { void* __callArgs[] = { &e }; return CallStaticValue<int>("BestReason", __callArgs, 1); }
        void* BlockReason(void* mgr, int claimantId, int stateId, int reason, const char* text, void* evidence) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { mgr, &claimantId, &stateId, &reason, managed_4, &evidence }; return CallStatic("BlockReason", __callArgs, 6); }
        bool File(void* mgr, void* nations, int claimantId, int stateId, int reason, const char* text, void* evidence, const char*& why) const { void* managed_5 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { mgr, nations, &claimantId, &stateId, &reason, managed_5, &evidence, &why }; return CallStaticValue<bool>("File", __callArgs, 8); }
        bool Withdraw(int claimantId, int stateId) const { void* __callArgs[] = { &claimantId, &stateId }; return CallStaticValue<bool>("Withdraw", __callArgs, 2); }
        void Prune(void* nations) const { void* __callArgs[] = { nations }; CallStatic("Prune", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Restore(int claimantId, int stateId, int reason, const char* text, int filedTick, int matureTick) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { &claimantId, &stateId, &reason, managed_3, &filedTick, &matureTick }; CallStatic("Restore", __callArgs, 6); }
        void* Config() const { return ReadStaticField<void*>("Config"); }
        int Now() const { return ReadStaticField<int>("Now"); }
        void Now(int value) const { WriteStaticField<int>("Now", value); }
        int MaxReason() const { return ReadStaticField<int>("MaxReason"); }
    };
}
