#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TradeDeal : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradeDeal(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TradeDeal") {}
    public:
        int proposerId() const { return ReadField<int>("proposerId"); }
        void SetProposerId(int value) const { WriteField<int>("proposerId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        void* give() const { return ReadField<void*>("give"); }
        void SetGive(void* value) const { WriteField<void*>("give", value); }
        void* want() const { return ReadField<void*>("want"); }
        void SetWant(void* value) const { WriteField<void*>("want", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int expiresTick() const { return ReadField<int>("expiresTick"); }
        void SetExpiresTick(int value) const { WriteField<int>("expiresTick", value); }
    };
}
