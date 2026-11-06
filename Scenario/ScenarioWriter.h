#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioWriter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioWriter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioWriter") {}
    public:
        void* Capture(const char* name, const char* author, const char* notes, void* map, void* nations, void* internals, void* cities, void* industry, void* forts, void* military) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(author ? author : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(notes ? notes : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, managed_2, map, nations, internals, cities, industry, forts, military }; return CallStatic("Capture", __callArgs, 10); }
    };
}
