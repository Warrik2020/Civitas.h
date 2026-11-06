#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceCoalition : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceCoalition(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceCoalition") {}
    public:
        void Collect(int loserId, int victorId, void* mgr, void* nations, void* into) const { void* __callArgs[] = { &loserId, &victorId, mgr, nations, into }; CallStatic("Collect", __callArgs, 5); }
        float JointScore(int loserId, int victorId, void* cosigners, void* mgr) const { void* __callArgs[] = { &loserId, &victorId, cosigners, mgr }; return CallStaticValue<float>("JointScore", __callArgs, 4); }
        float Pressure(int loserId, int victorId, void* cosigners, void* mgr, void* ctx) const { void* __callArgs[] = { &loserId, &victorId, cosigners, mgr, &ctx }; return CallStaticValue<float>("Pressure", __callArgs, 5); }
        float LoserStanding(int loserId, int victorId, void* cosigners, void* mgr, void* ctx) const { void* __callArgs[] = { &loserId, &victorId, cosigners, mgr, &ctx }; return CallStaticValue<float>("LoserStanding", __callArgs, 5); }
        float Reach(int loserId, int victorId, void* cosigners, void* mgr, void* ctx) const { void* __callArgs[] = { &loserId, &victorId, cosigners, mgr, &ctx }; return CallStaticValue<float>("Reach", __callArgs, 5); }
        bool RefusesShare(void* terms, int allyId, void* mgr, void* ctx, int& wanted) const { void* __callArgs[] = { terms, &allyId, mgr, &ctx, &wanted }; return CallStaticValue<bool>("RefusesShare", __callArgs, 5); }
        void CollectRefusals(void* terms, void* mgr, void* ctx, void* into) const { void* __callArgs[] = { terms, mgr, &ctx, into }; CallStatic("CollectRefusals", __callArgs, 4); }
    };
}
