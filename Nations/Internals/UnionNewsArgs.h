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
        void kind(int value) const { WriteField<int>("kind", value); }
        int unionId() const { return ReadField<int>("unionId"); }
        void unionId(int value) const { WriteField<int>("unionId", value); }
        int unionKind() const { return ReadField<int>("unionKind"); }
        void unionKind(int value) const { WriteField<int>("unionKind", value); }
        void* unionName() const { return ReadField<void*>("unionName"); }
        void unionName(void* value) const { WriteField<void*>("unionName", value); }
        int subjectId() const { return ReadField<int>("subjectId"); }
        void subjectId(int value) const { WriteField<int>("subjectId", value); }
        int otherId() const { return ReadField<int>("otherId"); }
        void otherId(int value) const { WriteField<int>("otherId", value); }
        void* subjectName() const { return ReadField<void*>("subjectName"); }
        void subjectName(void* value) const { WriteField<void*>("subjectName", value); }
        void* otherName() const { return ReadField<void*>("otherName"); }
        void otherName(void* value) const { WriteField<void*>("otherName", value); }
        void* formerName() const { return ReadField<void*>("formerName"); }
        void formerName(void* value) const { WriteField<void*>("formerName", value); }
        int count() const { return ReadField<int>("count"); }
        void count(int value) const { WriteField<int>("count", value); }
        int byId() const { return ReadField<int>("byId"); }
        void byId(int value) const { WriteField<int>("byId", value); }
        void* byName() const { return ReadField<void*>("byName"); }
        void byName(void* value) const { WriteField<void*>("byName", value); }
    };
}
