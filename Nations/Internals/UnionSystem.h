#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionSystem") {}
    public:
        bool SameRealm(void* a, int idA, void* b, int idB) const { void* args[] = { a, &idA, b, &idB }; return CallStaticValue<bool>("SameRealm", args, 4); }
        bool InUnion(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("InUnion", args, 1); }
        void ApplyMembership(void* union_, int nationId, int role, void* mgr, void* ctx) const { void* args[] = { union_, &nationId, &role, mgr, &ctx }; CallStatic("ApplyMembership", args, 5); }
        void ClearMembership(void* union_, int nationId, void* mgr, void* ctx) const { void* args[] = { union_, &nationId, mgr, &ctx }; CallStatic("ClearMembership", args, 4); }
        bool KeepsOwnName(int rulerId, void* it, void* nations) const { void* args[] = { &rulerId, it, nations }; return CallStaticValue<bool>("KeepsOwnName", args, 3); }
        void Crown(void* union_, int rulerId, void* ctx) const { void* args[] = { union_, &rulerId, &ctx }; CallStatic("Crown", args, 3); }
        void Uncrown(void* union_, int nationId, void* ctx) const { void* args[] = { union_, &nationId, &ctx }; CallStatic("Uncrown", args, 3); }
        int NaturalSenior(int idA, int idB, void* ctx) const { void* args[] = { &idA, &idB, &ctx }; return CallStaticValue<int>("NaturalSenior", args, 3); }
        int SeniorOf(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<int>("SeniorOf", args, 3); }
        int JoinerOf(void* deal, void* mgr) const { void* args[] = { deal, mgr }; return CallStaticValue<int>("JoinerOf", args, 2); }
        float SovereigntyCost(int kind, void* cfg) const { void* args[] = { &kind, cfg }; return CallStaticValue<float>("SovereigntyCost", args, 2); }
        float AcceptanceChance(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", args, 3); }
        bool Validate(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<bool>("Validate", args, 3); }
        int Check(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<int>("Check", args, 3); }
        void Execute(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; CallStatic("Execute", args, 3); }
        int Depart(void* union_, int memberId, int reason, void* mgr, void* ctx, int byId = -1) const { void* args[] = { union_, &memberId, &reason, mgr, &ctx, &byId }; return CallStaticValue<int>("Depart", args, 6); }
        void Dissolve(int unionId, void* mgr, void* ctx) const { void* args[] = { &unionId, mgr, &ctx }; CallStatic("Dissolve", args, 3); }
        void OnMemberEliminated(int deadId, void* mgr, void* ctx) const { void* args[] = { &deadId, mgr, &ctx }; CallStatic("OnMemberEliminated", args, 3); }
        void* LiveryFor(void* senior, void* junior, void* nations, float hueShift) const { void* args[] = { senior, junior, nations, &hueShift }; return CallStatic("LiveryFor", args, 4); }
        void SetLivery(void* union_, void* color, void* mgr, void* ctx) const { void* args[] = { union_, color, mgr, &ctx }; CallStatic("SetLivery", args, 4); }
        bool Rename(void* union_, const char* newName, void* ctx) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(newName ? newName : "") : nullptr; void* args[] = { union_, managed_1, &ctx }; return CallStaticValue<bool>("Rename", args, 3); }
    };
}
