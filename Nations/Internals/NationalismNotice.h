#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NationalismNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationalismNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NationalismNotice") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int otherNationId() const { return ReadField<int>("otherNationId"); }
        void otherNationId(int value) const { WriteField<int>("otherNationId", value); }
        int peopleKey() const { return ReadField<int>("peopleKey"); }
        void peopleKey(int value) const { WriteField<int>("peopleKey", value); }
        void* formerName() const { return ReadField<void*>("formerName"); }
        void formerName(void* value) const { WriteField<void*>("formerName", value); }
    };
}
