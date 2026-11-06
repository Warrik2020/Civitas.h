#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PendingIncursionCard : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PendingIncursionCard(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PendingIncursionCard") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int violatorId() const { return ReadField<int>("violatorId"); }
        void SetViolatorId(int value) const { WriteField<int>("violatorId", value); }
        int hostId() const { return ReadField<int>("hostId"); }
        void SetHostId(int value) const { WriteField<int>("hostId", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void SetDeadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
