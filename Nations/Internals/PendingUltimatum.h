#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PendingUltimatum : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PendingUltimatum(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PendingUltimatum") {}
    public:
        int senderId() const { return ReadField<int>("senderId"); }
        void SetSenderId(int value) const { WriteField<int>("senderId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        void* terms() const { return ReadField<void*>("terms"); }
        void SetTerms(void* value) const { WriteField<void*>("terms", value); }
        bool forUnion() const { return ReadField<bool>("forUnion"); }
        void SetForUnion(bool value) const { WriteField<bool>("forUnion", value); }
        bool forSubject() const { return ReadField<bool>("forSubject"); }
        void SetForSubject(bool value) const { WriteField<bool>("forSubject", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void SetDeadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
