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
        bool SameRealm(void* a, int idA, void* b, int idB) const { void* __callArgs[] = { a, &idA, b, &idB }; return CallStaticValue<bool>("SameRealm", __callArgs, 4); }
        bool InUnion(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("InUnion", __callArgs, 1); }
        void ApplyMembership(void* union_, int nationId, int role, void* mgr, void* ctx) const { void* __callArgs[] = { union_, &nationId, &role, mgr, &ctx }; CallStatic("ApplyMembership", __callArgs, 5); }
        void ClearMembership(void* union_, int nationId, void* mgr, void* ctx) const { void* __callArgs[] = { union_, &nationId, mgr, &ctx }; CallStatic("ClearMembership", __callArgs, 4); }
        bool KeepsOwnName(int rulerId, void* it, void* nations) const { void* __callArgs[] = { &rulerId, it, nations }; return CallStaticValue<bool>("KeepsOwnName", __callArgs, 3); }
        void Crown(void* union_, int rulerId, void* ctx) const { void* __callArgs[] = { union_, &rulerId, &ctx }; CallStatic("Crown", __callArgs, 3); }
        void Uncrown(void* union_, int nationId, void* ctx) const { void* __callArgs[] = { union_, &nationId, &ctx }; CallStatic("Uncrown", __callArgs, 3); }
        int NaturalSenior(int idA, int idB, void* ctx) const { void* __callArgs[] = { &idA, &idB, &ctx }; return CallStaticValue<int>("NaturalSenior", __callArgs, 3); }
        int SeniorOf(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<int>("SeniorOf", __callArgs, 3); }
        int JoinerOf(void* deal, void* mgr) const { void* __callArgs[] = { deal, mgr }; return CallStaticValue<int>("JoinerOf", __callArgs, 2); }
        float SovereigntyCost(int kind, void* cfg) const { void* __callArgs[] = { &kind, cfg }; return CallStaticValue<float>("SovereigntyCost", __callArgs, 2); }
        float AcceptanceChance(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", __callArgs, 3); }
        bool Validate(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<bool>("Validate", __callArgs, 3); }
        int Check(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<int>("Check", __callArgs, 3); }
        void Execute(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; CallStatic("Execute", __callArgs, 3); }
        int Depart(void* union_, int memberId, int reason, void* mgr, void* ctx, int byId = -1) const { void* __callArgs[] = { union_, &memberId, &reason, mgr, &ctx, &byId }; return CallStaticValue<int>("Depart", __callArgs, 6); }
        void Dissolve(int unionId, void* mgr, void* ctx) const { void* __callArgs[] = { &unionId, mgr, &ctx }; CallStatic("Dissolve", __callArgs, 3); }
        void OnMemberEliminated(int deadId, void* mgr, void* ctx) const { void* __callArgs[] = { &deadId, mgr, &ctx }; CallStatic("OnMemberEliminated", __callArgs, 3); }
        void* LiveryFor(void* senior, void* junior, void* nations, float hueShift) const { void* __callArgs[] = { senior, junior, nations, &hueShift }; return CallStatic("LiveryFor", __callArgs, 4); }
        void SetLivery(void* union_, void* color, void* mgr, void* ctx) const { void* __callArgs[] = { union_, color, mgr, &ctx }; CallStatic("SetLivery", __callArgs, 4); }
        bool Rename(void* union_, const char* newName, void* ctx) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(newName ? newName : "") : nullptr; void* __callArgs[] = { union_, managed_1, &ctx }; return CallStaticValue<bool>("Rename", __callArgs, 3); }
    };
}
