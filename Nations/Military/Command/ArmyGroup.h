#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class ArmyGroup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyGroup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "ArmyGroup") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int marshalId() const { return ReadField<int>("marshalId"); }
        void SetMarshalId(int value) const { WriteField<int>("marshalId", value); }
        void* armyIds() const { return ReadField<void*>("armyIds"); }
    };
}
