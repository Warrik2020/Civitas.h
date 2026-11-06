#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerGoal : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerGoal(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerGoal") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void format(int value) const { WriteField<int>("format", value); }
        void* goals() const { return ReadField<void*>("goals"); }
        void goals(void* value) const { WriteField<void*>("goals", value); }
        void* earned() const { return ReadField<void*>("earned"); }
        void earned(void* value) const { WriteField<void*>("earned", value); }
        void* history() const { return ReadField<void*>("history"); }
        void history(void* value) const { WriteField<void*>("history", value); }
    };
}
