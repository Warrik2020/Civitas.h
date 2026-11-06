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
        void kind(int value) const { WriteField<int>("kind", value); }
        int violatorId() const { return ReadField<int>("violatorId"); }
        void violatorId(int value) const { WriteField<int>("violatorId", value); }
        int hostId() const { return ReadField<int>("hostId"); }
        void hostId(int value) const { WriteField<int>("hostId", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void createdTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void deadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
