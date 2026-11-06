#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PendingRequest : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PendingRequest(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PendingRequest") {}
    public:
        int senderId() const { return ReadField<int>("senderId"); }
        void SetSenderId(int value) const { WriteField<int>("senderId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        void* terms() const { return ReadField<void*>("terms"); }
        void SetTerms(void* value) const { WriteField<void*>("terms", value); }
        int tone() const { return ReadField<int>("tone"); }
        void SetTone(int value) const { WriteField<int>("tone", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void SetDeadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
