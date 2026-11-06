#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioLoader : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioLoader(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioLoader") {}
    public:
        void* ApplyAfterFounding(void* dto, void* nations, void* internals, void* cities, void* industry, void* forts, void* military, bool statesRerolled = false) const { void* args[] = { dto, nations, internals, cities, industry, forts, military, &statesRerolled }; return CallStatic("ApplyAfterFounding", args, 8); }
    };
}
