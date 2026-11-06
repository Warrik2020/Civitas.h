#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsChoice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsChoice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsChoice") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int threadId() const { return ReadField<int>("threadId"); }
        void SetThreadId(int value) const { WriteField<int>("threadId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void SetStepId(void* value) const { WriteField<void*>("stepId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void SetDeadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
        bool big() const { return ReadField<bool>("big"); }
        void SetBig(bool value) const { WriteField<bool>("big", value); }
    };
}
