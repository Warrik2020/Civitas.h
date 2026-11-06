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
        void* BuildDemand(int loserId, int victorId, bool wantsPuppet, void* mgr, void* ctx) const { void* __callArgs[] = { &loserId, &victorId, &wantsPuppet, mgr, &ctx }; return CallStatic("BuildDemand", __callArgs, 5); }
        void* BuildDemand(int loserId, int victorId, bool wantsPuppet, float reach, void* mgr, void* ctx) const { void* __callArgs[] = { &loserId, &victorId, &wantsPuppet, &reach, mgr, &ctx }; return CallStatic("BuildDemand", __callArgs, 6); }
        void* BuildNegotiationDemand(int giverId, int takerId, void* mgr, void* ctx) const { void* __callArgs[] = { &giverId, &takerId, mgr, &ctx }; return CallStatic("BuildNegotiationDemand", __callArgs, 4); }
        void* BuildNegotiationDemand(int giverId, int takerId, float minReach, void* mgr, void* ctx) const { void* __callArgs[] = { &giverId, &takerId, &minReach, mgr, &ctx }; return CallStatic("BuildNegotiationDemand", __callArgs, 5); }
        void* BuildJointDemand(int giverId, int takerId, void* cosigners, float minReach, void* mgr, void* ctx) const { void* __callArgs[] = { &giverId, &takerId, cosigners, &minReach, mgr, &ctx }; return CallStatic("BuildJointDemand", __callArgs, 6); }
        float DemandValue(void* terms, void* mgr, void* ctx) const { void* __callArgs[] = { terms, mgr, &ctx }; return CallStaticValue<float>("DemandValue", __callArgs, 3); }
        float SettlementRatio(void* terms, void* demand, bool playerTakes, void* mgr, void* ctx) const { void* __callArgs[] = { terms, demand, &playerTakes, mgr, &ctx }; return CallStaticValue<float>("SettlementRatio", __callArgs, 5); }
        void TrimToSignable(void* terms, void* demand, bool playerTakes, void* mgr, void* ctx) const { void* __callArgs[] = { terms, demand, &playerTakes, mgr, &ctx }; CallStatic("TrimToSignable", __callArgs, 5); }
        void Clamp(void* terms, void* mgr, void* ctx) const { void* __callArgs[] = { terms, mgr, &ctx }; CallStatic("Clamp", __callArgs, 3); }
        void Execute(void* terms, void* deal, bool endsAllWars, void* mgr, void* ctx, bool announceCapitulation = true, void* holdouts = nullptr) const { void* __callArgs[] = { terms, &deal, &endsAllWars, mgr, &ctx, &announceCapitulation, holdouts }; CallStatic("Execute", __callArgs, 7); }
    };
}
