#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class EthnogenesisNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EthnogenesisNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "EthnogenesisNotice") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void groupId(int value) const { WriteField<int>("groupId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* parents() const { return ReadField<void*>("parents"); }
        void parents(void* value) const { WriteField<void*>("parents", value); }
        void* land() const { return ReadField<void*>("land"); }
        void land(void* value) const { WriteField<void*>("land", value); }
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
    };
}
