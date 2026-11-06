#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerNationCommand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerNationCommand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerNationCommand") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int nextArmyOrdinal() const { return ReadField<int>("nextArmyOrdinal"); }
        void SetNextArmyOrdinal(int value) const { WriteField<int>("nextArmyOrdinal", value); }
        int nextGroupOrdinal() const { return ReadField<int>("nextGroupOrdinal"); }
        void SetNextGroupOrdinal(int value) const { WriteField<int>("nextGroupOrdinal", value); }
    };
}
