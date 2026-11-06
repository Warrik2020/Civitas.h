#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAffMark : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAffMark(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAffMark") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int subjectKind() const { return ReadField<int>("subjectKind"); }
        void SetSubjectKind(int value) const { WriteField<int>("subjectKind", value); }
        int subjectId() const { return ReadField<int>("subjectId"); }
        void SetSubjectId(int value) const { WriteField<int>("subjectId", value); }
        int setTick() const { return ReadField<int>("setTick"); }
        void SetSetTick(int value) const { WriteField<int>("setTick", value); }
        int threadId() const { return ReadField<int>("threadId"); }
        void SetThreadId(int value) const { WriteField<int>("threadId", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* subjectName() const { return ReadField<void*>("subjectName"); }
        void SetSubjectName(void* value) const { WriteField<void*>("subjectName", value); }
    };
}
