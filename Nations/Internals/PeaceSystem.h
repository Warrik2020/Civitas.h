#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceSystem") {}
    public:
        void* BuildDemand(int loserId, int victorId, bool wantsPuppet, void* mgr, void* ctx) const { void* args[] = { &loserId, &victorId, &wantsPuppet, mgr, &ctx }; return CallStatic("BuildDemand", args, 5); }
        void* BuildDemand(int loserId, int victorId, bool wantsPuppet, float reach, void* mgr, void* ctx) const { void* args[] = { &loserId, &victorId, &wantsPuppet, &reach, mgr, &ctx }; return CallStatic("BuildDemand", args, 6); }
        void* BuildNegotiationDemand(int giverId, int takerId, void* mgr, void* ctx) const { void* args[] = { &giverId, &takerId, mgr, &ctx }; return CallStatic("BuildNegotiationDemand", args, 4); }
        void* BuildNegotiationDemand(int giverId, int takerId, float minReach, void* mgr, void* ctx) const { void* args[] = { &giverId, &takerId, &minReach, mgr, &ctx }; return CallStatic("BuildNegotiationDemand", args, 5); }
        void* BuildJointDemand(int giverId, int takerId, void* cosigners, float minReach, void* mgr, void* ctx) const { void* args[] = { &giverId, &takerId, cosigners, &minReach, mgr, &ctx }; return CallStatic("BuildJointDemand", args, 6); }
        float DemandValue(void* terms, void* mgr, void* ctx) const { void* args[] = { terms, mgr, &ctx }; return CallStaticValue<float>("DemandValue", args, 3); }
        float SettlementRatio(void* terms, void* demand, bool playerTakes, void* mgr, void* ctx) const { void* args[] = { terms, demand, &playerTakes, mgr, &ctx }; return CallStaticValue<float>("SettlementRatio", args, 5); }
        void TrimToSignable(void* terms, void* demand, bool playerTakes, void* mgr, void* ctx) const { void* args[] = { terms, demand, &playerTakes, mgr, &ctx }; CallStatic("TrimToSignable", args, 5); }
        void Clamp(void* terms, void* mgr, void* ctx) const { void* args[] = { terms, mgr, &ctx }; CallStatic("Clamp", args, 3); }
        void Execute(void* terms, void* deal, bool endsAllWars, void* mgr, void* ctx, bool announceCapitulation = true, void* holdouts = nullptr) const { void* args[] = { terms, &deal, &endsAllWars, mgr, &ctx, &announceCapitulation, holdouts }; CallStatic("Execute", args, 7); }
    };
}
