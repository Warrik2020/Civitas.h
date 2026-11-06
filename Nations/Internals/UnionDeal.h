#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionDeal : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionDeal(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionDeal") {}
    public:
        int proposerId() const { return ReadField<int>("proposerId"); }
        void SetProposerId(int value) const { WriteField<int>("proposerId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int seniorId() const { return ReadField<int>("seniorId"); }
        void SetSeniorId(int value) const { WriteField<int>("seniorId", value); }
        int joinUnionId() const { return ReadField<int>("joinUnionId"); }
        void SetJoinUnionId(int value) const { WriteField<int>("joinUnionId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int expiresTick() const { return ReadField<int>("expiresTick"); }
        void SetExpiresTick(int value) const { WriteField<int>("expiresTick", value); }
    };
}
