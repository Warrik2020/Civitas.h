#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAffChoice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAffChoice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAffChoice") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int threadId() const { return ReadField<int>("threadId"); }
        void SetThreadId(int value) const { WriteField<int>("threadId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void SetDeadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
        bool big() const { return ReadField<bool>("big"); }
        void SetBig(bool value) const { WriteField<bool>("big", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void SetStepId(void* value) const { WriteField<void*>("stepId", value); }
    };
}
