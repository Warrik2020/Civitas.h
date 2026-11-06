#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionNewsArgs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionNewsArgs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionNewsArgs") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int unionId() const { return ReadField<int>("unionId"); }
        void SetUnionId(int value) const { WriteField<int>("unionId", value); }
        int unionKind() const { return ReadField<int>("unionKind"); }
        void SetUnionKind(int value) const { WriteField<int>("unionKind", value); }
        void* unionName() const { return ReadField<void*>("unionName"); }
        void SetUnionName(void* value) const { WriteField<void*>("unionName", value); }
        int subjectId() const { return ReadField<int>("subjectId"); }
        void SetSubjectId(int value) const { WriteField<int>("subjectId", value); }
        int otherId() const { return ReadField<int>("otherId"); }
        void SetOtherId(int value) const { WriteField<int>("otherId", value); }
        void* subjectName() const { return ReadField<void*>("subjectName"); }
        void SetSubjectName(void* value) const { WriteField<void*>("subjectName", value); }
        void* otherName() const { return ReadField<void*>("otherName"); }
        void SetOtherName(void* value) const { WriteField<void*>("otherName", value); }
        void* formerName() const { return ReadField<void*>("formerName"); }
        void SetFormerName(void* value) const { WriteField<void*>("formerName", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        int byId() const { return ReadField<int>("byId"); }
        void SetById(int value) const { WriteField<int>("byId", value); }
        void* byName() const { return ReadField<void*>("byName"); }
        void SetByName(void* value) const { WriteField<void*>("byName", value); }
    };
}
