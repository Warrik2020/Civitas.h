#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioFile : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioFile(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioFile") {}
    public:
        int Version() const { return ReadStaticField<int>("Version"); }
        int MinReadableVersion() const { return ReadStaticField<int>("MinReadableVersion"); }
        void* Extension() const { return ReadStaticField<void*>("Extension"); }
    };
}
