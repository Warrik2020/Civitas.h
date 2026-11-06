#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerCommand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerCommand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerCommand") {}
    public:
        void* armies() const { return ReadField<void*>("armies"); }
        void SetArmies(void* value) const { WriteField<void*>("armies", value); }
        void* fronts() const { return ReadField<void*>("fronts"); }
        void SetFronts(void* value) const { WriteField<void*>("fronts", value); }
        int nextArmyId() const { return ReadField<int>("nextArmyId"); }
        void SetNextArmyId(int value) const { WriteField<int>("nextArmyId", value); }
        int nextFrontId() const { return ReadField<int>("nextFrontId"); }
        void SetNextFrontId(int value) const { WriteField<int>("nextFrontId", value); }
    };
}
