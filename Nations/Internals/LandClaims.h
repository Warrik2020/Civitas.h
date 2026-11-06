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
        void* ReasonName(int r) const { void* args[] = { &r }; return CallStatic("ReasonName", args, 1); }
        void* ReasonShort(int r) const { void* args[] = { &r }; return CallStatic("ReasonShort", args, 1); }
        float CostDaysOf(int r) const { void* args[] = { &r }; return CallStaticValue<float>("CostDaysOf", args, 1); }
        float CostOf(void* mgr, int claimantId, int r) const { void* args[] = { mgr, &claimantId, &r }; return CallStaticValue<float>("CostOf", args, 3); }
        float MatureYearsOf(int r) const { void* args[] = { &r }; return CallStaticValue<float>("MatureYearsOf", args, 1); }
        void* Find(int claimantId, int stateId) const { void* args[] = { &claimantId, &stateId }; return CallStatic("Find", args, 2); }
        int CountOf(int claimantId) const { void* args[] = { &claimantId }; return CallStaticValue<int>("CountOf", args, 1); }
        int ClaimsOf(int claimantId, void* dst) const { void* args[] = { &claimantId, dst }; return CallStaticValue<int>("ClaimsOf", args, 2); }
        void* CauseForWar(int claimantId, int holderId, int now) const { void* args[] = { &claimantId, &holderId, &now }; return CallStatic("CauseForWar", args, 3); }
        bool ClaimsTile(int claimantId, void* grid, int tile, int now) const { void* args[] = { &claimantId, grid, &tile, &now }; return CallStaticValue<bool>("ClaimsTile", args, 4); }
        bool PeopleClaim(int claimantId, int stateId) const { void* args[] = { &claimantId, &stateId }; return CallStaticValue<bool>("PeopleClaim", args, 2); }
        int PeopleOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("PeopleOf", args, 1); }
        float OpinionMalus(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<float>("OpinionMalus", args, 2); }
        void* Evidence(int claimantId, int stateId, void* grid, void* identity) const { void* args[] = { &claimantId, &stateId, grid, identity }; return CallStatic("Evidence", args, 4); }
        int BestReason(void* e) const { void* args[] = { &e }; return CallStaticValue<int>("BestReason", args, 1); }
        void* BlockReason(void* mgr, int claimantId, int stateId, int reason, const char* text, void* evidence) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { mgr, &claimantId, &stateId, &reason, managed_4, &evidence }; return CallStatic("BlockReason", args, 6); }
        bool File(void* mgr, void* nations, int claimantId, int stateId, int reason, const char* text, void* evidence, const char*& why) const { void* managed_5 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { mgr, nations, &claimantId, &stateId, &reason, managed_5, &evidence, &why }; return CallStaticValue<bool>("File", args, 8); }
        bool Withdraw(int claimantId, int stateId) const { void* args[] = { &claimantId, &stateId }; return CallStaticValue<bool>("Withdraw", args, 2); }
        void Prune(void* nations) const { void* args[] = { nations }; CallStatic("Prune", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Restore(int claimantId, int stateId, int reason, const char* text, int filedTick, int matureTick) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { &claimantId, &stateId, &reason, managed_3, &filedTick, &matureTick }; CallStatic("Restore", args, 6); }
        void* Config() const { return ReadStaticField<void*>("Config"); }
        int Now() const { return ReadStaticField<int>("Now"); }
        void SetNow(int value) const { WriteStaticField<int>("Now", value); }
        int MaxReason() const { return ReadStaticField<int>("MaxReason"); }
    };
}
