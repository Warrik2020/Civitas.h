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
        void armies(void* value) const { WriteField<void*>("armies", value); }
        void* fronts() const { return ReadField<void*>("fronts"); }
        void fronts(void* value) const { WriteField<void*>("fronts", value); }
        int nextArmyId() const { return ReadField<int>("nextArmyId"); }
        void nextArmyId(int value) const { WriteField<int>("nextArmyId", value); }
        int nextFrontId() const { return ReadField<int>("nextFrontId"); }
        void nextFrontId(int value) const { WriteField<int>("nextFrontId", value); }
    };
}
