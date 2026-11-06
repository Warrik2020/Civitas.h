#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsMark : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsMark(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsMark") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void kind(void* value) const { WriteField<void*>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int subjectKind() const { return ReadField<int>("subjectKind"); }
        void subjectKind(int value) const { WriteField<int>("subjectKind", value); }
        int subjectId() const { return ReadField<int>("subjectId"); }
        void subjectId(int value) const { WriteField<int>("subjectId", value); }
        void* subjectName() const { return ReadField<void*>("subjectName"); }
        void subjectName(void* value) const { WriteField<void*>("subjectName", value); }
        int setTick() const { return ReadField<int>("setTick"); }
        void setTick(int value) const { WriteField<int>("setTick", value); }
        float strength() const { return ReadField<float>("strength"); }
        void strength(float value) const { WriteField<float>("strength", value); }
        int threadId() const { return ReadField<int>("threadId"); }
        void threadId(int value) const { WriteField<int>("threadId", value); }
    };
}
