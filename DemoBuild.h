#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "CivitasCore.h"

namespace CivitasPoly
{
    class DemoBuild : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DemoBuild(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly", "DemoBuild") {}
    public:
        bool Lists(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Lists", __callArgs, 1); }
        void* Refusal(const char* name, int kind, void* dto) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &kind, dto }; return CallStatic("Refusal", __callArgs, 3); }
        void Seal(const char* path, void* bytes) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* __callArgs[] = { managed_0, bytes }; CallStatic("Seal", __callArgs, 2); }
        void DeleteSeal(const char* path) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("DeleteSeal", __callArgs, 1); }
        void* ScenarioStem() const { return ReadStaticField<void*>("ScenarioStem"); }
        void* ScenarioTitle() const { return ReadStaticField<void*>("ScenarioTitle"); }
        int StartYear() const { return ReadStaticField<int>("StartYear"); }
        int EndYear() const { return ReadStaticField<int>("EndYear"); }
        int EndTick() const { return ReadStaticField<int>("EndTick"); }
        void* EndDateText() const { return ReadStaticField<void*>("EndDateText"); }
        void* OnlyScenario() const { return ReadStaticField<void*>("OnlyScenario"); }
    };
}
