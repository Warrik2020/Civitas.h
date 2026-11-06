#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerGoalEarned : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerGoalEarned(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerGoalEarned") {}
    public:
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        void* counts() const { return ReadField<void*>("counts"); }
        void counts(void* value) const { WriteField<void*>("counts", value); }
    };
}
