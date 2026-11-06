#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class NationCommand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationCommand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "NationCommand") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* armies() const { return ReadField<void*>("armies"); }
        void* groups() const { return ReadField<void*>("groups"); }
        void* generals() const { return ReadField<void*>("generals"); }
        int nextArmyOrdinal() const { return ReadField<int>("nextArmyOrdinal"); }
        void SetNextArmyOrdinal(int value) const { WriteField<int>("nextArmyOrdinal", value); }
        int nextGroupOrdinal() const { return ReadField<int>("nextGroupOrdinal"); }
        void SetNextGroupOrdinal(int value) const { WriteField<int>("nextGroupOrdinal", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
    };
}
