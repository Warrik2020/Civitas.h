#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class GoalSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "GoalSave") {}
    public:
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Apply(void* dto) const { void* args[] = { dto }; CallStatic("Apply", args, 1); }
        int Format() const { return ReadStaticField<int>("Format"); }
    };
}
