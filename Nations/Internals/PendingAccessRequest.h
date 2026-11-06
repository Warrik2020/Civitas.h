#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PendingAccessRequest : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PendingAccessRequest(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PendingAccessRequest") {}
    public:
        int senderId() const { return ReadField<int>("senderId"); }
        void SetSenderId(int value) const { WriteField<int>("senderId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        int enemyId() const { return ReadField<int>("enemyId"); }
        void SetEnemyId(int value) const { WriteField<int>("enemyId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void SetDeadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
